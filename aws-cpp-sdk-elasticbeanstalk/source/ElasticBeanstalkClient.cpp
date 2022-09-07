/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <aws/elasticbeanstalk/ElasticBeanstalkClient.h>
#include <aws/elasticbeanstalk/ElasticBeanstalkEndpoint.h>
#include <aws/elasticbeanstalk/ElasticBeanstalkErrorMarshaller.h>
#include <aws/elasticbeanstalk/model/AbortEnvironmentUpdateRequest.h>
#include <aws/elasticbeanstalk/model/ApplyEnvironmentManagedActionRequest.h>
#include <aws/elasticbeanstalk/model/AssociateEnvironmentOperationsRoleRequest.h>
#include <aws/elasticbeanstalk/model/CheckDNSAvailabilityRequest.h>
#include <aws/elasticbeanstalk/model/ComposeEnvironmentsRequest.h>
#include <aws/elasticbeanstalk/model/CreateApplicationRequest.h>
#include <aws/elasticbeanstalk/model/CreateApplicationVersionRequest.h>
#include <aws/elasticbeanstalk/model/CreateConfigurationTemplateRequest.h>
#include <aws/elasticbeanstalk/model/CreateEnvironmentRequest.h>
#include <aws/elasticbeanstalk/model/CreatePlatformVersionRequest.h>
#include <aws/elasticbeanstalk/model/CreateStorageLocationRequest.h>
#include <aws/elasticbeanstalk/model/DeleteApplicationRequest.h>
#include <aws/elasticbeanstalk/model/DeleteApplicationVersionRequest.h>
#include <aws/elasticbeanstalk/model/DeleteConfigurationTemplateRequest.h>
#include <aws/elasticbeanstalk/model/DeleteEnvironmentConfigurationRequest.h>
#include <aws/elasticbeanstalk/model/DeletePlatformVersionRequest.h>
#include <aws/elasticbeanstalk/model/DescribeAccountAttributesRequest.h>
#include <aws/elasticbeanstalk/model/DescribeApplicationVersionsRequest.h>
#include <aws/elasticbeanstalk/model/DescribeApplicationsRequest.h>
#include <aws/elasticbeanstalk/model/DescribeConfigurationOptionsRequest.h>
#include <aws/elasticbeanstalk/model/DescribeConfigurationSettingsRequest.h>
#include <aws/elasticbeanstalk/model/DescribeEnvironmentHealthRequest.h>
#include <aws/elasticbeanstalk/model/DescribeEnvironmentManagedActionHistoryRequest.h>
#include <aws/elasticbeanstalk/model/DescribeEnvironmentManagedActionsRequest.h>
#include <aws/elasticbeanstalk/model/DescribeEnvironmentResourcesRequest.h>
#include <aws/elasticbeanstalk/model/DescribeEnvironmentsRequest.h>
#include <aws/elasticbeanstalk/model/DescribeEventsRequest.h>
#include <aws/elasticbeanstalk/model/DescribeInstancesHealthRequest.h>
#include <aws/elasticbeanstalk/model/DescribePlatformVersionRequest.h>
#include <aws/elasticbeanstalk/model/DisassociateEnvironmentOperationsRoleRequest.h>
#include <aws/elasticbeanstalk/model/ListAvailableSolutionStacksRequest.h>
#include <aws/elasticbeanstalk/model/ListPlatformBranchesRequest.h>
#include <aws/elasticbeanstalk/model/ListPlatformVersionsRequest.h>
#include <aws/elasticbeanstalk/model/ListTagsForResourceRequest.h>
#include <aws/elasticbeanstalk/model/RebuildEnvironmentRequest.h>
#include <aws/elasticbeanstalk/model/RequestEnvironmentInfoRequest.h>
#include <aws/elasticbeanstalk/model/RestartAppServerRequest.h>
#include <aws/elasticbeanstalk/model/RetrieveEnvironmentInfoRequest.h>
#include <aws/elasticbeanstalk/model/SwapEnvironmentCNAMEsRequest.h>
#include <aws/elasticbeanstalk/model/TerminateEnvironmentRequest.h>
#include <aws/elasticbeanstalk/model/UpdateApplicationRequest.h>
#include <aws/elasticbeanstalk/model/UpdateApplicationResourceLifecycleRequest.h>
#include <aws/elasticbeanstalk/model/UpdateApplicationVersionRequest.h>
#include <aws/elasticbeanstalk/model/UpdateConfigurationTemplateRequest.h>
#include <aws/elasticbeanstalk/model/UpdateEnvironmentRequest.h>
#include <aws/elasticbeanstalk/model/UpdateTagsForResourceRequest.h>
#include <aws/elasticbeanstalk/model/ValidateConfigurationSettingsRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ElasticBeanstalk;
using namespace Aws::ElasticBeanstalk::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Xml;


static const char* SERVICE_NAME = "elasticbeanstalk";
static const char* ALLOCATION_TAG = "ElasticBeanstalkClient";

