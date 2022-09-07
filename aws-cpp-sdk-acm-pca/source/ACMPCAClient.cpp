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
#include <aws/acm-pca/model/DeletePolicyRequest.h>
#include <aws/acm-pca/model/DescribeCertificateAuthorityRequest.h>
#include <aws/acm-pca/model/DescribeCertificateAuthorityAuditReportRequest.h>
#include <aws/acm-pca/model/GetCertificateRequest.h>
#include <aws/acm-pca/model/GetCertificateAuthorityCertificateRequest.h>
#include <aws/acm-pca/model/GetCertificateAuthorityCsrRequest.h>
#include <aws/acm-pca/model/GetPolicyRequest.h>
#include <aws/acm-pca/model/ImportCertificateAuthorityCertificateRequest.h>
#include <aws/acm-pca/model/IssueCertificateRequest.h>
#include <aws/acm-pca/model/ListCertificateAuthoritiesRequest.h>
#include <aws/acm-pca/model/ListPermissionsRequest.h>
#include <aws/acm-pca/model/ListTagsRequest.h>
#include <aws/acm-pca/model/PutPolicyRequest.h>
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
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ACMPCAErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ACMPCAClient::ACMPCAClient(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ACMPCAErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ACMPCAClient::ACMPCAClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ACMPCAErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ACMPCAClient::~ACMPCAClient()
{
}

void ACMPCAClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("ACM PCA");
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
  return CreateCertificateAuthorityOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateCertificateAuthorityOutcomeCallable ACMPCAClient::CreateCertificateAuthorityCallable(const CreateCertificateAuthorityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCertificateAuthorityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCertificateAuthority(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMPCAClientCreateCertificateAuthorityAsyncHelper(ACMPCAClient const * const clientThis, const CreateCertificateAuthorityRequest& request, const CreateCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateCertificateAuthority(request), context);
}

void ACMPCAClient::CreateCertificateAuthorityAsync(const CreateCertificateAuthorityRequest& request, const CreateCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ACMPCAClientCreateCertificateAuthorityAsyncHelper( this, request, handler, context ); } );
}

CreateCertificateAuthorityAuditReportOutcome ACMPCAClient::CreateCertificateAuthorityAuditReport(const CreateCertificateAuthorityAuditReportRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateCertificateAuthorityAuditReportOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateCertificateAuthorityAuditReportOutcomeCallable ACMPCAClient::CreateCertificateAuthorityAuditReportCallable(const CreateCertificateAuthorityAuditReportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCertificateAuthorityAuditReportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCertificateAuthorityAuditReport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMPCAClientCreateCertificateAuthorityAuditReportAsyncHelper(ACMPCAClient const * const clientThis, const CreateCertificateAuthorityAuditReportRequest& request, const CreateCertificateAuthorityAuditReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateCertificateAuthorityAuditReport(request), context);
}

void ACMPCAClient::CreateCertificateAuthorityAuditReportAsync(const CreateCertificateAuthorityAuditReportRequest& request, const CreateCertificateAuthorityAuditReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ACMPCAClientCreateCertificateAuthorityAuditReportAsyncHelper( this, request, handler, context ); } );
}

CreatePermissionOutcome ACMPCAClient::CreatePermission(const CreatePermissionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreatePermissionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePermissionOutcomeCallable ACMPCAClient::CreatePermissionCallable(const CreatePermissionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePermissionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePermission(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMPCAClientCreatePermissionAsyncHelper(ACMPCAClient const * const clientThis, const CreatePermissionRequest& request, const CreatePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreatePermission(request), context);
}

void ACMPCAClient::CreatePermissionAsync(const CreatePermissionRequest& request, const CreatePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ACMPCAClientCreatePermissionAsyncHelper( this, request, handler, context ); } );
}

DeleteCertificateAuthorityOutcome ACMPCAClient::DeleteCertificateAuthority(const DeleteCertificateAuthorityRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteCertificateAuthorityOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteCertificateAuthorityOutcomeCallable ACMPCAClient::DeleteCertificateAuthorityCallable(const DeleteCertificateAuthorityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCertificateAuthorityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCertificateAuthority(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMPCAClientDeleteCertificateAuthorityAsyncHelper(ACMPCAClient const * const clientThis, const DeleteCertificateAuthorityRequest& request, const DeleteCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteCertificateAuthority(request), context);
}

void ACMPCAClient::DeleteCertificateAuthorityAsync(const DeleteCertificateAuthorityRequest& request, const DeleteCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ACMPCAClientDeleteCertificateAuthorityAsyncHelper( this, request, handler, context ); } );
}

