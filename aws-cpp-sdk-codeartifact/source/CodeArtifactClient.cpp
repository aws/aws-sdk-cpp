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

#include <aws/codeartifact/CodeArtifactClient.h>
#include <aws/codeartifact/CodeArtifactEndpoint.h>
#include <aws/codeartifact/CodeArtifactErrorMarshaller.h>
#include <aws/codeartifact/model/AssociateExternalConnectionRequest.h>
#include <aws/codeartifact/model/CopyPackageVersionsRequest.h>
#include <aws/codeartifact/model/CreateDomainRequest.h>
#include <aws/codeartifact/model/CreateRepositoryRequest.h>
#include <aws/codeartifact/model/DeleteDomainRequest.h>
#include <aws/codeartifact/model/DeleteDomainPermissionsPolicyRequest.h>
#include <aws/codeartifact/model/DeletePackageVersionsRequest.h>
#include <aws/codeartifact/model/DeleteRepositoryRequest.h>
#include <aws/codeartifact/model/DeleteRepositoryPermissionsPolicyRequest.h>
#include <aws/codeartifact/model/DescribeDomainRequest.h>
#include <aws/codeartifact/model/DescribePackageVersionRequest.h>
#include <aws/codeartifact/model/DescribeRepositoryRequest.h>
#include <aws/codeartifact/model/DisassociateExternalConnectionRequest.h>
#include <aws/codeartifact/model/DisposePackageVersionsRequest.h>
#include <aws/codeartifact/model/GetAuthorizationTokenRequest.h>
#include <aws/codeartifact/model/GetDomainPermissionsPolicyRequest.h>
#include <aws/codeartifact/model/GetPackageVersionAssetRequest.h>
#include <aws/codeartifact/model/GetPackageVersionReadmeRequest.h>
#include <aws/codeartifact/model/GetRepositoryEndpointRequest.h>
#include <aws/codeartifact/model/GetRepositoryPermissionsPolicyRequest.h>
#include <aws/codeartifact/model/ListDomainsRequest.h>
#include <aws/codeartifact/model/ListPackageVersionAssetsRequest.h>
#include <aws/codeartifact/model/ListPackageVersionDependenciesRequest.h>
#include <aws/codeartifact/model/ListPackageVersionsRequest.h>
#include <aws/codeartifact/model/ListPackagesRequest.h>
#include <aws/codeartifact/model/ListRepositoriesRequest.h>
#include <aws/codeartifact/model/ListRepositoriesInDomainRequest.h>
#include <aws/codeartifact/model/PutDomainPermissionsPolicyRequest.h>
#include <aws/codeartifact/model/PutRepositoryPermissionsPolicyRequest.h>
#include <aws/codeartifact/model/UpdatePackageVersionsStatusRequest.h>
#include <aws/codeartifact/model/UpdateRepositoryRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CodeArtifact;
using namespace Aws::CodeArtifact::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "codeartifact";
static const char* ALLOCATION_TAG = "CodeArtifactClient";


CodeArtifactClient::CodeArtifactClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<CodeArtifactErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CodeArtifactClient::CodeArtifactClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<CodeArtifactErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CodeArtifactClient::CodeArtifactClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<CodeArtifactErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CodeArtifactClient::~CodeArtifactClient()
{
}

void CodeArtifactClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + CodeArtifactEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void CodeArtifactClient::OverrideEndpoint(const Aws::String& endpoint)
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

AssociateExternalConnectionOutcome CodeArtifactClient::AssociateExternalConnection(const AssociateExternalConnectionRequest& request) const
{
  if (!request.DomainHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateExternalConnection", "Required field: Domain, is not set");
    return AssociateExternalConnectionOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Domain]", false));
  }
  if (!request.RepositoryHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateExternalConnection", "Required field: Repository, is not set");
    return AssociateExternalConnectionOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Repository]", false));
  }
  if (!request.ExternalConnectionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateExternalConnection", "Required field: ExternalConnection, is not set");
    return AssociateExternalConnectionOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ExternalConnection]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/repository/external-connection";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AssociateExternalConnectionOutcome(AssociateExternalConnectionResult(outcome.GetResult()));
  }
  else
  {
    return AssociateExternalConnectionOutcome(outcome.GetError());
  }
}

AssociateExternalConnectionOutcomeCallable CodeArtifactClient::AssociateExternalConnectionCallable(const AssociateExternalConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateExternalConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateExternalConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeArtifactClient::AssociateExternalConnectionAsync(const AssociateExternalConnectionRequest& request, const AssociateExternalConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateExternalConnectionAsyncHelper( request, handler, context ); } );
}

void CodeArtifactClient::AssociateExternalConnectionAsyncHelper(const AssociateExternalConnectionRequest& request, const AssociateExternalConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateExternalConnection(request), context);
}

CopyPackageVersionsOutcome CodeArtifactClient::CopyPackageVersions(const CopyPackageVersionsRequest& request) const
{
  if (!request.DomainHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CopyPackageVersions", "Required field: Domain, is not set");
    return CopyPackageVersionsOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Domain]", false));
  }
  if (!request.SourceRepositoryHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CopyPackageVersions", "Required field: SourceRepository, is not set");
    return CopyPackageVersionsOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SourceRepository]", false));
  }
  if (!request.DestinationRepositoryHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CopyPackageVersions", "Required field: DestinationRepository, is not set");
    return CopyPackageVersionsOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DestinationRepository]", false));
  }
  if (!request.FormatHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CopyPackageVersions", "Required field: Format, is not set");
    return CopyPackageVersionsOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Format]", false));
  }
  if (!request.PackageHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CopyPackageVersions", "Required field: Package, is not set");
    return CopyPackageVersionsOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Package]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/package/versions/copy";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CopyPackageVersionsOutcome(CopyPackageVersionsResult(outcome.GetResult()));
  }
  else
  {
    return CopyPackageVersionsOutcome(outcome.GetError());
  }
}

