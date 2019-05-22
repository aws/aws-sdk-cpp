/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <aws/worklink/WorkLinkClient.h>
#include <aws/worklink/WorkLinkEndpoint.h>
#include <aws/worklink/WorkLinkErrorMarshaller.h>
#include <aws/worklink/model/AssociateDomainRequest.h>
#include <aws/worklink/model/AssociateWebsiteAuthorizationProviderRequest.h>
#include <aws/worklink/model/AssociateWebsiteCertificateAuthorityRequest.h>
#include <aws/worklink/model/CreateFleetRequest.h>
#include <aws/worklink/model/DeleteFleetRequest.h>
#include <aws/worklink/model/DescribeAuditStreamConfigurationRequest.h>
#include <aws/worklink/model/DescribeCompanyNetworkConfigurationRequest.h>
#include <aws/worklink/model/DescribeDeviceRequest.h>
#include <aws/worklink/model/DescribeDevicePolicyConfigurationRequest.h>
#include <aws/worklink/model/DescribeDomainRequest.h>
#include <aws/worklink/model/DescribeFleetMetadataRequest.h>
#include <aws/worklink/model/DescribeIdentityProviderConfigurationRequest.h>
#include <aws/worklink/model/DescribeWebsiteCertificateAuthorityRequest.h>
#include <aws/worklink/model/DisassociateDomainRequest.h>
#include <aws/worklink/model/DisassociateWebsiteAuthorizationProviderRequest.h>
#include <aws/worklink/model/DisassociateWebsiteCertificateAuthorityRequest.h>
#include <aws/worklink/model/ListDevicesRequest.h>
#include <aws/worklink/model/ListDomainsRequest.h>
#include <aws/worklink/model/ListFleetsRequest.h>
#include <aws/worklink/model/ListWebsiteAuthorizationProvidersRequest.h>
#include <aws/worklink/model/ListWebsiteCertificateAuthoritiesRequest.h>
#include <aws/worklink/model/RestoreDomainAccessRequest.h>
#include <aws/worklink/model/RevokeDomainAccessRequest.h>
#include <aws/worklink/model/SignOutUserRequest.h>
#include <aws/worklink/model/UpdateAuditStreamConfigurationRequest.h>
#include <aws/worklink/model/UpdateCompanyNetworkConfigurationRequest.h>
#include <aws/worklink/model/UpdateDevicePolicyConfigurationRequest.h>
#include <aws/worklink/model/UpdateDomainMetadataRequest.h>
#include <aws/worklink/model/UpdateFleetMetadataRequest.h>
#include <aws/worklink/model/UpdateIdentityProviderConfigurationRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::WorkLink;
using namespace Aws::WorkLink::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "worklink";
static const char* ALLOCATION_TAG = "WorkLinkClient";


WorkLinkClient::WorkLinkClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<WorkLinkErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

WorkLinkClient::WorkLinkClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<WorkLinkErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

WorkLinkClient::WorkLinkClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<WorkLinkErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

WorkLinkClient::~WorkLinkClient()
{
}

void WorkLinkClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + WorkLinkEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void WorkLinkClient::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0 || endpoint.compare(0, 8, "https://") == 0)
  {
      m_uri = endpoint;
  }
  else
  {
      m_uri = m_configScheme + "://" + endpoint;
  }
}

AssociateDomainOutcome WorkLinkClient::AssociateDomain(const AssociateDomainRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/associateDomain";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AssociateDomainOutcome(AssociateDomainResult(outcome.GetResult()));
  }
  else
  {
    return AssociateDomainOutcome(outcome.GetError());
  }
}

AssociateDomainOutcomeCallable WorkLinkClient::AssociateDomainCallable(const AssociateDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkLinkClient::AssociateDomainAsync(const AssociateDomainRequest& request, const AssociateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateDomainAsyncHelper( request, handler, context ); } );
}

void WorkLinkClient::AssociateDomainAsyncHelper(const AssociateDomainRequest& request, const AssociateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateDomain(request), context);
}

