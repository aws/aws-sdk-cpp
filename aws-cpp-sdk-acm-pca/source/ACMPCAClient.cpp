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

#include <aws/acm-pca/ACMPCAClient.h>
#include <aws/acm-pca/ACMPCAEndpoint.h>
#include <aws/acm-pca/ACMPCAErrorMarshaller.h>
#include <aws/acm-pca/model/CreateCertificateAuthorityRequest.h>
#include <aws/acm-pca/model/CreateCertificateAuthorityAuditReportRequest.h>
#include <aws/acm-pca/model/CreatePermissionRequest.h>
#include <aws/acm-pca/model/DeleteCertificateAuthorityRequest.h>
#include <aws/acm-pca/model/DeletePermissionRequest.h>
#include <aws/acm-pca/model/DescribeCertificateAuthorityRequest.h>
#include <aws/acm-pca/model/DescribeCertificateAuthorityAuditReportRequest.h>
#include <aws/acm-pca/model/GetCertificateRequest.h>
#include <aws/acm-pca/model/GetCertificateAuthorityCertificateRequest.h>
#include <aws/acm-pca/model/GetCertificateAuthorityCsrRequest.h>
#include <aws/acm-pca/model/ImportCertificateAuthorityCertificateRequest.h>
#include <aws/acm-pca/model/IssueCertificateRequest.h>
#include <aws/acm-pca/model/ListCertificateAuthoritiesRequest.h>
#include <aws/acm-pca/model/ListPermissionsRequest.h>
#include <aws/acm-pca/model/ListTagsRequest.h>
#include <aws/acm-pca/model/RestoreCertificateAuthorityRequest.h>
#include <aws/acm-pca/model/RevokeCertificateRequest.h>
#include <aws/acm-pca/model/TagCertificateAuthorityRequest.h>
#include <aws/acm-pca/model/UntagCertificateAuthorityRequest.h>
#include <aws/acm-pca/model/UpdateCertificateAuthorityRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ACMPCA;
using namespace Aws::ACMPCA::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "acm-pca";
static const char* ALLOCATION_TAG = "ACMPCAClient";


ACMPCAClient::ACMPCAClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ACMPCAErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ACMPCAClient::ACMPCAClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ACMPCAErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ACMPCAClient::ACMPCAClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ACMPCAErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ACMPCAClient::~ACMPCAClient()
{
}

void ACMPCAClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + ACMPCAEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void ACMPCAClient::OverrideEndpoint(const Aws::String& endpoint)
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

CreateCertificateAuthorityOutcome ACMPCAClient::CreateCertificateAuthority(const CreateCertificateAuthorityRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateCertificateAuthorityOutcome(CreateCertificateAuthorityResult(outcome.GetResult()));
  }
  else
  {
    return CreateCertificateAuthorityOutcome(outcome.GetError());
  }
}

CreateCertificateAuthorityOutcomeCallable ACMPCAClient::CreateCertificateAuthorityCallable(const CreateCertificateAuthorityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCertificateAuthorityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCertificateAuthority(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMPCAClient::CreateCertificateAuthorityAsync(const CreateCertificateAuthorityRequest& request, const CreateCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateCertificateAuthorityAsyncHelper( request, handler, context ); } );
}

void ACMPCAClient::CreateCertificateAuthorityAsyncHelper(const CreateCertificateAuthorityRequest& request, const CreateCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateCertificateAuthority(request), context);
}

CreateCertificateAuthorityAuditReportOutcome ACMPCAClient::CreateCertificateAuthorityAuditReport(const CreateCertificateAuthorityAuditReportRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateCertificateAuthorityAuditReportOutcome(CreateCertificateAuthorityAuditReportResult(outcome.GetResult()));
  }
  else
  {
    return CreateCertificateAuthorityAuditReportOutcome(outcome.GetError());
  }
}