CopyPackageVersionsOutcomeCallable CodeArtifactClient::CopyPackageVersionsCallable(const CopyPackageVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CopyPackageVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CopyPackageVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeArtifactClient::CopyPackageVersionsAsync(const CopyPackageVersionsRequest& request, const CopyPackageVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CopyPackageVersionsAsyncHelper( request, handler, context ); } );
}

void CodeArtifactClient::CopyPackageVersionsAsyncHelper(const CopyPackageVersionsRequest& request, const CopyPackageVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CopyPackageVersions(request), context);
}

CreateDomainOutcome CodeArtifactClient::CreateDomain(const CreateDomainRequest& request) const
{
  if (!request.DomainHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateDomain", "Required field: Domain, is not set");
    return CreateDomainOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Domain]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/domain";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateDomainOutcome(CreateDomainResult(outcome.GetResult()));
  }
  else
  {
    return CreateDomainOutcome(outcome.GetError());
  }
}

CreateDomainOutcomeCallable CodeArtifactClient::CreateDomainCallable(const CreateDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeArtifactClient::CreateDomainAsync(const CreateDomainRequest& request, const CreateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDomainAsyncHelper( request, handler, context ); } );
}

void CodeArtifactClient::CreateDomainAsyncHelper(const CreateDomainRequest& request, const CreateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDomain(request), context);
}

CreateRepositoryOutcome CodeArtifactClient::CreateRepository(const CreateRepositoryRequest& request) const
{
  if (!request.DomainHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateRepository", "Required field: Domain, is not set");
    return CreateRepositoryOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Domain]", false));
  }
  if (!request.RepositoryHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateRepository", "Required field: Repository, is not set");
    return CreateRepositoryOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Repository]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/repository";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateRepositoryOutcome(CreateRepositoryResult(outcome.GetResult()));
  }
  else
  {
    return CreateRepositoryOutcome(outcome.GetError());
  }
}

CreateRepositoryOutcomeCallable CodeArtifactClient::CreateRepositoryCallable(const CreateRepositoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRepositoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRepository(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeArtifactClient::CreateRepositoryAsync(const CreateRepositoryRequest& request, const CreateRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateRepositoryAsyncHelper( request, handler, context ); } );
}

void CodeArtifactClient::CreateRepositoryAsyncHelper(const CreateRepositoryRequest& request, const CreateRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateRepository(request), context);
}

DeleteDomainOutcome CodeArtifactClient::DeleteDomain(const DeleteDomainRequest& request) const
{
  if (!request.DomainHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDomain", "Required field: Domain, is not set");
    return DeleteDomainOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Domain]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/domain";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteDomainOutcome(DeleteDomainResult(outcome.GetResult()));
  }
  else
  {
    return DeleteDomainOutcome(outcome.GetError());
  }
}

DeleteDomainOutcomeCallable CodeArtifactClient::DeleteDomainCallable(const DeleteDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeArtifactClient::DeleteDomainAsync(const DeleteDomainRequest& request, const DeleteDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDomainAsyncHelper( request, handler, context ); } );
}

void CodeArtifactClient::DeleteDomainAsyncHelper(const DeleteDomainRequest& request, const DeleteDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDomain(request), context);
}

DeleteDomainPermissionsPolicyOutcome CodeArtifactClient::DeleteDomainPermissionsPolicy(const DeleteDomainPermissionsPolicyRequest& request) const
{
  if (!request.DomainHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDomainPermissionsPolicy", "Required field: Domain, is not set");
    return DeleteDomainPermissionsPolicyOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Domain]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/domain/permissions/policy";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteDomainPermissionsPolicyOutcome(DeleteDomainPermissionsPolicyResult(outcome.GetResult()));
  }
  else
  {
    return DeleteDomainPermissionsPolicyOutcome(outcome.GetError());
  }
}

DeleteDomainPermissionsPolicyOutcomeCallable CodeArtifactClient::DeleteDomainPermissionsPolicyCallable(const DeleteDomainPermissionsPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDomainPermissionsPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDomainPermissionsPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeArtifactClient::DeleteDomainPermissionsPolicyAsync(const DeleteDomainPermissionsPolicyRequest& request, const DeleteDomainPermissionsPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDomainPermissionsPolicyAsyncHelper( request, handler, context ); } );
}

void CodeArtifactClient::DeleteDomainPermissionsPolicyAsyncHelper(const DeleteDomainPermissionsPolicyRequest& request, const DeleteDomainPermissionsPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDomainPermissionsPolicy(request), context);
}

DeletePackageVersionsOutcome CodeArtifactClient::DeletePackageVersions(const DeletePackageVersionsRequest& request) const
{
  if (!request.DomainHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeletePackageVersions", "Required field: Domain, is not set");
    return DeletePackageVersionsOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Domain]", false));
  }
  if (!request.RepositoryHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeletePackageVersions", "Required field: Repository, is not set");
    return DeletePackageVersionsOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Repository]", false));
  }
  if (!request.FormatHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeletePackageVersions", "Required field: Format, is not set");
    return DeletePackageVersionsOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Format]", false));
  }
  if (!request.PackageHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeletePackageVersions", "Required field: Package, is not set");
    return DeletePackageVersionsOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Package]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/package/versions/delete";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeletePackageVersionsOutcome(DeletePackageVersionsResult(outcome.GetResult()));
  }
  else
  {
    return DeletePackageVersionsOutcome(outcome.GetError());
  }
}