ElasticBeanstalkClient::ElasticBeanstalkClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ElasticBeanstalkErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ElasticBeanstalkClient::ElasticBeanstalkClient(const AWSCredentials& credentials,
                                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ElasticBeanstalkErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ElasticBeanstalkClient::ElasticBeanstalkClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ElasticBeanstalkErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ElasticBeanstalkClient::~ElasticBeanstalkClient()
{
}

void ElasticBeanstalkClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Elastic Beanstalk");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + ElasticBeanstalkEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void ElasticBeanstalkClient::OverrideEndpoint(const Aws::String& endpoint)
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

Aws::String ElasticBeanstalkClient::ConvertRequestToPresignedUrl(const AmazonSerializableWebServiceRequest& requestToConvert, const char* region) const
{
  Aws::StringStream ss;
  ss << "https://" << ElasticBeanstalkEndpoint::ForRegion(region);
  ss << "?" << requestToConvert.SerializePayload();

  URI uri(ss.str());
  return GeneratePresignedUrl(uri, Aws::Http::HttpMethod::HTTP_GET, region, 3600);
}

AbortEnvironmentUpdateOutcome ElasticBeanstalkClient::AbortEnvironmentUpdate(const AbortEnvironmentUpdateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AbortEnvironmentUpdateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

AbortEnvironmentUpdateOutcomeCallable ElasticBeanstalkClient::AbortEnvironmentUpdateCallable(const AbortEnvironmentUpdateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AbortEnvironmentUpdateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AbortEnvironmentUpdate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClientAbortEnvironmentUpdateAsyncHelper(ElasticBeanstalkClient const * const clientThis, const AbortEnvironmentUpdateRequest& request, const AbortEnvironmentUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AbortEnvironmentUpdate(request), context);
}

void ElasticBeanstalkClient::AbortEnvironmentUpdateAsync(const AbortEnvironmentUpdateRequest& request, const AbortEnvironmentUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticBeanstalkClientAbortEnvironmentUpdateAsyncHelper( this, request, handler, context ); } );
}

ApplyEnvironmentManagedActionOutcome ElasticBeanstalkClient::ApplyEnvironmentManagedAction(const ApplyEnvironmentManagedActionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ApplyEnvironmentManagedActionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ApplyEnvironmentManagedActionOutcomeCallable ElasticBeanstalkClient::ApplyEnvironmentManagedActionCallable(const ApplyEnvironmentManagedActionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ApplyEnvironmentManagedActionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ApplyEnvironmentManagedAction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClientApplyEnvironmentManagedActionAsyncHelper(ElasticBeanstalkClient const * const clientThis, const ApplyEnvironmentManagedActionRequest& request, const ApplyEnvironmentManagedActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ApplyEnvironmentManagedAction(request), context);
}

void ElasticBeanstalkClient::ApplyEnvironmentManagedActionAsync(const ApplyEnvironmentManagedActionRequest& request, const ApplyEnvironmentManagedActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticBeanstalkClientApplyEnvironmentManagedActionAsyncHelper( this, request, handler, context ); } );
}

AssociateEnvironmentOperationsRoleOutcome ElasticBeanstalkClient::AssociateEnvironmentOperationsRole(const AssociateEnvironmentOperationsRoleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AssociateEnvironmentOperationsRoleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

AssociateEnvironmentOperationsRoleOutcomeCallable ElasticBeanstalkClient::AssociateEnvironmentOperationsRoleCallable(const AssociateEnvironmentOperationsRoleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateEnvironmentOperationsRoleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateEnvironmentOperationsRole(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClientAssociateEnvironmentOperationsRoleAsyncHelper(ElasticBeanstalkClient const * const clientThis, const AssociateEnvironmentOperationsRoleRequest& request, const AssociateEnvironmentOperationsRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateEnvironmentOperationsRole(request), context);
}

void ElasticBeanstalkClient::AssociateEnvironmentOperationsRoleAsync(const AssociateEnvironmentOperationsRoleRequest& request, const AssociateEnvironmentOperationsRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticBeanstalkClientAssociateEnvironmentOperationsRoleAsyncHelper( this, request, handler, context ); } );
}

CheckDNSAvailabilityOutcome ElasticBeanstalkClient::CheckDNSAvailability(const CheckDNSAvailabilityRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CheckDNSAvailabilityOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CheckDNSAvailabilityOutcomeCallable ElasticBeanstalkClient::CheckDNSAvailabilityCallable(const CheckDNSAvailabilityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CheckDNSAvailabilityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CheckDNSAvailability(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClientCheckDNSAvailabilityAsyncHelper(ElasticBeanstalkClient const * const clientThis, const CheckDNSAvailabilityRequest& request, const CheckDNSAvailabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CheckDNSAvailability(request), context);
}

void ElasticBeanstalkClient::CheckDNSAvailabilityAsync(const CheckDNSAvailabilityRequest& request, const CheckDNSAvailabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticBeanstalkClientCheckDNSAvailabilityAsyncHelper( this, request, handler, context ); } );
}

ComposeEnvironmentsOutcome ElasticBeanstalkClient::ComposeEnvironments(const ComposeEnvironmentsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ComposeEnvironmentsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ComposeEnvironmentsOutcomeCallable ElasticBeanstalkClient::ComposeEnvironmentsCallable(const ComposeEnvironmentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ComposeEnvironmentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ComposeEnvironments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClientComposeEnvironmentsAsyncHelper(ElasticBeanstalkClient const * const clientThis, const ComposeEnvironmentsRequest& request, const ComposeEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ComposeEnvironments(request), context);
}

void ElasticBeanstalkClient::ComposeEnvironmentsAsync(const ComposeEnvironmentsRequest& request, const ComposeEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticBeanstalkClientComposeEnvironmentsAsyncHelper( this, request, handler, context ); } );
}

CreateApplicationOutcome ElasticBeanstalkClient::CreateApplication(const CreateApplicationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateApplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateApplicationOutcomeCallable ElasticBeanstalkClient::CreateApplicationCallable(const CreateApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClientCreateApplicationAsyncHelper(ElasticBeanstalkClient const * const clientThis, const CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateApplication(request), context);
}

void ElasticBeanstalkClient::CreateApplicationAsync(const CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticBeanstalkClientCreateApplicationAsyncHelper( this, request, handler, context ); } );
}