CreateCertificateAuthorityAuditReportOutcomeCallable ACMPCAClient::CreateCertificateAuthorityAuditReportCallable(const CreateCertificateAuthorityAuditReportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCertificateAuthorityAuditReportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCertificateAuthorityAuditReport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMPCAClient::CreateCertificateAuthorityAuditReportAsync(const CreateCertificateAuthorityAuditReportRequest& request, const CreateCertificateAuthorityAuditReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateCertificateAuthorityAuditReportAsyncHelper( request, handler, context ); } );
}

void ACMPCAClient::CreateCertificateAuthorityAuditReportAsyncHelper(const CreateCertificateAuthorityAuditReportRequest& request, const CreateCertificateAuthorityAuditReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateCertificateAuthorityAuditReport(request), context);
}

CreatePermissionOutcome ACMPCAClient::CreatePermission(const CreatePermissionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreatePermissionOutcome(NoResult());
  }
  else
  {
    return CreatePermissionOutcome(outcome.GetError());
  }
}

CreatePermissionOutcomeCallable ACMPCAClient::CreatePermissionCallable(const CreatePermissionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePermissionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePermission(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMPCAClient::CreatePermissionAsync(const CreatePermissionRequest& request, const CreatePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreatePermissionAsyncHelper( request, handler, context ); } );
}

void ACMPCAClient::CreatePermissionAsyncHelper(const CreatePermissionRequest& request, const CreatePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreatePermission(request), context);
}

DeleteCertificateAuthorityOutcome ACMPCAClient::DeleteCertificateAuthority(const DeleteCertificateAuthorityRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteCertificateAuthorityOutcome(NoResult());
  }
  else
  {
    return DeleteCertificateAuthorityOutcome(outcome.GetError());
  }
}

DeleteCertificateAuthorityOutcomeCallable ACMPCAClient::DeleteCertificateAuthorityCallable(const DeleteCertificateAuthorityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCertificateAuthorityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCertificateAuthority(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMPCAClient::DeleteCertificateAuthorityAsync(const DeleteCertificateAuthorityRequest& request, const DeleteCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteCertificateAuthorityAsyncHelper( request, handler, context ); } );
}

void ACMPCAClient::DeleteCertificateAuthorityAsyncHelper(const DeleteCertificateAuthorityRequest& request, const DeleteCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteCertificateAuthority(request), context);
}

DeletePermissionOutcome ACMPCAClient::DeletePermission(const DeletePermissionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeletePermissionOutcome(NoResult());
  }
  else
  {
    return DeletePermissionOutcome(outcome.GetError());
  }
}

DeletePermissionOutcomeCallable ACMPCAClient::DeletePermissionCallable(const DeletePermissionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePermissionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePermission(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMPCAClient::DeletePermissionAsync(const DeletePermissionRequest& request, const DeletePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeletePermissionAsyncHelper( request, handler, context ); } );
}

void ACMPCAClient::DeletePermissionAsyncHelper(const DeletePermissionRequest& request, const DeletePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeletePermission(request), context);
}

DescribeCertificateAuthorityOutcome ACMPCAClient::DescribeCertificateAuthority(const DescribeCertificateAuthorityRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeCertificateAuthorityOutcome(DescribeCertificateAuthorityResult(outcome.GetResult()));
  }
  else
  {
    return DescribeCertificateAuthorityOutcome(outcome.GetError());
  }
}

DescribeCertificateAuthorityOutcomeCallable ACMPCAClient::DescribeCertificateAuthorityCallable(const DescribeCertificateAuthorityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCertificateAuthorityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCertificateAuthority(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMPCAClient::DescribeCertificateAuthorityAsync(const DescribeCertificateAuthorityRequest& request, const DescribeCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeCertificateAuthorityAsyncHelper( request, handler, context ); } );
}

void ACMPCAClient::DescribeCertificateAuthorityAsyncHelper(const DescribeCertificateAuthorityRequest& request, const DescribeCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeCertificateAuthority(request), context);
}

DescribeCertificateAuthorityAuditReportOutcome ACMPCAClient::DescribeCertificateAuthorityAuditReport(const DescribeCertificateAuthorityAuditReportRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeCertificateAuthorityAuditReportOutcome(DescribeCertificateAuthorityAuditReportResult(outcome.GetResult()));
  }
  else
  {
    return DescribeCertificateAuthorityAuditReportOutcome(outcome.GetError());
  }
}