DeletePackageVersionsOutcomeCallable CodeArtifactClient::DeletePackageVersionsCallable(const DeletePackageVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePackageVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePackageVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeArtifactClient::DeletePackageVersionsAsync(const DeletePackageVersionsRequest& request, const DeletePackageVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeletePackageVersionsAsyncHelper( request, handler, context ); } );
}

void CodeArtifactClient::DeletePackageVersionsAsyncHelper(const DeletePackageVersionsRequest& request, const DeletePackageVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeletePackageVersions(request), context);
}

DeleteRepositoryOutcome CodeArtifactClient::DeleteRepository(const DeleteRepositoryRequest& request) const
{
  if (!request.DomainHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRepository", "Required field: Domain, is not set");
    return DeleteRepositoryOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Domain]", false));
  }
  if (!request.RepositoryHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRepository", "Required field: Repository, is not set");
    return DeleteRepositoryOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Repository]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/repository";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteRepositoryOutcome(DeleteRepositoryResult(outcome.GetResult()));
  }
  else
  {
    return DeleteRepositoryOutcome(outcome.GetError());
  }
}

DeleteRepositoryOutcomeCallable CodeArtifactClient::DeleteRepositoryCallable(const DeleteRepositoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRepositoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRepository(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeArtifactClient::DeleteRepositoryAsync(const DeleteRepositoryRequest& request, const DeleteRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteRepositoryAsyncHelper( request, handler, context ); } );
}

void CodeArtifactClient::DeleteRepositoryAsyncHelper(const DeleteRepositoryRequest& request, const DeleteRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteRepository(request), context);
}

DeleteRepositoryPermissionsPolicyOutcome CodeArtifactClient::DeleteRepositoryPermissionsPolicy(const DeleteRepositoryPermissionsPolicyRequest& request) const
{
  if (!request.DomainHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRepositoryPermissionsPolicy", "Required field: Domain, is not set");
    return DeleteRepositoryPermissionsPolicyOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Domain]", false));
  }
  if (!request.RepositoryHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRepositoryPermissionsPolicy", "Required field: Repository, is not set");
    return DeleteRepositoryPermissionsPolicyOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Repository]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/repository/permissions/policies";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteRepositoryPermissionsPolicyOutcome(DeleteRepositoryPermissionsPolicyResult(outcome.GetResult()));
  }
  else
  {
    return DeleteRepositoryPermissionsPolicyOutcome(outcome.GetError());
  }
}

DeleteRepositoryPermissionsPolicyOutcomeCallable CodeArtifactClient::DeleteRepositoryPermissionsPolicyCallable(const DeleteRepositoryPermissionsPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRepositoryPermissionsPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRepositoryPermissionsPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeArtifactClient::DeleteRepositoryPermissionsPolicyAsync(const DeleteRepositoryPermissionsPolicyRequest& request, const DeleteRepositoryPermissionsPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteRepositoryPermissionsPolicyAsyncHelper( request, handler, context ); } );
}

void CodeArtifactClient::DeleteRepositoryPermissionsPolicyAsyncHelper(const DeleteRepositoryPermissionsPolicyRequest& request, const DeleteRepositoryPermissionsPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteRepositoryPermissionsPolicy(request), context);
}

DescribeDomainOutcome CodeArtifactClient::DescribeDomain(const DescribeDomainRequest& request) const
{
  if (!request.DomainHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDomain", "Required field: Domain, is not set");
    return DescribeDomainOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Domain]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/domain";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeDomainOutcome(DescribeDomainResult(outcome.GetResult()));
  }
  else
  {
    return DescribeDomainOutcome(outcome.GetError());
  }
}

DescribeDomainOutcomeCallable CodeArtifactClient::DescribeDomainCallable(const DescribeDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeArtifactClient::DescribeDomainAsync(const DescribeDomainRequest& request, const DescribeDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDomainAsyncHelper( request, handler, context ); } );
}

void CodeArtifactClient::DescribeDomainAsyncHelper(const DescribeDomainRequest& request, const DescribeDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDomain(request), context);
}

DescribePackageVersionOutcome CodeArtifactClient::DescribePackageVersion(const DescribePackageVersionRequest& request) const
{
  if (!request.DomainHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribePackageVersion", "Required field: Domain, is not set");
    return DescribePackageVersionOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Domain]", false));
  }
  if (!request.RepositoryHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribePackageVersion", "Required field: Repository, is not set");
    return DescribePackageVersionOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Repository]", false));
  }
  if (!request.FormatHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribePackageVersion", "Required field: Format, is not set");
    return DescribePackageVersionOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Format]", false));
  }
  if (!request.PackageHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribePackageVersion", "Required field: Package, is not set");
    return DescribePackageVersionOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Package]", false));
  }
  if (!request.PackageVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribePackageVersion", "Required field: PackageVersion, is not set");
    return DescribePackageVersionOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageVersion]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/package/version";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribePackageVersionOutcome(DescribePackageVersionResult(outcome.GetResult()));
  }
  else
  {
    return DescribePackageVersionOutcome(outcome.GetError());
  }
}