CreateApplicationVersionOutcome ElasticBeanstalkClient::CreateApplicationVersion(const CreateApplicationVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateApplicationVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateApplicationVersionOutcomeCallable ElasticBeanstalkClient::CreateApplicationVersionCallable(const CreateApplicationVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateApplicationVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateApplicationVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClientCreateApplicationVersionAsyncHelper(ElasticBeanstalkClient const * const clientThis, const CreateApplicationVersionRequest& request, const CreateApplicationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateApplicationVersion(request), context);
}

void ElasticBeanstalkClient::CreateApplicationVersionAsync(const CreateApplicationVersionRequest& request, const CreateApplicationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticBeanstalkClientCreateApplicationVersionAsyncHelper( this, request, handler, context ); } );
}

CreateConfigurationTemplateOutcome ElasticBeanstalkClient::CreateConfigurationTemplate(const CreateConfigurationTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateConfigurationTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateConfigurationTemplateOutcomeCallable ElasticBeanstalkClient::CreateConfigurationTemplateCallable(const CreateConfigurationTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateConfigurationTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateConfigurationTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClientCreateConfigurationTemplateAsyncHelper(ElasticBeanstalkClient const * const clientThis, const CreateConfigurationTemplateRequest& request, const CreateConfigurationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateConfigurationTemplate(request), context);
}

void ElasticBeanstalkClient::CreateConfigurationTemplateAsync(const CreateConfigurationTemplateRequest& request, const CreateConfigurationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticBeanstalkClientCreateConfigurationTemplateAsyncHelper( this, request, handler, context ); } );
}

CreateEnvironmentOutcome ElasticBeanstalkClient::CreateEnvironment(const CreateEnvironmentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateEnvironmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateEnvironmentOutcomeCallable ElasticBeanstalkClient::CreateEnvironmentCallable(const CreateEnvironmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateEnvironmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEnvironment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClientCreateEnvironmentAsyncHelper(ElasticBeanstalkClient const * const clientThis, const CreateEnvironmentRequest& request, const CreateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateEnvironment(request), context);
}

void ElasticBeanstalkClient::CreateEnvironmentAsync(const CreateEnvironmentRequest& request, const CreateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticBeanstalkClientCreateEnvironmentAsyncHelper( this, request, handler, context ); } );
}

CreatePlatformVersionOutcome ElasticBeanstalkClient::CreatePlatformVersion(const CreatePlatformVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreatePlatformVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreatePlatformVersionOutcomeCallable ElasticBeanstalkClient::CreatePlatformVersionCallable(const CreatePlatformVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePlatformVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePlatformVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClientCreatePlatformVersionAsyncHelper(ElasticBeanstalkClient const * const clientThis, const CreatePlatformVersionRequest& request, const CreatePlatformVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreatePlatformVersion(request), context);
}

void ElasticBeanstalkClient::CreatePlatformVersionAsync(const CreatePlatformVersionRequest& request, const CreatePlatformVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticBeanstalkClientCreatePlatformVersionAsyncHelper( this, request, handler, context ); } );
}

CreateStorageLocationOutcome ElasticBeanstalkClient::CreateStorageLocation(const CreateStorageLocationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateStorageLocationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateStorageLocationOutcomeCallable ElasticBeanstalkClient::CreateStorageLocationCallable(const CreateStorageLocationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateStorageLocationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateStorageLocation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClientCreateStorageLocationAsyncHelper(ElasticBeanstalkClient const * const clientThis, const CreateStorageLocationRequest& request, const CreateStorageLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateStorageLocation(request), context);
}

void ElasticBeanstalkClient::CreateStorageLocationAsync(const CreateStorageLocationRequest& request, const CreateStorageLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticBeanstalkClientCreateStorageLocationAsyncHelper( this, request, handler, context ); } );
}

DeleteApplicationOutcome ElasticBeanstalkClient::DeleteApplication(const DeleteApplicationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteApplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteApplicationOutcomeCallable ElasticBeanstalkClient::DeleteApplicationCallable(const DeleteApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClientDeleteApplicationAsyncHelper(ElasticBeanstalkClient const * const clientThis, const DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteApplication(request), context);
}

void ElasticBeanstalkClient::DeleteApplicationAsync(const DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticBeanstalkClientDeleteApplicationAsyncHelper( this, request, handler, context ); } );
}

DeleteApplicationVersionOutcome ElasticBeanstalkClient::DeleteApplicationVersion(const DeleteApplicationVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteApplicationVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteApplicationVersionOutcomeCallable ElasticBeanstalkClient::DeleteApplicationVersionCallable(const DeleteApplicationVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteApplicationVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApplicationVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClientDeleteApplicationVersionAsyncHelper(ElasticBeanstalkClient const * const clientThis, const DeleteApplicationVersionRequest& request, const DeleteApplicationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteApplicationVersion(request), context);
}

void ElasticBeanstalkClient::DeleteApplicationVersionAsync(const DeleteApplicationVersionRequest& request, const DeleteApplicationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticBeanstalkClientDeleteApplicationVersionAsyncHelper( this, request, handler, context ); } );
}