AssociateWebsiteAuthorizationProviderOutcome WorkLinkClient::AssociateWebsiteAuthorizationProvider(const AssociateWebsiteAuthorizationProviderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/associateWebsiteAuthorizationProvider";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AssociateWebsiteAuthorizationProviderOutcome(AssociateWebsiteAuthorizationProviderResult(outcome.GetResult()));
  }
  else
  {
    return AssociateWebsiteAuthorizationProviderOutcome(outcome.GetError());
  }
}

AssociateWebsiteAuthorizationProviderOutcomeCallable WorkLinkClient::AssociateWebsiteAuthorizationProviderCallable(const AssociateWebsiteAuthorizationProviderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateWebsiteAuthorizationProviderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateWebsiteAuthorizationProvider(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkLinkClient::AssociateWebsiteAuthorizationProviderAsync(const AssociateWebsiteAuthorizationProviderRequest& request, const AssociateWebsiteAuthorizationProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateWebsiteAuthorizationProviderAsyncHelper( request, handler, context ); } );
}

void WorkLinkClient::AssociateWebsiteAuthorizationProviderAsyncHelper(const AssociateWebsiteAuthorizationProviderRequest& request, const AssociateWebsiteAuthorizationProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateWebsiteAuthorizationProvider(request), context);
}

AssociateWebsiteCertificateAuthorityOutcome WorkLinkClient::AssociateWebsiteCertificateAuthority(const AssociateWebsiteCertificateAuthorityRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/associateWebsiteCertificateAuthority";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AssociateWebsiteCertificateAuthorityOutcome(AssociateWebsiteCertificateAuthorityResult(outcome.GetResult()));
  }
  else
  {
    return AssociateWebsiteCertificateAuthorityOutcome(outcome.GetError());
  }
}

AssociateWebsiteCertificateAuthorityOutcomeCallable WorkLinkClient::AssociateWebsiteCertificateAuthorityCallable(const AssociateWebsiteCertificateAuthorityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateWebsiteCertificateAuthorityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateWebsiteCertificateAuthority(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkLinkClient::AssociateWebsiteCertificateAuthorityAsync(const AssociateWebsiteCertificateAuthorityRequest& request, const AssociateWebsiteCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateWebsiteCertificateAuthorityAsyncHelper( request, handler, context ); } );
}

void WorkLinkClient::AssociateWebsiteCertificateAuthorityAsyncHelper(const AssociateWebsiteCertificateAuthorityRequest& request, const AssociateWebsiteCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateWebsiteCertificateAuthority(request), context);
}

CreateFleetOutcome WorkLinkClient::CreateFleet(const CreateFleetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/createFleet";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateFleetOutcome(CreateFleetResult(outcome.GetResult()));
  }
  else
  {
    return CreateFleetOutcome(outcome.GetError());
  }
}

CreateFleetOutcomeCallable WorkLinkClient::CreateFleetCallable(const CreateFleetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFleetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFleet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkLinkClient::CreateFleetAsync(const CreateFleetRequest& request, const CreateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateFleetAsyncHelper( request, handler, context ); } );
}

void WorkLinkClient::CreateFleetAsyncHelper(const CreateFleetRequest& request, const CreateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateFleet(request), context);
}

DeleteFleetOutcome WorkLinkClient::DeleteFleet(const DeleteFleetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/deleteFleet";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteFleetOutcome(DeleteFleetResult(outcome.GetResult()));
  }
  else
  {
    return DeleteFleetOutcome(outcome.GetError());
  }
}

DeleteFleetOutcomeCallable WorkLinkClient::DeleteFleetCallable(const DeleteFleetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFleetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFleet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkLinkClient::DeleteFleetAsync(const DeleteFleetRequest& request, const DeleteFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteFleetAsyncHelper( request, handler, context ); } );
}

void WorkLinkClient::DeleteFleetAsyncHelper(const DeleteFleetRequest& request, const DeleteFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteFleet(request), context);
}