DeletePermissionOutcome ACMPCAClient::DeletePermission(const DeletePermissionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeletePermissionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeletePermissionOutcomeCallable ACMPCAClient::DeletePermissionCallable(const DeletePermissionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePermissionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePermission(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMPCAClientDeletePermissionAsyncHelper(ACMPCAClient const * const clientThis, const DeletePermissionRequest& request, const DeletePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeletePermission(request), context);
}

void ACMPCAClient::DeletePermissionAsync(const DeletePermissionRequest& request, const DeletePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ACMPCAClientDeletePermissionAsyncHelper( this, request, handler, context ); } );
}

DeletePolicyOutcome ACMPCAClient::DeletePolicy(const DeletePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeletePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeletePolicyOutcomeCallable ACMPCAClient::DeletePolicyCallable(const DeletePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMPCAClientDeletePolicyAsyncHelper(ACMPCAClient const * const clientThis, const DeletePolicyRequest& request, const DeletePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeletePolicy(request), context);
}

void ACMPCAClient::DeletePolicyAsync(const DeletePolicyRequest& request, const DeletePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ACMPCAClientDeletePolicyAsyncHelper( this, request, handler, context ); } );
}

DescribeCertificateAuthorityOutcome ACMPCAClient::DescribeCertificateAuthority(const DescribeCertificateAuthorityRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeCertificateAuthorityOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeCertificateAuthorityOutcomeCallable ACMPCAClient::DescribeCertificateAuthorityCallable(const DescribeCertificateAuthorityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCertificateAuthorityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCertificateAuthority(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMPCAClientDescribeCertificateAuthorityAsyncHelper(ACMPCAClient const * const clientThis, const DescribeCertificateAuthorityRequest& request, const DescribeCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeCertificateAuthority(request), context);
}

void ACMPCAClient::DescribeCertificateAuthorityAsync(const DescribeCertificateAuthorityRequest& request, const DescribeCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ACMPCAClientDescribeCertificateAuthorityAsyncHelper( this, request, handler, context ); } );
}

DescribeCertificateAuthorityAuditReportOutcome ACMPCAClient::DescribeCertificateAuthorityAuditReport(const DescribeCertificateAuthorityAuditReportRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeCertificateAuthorityAuditReportOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeCertificateAuthorityAuditReportOutcomeCallable ACMPCAClient::DescribeCertificateAuthorityAuditReportCallable(const DescribeCertificateAuthorityAuditReportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCertificateAuthorityAuditReportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCertificateAuthorityAuditReport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMPCAClientDescribeCertificateAuthorityAuditReportAsyncHelper(ACMPCAClient const * const clientThis, const DescribeCertificateAuthorityAuditReportRequest& request, const DescribeCertificateAuthorityAuditReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeCertificateAuthorityAuditReport(request), context);
}

void ACMPCAClient::DescribeCertificateAuthorityAuditReportAsync(const DescribeCertificateAuthorityAuditReportRequest& request, const DescribeCertificateAuthorityAuditReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ACMPCAClientDescribeCertificateAuthorityAuditReportAsyncHelper( this, request, handler, context ); } );
}

GetCertificateOutcome ACMPCAClient::GetCertificate(const GetCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetCertificateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetCertificateOutcomeCallable ACMPCAClient::GetCertificateCallable(const GetCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMPCAClientGetCertificateAsyncHelper(ACMPCAClient const * const clientThis, const GetCertificateRequest& request, const GetCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetCertificate(request), context);
}

void ACMPCAClient::GetCertificateAsync(const GetCertificateRequest& request, const GetCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ACMPCAClientGetCertificateAsyncHelper( this, request, handler, context ); } );
}

GetCertificateAuthorityCertificateOutcome ACMPCAClient::GetCertificateAuthorityCertificate(const GetCertificateAuthorityCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetCertificateAuthorityCertificateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetCertificateAuthorityCertificateOutcomeCallable ACMPCAClient::GetCertificateAuthorityCertificateCallable(const GetCertificateAuthorityCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCertificateAuthorityCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCertificateAuthorityCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMPCAClientGetCertificateAuthorityCertificateAsyncHelper(ACMPCAClient const * const clientThis, const GetCertificateAuthorityCertificateRequest& request, const GetCertificateAuthorityCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetCertificateAuthorityCertificate(request), context);
}

void ACMPCAClient::GetCertificateAuthorityCertificateAsync(const GetCertificateAuthorityCertificateRequest& request, const GetCertificateAuthorityCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ACMPCAClientGetCertificateAuthorityCertificateAsyncHelper( this, request, handler, context ); } );
}