DeleteConfigurationTemplateOutcome ElasticBeanstalkClient::DeleteConfigurationTemplate(const DeleteConfigurationTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteConfigurationTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteConfigurationTemplateOutcomeCallable ElasticBeanstalkClient::DeleteConfigurationTemplateCallable(const DeleteConfigurationTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteConfigurationTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteConfigurationTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClientDeleteConfigurationTemplateAsyncHelper(ElasticBeanstalkClient const * const clientThis, const DeleteConfigurationTemplateRequest& request, const DeleteConfigurationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteConfigurationTemplate(request), context);
}

void ElasticBeanstalkClient::DeleteConfigurationTemplateAsync(const DeleteConfigurationTemplateRequest& request, const DeleteConfigurationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticBeanstalkClientDeleteConfigurationTemplateAsyncHelper( this, request, handler, context ); } );
}

DeleteEnvironmentConfigurationOutcome ElasticBeanstalkClient::DeleteEnvironmentConfiguration(const DeleteEnvironmentConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteEnvironmentConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteEnvironmentConfigurationOutcomeCallable ElasticBeanstalkClient::DeleteEnvironmentConfigurationCallable(const DeleteEnvironmentConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEnvironmentConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEnvironmentConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClientDeleteEnvironmentConfigurationAsyncHelper(ElasticBeanstalkClient const * const clientThis, const DeleteEnvironmentConfigurationRequest& request, const DeleteEnvironmentConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteEnvironmentConfiguration(request), context);
}

void ElasticBeanstalkClient::DeleteEnvironmentConfigurationAsync(const DeleteEnvironmentConfigurationRequest& request, const DeleteEnvironmentConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticBeanstalkClientDeleteEnvironmentConfigurationAsyncHelper( this, request, handler, context ); } );
}

DeletePlatformVersionOutcome ElasticBeanstalkClient::DeletePlatformVersion(const DeletePlatformVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeletePlatformVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeletePlatformVersionOutcomeCallable ElasticBeanstalkClient::DeletePlatformVersionCallable(const DeletePlatformVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePlatformVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePlatformVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClientDeletePlatformVersionAsyncHelper(ElasticBeanstalkClient const * const clientThis, const DeletePlatformVersionRequest& request, const DeletePlatformVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeletePlatformVersion(request), context);
}

void ElasticBeanstalkClient::DeletePlatformVersionAsync(const DeletePlatformVersionRequest& request, const DeletePlatformVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticBeanstalkClientDeletePlatformVersionAsyncHelper( this, request, handler, context ); } );
}

DescribeAccountAttributesOutcome ElasticBeanstalkClient::DescribeAccountAttributes(const DescribeAccountAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeAccountAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeAccountAttributesOutcomeCallable ElasticBeanstalkClient::DescribeAccountAttributesCallable(const DescribeAccountAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAccountAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAccountAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClientDescribeAccountAttributesAsyncHelper(ElasticBeanstalkClient const * const clientThis, const DescribeAccountAttributesRequest& request, const DescribeAccountAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAccountAttributes(request), context);
}

void ElasticBeanstalkClient::DescribeAccountAttributesAsync(const DescribeAccountAttributesRequest& request, const DescribeAccountAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticBeanstalkClientDescribeAccountAttributesAsyncHelper( this, request, handler, context ); } );
}

DescribeApplicationVersionsOutcome ElasticBeanstalkClient::DescribeApplicationVersions(const DescribeApplicationVersionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeApplicationVersionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeApplicationVersionsOutcomeCallable ElasticBeanstalkClient::DescribeApplicationVersionsCallable(const DescribeApplicationVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeApplicationVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeApplicationVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClientDescribeApplicationVersionsAsyncHelper(ElasticBeanstalkClient const * const clientThis, const DescribeApplicationVersionsRequest& request, const DescribeApplicationVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeApplicationVersions(request), context);
}

void ElasticBeanstalkClient::DescribeApplicationVersionsAsync(const DescribeApplicationVersionsRequest& request, const DescribeApplicationVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticBeanstalkClientDescribeApplicationVersionsAsyncHelper( this, request, handler, context ); } );
}

DescribeApplicationsOutcome ElasticBeanstalkClient::DescribeApplications(const DescribeApplicationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeApplicationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeApplicationsOutcomeCallable ElasticBeanstalkClient::DescribeApplicationsCallable(const DescribeApplicationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeApplicationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeApplications(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClientDescribeApplicationsAsyncHelper(ElasticBeanstalkClient const * const clientThis, const DescribeApplicationsRequest& request, const DescribeApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeApplications(request), context);
}

void ElasticBeanstalkClient::DescribeApplicationsAsync(const DescribeApplicationsRequest& request, const DescribeApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticBeanstalkClientDescribeApplicationsAsyncHelper( this, request, handler, context ); } );
}

DescribeConfigurationOptionsOutcome ElasticBeanstalkClient::DescribeConfigurationOptions(const DescribeConfigurationOptionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeConfigurationOptionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeConfigurationOptionsOutcomeCallable ElasticBeanstalkClient::DescribeConfigurationOptionsCallable(const DescribeConfigurationOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeConfigurationOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeConfigurationOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClientDescribeConfigurationOptionsAsyncHelper(ElasticBeanstalkClient const * const clientThis, const DescribeConfigurationOptionsRequest& request, const DescribeConfigurationOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeConfigurationOptions(request), context);
}

void ElasticBeanstalkClient::DescribeConfigurationOptionsAsync(const DescribeConfigurationOptionsRequest& request, const DescribeConfigurationOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticBeanstalkClientDescribeConfigurationOptionsAsyncHelper( this, request, handler, context ); } );
}