DescribeAuditStreamConfigurationOutcome WorkLinkClient::DescribeAuditStreamConfiguration(const DescribeAuditStreamConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/describeAuditStreamConfiguration";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeAuditStreamConfigurationOutcome(DescribeAuditStreamConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return DescribeAuditStreamConfigurationOutcome(outcome.GetError());
  }
}

DescribeAuditStreamConfigurationOutcomeCallable WorkLinkClient::DescribeAuditStreamConfigurationCallable(const DescribeAuditStreamConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAuditStreamConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAuditStreamConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkLinkClient::DescribeAuditStreamConfigurationAsync(const DescribeAuditStreamConfigurationRequest& request, const DescribeAuditStreamConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeAuditStreamConfigurationAsyncHelper( request, handler, context ); } );
}

void WorkLinkClient::DescribeAuditStreamConfigurationAsyncHelper(const DescribeAuditStreamConfigurationRequest& request, const DescribeAuditStreamConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAuditStreamConfiguration(request), context);
}

DescribeCompanyNetworkConfigurationOutcome WorkLinkClient::DescribeCompanyNetworkConfiguration(const DescribeCompanyNetworkConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/describeCompanyNetworkConfiguration";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeCompanyNetworkConfigurationOutcome(DescribeCompanyNetworkConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return DescribeCompanyNetworkConfigurationOutcome(outcome.GetError());
  }
}

DescribeCompanyNetworkConfigurationOutcomeCallable WorkLinkClient::DescribeCompanyNetworkConfigurationCallable(const DescribeCompanyNetworkConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCompanyNetworkConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCompanyNetworkConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkLinkClient::DescribeCompanyNetworkConfigurationAsync(const DescribeCompanyNetworkConfigurationRequest& request, const DescribeCompanyNetworkConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeCompanyNetworkConfigurationAsyncHelper( request, handler, context ); } );
}

void WorkLinkClient::DescribeCompanyNetworkConfigurationAsyncHelper(const DescribeCompanyNetworkConfigurationRequest& request, const DescribeCompanyNetworkConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeCompanyNetworkConfiguration(request), context);
}

DescribeDeviceOutcome WorkLinkClient::DescribeDevice(const DescribeDeviceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/describeDevice";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeDeviceOutcome(DescribeDeviceResult(outcome.GetResult()));
  }
  else
  {
    return DescribeDeviceOutcome(outcome.GetError());
  }
}

DescribeDeviceOutcomeCallable WorkLinkClient::DescribeDeviceCallable(const DescribeDeviceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDeviceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDevice(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkLinkClient::DescribeDeviceAsync(const DescribeDeviceRequest& request, const DescribeDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDeviceAsyncHelper( request, handler, context ); } );
}

void WorkLinkClient::DescribeDeviceAsyncHelper(const DescribeDeviceRequest& request, const DescribeDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDevice(request), context);
}

DescribeDevicePolicyConfigurationOutcome WorkLinkClient::DescribeDevicePolicyConfiguration(const DescribeDevicePolicyConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/describeDevicePolicyConfiguration";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeDevicePolicyConfigurationOutcome(DescribeDevicePolicyConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return DescribeDevicePolicyConfigurationOutcome(outcome.GetError());
  }
}

DescribeDevicePolicyConfigurationOutcomeCallable WorkLinkClient::DescribeDevicePolicyConfigurationCallable(const DescribeDevicePolicyConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDevicePolicyConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDevicePolicyConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkLinkClient::DescribeDevicePolicyConfigurationAsync(const DescribeDevicePolicyConfigurationRequest& request, const DescribeDevicePolicyConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDevicePolicyConfigurationAsyncHelper( request, handler, context ); } );
}

void WorkLinkClient::DescribeDevicePolicyConfigurationAsyncHelper(const DescribeDevicePolicyConfigurationRequest& request, const DescribeDevicePolicyConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDevicePolicyConfiguration(request), context);
}

DescribeDomainOutcome WorkLinkClient::DescribeDomain(const DescribeDomainRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/describeDomain";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeDomainOutcome(DescribeDomainResult(outcome.GetResult()));
  }
  else
  {
    return DescribeDomainOutcome(outcome.GetError());
  }
}