DescribePackageVersionOutcomeCallable CodeArtifactClient::DescribePackageVersionCallable(const DescribePackageVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePackageVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePackageVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeArtifactClient::DescribePackageVersionAsync(const DescribePackageVersionRequest& request, const DescribePackageVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribePackageVersionAsyncHelper( request, handler, context ); } );
}

void CodeArtifactClient::DescribePackageVersionAsyncHelper(const DescribePackageVersionRequest& request, const DescribePackageVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribePackageVersion(request), context);
}

DescribeRepositoryOutcome CodeArtifactClient::DescribeRepository(const DescribeRepositoryRequest& request) const
{
  if (!request.DomainHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeRepository", "Required field: Domain, is not set");
    return DescribeRepositoryOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Domain]", false));
  }
  if (!request.RepositoryHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeRepository", "Required field: Repository, is not set");
    return DescribeRepositoryOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Repository]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/repository";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeRepositoryOutcome(DescribeRepositoryResult(outcome.GetResult()));
  }
  else
  {
    return DescribeRepositoryOutcome(outcome.GetError());
  }
}

DescribeRepositoryOutcomeCallable CodeArtifactClient::DescribeRepositoryCallable(const DescribeRepositoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRepositoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRepository(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeArtifactClient::DescribeRepositoryAsync(const DescribeRepositoryRequest& request, const DescribeRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeRepositoryAsyncHelper( request, handler, context ); } );
}

void CodeArtifactClient::DescribeRepositoryAsyncHelper(const DescribeRepositoryRequest& request, const DescribeRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeRepository(request), context);
}

DisassociateExternalConnectionOutcome CodeArtifactClient::DisassociateExternalConnection(const DisassociateExternalConnectionRequest& request) const
{
  if (!request.DomainHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateExternalConnection", "Required field: Domain, is not set");
    return DisassociateExternalConnectionOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Domain]", false));
  }
  if (!request.RepositoryHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateExternalConnection", "Required field: Repository, is not set");
    return DisassociateExternalConnectionOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Repository]", false));
  }
  if (!request.ExternalConnectionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateExternalConnection", "Required field: ExternalConnection, is not set");
    return DisassociateExternalConnectionOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ExternalConnection]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/repository/external-connection";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DisassociateExternalConnectionOutcome(DisassociateExternalConnectionResult(outcome.GetResult()));
  }
  else
  {
    return DisassociateExternalConnectionOutcome(outcome.GetError());
  }
}

DisassociateExternalConnectionOutcomeCallable CodeArtifactClient::DisassociateExternalConnectionCallable(const DisassociateExternalConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateExternalConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateExternalConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeArtifactClient::DisassociateExternalConnectionAsync(const DisassociateExternalConnectionRequest& request, const DisassociateExternalConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateExternalConnectionAsyncHelper( request, handler, context ); } );
}

void CodeArtifactClient::DisassociateExternalConnectionAsyncHelper(const DisassociateExternalConnectionRequest& request, const DisassociateExternalConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateExternalConnection(request), context);
}

DisposePackageVersionsOutcome CodeArtifactClient::DisposePackageVersions(const DisposePackageVersionsRequest& request) const
{
  if (!request.DomainHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisposePackageVersions", "Required field: Domain, is not set");
    return DisposePackageVersionsOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Domain]", false));
  }
  if (!request.RepositoryHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisposePackageVersions", "Required field: Repository, is not set");
    return DisposePackageVersionsOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Repository]", false));
  }
  if (!request.FormatHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisposePackageVersions", "Required field: Format, is not set");
    return DisposePackageVersionsOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Format]", false));
  }
  if (!request.PackageHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisposePackageVersions", "Required field: Package, is not set");
    return DisposePackageVersionsOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Package]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/package/versions/dispose";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DisposePackageVersionsOutcome(DisposePackageVersionsResult(outcome.GetResult()));
  }
  else
  {
    return DisposePackageVersionsOutcome(outcome.GetError());
  }
}

DisposePackageVersionsOutcomeCallable CodeArtifactClient::DisposePackageVersionsCallable(const DisposePackageVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisposePackageVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisposePackageVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeArtifactClient::DisposePackageVersionsAsync(const DisposePackageVersionsRequest& request, const DisposePackageVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisposePackageVersionsAsyncHelper( request, handler, context ); } );
}

void CodeArtifactClient::DisposePackageVersionsAsyncHelper(const DisposePackageVersionsRequest& request, const DisposePackageVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisposePackageVersions(request), context);
}

GetAuthorizationTokenOutcome CodeArtifactClient::GetAuthorizationToken(const GetAuthorizationTokenRequest& request) const
{
  if (!request.DomainHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAuthorizationToken", "Required field: Domain, is not set");
    return GetAuthorizationTokenOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Domain]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/authorization-token";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetAuthorizationTokenOutcome(GetAuthorizationTokenResult(outcome.GetResult()));
  }
  else
  {
    return GetAuthorizationTokenOutcome(outcome.GetError());
  }
}

GetAuthorizationTokenOutcomeCallable CodeArtifactClient::GetAuthorizationTokenCallable(const GetAuthorizationTokenRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAuthorizationTokenOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAuthorizationToken(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeArtifactClient::GetAuthorizationTokenAsync(const GetAuthorizationTokenRequest& request, const GetAuthorizationTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetAuthorizationTokenAsyncHelper( request, handler, context ); } );
}

void CodeArtifactClient::GetAuthorizationTokenAsyncHelper(const GetAuthorizationTokenRequest& request, const GetAuthorizationTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAuthorizationToken(request), context);
}