DescribeConfigurationSettingsOutcome ElasticBeanstalkClient::DescribeConfigurationSettings(const DescribeConfigurationSettingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeConfigurationSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeConfigurationSettingsOutcomeCallable ElasticBeanstalkClient::DescribeConfigurationSettingsCallable(const DescribeConfigurationSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeConfigurationSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeConfigurationSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClientDescribeConfigurationSettingsAsyncHelper(ElasticBeanstalkClient const * const clientThis, const DescribeConfigurationSettingsRequest& request, const DescribeConfigurationSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeConfigurationSettings(request), context);
}

void ElasticBeanstalkClient::DescribeConfigurationSettingsAsync(const DescribeConfigurationSettingsRequest& request, const DescribeConfigurationSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticBeanstalkClientDescribeConfigurationSettingsAsyncHelper( this, request, handler, context ); } );
}

DescribeEnvironmentHealthOutcome ElasticBeanstalkClient::DescribeEnvironmentHealth(const DescribeEnvironmentHealthRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEnvironmentHealthOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeEnvironmentHealthOutcomeCallable ElasticBeanstalkClient::DescribeEnvironmentHealthCallable(const DescribeEnvironmentHealthRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEnvironmentHealthOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEnvironmentHealth(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClientDescribeEnvironmentHealthAsyncHelper(ElasticBeanstalkClient const * const clientThis, const DescribeEnvironmentHealthRequest& request, const DescribeEnvironmentHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeEnvironmentHealth(request), context);
}

void ElasticBeanstalkClient::DescribeEnvironmentHealthAsync(const DescribeEnvironmentHealthRequest& request, const DescribeEnvironmentHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticBeanstalkClientDescribeEnvironmentHealthAsyncHelper( this, request, handler, context ); } );
}

DescribeEnvironmentManagedActionHistoryOutcome ElasticBeanstalkClient::DescribeEnvironmentManagedActionHistory(const DescribeEnvironmentManagedActionHistoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEnvironmentManagedActionHistoryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeEnvironmentManagedActionHistoryOutcomeCallable ElasticBeanstalkClient::DescribeEnvironmentManagedActionHistoryCallable(const DescribeEnvironmentManagedActionHistoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEnvironmentManagedActionHistoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEnvironmentManagedActionHistory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClientDescribeEnvironmentManagedActionHistoryAsyncHelper(ElasticBeanstalkClient const * const clientThis, const DescribeEnvironmentManagedActionHistoryRequest& request, const DescribeEnvironmentManagedActionHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeEnvironmentManagedActionHistory(request), context);
}

void ElasticBeanstalkClient::DescribeEnvironmentManagedActionHistoryAsync(const DescribeEnvironmentManagedActionHistoryRequest& request, const DescribeEnvironmentManagedActionHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticBeanstalkClientDescribeEnvironmentManagedActionHistoryAsyncHelper( this, request, handler, context ); } );
}

DescribeEnvironmentManagedActionsOutcome ElasticBeanstalkClient::DescribeEnvironmentManagedActions(const DescribeEnvironmentManagedActionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEnvironmentManagedActionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeEnvironmentManagedActionsOutcomeCallable ElasticBeanstalkClient::DescribeEnvironmentManagedActionsCallable(const DescribeEnvironmentManagedActionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEnvironmentManagedActionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEnvironmentManagedActions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClientDescribeEnvironmentManagedActionsAsyncHelper(ElasticBeanstalkClient const * const clientThis, const DescribeEnvironmentManagedActionsRequest& request, const DescribeEnvironmentManagedActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeEnvironmentManagedActions(request), context);
}

void ElasticBeanstalkClient::DescribeEnvironmentManagedActionsAsync(const DescribeEnvironmentManagedActionsRequest& request, const DescribeEnvironmentManagedActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticBeanstalkClientDescribeEnvironmentManagedActionsAsyncHelper( this, request, handler, context ); } );
}

DescribeEnvironmentResourcesOutcome ElasticBeanstalkClient::DescribeEnvironmentResources(const DescribeEnvironmentResourcesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEnvironmentResourcesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeEnvironmentResourcesOutcomeCallable ElasticBeanstalkClient::DescribeEnvironmentResourcesCallable(const DescribeEnvironmentResourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEnvironmentResourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEnvironmentResources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClientDescribeEnvironmentResourcesAsyncHelper(ElasticBeanstalkClient const * const clientThis, const DescribeEnvironmentResourcesRequest& request, const DescribeEnvironmentResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeEnvironmentResources(request), context);
}

void ElasticBeanstalkClient::DescribeEnvironmentResourcesAsync(const DescribeEnvironmentResourcesRequest& request, const DescribeEnvironmentResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticBeanstalkClientDescribeEnvironmentResourcesAsyncHelper( this, request, handler, context ); } );
}

DescribeEnvironmentsOutcome ElasticBeanstalkClient::DescribeEnvironments(const DescribeEnvironmentsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEnvironmentsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeEnvironmentsOutcomeCallable ElasticBeanstalkClient::DescribeEnvironmentsCallable(const DescribeEnvironmentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEnvironmentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEnvironments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClientDescribeEnvironmentsAsyncHelper(ElasticBeanstalkClient const * const clientThis, const DescribeEnvironmentsRequest& request, const DescribeEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeEnvironments(request), context);
}

void ElasticBeanstalkClient::DescribeEnvironmentsAsync(const DescribeEnvironmentsRequest& request, const DescribeEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticBeanstalkClientDescribeEnvironmentsAsyncHelper( this, request, handler, context ); } );
}