DescribeDomainOutcomeCallable WorkLinkClient::DescribeDomainCallable(const DescribeDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkLinkClient::DescribeDomainAsync(const DescribeDomainRequest& request, const DescribeDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDomainAsyncHelper( request, handler, context ); } );
}

void WorkLinkClient::DescribeDomainAsyncHelper(const DescribeDomainRequest& request, const DescribeDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDomain(request), context);
}

DescribeFleetMetadataOutcome WorkLinkClient::DescribeFleetMetadata(const DescribeFleetMetadataRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/describeFleetMetadata";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeFleetMetadataOutcome(DescribeFleetMetadataResult(outcome.GetResult()));
  }
  else
  {
    return DescribeFleetMetadataOutcome(outcome.GetError());
  }
}

DescribeFleetMetadataOutcomeCallable WorkLinkClient::DescribeFleetMetadataCallable(const DescribeFleetMetadataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFleetMetadataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFleetMetadata(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkLinkClient::DescribeFleetMetadataAsync(const DescribeFleetMetadataRequest& request, const DescribeFleetMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeFleetMetadataAsyncHelper( request, handler, context ); } );
}

void WorkLinkClient::DescribeFleetMetadataAsyncHelper(const DescribeFleetMetadataRequest& request, const DescribeFleetMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeFleetMetadata(request), context);
}

DescribeIdentityProviderConfigurationOutcome WorkLinkClient::DescribeIdentityProviderConfiguration(const DescribeIdentityProviderConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/describeIdentityProviderConfiguration";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeIdentityProviderConfigurationOutcome(DescribeIdentityProviderConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return DescribeIdentityProviderConfigurationOutcome(outcome.GetError());
  }
}

DescribeIdentityProviderConfigurationOutcomeCallable WorkLinkClient::DescribeIdentityProviderConfigurationCallable(const DescribeIdentityProviderConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeIdentityProviderConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeIdentityProviderConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkLinkClient::DescribeIdentityProviderConfigurationAsync(const DescribeIdentityProviderConfigurationRequest& request, const DescribeIdentityProviderConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeIdentityProviderConfigurationAsyncHelper( request, handler, context ); } );
}

void WorkLinkClient::DescribeIdentityProviderConfigurationAsyncHelper(const DescribeIdentityProviderConfigurationRequest& request, const DescribeIdentityProviderConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeIdentityProviderConfiguration(request), context);
}

DescribeWebsiteCertificateAuthorityOutcome WorkLinkClient::DescribeWebsiteCertificateAuthority(const DescribeWebsiteCertificateAuthorityRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/describeWebsiteCertificateAuthority";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeWebsiteCertificateAuthorityOutcome(DescribeWebsiteCertificateAuthorityResult(outcome.GetResult()));
  }
  else
  {
    return DescribeWebsiteCertificateAuthorityOutcome(outcome.GetError());
  }
}

DescribeWebsiteCertificateAuthorityOutcomeCallable WorkLinkClient::DescribeWebsiteCertificateAuthorityCallable(const DescribeWebsiteCertificateAuthorityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeWebsiteCertificateAuthorityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeWebsiteCertificateAuthority(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkLinkClient::DescribeWebsiteCertificateAuthorityAsync(const DescribeWebsiteCertificateAuthorityRequest& request, const DescribeWebsiteCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeWebsiteCertificateAuthorityAsyncHelper( request, handler, context ); } );
}

void WorkLinkClient::DescribeWebsiteCertificateAuthorityAsyncHelper(const DescribeWebsiteCertificateAuthorityRequest& request, const DescribeWebsiteCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeWebsiteCertificateAuthority(request), context);
}

DisassociateDomainOutcome WorkLinkClient::DisassociateDomain(const DisassociateDomainRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/disassociateDomain";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DisassociateDomainOutcome(DisassociateDomainResult(outcome.GetResult()));
  }
  else
  {
    return DisassociateDomainOutcome(outcome.GetError());
  }
}