DescribeCertificateAuthorityAuditReportOutcomeCallable ACMPCAClient::DescribeCertificateAuthorityAuditReportCallable(const DescribeCertificateAuthorityAuditReportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCertificateAuthorityAuditReportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCertificateAuthorityAuditReport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMPCAClient::DescribeCertificateAuthorityAuditReportAsync(const DescribeCertificateAuthorityAuditReportRequest& request, const DescribeCertificateAuthorityAuditReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeCertificateAuthorityAuditReportAsyncHelper( request, handler, context ); } );
}

void ACMPCAClient::DescribeCertificateAuthorityAuditReportAsyncHelper(const DescribeCertificateAuthorityAuditReportRequest& request, const DescribeCertificateAuthorityAuditReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeCertificateAuthorityAuditReport(request), context);
}

GetCertificateOutcome ACMPCAClient::GetCertificate(const GetCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetCertificateOutcome(GetCertificateResult(outcome.GetResult()));
  }
  else
  {
    return GetCertificateOutcome(outcome.GetError());
  }
}

GetCertificateOutcomeCallable ACMPCAClient::GetCertificateCallable(const GetCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMPCAClient::GetCertificateAsync(const GetCertificateRequest& request, const GetCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetCertificateAsyncHelper( request, handler, context ); } );
}

void ACMPCAClient::GetCertificateAsyncHelper(const GetCertificateRequest& request, const GetCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCertificate(request), context);
}

GetCertificateAuthorityCertificateOutcome ACMPCAClient::GetCertificateAuthorityCertificate(const GetCertificateAuthorityCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetCertificateAuthorityCertificateOutcome(GetCertificateAuthorityCertificateResult(outcome.GetResult()));
  }
  else
  {
    return GetCertificateAuthorityCertificateOutcome(outcome.GetError());
  }
}

GetCertificateAuthorityCertificateOutcomeCallable ACMPCAClient::GetCertificateAuthorityCertificateCallable(const GetCertificateAuthorityCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCertificateAuthorityCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCertificateAuthorityCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMPCAClient::GetCertificateAuthorityCertificateAsync(const GetCertificateAuthorityCertificateRequest& request, const GetCertificateAuthorityCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetCertificateAuthorityCertificateAsyncHelper( request, handler, context ); } );
}

void ACMPCAClient::GetCertificateAuthorityCertificateAsyncHelper(const GetCertificateAuthorityCertificateRequest& request, const GetCertificateAuthorityCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCertificateAuthorityCertificate(request), context);
}

GetCertificateAuthorityCsrOutcome ACMPCAClient::GetCertificateAuthorityCsr(const GetCertificateAuthorityCsrRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetCertificateAuthorityCsrOutcome(GetCertificateAuthorityCsrResult(outcome.GetResult()));
  }
  else
  {
    return GetCertificateAuthorityCsrOutcome(outcome.GetError());
  }
}

GetCertificateAuthorityCsrOutcomeCallable ACMPCAClient::GetCertificateAuthorityCsrCallable(const GetCertificateAuthorityCsrRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCertificateAuthorityCsrOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCertificateAuthorityCsr(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMPCAClient::GetCertificateAuthorityCsrAsync(const GetCertificateAuthorityCsrRequest& request, const GetCertificateAuthorityCsrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetCertificateAuthorityCsrAsyncHelper( request, handler, context ); } );
}

void ACMPCAClient::GetCertificateAuthorityCsrAsyncHelper(const GetCertificateAuthorityCsrRequest& request, const GetCertificateAuthorityCsrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCertificateAuthorityCsr(request), context);
}

ImportCertificateAuthorityCertificateOutcome ACMPCAClient::ImportCertificateAuthorityCertificate(const ImportCertificateAuthorityCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ImportCertificateAuthorityCertificateOutcome(NoResult());
  }
  else
  {
    return ImportCertificateAuthorityCertificateOutcome(outcome.GetError());
  }
}