DescribeEventsOutcome ElasticBeanstalkClient::DescribeEvents(const DescribeEventsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEventsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeEventsOutcomeCallable ElasticBeanstalkClient::DescribeEventsCallable(const DescribeEventsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEventsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEvents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClientDescribeEventsAsyncHelper(ElasticBeanstalkClient const * const clientThis, const DescribeEventsRequest& request, const DescribeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeEvents(request), context);
}

void ElasticBeanstalkClient::DescribeEventsAsync(const DescribeEventsRequest& request, const DescribeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticBeanstalkClientDescribeEventsAsyncHelper( this, request, handler, context ); } );
}

DescribeInstancesHealthOutcome ElasticBeanstalkClient::DescribeInstancesHealth(const DescribeInstancesHealthRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeInstancesHealthOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeInstancesHealthOutcomeCallable ElasticBeanstalkClient::DescribeInstancesHealthCallable(const DescribeInstancesHealthRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeInstancesHealthOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeInstancesHealth(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClientDescribeInstancesHealthAsyncHelper(ElasticBeanstalkClient const * const clientThis, const DescribeInstancesHealthRequest& request, const DescribeInstancesHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeInstancesHealth(request), context);
}

void ElasticBeanstalkClient::DescribeInstancesHealthAsync(const DescribeInstancesHealthRequest& request, const DescribeInstancesHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticBeanstalkClientDescribeInstancesHealthAsyncHelper( this, request, handler, context ); } );
}

DescribePlatformVersionOutcome ElasticBeanstalkClient::DescribePlatformVersion(const DescribePlatformVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribePlatformVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribePlatformVersionOutcomeCallable ElasticBeanstalkClient::DescribePlatformVersionCallable(const DescribePlatformVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePlatformVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePlatformVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClientDescribePlatformVersionAsyncHelper(ElasticBeanstalkClient const * const clientThis, const DescribePlatformVersionRequest& request, const DescribePlatformVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribePlatformVersion(request), context);
}

void ElasticBeanstalkClient::DescribePlatformVersionAsync(const DescribePlatformVersionRequest& request, const DescribePlatformVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticBeanstalkClientDescribePlatformVersionAsyncHelper( this, request, handler, context ); } );
}

DisassociateEnvironmentOperationsRoleOutcome ElasticBeanstalkClient::DisassociateEnvironmentOperationsRole(const DisassociateEnvironmentOperationsRoleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisassociateEnvironmentOperationsRoleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DisassociateEnvironmentOperationsRoleOutcomeCallable ElasticBeanstalkClient::DisassociateEnvironmentOperationsRoleCallable(const DisassociateEnvironmentOperationsRoleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateEnvironmentOperationsRoleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateEnvironmentOperationsRole(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClientDisassociateEnvironmentOperationsRoleAsyncHelper(ElasticBeanstalkClient const * const clientThis, const DisassociateEnvironmentOperationsRoleRequest& request, const DisassociateEnvironmentOperationsRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateEnvironmentOperationsRole(request), context);
}

void ElasticBeanstalkClient::DisassociateEnvironmentOperationsRoleAsync(const DisassociateEnvironmentOperationsRoleRequest& request, const DisassociateEnvironmentOperationsRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticBeanstalkClientDisassociateEnvironmentOperationsRoleAsyncHelper( this, request, handler, context ); } );
}

ListAvailableSolutionStacksOutcome ElasticBeanstalkClient::ListAvailableSolutionStacks(const ListAvailableSolutionStacksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListAvailableSolutionStacksOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListAvailableSolutionStacksOutcomeCallable ElasticBeanstalkClient::ListAvailableSolutionStacksCallable(const ListAvailableSolutionStacksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAvailableSolutionStacksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAvailableSolutionStacks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClientListAvailableSolutionStacksAsyncHelper(ElasticBeanstalkClient const * const clientThis, const ListAvailableSolutionStacksRequest& request, const ListAvailableSolutionStacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAvailableSolutionStacks(request), context);
}

void ElasticBeanstalkClient::ListAvailableSolutionStacksAsync(const ListAvailableSolutionStacksRequest& request, const ListAvailableSolutionStacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticBeanstalkClientListAvailableSolutionStacksAsyncHelper( this, request, handler, context ); } );
}

ListPlatformBranchesOutcome ElasticBeanstalkClient::ListPlatformBranches(const ListPlatformBranchesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListPlatformBranchesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListPlatformBranchesOutcomeCallable ElasticBeanstalkClient::ListPlatformBranchesCallable(const ListPlatformBranchesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPlatformBranchesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPlatformBranches(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClientListPlatformBranchesAsyncHelper(ElasticBeanstalkClient const * const clientThis, const ListPlatformBranchesRequest& request, const ListPlatformBranchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListPlatformBranches(request), context);
}

void ElasticBeanstalkClient::ListPlatformBranchesAsync(const ListPlatformBranchesRequest& request, const ListPlatformBranchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticBeanstalkClientListPlatformBranchesAsyncHelper( this, request, handler, context ); } );
}