GetCertificateAuthorityCsrOutcome ACMPCAClient::GetCertificateAuthorityCsr(const GetCertificateAuthorityCsrRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetCertificateAuthorityCsrOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetCertificateAuthorityCsrOutcomeCallable ACMPCAClient::GetCertificateAuthorityCsrCallable(const GetCertificateAuthorityCsrRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCertificateAuthorityCsrOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCertificateAuthorityCsr(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMPCAClientGetCertificateAuthorityCsrAsyncHelper(ACMPCAClient const * const clientThis, const GetCertificateAuthorityCsrRequest& request, const GetCertificateAuthorityCsrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetCertificateAuthorityCsr(request), context);
}

void ACMPCAClient::GetCertificateAuthorityCsrAsync(const GetCertificateAuthorityCsrRequest& request, const GetCertificateAuthorityCsrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ACMPCAClientGetCertificateAuthorityCsrAsyncHelper( this, request, handler, context ); } );
}

GetPolicyOutcome ACMPCAClient::GetPolicy(const GetPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetPolicyOutcomeCallable ACMPCAClient::GetPolicyCallable(const GetPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMPCAClientGetPolicyAsyncHelper(ACMPCAClient const * const clientThis, const GetPolicyRequest& request, const GetPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetPolicy(request), context);
}

void ACMPCAClient::GetPolicyAsync(const GetPolicyRequest& request, const GetPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ACMPCAClientGetPolicyAsyncHelper( this, request, handler, context ); } );
}

ImportCertificateAuthorityCertificateOutcome ACMPCAClient::ImportCertificateAuthorityCertificate(const ImportCertificateAuthorityCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ImportCertificateAuthorityCertificateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ImportCertificateAuthorityCertificateOutcomeCallable ACMPCAClient::ImportCertificateAuthorityCertificateCallable(const ImportCertificateAuthorityCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ImportCertificateAuthorityCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ImportCertificateAuthorityCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMPCAClientImportCertificateAuthorityCertificateAsyncHelper(ACMPCAClient const * const clientThis, const ImportCertificateAuthorityCertificateRequest& request, const ImportCertificateAuthorityCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ImportCertificateAuthorityCertificate(request), context);
}

void ACMPCAClient::ImportCertificateAuthorityCertificateAsync(const ImportCertificateAuthorityCertificateRequest& request, const ImportCertificateAuthorityCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ACMPCAClientImportCertificateAuthorityCertificateAsyncHelper( this, request, handler, context ); } );
}

IssueCertificateOutcome ACMPCAClient::IssueCertificate(const IssueCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return IssueCertificateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

IssueCertificateOutcomeCallable ACMPCAClient::IssueCertificateCallable(const IssueCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< IssueCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->IssueCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMPCAClientIssueCertificateAsyncHelper(ACMPCAClient const * const clientThis, const IssueCertificateRequest& request, const IssueCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->IssueCertificate(request), context);
}

void ACMPCAClient::IssueCertificateAsync(const IssueCertificateRequest& request, const IssueCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ACMPCAClientIssueCertificateAsyncHelper( this, request, handler, context ); } );
}

ListCertificateAuthoritiesOutcome ACMPCAClient::ListCertificateAuthorities(const ListCertificateAuthoritiesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListCertificateAuthoritiesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListCertificateAuthoritiesOutcomeCallable ACMPCAClient::ListCertificateAuthoritiesCallable(const ListCertificateAuthoritiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCertificateAuthoritiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCertificateAuthorities(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMPCAClientListCertificateAuthoritiesAsyncHelper(ACMPCAClient const * const clientThis, const ListCertificateAuthoritiesRequest& request, const ListCertificateAuthoritiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListCertificateAuthorities(request), context);
}

void ACMPCAClient::ListCertificateAuthoritiesAsync(const ListCertificateAuthoritiesRequest& request, const ListCertificateAuthoritiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ACMPCAClientListCertificateAuthoritiesAsyncHelper( this, request, handler, context ); } );
}

ListPermissionsOutcome ACMPCAClient::ListPermissions(const ListPermissionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListPermissionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPermissionsOutcomeCallable ACMPCAClient::ListPermissionsCallable(const ListPermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMPCAClientListPermissionsAsyncHelper(ACMPCAClient const * const clientThis, const ListPermissionsRequest& request, const ListPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListPermissions(request), context);
}

void ACMPCAClient::ListPermissionsAsync(const ListPermissionsRequest& request, const ListPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ACMPCAClientListPermissionsAsyncHelper( this, request, handler, context ); } );
}

ListTagsOutcome ACMPCAClient::ListTags(const ListTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsOutcomeCallable ACMPCAClient::ListTagsCallable(const ListTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMPCAClientListTagsAsyncHelper(ACMPCAClient const * const clientThis, const ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTags(request), context);
}

void ACMPCAClient::ListTagsAsync(const ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ACMPCAClientListTagsAsyncHelper( this, request, handler, context ); } );
}