GetDomainPermissionsPolicyOutcome CodeArtifactClient::GetDomainPermissionsPolicy(const GetDomainPermissionsPolicyRequest& request) const
{
  if (!request.DomainHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDomainPermissionsPolicy", "Required field: Domain, is not set");
    return GetDomainPermissionsPolicyOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Domain]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/domain/permissions/policy";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetDomainPermissionsPolicyOutcome(GetDomainPermissionsPolicyResult(outcome.GetResult()));
  }
  else
  {
    return GetDomainPermissionsPolicyOutcome(outcome.GetError());
  }
}

GetDomainPermissionsPolicyOutcomeCallable CodeArtifactClient::GetDomainPermissionsPolicyCallable(const GetDomainPermissionsPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDomainPermissionsPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDomainPermissionsPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeArtifactClient::GetDomainPermissionsPolicyAsync(const GetDomainPermissionsPolicyRequest& request, const GetDomainPermissionsPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDomainPermissionsPolicyAsyncHelper( request, handler, context ); } );
}

void CodeArtifactClient::GetDomainPermissionsPolicyAsyncHelper(const GetDomainPermissionsPolicyRequest& request, const GetDomainPermissionsPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDomainPermissionsPolicy(request), context);
}

GetPackageVersionAssetOutcome CodeArtifactClient::GetPackageVersionAsset(const GetPackageVersionAssetRequest& request) const
{
  if (!request.DomainHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPackageVersionAsset", "Required field: Domain, is not set");
    return GetPackageVersionAssetOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Domain]", false));
  }
  if (!request.RepositoryHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPackageVersionAsset", "Required field: Repository, is not set");
    return GetPackageVersionAssetOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Repository]", false));
  }
  if (!request.FormatHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPackageVersionAsset", "Required field: Format, is not set");
    return GetPackageVersionAssetOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Format]", false));
  }
  if (!request.PackageHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPackageVersionAsset", "Required field: Package, is not set");
    return GetPackageVersionAssetOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Package]", false));
  }
  if (!request.PackageVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPackageVersionAsset", "Required field: PackageVersion, is not set");
    return GetPackageVersionAssetOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageVersion]", false));
  }
  if (!request.AssetHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPackageVersionAsset", "Required field: Asset, is not set");
    return GetPackageVersionAssetOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Asset]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/package/version/asset";
  uri.SetPath(uri.GetPath() + ss.str());
  StreamOutcome outcome = MakeRequestWithUnparsedResponse(uri, request, Aws::Http::HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetPackageVersionAssetOutcome(GetPackageVersionAssetResult(outcome.GetResultWithOwnership()));
  }
  else
  {
    return GetPackageVersionAssetOutcome(outcome.GetError());
  }
}

GetPackageVersionAssetOutcomeCallable CodeArtifactClient::GetPackageVersionAssetCallable(const GetPackageVersionAssetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPackageVersionAssetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPackageVersionAsset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeArtifactClient::GetPackageVersionAssetAsync(const GetPackageVersionAssetRequest& request, const GetPackageVersionAssetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetPackageVersionAssetAsyncHelper( request, handler, context ); } );
}

void CodeArtifactClient::GetPackageVersionAssetAsyncHelper(const GetPackageVersionAssetRequest& request, const GetPackageVersionAssetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetPackageVersionAsset(request), context);
}

GetPackageVersionReadmeOutcome CodeArtifactClient::GetPackageVersionReadme(const GetPackageVersionReadmeRequest& request) const
{
  if (!request.DomainHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPackageVersionReadme", "Required field: Domain, is not set");
    return GetPackageVersionReadmeOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Domain]", false));
  }
  if (!request.RepositoryHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPackageVersionReadme", "Required field: Repository, is not set");
    return GetPackageVersionReadmeOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Repository]", false));
  }
  if (!request.FormatHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPackageVersionReadme", "Required field: Format, is not set");
    return GetPackageVersionReadmeOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Format]", false));
  }
  if (!request.PackageHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPackageVersionReadme", "Required field: Package, is not set");
    return GetPackageVersionReadmeOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Package]", false));
  }
  if (!request.PackageVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPackageVersionReadme", "Required field: PackageVersion, is not set");
    return GetPackageVersionReadmeOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageVersion]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/package/version/readme";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetPackageVersionReadmeOutcome(GetPackageVersionReadmeResult(outcome.GetResult()));
  }
  else
  {
    return GetPackageVersionReadmeOutcome(outcome.GetError());
  }
}

GetPackageVersionReadmeOutcomeCallable CodeArtifactClient::GetPackageVersionReadmeCallable(const GetPackageVersionReadmeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPackageVersionReadmeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPackageVersionReadme(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeArtifactClient::GetPackageVersionReadmeAsync(const GetPackageVersionReadmeRequest& request, const GetPackageVersionReadmeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetPackageVersionReadmeAsyncHelper( request, handler, context ); } );
}

void CodeArtifactClient::GetPackageVersionReadmeAsyncHelper(const GetPackageVersionReadmeRequest& request, const GetPackageVersionReadmeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetPackageVersionReadme(request), context);
}

GetRepositoryEndpointOutcome CodeArtifactClient::GetRepositoryEndpoint(const GetRepositoryEndpointRequest& request) const
{
  if (!request.DomainHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRepositoryEndpoint", "Required field: Domain, is not set");
    return GetRepositoryEndpointOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Domain]", false));
  }
  if (!request.RepositoryHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRepositoryEndpoint", "Required field: Repository, is not set");
    return GetRepositoryEndpointOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Repository]", false));
  }
  if (!request.FormatHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRepositoryEndpoint", "Required field: Format, is not set");
    return GetRepositoryEndpointOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Format]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/repository/endpoint";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetRepositoryEndpointOutcome(GetRepositoryEndpointResult(outcome.GetResult()));
  }
  else
  {
    return GetRepositoryEndpointOutcome(outcome.GetError());
  }
}