DisassociateDomainOutcomeCallable WorkLinkClient::DisassociateDomainCallable(const DisassociateDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkLinkClient::DisassociateDomainAsync(const DisassociateDomainRequest& request, const DisassociateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateDomainAsyncHelper( request, handler, context ); } );
}

void WorkLinkClient::DisassociateDomainAsyncHelper(const DisassociateDomainRequest& request, const DisassociateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateDomain(request), context);
}

DisassociateWebsiteAuthorizationProviderOutcome WorkLinkClient::DisassociateWebsiteAuthorizationProvider(const DisassociateWebsiteAuthorizationProviderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/disassociateWebsiteAuthorizationProvider";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DisassociateWebsiteAuthorizationProviderOutcome(DisassociateWebsiteAuthorizationProviderResult(outcome.GetResult()));
  }
  else
  {
    return DisassociateWebsiteAuthorizationProviderOutcome(outcome.GetError());
  }
}

DisassociateWebsiteAuthorizationProviderOutcomeCallable WorkLinkClient::DisassociateWebsiteAuthorizationProviderCallable(const DisassociateWebsiteAuthorizationProviderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateWebsiteAuthorizationProviderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateWebsiteAuthorizationProvider(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkLinkClient::DisassociateWebsiteAuthorizationProviderAsync(const DisassociateWebsiteAuthorizationProviderRequest& request, const DisassociateWebsiteAuthorizationProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateWebsiteAuthorizationProviderAsyncHelper( request, handler, context ); } );
}

void WorkLinkClient::DisassociateWebsiteAuthorizationProviderAsyncHelper(const DisassociateWebsiteAuthorizationProviderRequest& request, const DisassociateWebsiteAuthorizationProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateWebsiteAuthorizationProvider(request), context);
}

DisassociateWebsiteCertificateAuthorityOutcome WorkLinkClient::DisassociateWebsiteCertificateAuthority(const DisassociateWebsiteCertificateAuthorityRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/disassociateWebsiteCertificateAuthority";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DisassociateWebsiteCertificateAuthorityOutcome(DisassociateWebsiteCertificateAuthorityResult(outcome.GetResult()));
  }
  else
  {
    return DisassociateWebsiteCertificateAuthorityOutcome(outcome.GetError());
  }
}

DisassociateWebsiteCertificateAuthorityOutcomeCallable WorkLinkClient::DisassociateWebsiteCertificateAuthorityCallable(const DisassociateWebsiteCertificateAuthorityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateWebsiteCertificateAuthorityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateWebsiteCertificateAuthority(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkLinkClient::DisassociateWebsiteCertificateAuthorityAsync(const DisassociateWebsiteCertificateAuthorityRequest& request, const DisassociateWebsiteCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateWebsiteCertificateAuthorityAsyncHelper( request, handler, context ); } );
}

void WorkLinkClient::DisassociateWebsiteCertificateAuthorityAsyncHelper(const DisassociateWebsiteCertificateAuthorityRequest& request, const DisassociateWebsiteCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateWebsiteCertificateAuthority(request), context);
}

ListDevicesOutcome WorkLinkClient::ListDevices(const ListDevicesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/listDevices";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListDevicesOutcome(ListDevicesResult(outcome.GetResult()));
  }
  else
  {
    return ListDevicesOutcome(outcome.GetError());
  }
}

ListDevicesOutcomeCallable WorkLinkClient::ListDevicesCallable(const ListDevicesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDevicesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDevices(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkLinkClient::ListDevicesAsync(const ListDevicesRequest& request, const ListDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDevicesAsyncHelper( request, handler, context ); } );
}

void WorkLinkClient::ListDevicesAsyncHelper(const ListDevicesRequest& request, const ListDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDevices(request), context);
}

ListDomainsOutcome WorkLinkClient::ListDomains(const ListDomainsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/listDomains";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListDomainsOutcome(ListDomainsResult(outcome.GetResult()));
  }
  else
  {
    return ListDomainsOutcome(outcome.GetError());
  }
}

ListDomainsOutcomeCallable WorkLinkClient::ListDomainsCallable(const ListDomainsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDomainsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDomains(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkLinkClient::ListDomainsAsync(const ListDomainsRequest& request, const ListDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDomainsAsyncHelper( request, handler, context ); } );
}