ImportCertificateAuthorityCertificateOutcomeCallable ACMPCAClient::ImportCertificateAuthorityCertificateCallable(const ImportCertificateAuthorityCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ImportCertificateAuthorityCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ImportCertificateAuthorityCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMPCAClient::ImportCertificateAuthorityCertificateAsync(const ImportCertificateAuthorityCertificateRequest& request, const ImportCertificateAuthorityCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ImportCertificateAuthorityCertificateAsyncHelper( request, handler, context ); } );
}

void ACMPCAClient::ImportCertificateAuthorityCertificateAsyncHelper(const ImportCertificateAuthorityCertificateRequest& request, const ImportCertificateAuthorityCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ImportCertificateAuthorityCertificate(request), context);
}

IssueCertificateOutcome ACMPCAClient::IssueCertificate(const IssueCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return IssueCertificateOutcome(IssueCertificateResult(outcome.GetResult()));
  }
  else
  {
    return IssueCertificateOutcome(outcome.GetError());
  }
}

IssueCertificateOutcomeCallable ACMPCAClient::IssueCertificateCallable(const IssueCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< IssueCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->IssueCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMPCAClient::IssueCertificateAsync(const IssueCertificateRequest& request, const IssueCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->IssueCertificateAsyncHelper( request, handler, context ); } );
}

void ACMPCAClient::IssueCertificateAsyncHelper(const IssueCertificateRequest& request, const IssueCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, IssueCertificate(request), context);
}

ListCertificateAuthoritiesOutcome ACMPCAClient::ListCertificateAuthorities(const ListCertificateAuthoritiesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListCertificateAuthoritiesOutcome(ListCertificateAuthoritiesResult(outcome.GetResult()));
  }
  else
  {
    return ListCertificateAuthoritiesOutcome(outcome.GetError());
  }
}

ListCertificateAuthoritiesOutcomeCallable ACMPCAClient::ListCertificateAuthoritiesCallable(const ListCertificateAuthoritiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCertificateAuthoritiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCertificateAuthorities(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMPCAClient::ListCertificateAuthoritiesAsync(const ListCertificateAuthoritiesRequest& request, const ListCertificateAuthoritiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListCertificateAuthoritiesAsyncHelper( request, handler, context ); } );
}

void ACMPCAClient::ListCertificateAuthoritiesAsyncHelper(const ListCertificateAuthoritiesRequest& request, const ListCertificateAuthoritiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListCertificateAuthorities(request), context);
}

ListPermissionsOutcome ACMPCAClient::ListPermissions(const ListPermissionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListPermissionsOutcome(ListPermissionsResult(outcome.GetResult()));
  }
  else
  {
    return ListPermissionsOutcome(outcome.GetError());
  }
}

ListPermissionsOutcomeCallable ACMPCAClient::ListPermissionsCallable(const ListPermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMPCAClient::ListPermissionsAsync(const ListPermissionsRequest& request, const ListPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListPermissionsAsyncHelper( request, handler, context ); } );
}

void ACMPCAClient::ListPermissionsAsyncHelper(const ListPermissionsRequest& request, const ListPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPermissions(request), context);
}

ListTagsOutcome ACMPCAClient::ListTags(const ListTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListTagsOutcome(ListTagsResult(outcome.GetResult()));
  }
  else
  {
    return ListTagsOutcome(outcome.GetError());
  }
}

ListTagsOutcomeCallable ACMPCAClient::ListTagsCallable(const ListTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMPCAClient::ListTagsAsync(const ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsAsyncHelper( request, handler, context ); } );
}

void ACMPCAClient::ListTagsAsyncHelper(const ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTags(request), context);
}

RestoreCertificateAuthorityOutcome ACMPCAClient::RestoreCertificateAuthority(const RestoreCertificateAuthorityRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RestoreCertificateAuthorityOutcome(NoResult());
  }
  else
  {
    return RestoreCertificateAuthorityOutcome(outcome.GetError());
  }
}