GetRepositoryEndpointOutcomeCallable CodeArtifactClient::GetRepositoryEndpointCallable(const GetRepositoryEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRepositoryEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRepositoryEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeArtifactClient::GetRepositoryEndpointAsync(const GetRepositoryEndpointRequest& request, const GetRepositoryEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetRepositoryEndpointAsyncHelper( request, handler, context ); } );
}

void CodeArtifactClient::GetRepositoryEndpointAsyncHelper(const GetRepositoryEndpointRequest& request, const GetRepositoryEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetRepositoryEndpoint(request), context);
}

GetRepositoryPermissionsPolicyOutcome CodeArtifactClient::GetRepositoryPermissionsPolicy(const GetRepositoryPermissionsPolicyRequest& request) const
{
  if (!request.DomainHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRepositoryPermissionsPolicy", "Required field: Domain, is not set");
    return GetRepositoryPermissionsPolicyOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Domain]", false));
  }
  if (!request.RepositoryHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRepositoryPermissionsPolicy", "Required field: Repository, is not set");
    return GetRepositoryPermissionsPolicyOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Repository]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/repository/permissions/policy";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetRepositoryPermissionsPolicyOutcome(GetRepositoryPermissionsPolicyResult(outcome.GetResult()));
  }
  else
  {
    return GetRepositoryPermissionsPolicyOutcome(outcome.GetError());
  }
}

GetRepositoryPermissionsPolicyOutcomeCallable CodeArtifactClient::GetRepositoryPermissionsPolicyCallable(const GetRepositoryPermissionsPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRepositoryPermissionsPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRepositoryPermissionsPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeArtifactClient::GetRepositoryPermissionsPolicyAsync(const GetRepositoryPermissionsPolicyRequest& request, const GetRepositoryPermissionsPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetRepositoryPermissionsPolicyAsyncHelper( request, handler, context ); } );
}

void CodeArtifactClient::GetRepositoryPermissionsPolicyAsyncHelper(const GetRepositoryPermissionsPolicyRequest& request, const GetRepositoryPermissionsPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetRepositoryPermissionsPolicy(request), context);
}

ListDomainsOutcome CodeArtifactClient::ListDomains(const ListDomainsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/domains";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListDomainsOutcome(ListDomainsResult(outcome.GetResult()));
  }
  else
  {
    return ListDomainsOutcome(outcome.GetError());
  }
}

ListDomainsOutcomeCallable CodeArtifactClient::ListDomainsCallable(const ListDomainsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDomainsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDomains(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeArtifactClient::ListDomainsAsync(const ListDomainsRequest& request, const ListDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDomainsAsyncHelper( request, handler, context ); } );
}

void CodeArtifactClient::ListDomainsAsyncHelper(const ListDomainsRequest& request, const ListDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDomains(request), context);
}

ListPackageVersionAssetsOutcome CodeArtifactClient::ListPackageVersionAssets(const ListPackageVersionAssetsRequest& request) const
{
  if (!request.DomainHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListPackageVersionAssets", "Required field: Domain, is not set");
    return ListPackageVersionAssetsOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Domain]", false));
  }
  if (!request.RepositoryHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListPackageVersionAssets", "Required field: Repository, is not set");
    return ListPackageVersionAssetsOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Repository]", false));
  }
  if (!request.FormatHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListPackageVersionAssets", "Required field: Format, is not set");
    return ListPackageVersionAssetsOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Format]", false));
  }
  if (!request.PackageHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListPackageVersionAssets", "Required field: Package, is not set");
    return ListPackageVersionAssetsOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Package]", false));
  }
  if (!request.PackageVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListPackageVersionAssets", "Required field: PackageVersion, is not set");
    return ListPackageVersionAssetsOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageVersion]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/package/version/assets";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListPackageVersionAssetsOutcome(ListPackageVersionAssetsResult(outcome.GetResult()));
  }
  else
  {
    return ListPackageVersionAssetsOutcome(outcome.GetError());
  }
}

ListPackageVersionAssetsOutcomeCallable CodeArtifactClient::ListPackageVersionAssetsCallable(const ListPackageVersionAssetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPackageVersionAssetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPackageVersionAssets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeArtifactClient::ListPackageVersionAssetsAsync(const ListPackageVersionAssetsRequest& request, const ListPackageVersionAssetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListPackageVersionAssetsAsyncHelper( request, handler, context ); } );
}

void CodeArtifactClient::ListPackageVersionAssetsAsyncHelper(const ListPackageVersionAssetsRequest& request, const ListPackageVersionAssetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPackageVersionAssets(request), context);
}