void WorkLinkClient::ListDomainsAsyncHelper(const ListDomainsRequest& request, const ListDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDomains(request), context);
}

ListFleetsOutcome WorkLinkClient::ListFleets(const ListFleetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/listFleets";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListFleetsOutcome(ListFleetsResult(outcome.GetResult()));
  }
  else
  {
    return ListFleetsOutcome(outcome.GetError());
  }
}

ListFleetsOutcomeCallable WorkLinkClient::ListFleetsCallable(const ListFleetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFleetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFleets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkLinkClient::ListFleetsAsync(const ListFleetsRequest& request, const ListFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListFleetsAsyncHelper( request, handler, context ); } );
}

void WorkLinkClient::ListFleetsAsyncHelper(const ListFleetsRequest& request, const ListFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListFleets(request), context);
}

ListWebsiteAuthorizationProvidersOutcome WorkLinkClient::ListWebsiteAuthorizationProviders(const ListWebsiteAuthorizationProvidersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/listWebsiteAuthorizationProviders";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListWebsiteAuthorizationProvidersOutcome(ListWebsiteAuthorizationProvidersResult(outcome.GetResult()));
  }
  else
  {
    return ListWebsiteAuthorizationProvidersOutcome(outcome.GetError());
  }
}

ListWebsiteAuthorizationProvidersOutcomeCallable WorkLinkClient::ListWebsiteAuthorizationProvidersCallable(const ListWebsiteAuthorizationProvidersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListWebsiteAuthorizationProvidersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListWebsiteAuthorizationProviders(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkLinkClient::ListWebsiteAuthorizationProvidersAsync(const ListWebsiteAuthorizationProvidersRequest& request, const ListWebsiteAuthorizationProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListWebsiteAuthorizationProvidersAsyncHelper( request, handler, context ); } );
}

void WorkLinkClient::ListWebsiteAuthorizationProvidersAsyncHelper(const ListWebsiteAuthorizationProvidersRequest& request, const ListWebsiteAuthorizationProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListWebsiteAuthorizationProviders(request), context);
}

ListWebsiteCertificateAuthoritiesOutcome WorkLinkClient::ListWebsiteCertificateAuthorities(const ListWebsiteCertificateAuthoritiesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/listWebsiteCertificateAuthorities";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListWebsiteCertificateAuthoritiesOutcome(ListWebsiteCertificateAuthoritiesResult(outcome.GetResult()));
  }
  else
  {
    return ListWebsiteCertificateAuthoritiesOutcome(outcome.GetError());
  }
}

ListWebsiteCertificateAuthoritiesOutcomeCallable WorkLinkClient::ListWebsiteCertificateAuthoritiesCallable(const ListWebsiteCertificateAuthoritiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListWebsiteCertificateAuthoritiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListWebsiteCertificateAuthorities(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkLinkClient::ListWebsiteCertificateAuthoritiesAsync(const ListWebsiteCertificateAuthoritiesRequest& request, const ListWebsiteCertificateAuthoritiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListWebsiteCertificateAuthoritiesAsyncHelper( request, handler, context ); } );
}

void WorkLinkClient::ListWebsiteCertificateAuthoritiesAsyncHelper(const ListWebsiteCertificateAuthoritiesRequest& request, const ListWebsiteCertificateAuthoritiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListWebsiteCertificateAuthorities(request), context);
}

RestoreDomainAccessOutcome WorkLinkClient::RestoreDomainAccess(const RestoreDomainAccessRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/restoreDomainAccess";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RestoreDomainAccessOutcome(RestoreDomainAccessResult(outcome.GetResult()));
  }
  else
  {
    return RestoreDomainAccessOutcome(outcome.GetError());
  }
}

RestoreDomainAccessOutcomeCallable WorkLinkClient::RestoreDomainAccessCallable(const RestoreDomainAccessRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RestoreDomainAccessOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RestoreDomainAccess(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkLinkClient::RestoreDomainAccessAsync(const RestoreDomainAccessRequest& request, const RestoreDomainAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RestoreDomainAccessAsyncHelper( request, handler, context ); } );
}