RestoreCertificateAuthorityOutcomeCallable ACMPCAClient::RestoreCertificateAuthorityCallable(const RestoreCertificateAuthorityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RestoreCertificateAuthorityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RestoreCertificateAuthority(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMPCAClient::RestoreCertificateAuthorityAsync(const RestoreCertificateAuthorityRequest& request, const RestoreCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RestoreCertificateAuthorityAsyncHelper( request, handler, context ); } );
}

void ACMPCAClient::RestoreCertificateAuthorityAsyncHelper(const RestoreCertificateAuthorityRequest& request, const RestoreCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RestoreCertificateAuthority(request), context);
}

RevokeCertificateOutcome ACMPCAClient::RevokeCertificate(const RevokeCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RevokeCertificateOutcome(NoResult());
  }
  else
  {
    return RevokeCertificateOutcome(outcome.GetError());
  }
}

RevokeCertificateOutcomeCallable ACMPCAClient::RevokeCertificateCallable(const RevokeCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RevokeCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RevokeCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMPCAClient::RevokeCertificateAsync(const RevokeCertificateRequest& request, const RevokeCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RevokeCertificateAsyncHelper( request, handler, context ); } );
}

void ACMPCAClient::RevokeCertificateAsyncHelper(const RevokeCertificateRequest& request, const RevokeCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RevokeCertificate(request), context);
}

TagCertificateAuthorityOutcome ACMPCAClient::TagCertificateAuthority(const TagCertificateAuthorityRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return TagCertificateAuthorityOutcome(NoResult());
  }
  else
  {
    return TagCertificateAuthorityOutcome(outcome.GetError());
  }
}

TagCertificateAuthorityOutcomeCallable ACMPCAClient::TagCertificateAuthorityCallable(const TagCertificateAuthorityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagCertificateAuthorityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagCertificateAuthority(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMPCAClient::TagCertificateAuthorityAsync(const TagCertificateAuthorityRequest& request, const TagCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagCertificateAuthorityAsyncHelper( request, handler, context ); } );
}

void ACMPCAClient::TagCertificateAuthorityAsyncHelper(const TagCertificateAuthorityRequest& request, const TagCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagCertificateAuthority(request), context);
}

UntagCertificateAuthorityOutcome ACMPCAClient::UntagCertificateAuthority(const UntagCertificateAuthorityRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UntagCertificateAuthorityOutcome(NoResult());
  }
  else
  {
    return UntagCertificateAuthorityOutcome(outcome.GetError());
  }
}

UntagCertificateAuthorityOutcomeCallable ACMPCAClient::UntagCertificateAuthorityCallable(const UntagCertificateAuthorityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagCertificateAuthorityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagCertificateAuthority(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMPCAClient::UntagCertificateAuthorityAsync(const UntagCertificateAuthorityRequest& request, const UntagCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagCertificateAuthorityAsyncHelper( request, handler, context ); } );
}

void ACMPCAClient::UntagCertificateAuthorityAsyncHelper(const UntagCertificateAuthorityRequest& request, const UntagCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagCertificateAuthority(request), context);
}

UpdateCertificateAuthorityOutcome ACMPCAClient::UpdateCertificateAuthority(const UpdateCertificateAuthorityRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateCertificateAuthorityOutcome(NoResult());
  }
  else
  {
    return UpdateCertificateAuthorityOutcome(outcome.GetError());
  }
}

UpdateCertificateAuthorityOutcomeCallable ACMPCAClient::UpdateCertificateAuthorityCallable(const UpdateCertificateAuthorityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateCertificateAuthorityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateCertificateAuthority(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMPCAClient::UpdateCertificateAuthorityAsync(const UpdateCertificateAuthorityRequest& request, const UpdateCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateCertificateAuthorityAsyncHelper( request, handler, context ); } );
}

void ACMPCAClient::UpdateCertificateAuthorityAsyncHelper(const UpdateCertificateAuthorityRequest& request, const UpdateCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateCertificateAuthority(request), context);
}