ListPackageVersionDependenciesOutcome CodeArtifactClient::ListPackageVersionDependencies(const ListPackageVersionDependenciesRequest& request) const
{
  if (!request.DomainHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListPackageVersionDependencies", "Required field: Domain, is not set");
    return ListPackageVersionDependenciesOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Domain]", false));
  }
  if (!request.RepositoryHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListPackageVersionDependencies", "Required field: Repository, is not set");
    return ListPackageVersionDependenciesOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Repository]", false));
  }
  if (!request.FormatHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListPackageVersionDependencies", "Required field: Format, is not set");
    return ListPackageVersionDependenciesOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Format]", false));
  }
  if (!request.PackageHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListPackageVersionDependencies", "Required field: Package, is not set");
    return ListPackageVersionDependenciesOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Package]", false));
  }
  if (!request.PackageVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListPackageVersionDependencies", "Required field: PackageVersion, is not set");
    return ListPackageVersionDependenciesOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageVersion]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/package/version/dependencies";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListPackageVersionDependenciesOutcome(ListPackageVersionDependenciesResult(outcome.GetResult()));
  }
  else
  {
    return ListPackageVersionDependenciesOutcome(outcome.GetError());
  }
}

ListPackageVersionDependenciesOutcomeCallable CodeArtifactClient::ListPackageVersionDependenciesCallable(const ListPackageVersionDependenciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPackageVersionDependenciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPackageVersionDependencies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeArtifactClient::ListPackageVersionDependenciesAsync(const ListPackageVersionDependenciesRequest& request, const ListPackageVersionDependenciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListPackageVersionDependenciesAsyncHelper( request, handler, context ); } );
}

void CodeArtifactClient::ListPackageVersionDependenciesAsyncHelper(const ListPackageVersionDependenciesRequest& request, const ListPackageVersionDependenciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPackageVersionDependencies(request), context);
}

ListPackageVersionsOutcome CodeArtifactClient::ListPackageVersions(const ListPackageVersionsRequest& request) const
{
  if (!request.DomainHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListPackageVersions", "Required field: Domain, is not set");
    return ListPackageVersionsOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Domain]", false));
  }
  if (!request.RepositoryHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListPackageVersions", "Required field: Repository, is not set");
    return ListPackageVersionsOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Repository]", false));
  }
  if (!request.FormatHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListPackageVersions", "Required field: Format, is not set");
    return ListPackageVersionsOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Format]", false));
  }
  if (!request.PackageHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListPackageVersions", "Required field: Package, is not set");
    return ListPackageVersionsOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Package]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/package/versions";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListPackageVersionsOutcome(ListPackageVersionsResult(outcome.GetResult()));
  }
  else
  {
    return ListPackageVersionsOutcome(outcome.GetError());
  }
}

ListPackageVersionsOutcomeCallable CodeArtifactClient::ListPackageVersionsCallable(const ListPackageVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPackageVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPackageVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeArtifactClient::ListPackageVersionsAsync(const ListPackageVersionsRequest& request, const ListPackageVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListPackageVersionsAsyncHelper( request, handler, context ); } );
}

void CodeArtifactClient::ListPackageVersionsAsyncHelper(const ListPackageVersionsRequest& request, const ListPackageVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPackageVersions(request), context);
}

ListPackagesOutcome CodeArtifactClient::ListPackages(const ListPackagesRequest& request) const
{
  if (!request.DomainHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListPackages", "Required field: Domain, is not set");
    return ListPackagesOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Domain]", false));
  }
  if (!request.RepositoryHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListPackages", "Required field: Repository, is not set");
    return ListPackagesOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Repository]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/packages";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListPackagesOutcome(ListPackagesResult(outcome.GetResult()));
  }
  else
  {
    return ListPackagesOutcome(outcome.GetError());
  }
}

ListPackagesOutcomeCallable CodeArtifactClient::ListPackagesCallable(const ListPackagesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPackagesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPackages(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeArtifactClient::ListPackagesAsync(const ListPackagesRequest& request, const ListPackagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListPackagesAsyncHelper( request, handler, context ); } );
}

void CodeArtifactClient::ListPackagesAsyncHelper(const ListPackagesRequest& request, const ListPackagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPackages(request), context);
}

ListRepositoriesOutcome CodeArtifactClient::ListRepositories(const ListRepositoriesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/repositories";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListRepositoriesOutcome(ListRepositoriesResult(outcome.GetResult()));
  }
  else
  {
    return ListRepositoriesOutcome(outcome.GetError());
  }
}

ListRepositoriesOutcomeCallable CodeArtifactClient::ListRepositoriesCallable(const ListRepositoriesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRepositoriesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRepositories(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeArtifactClient::ListRepositoriesAsync(const ListRepositoriesRequest& request, const ListRepositoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListRepositoriesAsyncHelper( request, handler, context ); } );
}

void CodeArtifactClient::ListRepositoriesAsyncHelper(const ListRepositoriesRequest& request, const ListRepositoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListRepositories(request), context);
}

ListRepositoriesInDomainOutcome CodeArtifactClient::ListRepositoriesInDomain(const ListRepositoriesInDomainRequest& request) const
{
  if (!request.DomainHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListRepositoriesInDomain", "Required field: Domain, is not set");
    return ListRepositoriesInDomainOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Domain]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/domain/repositories";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListRepositoriesInDomainOutcome(ListRepositoriesInDomainResult(outcome.GetResult()));
  }
  else
  {
    return ListRepositoriesInDomainOutcome(outcome.GetError());
  }
}

ListRepositoriesInDomainOutcomeCallable CodeArtifactClient::ListRepositoriesInDomainCallable(const ListRepositoriesInDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRepositoriesInDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRepositoriesInDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeArtifactClient::ListRepositoriesInDomainAsync(const ListRepositoriesInDomainRequest& request, const ListRepositoriesInDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListRepositoriesInDomainAsyncHelper( request, handler, context ); } );
}

void CodeArtifactClient::ListRepositoriesInDomainAsyncHelper(const ListRepositoriesInDomainRequest& request, const ListRepositoriesInDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListRepositoriesInDomain(request), context);
}