void WorkLinkClient::RestoreDomainAccessAsyncHelper(const RestoreDomainAccessRequest& request, const RestoreDomainAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RestoreDomainAccess(request), context);
}

RevokeDomainAccessOutcome WorkLinkClient::RevokeDomainAccess(const RevokeDomainAccessRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/revokeDomainAccess";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RevokeDomainAccessOutcome(RevokeDomainAccessResult(outcome.GetResult()));
  }
  else
  {
    return RevokeDomainAccessOutcome(outcome.GetError());
  }
}

RevokeDomainAccessOutcomeCallable WorkLinkClient::RevokeDomainAccessCallable(const RevokeDomainAccessRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RevokeDomainAccessOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RevokeDomainAccess(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkLinkClient::RevokeDomainAccessAsync(const RevokeDomainAccessRequest& request, const RevokeDomainAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RevokeDomainAccessAsyncHelper( request, handler, context ); } );
}

void WorkLinkClient::RevokeDomainAccessAsyncHelper(const RevokeDomainAccessRequest& request, const RevokeDomainAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RevokeDomainAccess(request), context);
}

SignOutUserOutcome WorkLinkClient::SignOutUser(const SignOutUserRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/signOutUser";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SignOutUserOutcome(SignOutUserResult(outcome.GetResult()));
  }
  else
  {
    return SignOutUserOutcome(outcome.GetError());
  }
}

SignOutUserOutcomeCallable WorkLinkClient::SignOutUserCallable(const SignOutUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SignOutUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SignOutUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkLinkClient::SignOutUserAsync(const SignOutUserRequest& request, const SignOutUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SignOutUserAsyncHelper( request, handler, context ); } );
}

void WorkLinkClient::SignOutUserAsyncHelper(const SignOutUserRequest& request, const SignOutUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SignOutUser(request), context);
}

UpdateAuditStreamConfigurationOutcome WorkLinkClient::UpdateAuditStreamConfiguration(const UpdateAuditStreamConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/updateAuditStreamConfiguration";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateAuditStreamConfigurationOutcome(UpdateAuditStreamConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return UpdateAuditStreamConfigurationOutcome(outcome.GetError());
  }
}

UpdateAuditStreamConfigurationOutcomeCallable WorkLinkClient::UpdateAuditStreamConfigurationCallable(const UpdateAuditStreamConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAuditStreamConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAuditStreamConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkLinkClient::UpdateAuditStreamConfigurationAsync(const UpdateAuditStreamConfigurationRequest& request, const UpdateAuditStreamConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateAuditStreamConfigurationAsyncHelper( request, handler, context ); } );
}

void WorkLinkClient::UpdateAuditStreamConfigurationAsyncHelper(const UpdateAuditStreamConfigurationRequest& request, const UpdateAuditStreamConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateAuditStreamConfiguration(request), context);
}

UpdateCompanyNetworkConfigurationOutcome WorkLinkClient::UpdateCompanyNetworkConfiguration(const UpdateCompanyNetworkConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/updateCompanyNetworkConfiguration";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateCompanyNetworkConfigurationOutcome(UpdateCompanyNetworkConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return UpdateCompanyNetworkConfigurationOutcome(outcome.GetError());
  }
}

UpdateCompanyNetworkConfigurationOutcomeCallable WorkLinkClient::UpdateCompanyNetworkConfigurationCallable(const UpdateCompanyNetworkConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateCompanyNetworkConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateCompanyNetworkConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkLinkClient::UpdateCompanyNetworkConfigurationAsync(const UpdateCompanyNetworkConfigurationRequest& request, const UpdateCompanyNetworkConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateCompanyNetworkConfigurationAsyncHelper( request, handler, context ); } );
}

void WorkLinkClient::UpdateCompanyNetworkConfigurationAsyncHelper(const UpdateCompanyNetworkConfigurationRequest& request, const UpdateCompanyNetworkConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateCompanyNetworkConfiguration(request), context);
}