ListPlatformVersionsOutcome ElasticBeanstalkClient::ListPlatformVersions(const ListPlatformVersionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListPlatformVersionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListPlatformVersionsOutcomeCallable ElasticBeanstalkClient::ListPlatformVersionsCallable(const ListPlatformVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPlatformVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPlatformVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClientListPlatformVersionsAsyncHelper(ElasticBeanstalkClient const * const clientThis, const ListPlatformVersionsRequest& request, const ListPlatformVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListPlatformVersions(request), context);
}

void ElasticBeanstalkClient::ListPlatformVersionsAsync(const ListPlatformVersionsRequest& request, const ListPlatformVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticBeanstalkClientListPlatformVersionsAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome ElasticBeanstalkClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListTagsForResourceOutcomeCallable ElasticBeanstalkClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClientListTagsForResourceAsyncHelper(ElasticBeanstalkClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void ElasticBeanstalkClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticBeanstalkClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

RebuildEnvironmentOutcome ElasticBeanstalkClient::RebuildEnvironment(const RebuildEnvironmentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RebuildEnvironmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RebuildEnvironmentOutcomeCallable ElasticBeanstalkClient::RebuildEnvironmentCallable(const RebuildEnvironmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RebuildEnvironmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RebuildEnvironment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClientRebuildEnvironmentAsyncHelper(ElasticBeanstalkClient const * const clientThis, const RebuildEnvironmentRequest& request, const RebuildEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RebuildEnvironment(request), context);
}

void ElasticBeanstalkClient::RebuildEnvironmentAsync(const RebuildEnvironmentRequest& request, const RebuildEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticBeanstalkClientRebuildEnvironmentAsyncHelper( this, request, handler, context ); } );
}

RequestEnvironmentInfoOutcome ElasticBeanstalkClient::RequestEnvironmentInfo(const RequestEnvironmentInfoRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RequestEnvironmentInfoOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RequestEnvironmentInfoOutcomeCallable ElasticBeanstalkClient::RequestEnvironmentInfoCallable(const RequestEnvironmentInfoRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RequestEnvironmentInfoOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RequestEnvironmentInfo(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClientRequestEnvironmentInfoAsyncHelper(ElasticBeanstalkClient const * const clientThis, const RequestEnvironmentInfoRequest& request, const RequestEnvironmentInfoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RequestEnvironmentInfo(request), context);
}

void ElasticBeanstalkClient::RequestEnvironmentInfoAsync(const RequestEnvironmentInfoRequest& request, const RequestEnvironmentInfoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticBeanstalkClientRequestEnvironmentInfoAsyncHelper( this, request, handler, context ); } );
}

RestartAppServerOutcome ElasticBeanstalkClient::RestartAppServer(const RestartAppServerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RestartAppServerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RestartAppServerOutcomeCallable ElasticBeanstalkClient::RestartAppServerCallable(const RestartAppServerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RestartAppServerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RestartAppServer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClientRestartAppServerAsyncHelper(ElasticBeanstalkClient const * const clientThis, const RestartAppServerRequest& request, const RestartAppServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RestartAppServer(request), context);
}

void ElasticBeanstalkClient::RestartAppServerAsync(const RestartAppServerRequest& request, const RestartAppServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticBeanstalkClientRestartAppServerAsyncHelper( this, request, handler, context ); } );
}

RetrieveEnvironmentInfoOutcome ElasticBeanstalkClient::RetrieveEnvironmentInfo(const RetrieveEnvironmentInfoRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RetrieveEnvironmentInfoOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RetrieveEnvironmentInfoOutcomeCallable ElasticBeanstalkClient::RetrieveEnvironmentInfoCallable(const RetrieveEnvironmentInfoRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RetrieveEnvironmentInfoOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RetrieveEnvironmentInfo(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClientRetrieveEnvironmentInfoAsyncHelper(ElasticBeanstalkClient const * const clientThis, const RetrieveEnvironmentInfoRequest& request, const RetrieveEnvironmentInfoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RetrieveEnvironmentInfo(request), context);
}

void ElasticBeanstalkClient::RetrieveEnvironmentInfoAsync(const RetrieveEnvironmentInfoRequest& request, const RetrieveEnvironmentInfoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticBeanstalkClientRetrieveEnvironmentInfoAsyncHelper( this, request, handler, context ); } );
}

SwapEnvironmentCNAMEsOutcome ElasticBeanstalkClient::SwapEnvironmentCNAMEs(const SwapEnvironmentCNAMEsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SwapEnvironmentCNAMEsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

SwapEnvironmentCNAMEsOutcomeCallable ElasticBeanstalkClient::SwapEnvironmentCNAMEsCallable(const SwapEnvironmentCNAMEsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SwapEnvironmentCNAMEsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SwapEnvironmentCNAMEs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClientSwapEnvironmentCNAMEsAsyncHelper(ElasticBeanstalkClient const * const clientThis, const SwapEnvironmentCNAMEsRequest& request, const SwapEnvironmentCNAMEsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SwapEnvironmentCNAMEs(request), context);
}

void ElasticBeanstalkClient::SwapEnvironmentCNAMEsAsync(const SwapEnvironmentCNAMEsRequest& request, const SwapEnvironmentCNAMEsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticBeanstalkClientSwapEnvironmentCNAMEsAsyncHelper( this, request, handler, context ); } );
}

TerminateEnvironmentOutcome ElasticBeanstalkClient::TerminateEnvironment(const TerminateEnvironmentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TerminateEnvironmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

TerminateEnvironmentOutcomeCallable ElasticBeanstalkClient::TerminateEnvironmentCallable(const TerminateEnvironmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TerminateEnvironmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TerminateEnvironment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClientTerminateEnvironmentAsyncHelper(ElasticBeanstalkClient const * const clientThis, const TerminateEnvironmentRequest& request, const TerminateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TerminateEnvironment(request), context);
}

void ElasticBeanstalkClient::TerminateEnvironmentAsync(const TerminateEnvironmentRequest& request, const TerminateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticBeanstalkClientTerminateEnvironmentAsyncHelper( this, request, handler, context ); } );
}