PutPolicyOutcome ACMPCAClient::PutPolicy(const PutPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutPolicyOutcomeCallable ACMPCAClient::PutPolicyCallable(const PutPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMPCAClientPutPolicyAsyncHelper(ACMPCAClient const * const clientThis, const PutPolicyRequest& request, const PutPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutPolicy(request), context);
}

void ACMPCAClient::PutPolicyAsync(const PutPolicyRequest& request, const PutPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ACMPCAClientPutPolicyAsyncHelper( this, request, handler, context ); } );
}

RestoreCertificateAuthorityOutcome ACMPCAClient::RestoreCertificateAuthority(const RestoreCertificateAuthorityRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RestoreCertificateAuthorityOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RestoreCertificateAuthorityOutcomeCallable ACMPCAClient::RestoreCertificateAuthorityCallable(const RestoreCertificateAuthorityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RestoreCertificateAuthorityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RestoreCertificateAuthority(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMPCAClientRestoreCertificateAuthorityAsyncHelper(ACMPCAClient const * const clientThis, const RestoreCertificateAuthorityRequest& request, const RestoreCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RestoreCertificateAuthority(request), context);
}

void ACMPCAClient::RestoreCertificateAuthorityAsync(const RestoreCertificateAuthorityRequest& request, const RestoreCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ACMPCAClientRestoreCertificateAuthorityAsyncHelper( this, request, handler, context ); } );
}

RevokeCertificateOutcome ACMPCAClient::RevokeCertificate(const RevokeCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RevokeCertificateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RevokeCertificateOutcomeCallable ACMPCAClient::RevokeCertificateCallable(const RevokeCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RevokeCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RevokeCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMPCAClientRevokeCertificateAsyncHelper(ACMPCAClient const * const clientThis, const RevokeCertificateRequest& request, const RevokeCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RevokeCertificate(request), context);
}

void ACMPCAClient::RevokeCertificateAsync(const RevokeCertificateRequest& request, const RevokeCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ACMPCAClientRevokeCertificateAsyncHelper( this, request, handler, context ); } );
}

TagCertificateAuthorityOutcome ACMPCAClient::TagCertificateAuthority(const TagCertificateAuthorityRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagCertificateAuthorityOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagCertificateAuthorityOutcomeCallable ACMPCAClient::TagCertificateAuthorityCallable(const TagCertificateAuthorityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagCertificateAuthorityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagCertificateAuthority(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMPCAClientTagCertificateAuthorityAsyncHelper(ACMPCAClient const * const clientThis, const TagCertificateAuthorityRequest& request, const TagCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagCertificateAuthority(request), context);
}

void ACMPCAClient::TagCertificateAuthorityAsync(const TagCertificateAuthorityRequest& request, const TagCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ACMPCAClientTagCertificateAuthorityAsyncHelper( this, request, handler, context ); } );
}

UntagCertificateAuthorityOutcome ACMPCAClient::UntagCertificateAuthority(const UntagCertificateAuthorityRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagCertificateAuthorityOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagCertificateAuthorityOutcomeCallable ACMPCAClient::UntagCertificateAuthorityCallable(const UntagCertificateAuthorityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagCertificateAuthorityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagCertificateAuthority(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMPCAClientUntagCertificateAuthorityAsyncHelper(ACMPCAClient const * const clientThis, const UntagCertificateAuthorityRequest& request, const UntagCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagCertificateAuthority(request), context);
}

void ACMPCAClient::UntagCertificateAuthorityAsync(const UntagCertificateAuthorityRequest& request, const UntagCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ACMPCAClientUntagCertificateAuthorityAsyncHelper( this, request, handler, context ); } );
}

UpdateCertificateAuthorityOutcome ACMPCAClient::UpdateCertificateAuthority(const UpdateCertificateAuthorityRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateCertificateAuthorityOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateCertificateAuthorityOutcomeCallable ACMPCAClient::UpdateCertificateAuthorityCallable(const UpdateCertificateAuthorityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateCertificateAuthorityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateCertificateAuthority(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMPCAClientUpdateCertificateAuthorityAsyncHelper(ACMPCAClient const * const clientThis, const UpdateCertificateAuthorityRequest& request, const UpdateCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateCertificateAuthority(request), context);
}

void ACMPCAClient::UpdateCertificateAuthorityAsync(const UpdateCertificateAuthorityRequest& request, const UpdateCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ACMPCAClientUpdateCertificateAuthorityAsyncHelper( this, request, handler, context ); } );
}