UpdateDevicePolicyConfigurationOutcome WorkLinkClient::UpdateDevicePolicyConfiguration(const UpdateDevicePolicyConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/updateDevicePolicyConfiguration";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateDevicePolicyConfigurationOutcome(UpdateDevicePolicyConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return UpdateDevicePolicyConfigurationOutcome(outcome.GetError());
  }
}

UpdateDevicePolicyConfigurationOutcomeCallable WorkLinkClient::UpdateDevicePolicyConfigurationCallable(const UpdateDevicePolicyConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDevicePolicyConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDevicePolicyConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkLinkClient::UpdateDevicePolicyConfigurationAsync(const UpdateDevicePolicyConfigurationRequest& request, const UpdateDevicePolicyConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateDevicePolicyConfigurationAsyncHelper( request, handler, context ); } );
}

void WorkLinkClient::UpdateDevicePolicyConfigurationAsyncHelper(const UpdateDevicePolicyConfigurationRequest& request, const UpdateDevicePolicyConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateDevicePolicyConfiguration(request), context);
}

UpdateDomainMetadataOutcome WorkLinkClient::UpdateDomainMetadata(const UpdateDomainMetadataRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/updateDomainMetadata";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateDomainMetadataOutcome(UpdateDomainMetadataResult(outcome.GetResult()));
  }
  else
  {
    return UpdateDomainMetadataOutcome(outcome.GetError());
  }
}

UpdateDomainMetadataOutcomeCallable WorkLinkClient::UpdateDomainMetadataCallable(const UpdateDomainMetadataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDomainMetadataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDomainMetadata(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkLinkClient::UpdateDomainMetadataAsync(const UpdateDomainMetadataRequest& request, const UpdateDomainMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateDomainMetadataAsyncHelper( request, handler, context ); } );
}

void WorkLinkClient::UpdateDomainMetadataAsyncHelper(const UpdateDomainMetadataRequest& request, const UpdateDomainMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateDomainMetadata(request), context);
}

UpdateFleetMetadataOutcome WorkLinkClient::UpdateFleetMetadata(const UpdateFleetMetadataRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/UpdateFleetMetadata";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateFleetMetadataOutcome(UpdateFleetMetadataResult(outcome.GetResult()));
  }
  else
  {
    return UpdateFleetMetadataOutcome(outcome.GetError());
  }
}

UpdateFleetMetadataOutcomeCallable WorkLinkClient::UpdateFleetMetadataCallable(const UpdateFleetMetadataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFleetMetadataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFleetMetadata(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkLinkClient::UpdateFleetMetadataAsync(const UpdateFleetMetadataRequest& request, const UpdateFleetMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateFleetMetadataAsyncHelper( request, handler, context ); } );
}

void WorkLinkClient::UpdateFleetMetadataAsyncHelper(const UpdateFleetMetadataRequest& request, const UpdateFleetMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateFleetMetadata(request), context);
}

UpdateIdentityProviderConfigurationOutcome WorkLinkClient::UpdateIdentityProviderConfiguration(const UpdateIdentityProviderConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/updateIdentityProviderConfiguration";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateIdentityProviderConfigurationOutcome(UpdateIdentityProviderConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return UpdateIdentityProviderConfigurationOutcome(outcome.GetError());
  }
}

UpdateIdentityProviderConfigurationOutcomeCallable WorkLinkClient::UpdateIdentityProviderConfigurationCallable(const UpdateIdentityProviderConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateIdentityProviderConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateIdentityProviderConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkLinkClient::UpdateIdentityProviderConfigurationAsync(const UpdateIdentityProviderConfigurationRequest& request, const UpdateIdentityProviderConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateIdentityProviderConfigurationAsyncHelper( request, handler, context ); } );
}

void WorkLinkClient::UpdateIdentityProviderConfigurationAsyncHelper(const UpdateIdentityProviderConfigurationRequest& request, const UpdateIdentityProviderConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateIdentityProviderConfiguration(request), context);
}