UpdateApplicationOutcome ElasticBeanstalkClient::UpdateApplication(const UpdateApplicationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateApplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

UpdateApplicationOutcomeCallable ElasticBeanstalkClient::UpdateApplicationCallable(const UpdateApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClientUpdateApplicationAsyncHelper(ElasticBeanstalkClient const * const clientThis, const UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateApplication(request), context);
}

void ElasticBeanstalkClient::UpdateApplicationAsync(const UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticBeanstalkClientUpdateApplicationAsyncHelper( this, request, handler, context ); } );
}

UpdateApplicationResourceLifecycleOutcome ElasticBeanstalkClient::UpdateApplicationResourceLifecycle(const UpdateApplicationResourceLifecycleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateApplicationResourceLifecycleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

UpdateApplicationResourceLifecycleOutcomeCallable ElasticBeanstalkClient::UpdateApplicationResourceLifecycleCallable(const UpdateApplicationResourceLifecycleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateApplicationResourceLifecycleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateApplicationResourceLifecycle(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClientUpdateApplicationResourceLifecycleAsyncHelper(ElasticBeanstalkClient const * const clientThis, const UpdateApplicationResourceLifecycleRequest& request, const UpdateApplicationResourceLifecycleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateApplicationResourceLifecycle(request), context);
}

void ElasticBeanstalkClient::UpdateApplicationResourceLifecycleAsync(const UpdateApplicationResourceLifecycleRequest& request, const UpdateApplicationResourceLifecycleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticBeanstalkClientUpdateApplicationResourceLifecycleAsyncHelper( this, request, handler, context ); } );
}

UpdateApplicationVersionOutcome ElasticBeanstalkClient::UpdateApplicationVersion(const UpdateApplicationVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateApplicationVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

UpdateApplicationVersionOutcomeCallable ElasticBeanstalkClient::UpdateApplicationVersionCallable(const UpdateApplicationVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateApplicationVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateApplicationVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClientUpdateApplicationVersionAsyncHelper(ElasticBeanstalkClient const * const clientThis, const UpdateApplicationVersionRequest& request, const UpdateApplicationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateApplicationVersion(request), context);
}

void ElasticBeanstalkClient::UpdateApplicationVersionAsync(const UpdateApplicationVersionRequest& request, const UpdateApplicationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticBeanstalkClientUpdateApplicationVersionAsyncHelper( this, request, handler, context ); } );
}

UpdateConfigurationTemplateOutcome ElasticBeanstalkClient::UpdateConfigurationTemplate(const UpdateConfigurationTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateConfigurationTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

UpdateConfigurationTemplateOutcomeCallable ElasticBeanstalkClient::UpdateConfigurationTemplateCallable(const UpdateConfigurationTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateConfigurationTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateConfigurationTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClientUpdateConfigurationTemplateAsyncHelper(ElasticBeanstalkClient const * const clientThis, const UpdateConfigurationTemplateRequest& request, const UpdateConfigurationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateConfigurationTemplate(request), context);
}

void ElasticBeanstalkClient::UpdateConfigurationTemplateAsync(const UpdateConfigurationTemplateRequest& request, const UpdateConfigurationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticBeanstalkClientUpdateConfigurationTemplateAsyncHelper( this, request, handler, context ); } );
}

UpdateEnvironmentOutcome ElasticBeanstalkClient::UpdateEnvironment(const UpdateEnvironmentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateEnvironmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

UpdateEnvironmentOutcomeCallable ElasticBeanstalkClient::UpdateEnvironmentCallable(const UpdateEnvironmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateEnvironmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateEnvironment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClientUpdateEnvironmentAsyncHelper(ElasticBeanstalkClient const * const clientThis, const UpdateEnvironmentRequest& request, const UpdateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateEnvironment(request), context);
}

void ElasticBeanstalkClient::UpdateEnvironmentAsync(const UpdateEnvironmentRequest& request, const UpdateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticBeanstalkClientUpdateEnvironmentAsyncHelper( this, request, handler, context ); } );
}

UpdateTagsForResourceOutcome ElasticBeanstalkClient::UpdateTagsForResource(const UpdateTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

UpdateTagsForResourceOutcomeCallable ElasticBeanstalkClient::UpdateTagsForResourceCallable(const UpdateTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClientUpdateTagsForResourceAsyncHelper(ElasticBeanstalkClient const * const clientThis, const UpdateTagsForResourceRequest& request, const UpdateTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateTagsForResource(request), context);
}

void ElasticBeanstalkClient::UpdateTagsForResourceAsync(const UpdateTagsForResourceRequest& request, const UpdateTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticBeanstalkClientUpdateTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

ValidateConfigurationSettingsOutcome ElasticBeanstalkClient::ValidateConfigurationSettings(const ValidateConfigurationSettingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ValidateConfigurationSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ValidateConfigurationSettingsOutcomeCallable ElasticBeanstalkClient::ValidateConfigurationSettingsCallable(const ValidateConfigurationSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ValidateConfigurationSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ValidateConfigurationSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticBeanstalkClientValidateConfigurationSettingsAsyncHelper(ElasticBeanstalkClient const * const clientThis, const ValidateConfigurationSettingsRequest& request, const ValidateConfigurationSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ValidateConfigurationSettings(request), context);
}

void ElasticBeanstalkClient::ValidateConfigurationSettingsAsync(const ValidateConfigurationSettingsRequest& request, const ValidateConfigurationSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticBeanstalkClientValidateConfigurationSettingsAsyncHelper( this, request, handler, context ); } );
}