PutDomainPermissionsPolicyOutcome CodeArtifactClient::PutDomainPermissionsPolicy(const PutDomainPermissionsPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/domain/permissions/policy";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutDomainPermissionsPolicyOutcome(PutDomainPermissionsPolicyResult(outcome.GetResult()));
  }
  else
  {
    return PutDomainPermissionsPolicyOutcome(outcome.GetError());
  }
}

PutDomainPermissionsPolicyOutcomeCallable CodeArtifactClient::PutDomainPermissionsPolicyCallable(const PutDomainPermissionsPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutDomainPermissionsPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutDomainPermissionsPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeArtifactClient::PutDomainPermissionsPolicyAsync(const PutDomainPermissionsPolicyRequest& request, const PutDomainPermissionsPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutDomainPermissionsPolicyAsyncHelper( request, handler, context ); } );
}

void CodeArtifactClient::PutDomainPermissionsPolicyAsyncHelper(const PutDomainPermissionsPolicyRequest& request, const PutDomainPermissionsPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutDomainPermissionsPolicy(request), context);
}

PutRepositoryPermissionsPolicyOutcome CodeArtifactClient::PutRepositoryPermissionsPolicy(const PutRepositoryPermissionsPolicyRequest& request) const
{
  if (!request.DomainHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutRepositoryPermissionsPolicy", "Required field: Domain, is not set");
    return PutRepositoryPermissionsPolicyOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Domain]", false));
  }
  if (!request.RepositoryHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutRepositoryPermissionsPolicy", "Required field: Repository, is not set");
    return PutRepositoryPermissionsPolicyOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Repository]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/repository/permissions/policy";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutRepositoryPermissionsPolicyOutcome(PutRepositoryPermissionsPolicyResult(outcome.GetResult()));
  }
  else
  {
    return PutRepositoryPermissionsPolicyOutcome(outcome.GetError());
  }
}

PutRepositoryPermissionsPolicyOutcomeCallable CodeArtifactClient::PutRepositoryPermissionsPolicyCallable(const PutRepositoryPermissionsPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutRepositoryPermissionsPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutRepositoryPermissionsPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeArtifactClient::PutRepositoryPermissionsPolicyAsync(const PutRepositoryPermissionsPolicyRequest& request, const PutRepositoryPermissionsPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutRepositoryPermissionsPolicyAsyncHelper( request, handler, context ); } );
}

void CodeArtifactClient::PutRepositoryPermissionsPolicyAsyncHelper(const PutRepositoryPermissionsPolicyRequest& request, const PutRepositoryPermissionsPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutRepositoryPermissionsPolicy(request), context);
}

UpdatePackageVersionsStatusOutcome CodeArtifactClient::UpdatePackageVersionsStatus(const UpdatePackageVersionsStatusRequest& request) const
{
  if (!request.DomainHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdatePackageVersionsStatus", "Required field: Domain, is not set");
    return UpdatePackageVersionsStatusOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Domain]", false));
  }
  if (!request.RepositoryHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdatePackageVersionsStatus", "Required field: Repository, is not set");
    return UpdatePackageVersionsStatusOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Repository]", false));
  }
  if (!request.FormatHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdatePackageVersionsStatus", "Required field: Format, is not set");
    return UpdatePackageVersionsStatusOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Format]", false));
  }
  if (!request.PackageHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdatePackageVersionsStatus", "Required field: Package, is not set");
    return UpdatePackageVersionsStatusOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Package]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/package/versions/update_status";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdatePackageVersionsStatusOutcome(UpdatePackageVersionsStatusResult(outcome.GetResult()));
  }
  else
  {
    return UpdatePackageVersionsStatusOutcome(outcome.GetError());
  }
}

UpdatePackageVersionsStatusOutcomeCallable CodeArtifactClient::UpdatePackageVersionsStatusCallable(const UpdatePackageVersionsStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePackageVersionsStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePackageVersionsStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeArtifactClient::UpdatePackageVersionsStatusAsync(const UpdatePackageVersionsStatusRequest& request, const UpdatePackageVersionsStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdatePackageVersionsStatusAsyncHelper( request, handler, context ); } );
}

void CodeArtifactClient::UpdatePackageVersionsStatusAsyncHelper(const UpdatePackageVersionsStatusRequest& request, const UpdatePackageVersionsStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdatePackageVersionsStatus(request), context);
}

UpdateRepositoryOutcome CodeArtifactClient::UpdateRepository(const UpdateRepositoryRequest& request) const
{
  if (!request.DomainHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRepository", "Required field: Domain, is not set");
    return UpdateRepositoryOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Domain]", false));
  }
  if (!request.RepositoryHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRepository", "Required field: Repository, is not set");
    return UpdateRepositoryOutcome(Aws::Client::AWSError<CodeArtifactErrors>(CodeArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Repository]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/repository";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateRepositoryOutcome(UpdateRepositoryResult(outcome.GetResult()));
  }
  else
  {
    return UpdateRepositoryOutcome(outcome.GetError());
  }
}

UpdateRepositoryOutcomeCallable CodeArtifactClient::UpdateRepositoryCallable(const UpdateRepositoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRepositoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRepository(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeArtifactClient::UpdateRepositoryAsync(const UpdateRepositoryRequest& request, const UpdateRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateRepositoryAsyncHelper( request, handler, context ); } );
}

void CodeArtifactClient::UpdateRepositoryAsyncHelper(const UpdateRepositoryRequest& request, const UpdateRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateRepository(request), context);
}

