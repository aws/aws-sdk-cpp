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
#include <aws/servicecatalog/ServiceCatalogClient.h>
#include <aws/servicecatalog/ServiceCatalogEndpoint.h>
#include <aws/servicecatalog/ServiceCatalogErrorMarshaller.h>
#include <aws/servicecatalog/model/AcceptPortfolioShareRequest.h>
#include <aws/servicecatalog/model/AssociatePrincipalWithPortfolioRequest.h>
#include <aws/servicecatalog/model/AssociateProductWithPortfolioRequest.h>
#include <aws/servicecatalog/model/AssociateTagOptionWithResourceRequest.h>
#include <aws/servicecatalog/model/CopyProductRequest.h>
#include <aws/servicecatalog/model/CreateConstraintRequest.h>
#include <aws/servicecatalog/model/CreatePortfolioRequest.h>
#include <aws/servicecatalog/model/CreatePortfolioShareRequest.h>
#include <aws/servicecatalog/model/CreateProductRequest.h>
#include <aws/servicecatalog/model/CreateProvisionedProductPlanRequest.h>
#include <aws/servicecatalog/model/CreateProvisioningArtifactRequest.h>
#include <aws/servicecatalog/model/CreateTagOptionRequest.h>
#include <aws/servicecatalog/model/DeleteConstraintRequest.h>
#include <aws/servicecatalog/model/DeletePortfolioRequest.h>
#include <aws/servicecatalog/model/DeletePortfolioShareRequest.h>
#include <aws/servicecatalog/model/DeleteProductRequest.h>
#include <aws/servicecatalog/model/DeleteProvisionedProductPlanRequest.h>
#include <aws/servicecatalog/model/DeleteProvisioningArtifactRequest.h>
#include <aws/servicecatalog/model/DeleteTagOptionRequest.h>
#include <aws/servicecatalog/model/DescribeConstraintRequest.h>
#include <aws/servicecatalog/model/DescribeCopyProductStatusRequest.h>
#include <aws/servicecatalog/model/DescribePortfolioRequest.h>
#include <aws/servicecatalog/model/DescribeProductRequest.h>
#include <aws/servicecatalog/model/DescribeProductAsAdminRequest.h>
#include <aws/servicecatalog/model/DescribeProductViewRequest.h>
#include <aws/servicecatalog/model/DescribeProvisionedProductRequest.h>
#include <aws/servicecatalog/model/DescribeProvisionedProductPlanRequest.h>
#include <aws/servicecatalog/model/DescribeProvisioningArtifactRequest.h>
#include <aws/servicecatalog/model/DescribeProvisioningParametersRequest.h>
#include <aws/servicecatalog/model/DescribeRecordRequest.h>
#include <aws/servicecatalog/model/DescribeTagOptionRequest.h>
#include <aws/servicecatalog/model/DisassociatePrincipalFromPortfolioRequest.h>
#include <aws/servicecatalog/model/DisassociateProductFromPortfolioRequest.h>
#include <aws/servicecatalog/model/DisassociateTagOptionFromResourceRequest.h>
#include <aws/servicecatalog/model/ExecuteProvisionedProductPlanRequest.h>
#include <aws/servicecatalog/model/ListAcceptedPortfolioSharesRequest.h>
#include <aws/servicecatalog/model/ListConstraintsForPortfolioRequest.h>
#include <aws/servicecatalog/model/ListLaunchPathsRequest.h>
#include <aws/servicecatalog/model/ListPortfolioAccessRequest.h>
#include <aws/servicecatalog/model/ListPortfoliosRequest.h>
#include <aws/servicecatalog/model/ListPortfoliosForProductRequest.h>
#include <aws/servicecatalog/model/ListPrincipalsForPortfolioRequest.h>
#include <aws/servicecatalog/model/ListProvisionedProductPlansRequest.h>
#include <aws/servicecatalog/model/ListProvisioningArtifactsRequest.h>
#include <aws/servicecatalog/model/ListRecordHistoryRequest.h>
#include <aws/servicecatalog/model/ListResourcesForTagOptionRequest.h>
#include <aws/servicecatalog/model/ListTagOptionsRequest.h>
#include <aws/servicecatalog/model/ProvisionProductRequest.h>
#include <aws/servicecatalog/model/RejectPortfolioShareRequest.h>
#include <aws/servicecatalog/model/ScanProvisionedProductsRequest.h>
#include <aws/servicecatalog/model/SearchProductsRequest.h>
#include <aws/servicecatalog/model/SearchProductsAsAdminRequest.h>
#include <aws/servicecatalog/model/SearchProvisionedProductsRequest.h>
#include <aws/servicecatalog/model/TerminateProvisionedProductRequest.h>
#include <aws/servicecatalog/model/UpdateConstraintRequest.h>
#include <aws/servicecatalog/model/UpdatePortfolioRequest.h>
#include <aws/servicecatalog/model/UpdateProductRequest.h>
#include <aws/servicecatalog/model/UpdateProvisionedProductRequest.h>
#include <aws/servicecatalog/model/UpdateProvisioningArtifactRequest.h>
#include <aws/servicecatalog/model/UpdateTagOptionRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ServiceCatalog;
using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "servicecatalog";
static const char* ALLOCATION_TAG = "ServiceCatalogClient";


ServiceCatalogClient::ServiceCatalogClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ServiceCatalogErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ServiceCatalogClient::ServiceCatalogClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ServiceCatalogErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ServiceCatalogClient::ServiceCatalogClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ServiceCatalogErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ServiceCatalogClient::~ServiceCatalogClient()
{
}

void ServiceCatalogClient::init(const ClientConfiguration& config)
{
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty())
  {
    ss << ServiceCatalogEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}

AcceptPortfolioShareOutcome ServiceCatalogClient::AcceptPortfolioShare(const AcceptPortfolioShareRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AcceptPortfolioShareOutcome(AcceptPortfolioShareResult(outcome.GetResult()));
  }
  else
  {
    return AcceptPortfolioShareOutcome(outcome.GetError());
  }
}

AcceptPortfolioShareOutcomeCallable ServiceCatalogClient::AcceptPortfolioShareCallable(const AcceptPortfolioShareRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AcceptPortfolioShareOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AcceptPortfolioShare(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::AcceptPortfolioShareAsync(const AcceptPortfolioShareRequest& request, const AcceptPortfolioShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AcceptPortfolioShareAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::AcceptPortfolioShareAsyncHelper(const AcceptPortfolioShareRequest& request, const AcceptPortfolioShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AcceptPortfolioShare(request), context);
}

AssociatePrincipalWithPortfolioOutcome ServiceCatalogClient::AssociatePrincipalWithPortfolio(const AssociatePrincipalWithPortfolioRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AssociatePrincipalWithPortfolioOutcome(AssociatePrincipalWithPortfolioResult(outcome.GetResult()));
  }
  else
  {
    return AssociatePrincipalWithPortfolioOutcome(outcome.GetError());
  }
}

AssociatePrincipalWithPortfolioOutcomeCallable ServiceCatalogClient::AssociatePrincipalWithPortfolioCallable(const AssociatePrincipalWithPortfolioRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociatePrincipalWithPortfolioOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociatePrincipalWithPortfolio(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::AssociatePrincipalWithPortfolioAsync(const AssociatePrincipalWithPortfolioRequest& request, const AssociatePrincipalWithPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociatePrincipalWithPortfolioAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::AssociatePrincipalWithPortfolioAsyncHelper(const AssociatePrincipalWithPortfolioRequest& request, const AssociatePrincipalWithPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociatePrincipalWithPortfolio(request), context);
}

AssociateProductWithPortfolioOutcome ServiceCatalogClient::AssociateProductWithPortfolio(const AssociateProductWithPortfolioRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AssociateProductWithPortfolioOutcome(AssociateProductWithPortfolioResult(outcome.GetResult()));
  }
  else
  {
    return AssociateProductWithPortfolioOutcome(outcome.GetError());
  }
}

AssociateProductWithPortfolioOutcomeCallable ServiceCatalogClient::AssociateProductWithPortfolioCallable(const AssociateProductWithPortfolioRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateProductWithPortfolioOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateProductWithPortfolio(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::AssociateProductWithPortfolioAsync(const AssociateProductWithPortfolioRequest& request, const AssociateProductWithPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateProductWithPortfolioAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::AssociateProductWithPortfolioAsyncHelper(const AssociateProductWithPortfolioRequest& request, const AssociateProductWithPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateProductWithPortfolio(request), context);
}

AssociateTagOptionWithResourceOutcome ServiceCatalogClient::AssociateTagOptionWithResource(const AssociateTagOptionWithResourceRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AssociateTagOptionWithResourceOutcome(AssociateTagOptionWithResourceResult(outcome.GetResult()));
  }
  else
  {
    return AssociateTagOptionWithResourceOutcome(outcome.GetError());
  }
}

AssociateTagOptionWithResourceOutcomeCallable ServiceCatalogClient::AssociateTagOptionWithResourceCallable(const AssociateTagOptionWithResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateTagOptionWithResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateTagOptionWithResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::AssociateTagOptionWithResourceAsync(const AssociateTagOptionWithResourceRequest& request, const AssociateTagOptionWithResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateTagOptionWithResourceAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::AssociateTagOptionWithResourceAsyncHelper(const AssociateTagOptionWithResourceRequest& request, const AssociateTagOptionWithResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateTagOptionWithResource(request), context);
}

CopyProductOutcome ServiceCatalogClient::CopyProduct(const CopyProductRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CopyProductOutcome(CopyProductResult(outcome.GetResult()));
  }
  else
  {
    return CopyProductOutcome(outcome.GetError());
  }
}

CopyProductOutcomeCallable ServiceCatalogClient::CopyProductCallable(const CopyProductRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CopyProductOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CopyProduct(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::CopyProductAsync(const CopyProductRequest& request, const CopyProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CopyProductAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::CopyProductAsyncHelper(const CopyProductRequest& request, const CopyProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CopyProduct(request), context);
}

CreateConstraintOutcome ServiceCatalogClient::CreateConstraint(const CreateConstraintRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateConstraintOutcome(CreateConstraintResult(outcome.GetResult()));
  }
  else
  {
    return CreateConstraintOutcome(outcome.GetError());
  }
}

CreateConstraintOutcomeCallable ServiceCatalogClient::CreateConstraintCallable(const CreateConstraintRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateConstraintOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateConstraint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::CreateConstraintAsync(const CreateConstraintRequest& request, const CreateConstraintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateConstraintAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::CreateConstraintAsyncHelper(const CreateConstraintRequest& request, const CreateConstraintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateConstraint(request), context);
}

CreatePortfolioOutcome ServiceCatalogClient::CreatePortfolio(const CreatePortfolioRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreatePortfolioOutcome(CreatePortfolioResult(outcome.GetResult()));
  }
  else
  {
    return CreatePortfolioOutcome(outcome.GetError());
  }
}

CreatePortfolioOutcomeCallable ServiceCatalogClient::CreatePortfolioCallable(const CreatePortfolioRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePortfolioOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePortfolio(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::CreatePortfolioAsync(const CreatePortfolioRequest& request, const CreatePortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreatePortfolioAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::CreatePortfolioAsyncHelper(const CreatePortfolioRequest& request, const CreatePortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreatePortfolio(request), context);
}

CreatePortfolioShareOutcome ServiceCatalogClient::CreatePortfolioShare(const CreatePortfolioShareRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreatePortfolioShareOutcome(CreatePortfolioShareResult(outcome.GetResult()));
  }
  else
  {
    return CreatePortfolioShareOutcome(outcome.GetError());
  }
}

CreatePortfolioShareOutcomeCallable ServiceCatalogClient::CreatePortfolioShareCallable(const CreatePortfolioShareRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePortfolioShareOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePortfolioShare(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::CreatePortfolioShareAsync(const CreatePortfolioShareRequest& request, const CreatePortfolioShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreatePortfolioShareAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::CreatePortfolioShareAsyncHelper(const CreatePortfolioShareRequest& request, const CreatePortfolioShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreatePortfolioShare(request), context);
}

CreateProductOutcome ServiceCatalogClient::CreateProduct(const CreateProductRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateProductOutcome(CreateProductResult(outcome.GetResult()));
  }
  else
  {
    return CreateProductOutcome(outcome.GetError());
  }
}

CreateProductOutcomeCallable ServiceCatalogClient::CreateProductCallable(const CreateProductRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateProductOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateProduct(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::CreateProductAsync(const CreateProductRequest& request, const CreateProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateProductAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::CreateProductAsyncHelper(const CreateProductRequest& request, const CreateProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateProduct(request), context);
}

CreateProvisionedProductPlanOutcome ServiceCatalogClient::CreateProvisionedProductPlan(const CreateProvisionedProductPlanRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateProvisionedProductPlanOutcome(CreateProvisionedProductPlanResult(outcome.GetResult()));
  }
  else
  {
    return CreateProvisionedProductPlanOutcome(outcome.GetError());
  }
}

CreateProvisionedProductPlanOutcomeCallable ServiceCatalogClient::CreateProvisionedProductPlanCallable(const CreateProvisionedProductPlanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateProvisionedProductPlanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateProvisionedProductPlan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::CreateProvisionedProductPlanAsync(const CreateProvisionedProductPlanRequest& request, const CreateProvisionedProductPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateProvisionedProductPlanAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::CreateProvisionedProductPlanAsyncHelper(const CreateProvisionedProductPlanRequest& request, const CreateProvisionedProductPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateProvisionedProductPlan(request), context);
}

CreateProvisioningArtifactOutcome ServiceCatalogClient::CreateProvisioningArtifact(const CreateProvisioningArtifactRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateProvisioningArtifactOutcome(CreateProvisioningArtifactResult(outcome.GetResult()));
  }
  else
  {
    return CreateProvisioningArtifactOutcome(outcome.GetError());
  }
}

CreateProvisioningArtifactOutcomeCallable ServiceCatalogClient::CreateProvisioningArtifactCallable(const CreateProvisioningArtifactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateProvisioningArtifactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateProvisioningArtifact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::CreateProvisioningArtifactAsync(const CreateProvisioningArtifactRequest& request, const CreateProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateProvisioningArtifactAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::CreateProvisioningArtifactAsyncHelper(const CreateProvisioningArtifactRequest& request, const CreateProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateProvisioningArtifact(request), context);
}

CreateTagOptionOutcome ServiceCatalogClient::CreateTagOption(const CreateTagOptionRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateTagOptionOutcome(CreateTagOptionResult(outcome.GetResult()));
  }
  else
  {
    return CreateTagOptionOutcome(outcome.GetError());
  }
}

CreateTagOptionOutcomeCallable ServiceCatalogClient::CreateTagOptionCallable(const CreateTagOptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTagOptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTagOption(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::CreateTagOptionAsync(const CreateTagOptionRequest& request, const CreateTagOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateTagOptionAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::CreateTagOptionAsyncHelper(const CreateTagOptionRequest& request, const CreateTagOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateTagOption(request), context);
}

DeleteConstraintOutcome ServiceCatalogClient::DeleteConstraint(const DeleteConstraintRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteConstraintOutcome(DeleteConstraintResult(outcome.GetResult()));
  }
  else
  {
    return DeleteConstraintOutcome(outcome.GetError());
  }
}

DeleteConstraintOutcomeCallable ServiceCatalogClient::DeleteConstraintCallable(const DeleteConstraintRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteConstraintOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteConstraint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::DeleteConstraintAsync(const DeleteConstraintRequest& request, const DeleteConstraintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteConstraintAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::DeleteConstraintAsyncHelper(const DeleteConstraintRequest& request, const DeleteConstraintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteConstraint(request), context);
}

DeletePortfolioOutcome ServiceCatalogClient::DeletePortfolio(const DeletePortfolioRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeletePortfolioOutcome(DeletePortfolioResult(outcome.GetResult()));
  }
  else
  {
    return DeletePortfolioOutcome(outcome.GetError());
  }
}

DeletePortfolioOutcomeCallable ServiceCatalogClient::DeletePortfolioCallable(const DeletePortfolioRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePortfolioOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePortfolio(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::DeletePortfolioAsync(const DeletePortfolioRequest& request, const DeletePortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeletePortfolioAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::DeletePortfolioAsyncHelper(const DeletePortfolioRequest& request, const DeletePortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeletePortfolio(request), context);
}

DeletePortfolioShareOutcome ServiceCatalogClient::DeletePortfolioShare(const DeletePortfolioShareRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeletePortfolioShareOutcome(DeletePortfolioShareResult(outcome.GetResult()));
  }
  else
  {
    return DeletePortfolioShareOutcome(outcome.GetError());
  }
}

DeletePortfolioShareOutcomeCallable ServiceCatalogClient::DeletePortfolioShareCallable(const DeletePortfolioShareRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePortfolioShareOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePortfolioShare(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::DeletePortfolioShareAsync(const DeletePortfolioShareRequest& request, const DeletePortfolioShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeletePortfolioShareAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::DeletePortfolioShareAsyncHelper(const DeletePortfolioShareRequest& request, const DeletePortfolioShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeletePortfolioShare(request), context);
}

DeleteProductOutcome ServiceCatalogClient::DeleteProduct(const DeleteProductRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteProductOutcome(DeleteProductResult(outcome.GetResult()));
  }
  else
  {
    return DeleteProductOutcome(outcome.GetError());
  }
}

DeleteProductOutcomeCallable ServiceCatalogClient::DeleteProductCallable(const DeleteProductRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteProductOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteProduct(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::DeleteProductAsync(const DeleteProductRequest& request, const DeleteProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteProductAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::DeleteProductAsyncHelper(const DeleteProductRequest& request, const DeleteProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteProduct(request), context);
}

DeleteProvisionedProductPlanOutcome ServiceCatalogClient::DeleteProvisionedProductPlan(const DeleteProvisionedProductPlanRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteProvisionedProductPlanOutcome(DeleteProvisionedProductPlanResult(outcome.GetResult()));
  }
  else
  {
    return DeleteProvisionedProductPlanOutcome(outcome.GetError());
  }
}

DeleteProvisionedProductPlanOutcomeCallable ServiceCatalogClient::DeleteProvisionedProductPlanCallable(const DeleteProvisionedProductPlanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteProvisionedProductPlanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteProvisionedProductPlan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::DeleteProvisionedProductPlanAsync(const DeleteProvisionedProductPlanRequest& request, const DeleteProvisionedProductPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteProvisionedProductPlanAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::DeleteProvisionedProductPlanAsyncHelper(const DeleteProvisionedProductPlanRequest& request, const DeleteProvisionedProductPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteProvisionedProductPlan(request), context);
}

DeleteProvisioningArtifactOutcome ServiceCatalogClient::DeleteProvisioningArtifact(const DeleteProvisioningArtifactRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteProvisioningArtifactOutcome(DeleteProvisioningArtifactResult(outcome.GetResult()));
  }
  else
  {
    return DeleteProvisioningArtifactOutcome(outcome.GetError());
  }
}

DeleteProvisioningArtifactOutcomeCallable ServiceCatalogClient::DeleteProvisioningArtifactCallable(const DeleteProvisioningArtifactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteProvisioningArtifactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteProvisioningArtifact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::DeleteProvisioningArtifactAsync(const DeleteProvisioningArtifactRequest& request, const DeleteProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteProvisioningArtifactAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::DeleteProvisioningArtifactAsyncHelper(const DeleteProvisioningArtifactRequest& request, const DeleteProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteProvisioningArtifact(request), context);
}

DeleteTagOptionOutcome ServiceCatalogClient::DeleteTagOption(const DeleteTagOptionRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteTagOptionOutcome(DeleteTagOptionResult(outcome.GetResult()));
  }
  else
  {
    return DeleteTagOptionOutcome(outcome.GetError());
  }
}

DeleteTagOptionOutcomeCallable ServiceCatalogClient::DeleteTagOptionCallable(const DeleteTagOptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTagOptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTagOption(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::DeleteTagOptionAsync(const DeleteTagOptionRequest& request, const DeleteTagOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteTagOptionAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::DeleteTagOptionAsyncHelper(const DeleteTagOptionRequest& request, const DeleteTagOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteTagOption(request), context);
}

DescribeConstraintOutcome ServiceCatalogClient::DescribeConstraint(const DescribeConstraintRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeConstraintOutcome(DescribeConstraintResult(outcome.GetResult()));
  }
  else
  {
    return DescribeConstraintOutcome(outcome.GetError());
  }
}

DescribeConstraintOutcomeCallable ServiceCatalogClient::DescribeConstraintCallable(const DescribeConstraintRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeConstraintOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeConstraint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::DescribeConstraintAsync(const DescribeConstraintRequest& request, const DescribeConstraintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeConstraintAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::DescribeConstraintAsyncHelper(const DescribeConstraintRequest& request, const DescribeConstraintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeConstraint(request), context);
}

DescribeCopyProductStatusOutcome ServiceCatalogClient::DescribeCopyProductStatus(const DescribeCopyProductStatusRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeCopyProductStatusOutcome(DescribeCopyProductStatusResult(outcome.GetResult()));
  }
  else
  {
    return DescribeCopyProductStatusOutcome(outcome.GetError());
  }
}

DescribeCopyProductStatusOutcomeCallable ServiceCatalogClient::DescribeCopyProductStatusCallable(const DescribeCopyProductStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCopyProductStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCopyProductStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::DescribeCopyProductStatusAsync(const DescribeCopyProductStatusRequest& request, const DescribeCopyProductStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeCopyProductStatusAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::DescribeCopyProductStatusAsyncHelper(const DescribeCopyProductStatusRequest& request, const DescribeCopyProductStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeCopyProductStatus(request), context);
}

DescribePortfolioOutcome ServiceCatalogClient::DescribePortfolio(const DescribePortfolioRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribePortfolioOutcome(DescribePortfolioResult(outcome.GetResult()));
  }
  else
  {
    return DescribePortfolioOutcome(outcome.GetError());
  }
}

DescribePortfolioOutcomeCallable ServiceCatalogClient::DescribePortfolioCallable(const DescribePortfolioRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePortfolioOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePortfolio(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::DescribePortfolioAsync(const DescribePortfolioRequest& request, const DescribePortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribePortfolioAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::DescribePortfolioAsyncHelper(const DescribePortfolioRequest& request, const DescribePortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribePortfolio(request), context);
}

DescribeProductOutcome ServiceCatalogClient::DescribeProduct(const DescribeProductRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeProductOutcome(DescribeProductResult(outcome.GetResult()));
  }
  else
  {
    return DescribeProductOutcome(outcome.GetError());
  }
}

DescribeProductOutcomeCallable ServiceCatalogClient::DescribeProductCallable(const DescribeProductRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeProductOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeProduct(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::DescribeProductAsync(const DescribeProductRequest& request, const DescribeProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeProductAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::DescribeProductAsyncHelper(const DescribeProductRequest& request, const DescribeProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeProduct(request), context);
}

DescribeProductAsAdminOutcome ServiceCatalogClient::DescribeProductAsAdmin(const DescribeProductAsAdminRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeProductAsAdminOutcome(DescribeProductAsAdminResult(outcome.GetResult()));
  }
  else
  {
    return DescribeProductAsAdminOutcome(outcome.GetError());
  }
}

DescribeProductAsAdminOutcomeCallable ServiceCatalogClient::DescribeProductAsAdminCallable(const DescribeProductAsAdminRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeProductAsAdminOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeProductAsAdmin(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::DescribeProductAsAdminAsync(const DescribeProductAsAdminRequest& request, const DescribeProductAsAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeProductAsAdminAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::DescribeProductAsAdminAsyncHelper(const DescribeProductAsAdminRequest& request, const DescribeProductAsAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeProductAsAdmin(request), context);
}

DescribeProductViewOutcome ServiceCatalogClient::DescribeProductView(const DescribeProductViewRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeProductViewOutcome(DescribeProductViewResult(outcome.GetResult()));
  }
  else
  {
    return DescribeProductViewOutcome(outcome.GetError());
  }
}

DescribeProductViewOutcomeCallable ServiceCatalogClient::DescribeProductViewCallable(const DescribeProductViewRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeProductViewOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeProductView(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::DescribeProductViewAsync(const DescribeProductViewRequest& request, const DescribeProductViewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeProductViewAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::DescribeProductViewAsyncHelper(const DescribeProductViewRequest& request, const DescribeProductViewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeProductView(request), context);
}

DescribeProvisionedProductOutcome ServiceCatalogClient::DescribeProvisionedProduct(const DescribeProvisionedProductRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeProvisionedProductOutcome(DescribeProvisionedProductResult(outcome.GetResult()));
  }
  else
  {
    return DescribeProvisionedProductOutcome(outcome.GetError());
  }
}

DescribeProvisionedProductOutcomeCallable ServiceCatalogClient::DescribeProvisionedProductCallable(const DescribeProvisionedProductRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeProvisionedProductOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeProvisionedProduct(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::DescribeProvisionedProductAsync(const DescribeProvisionedProductRequest& request, const DescribeProvisionedProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeProvisionedProductAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::DescribeProvisionedProductAsyncHelper(const DescribeProvisionedProductRequest& request, const DescribeProvisionedProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeProvisionedProduct(request), context);
}

DescribeProvisionedProductPlanOutcome ServiceCatalogClient::DescribeProvisionedProductPlan(const DescribeProvisionedProductPlanRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeProvisionedProductPlanOutcome(DescribeProvisionedProductPlanResult(outcome.GetResult()));
  }
  else
  {
    return DescribeProvisionedProductPlanOutcome(outcome.GetError());
  }
}

DescribeProvisionedProductPlanOutcomeCallable ServiceCatalogClient::DescribeProvisionedProductPlanCallable(const DescribeProvisionedProductPlanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeProvisionedProductPlanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeProvisionedProductPlan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::DescribeProvisionedProductPlanAsync(const DescribeProvisionedProductPlanRequest& request, const DescribeProvisionedProductPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeProvisionedProductPlanAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::DescribeProvisionedProductPlanAsyncHelper(const DescribeProvisionedProductPlanRequest& request, const DescribeProvisionedProductPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeProvisionedProductPlan(request), context);
}

DescribeProvisioningArtifactOutcome ServiceCatalogClient::DescribeProvisioningArtifact(const DescribeProvisioningArtifactRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeProvisioningArtifactOutcome(DescribeProvisioningArtifactResult(outcome.GetResult()));
  }
  else
  {
    return DescribeProvisioningArtifactOutcome(outcome.GetError());
  }
}

DescribeProvisioningArtifactOutcomeCallable ServiceCatalogClient::DescribeProvisioningArtifactCallable(const DescribeProvisioningArtifactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeProvisioningArtifactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeProvisioningArtifact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::DescribeProvisioningArtifactAsync(const DescribeProvisioningArtifactRequest& request, const DescribeProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeProvisioningArtifactAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::DescribeProvisioningArtifactAsyncHelper(const DescribeProvisioningArtifactRequest& request, const DescribeProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeProvisioningArtifact(request), context);
}

DescribeProvisioningParametersOutcome ServiceCatalogClient::DescribeProvisioningParameters(const DescribeProvisioningParametersRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeProvisioningParametersOutcome(DescribeProvisioningParametersResult(outcome.GetResult()));
  }
  else
  {
    return DescribeProvisioningParametersOutcome(outcome.GetError());
  }
}

DescribeProvisioningParametersOutcomeCallable ServiceCatalogClient::DescribeProvisioningParametersCallable(const DescribeProvisioningParametersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeProvisioningParametersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeProvisioningParameters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::DescribeProvisioningParametersAsync(const DescribeProvisioningParametersRequest& request, const DescribeProvisioningParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeProvisioningParametersAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::DescribeProvisioningParametersAsyncHelper(const DescribeProvisioningParametersRequest& request, const DescribeProvisioningParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeProvisioningParameters(request), context);
}

DescribeRecordOutcome ServiceCatalogClient::DescribeRecord(const DescribeRecordRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeRecordOutcome(DescribeRecordResult(outcome.GetResult()));
  }
  else
  {
    return DescribeRecordOutcome(outcome.GetError());
  }
}

DescribeRecordOutcomeCallable ServiceCatalogClient::DescribeRecordCallable(const DescribeRecordRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRecordOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRecord(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::DescribeRecordAsync(const DescribeRecordRequest& request, const DescribeRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeRecordAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::DescribeRecordAsyncHelper(const DescribeRecordRequest& request, const DescribeRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeRecord(request), context);
}

DescribeTagOptionOutcome ServiceCatalogClient::DescribeTagOption(const DescribeTagOptionRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeTagOptionOutcome(DescribeTagOptionResult(outcome.GetResult()));
  }
  else
  {
    return DescribeTagOptionOutcome(outcome.GetError());
  }
}

DescribeTagOptionOutcomeCallable ServiceCatalogClient::DescribeTagOptionCallable(const DescribeTagOptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTagOptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTagOption(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::DescribeTagOptionAsync(const DescribeTagOptionRequest& request, const DescribeTagOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeTagOptionAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::DescribeTagOptionAsyncHelper(const DescribeTagOptionRequest& request, const DescribeTagOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeTagOption(request), context);
}

DisassociatePrincipalFromPortfolioOutcome ServiceCatalogClient::DisassociatePrincipalFromPortfolio(const DisassociatePrincipalFromPortfolioRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DisassociatePrincipalFromPortfolioOutcome(DisassociatePrincipalFromPortfolioResult(outcome.GetResult()));
  }
  else
  {
    return DisassociatePrincipalFromPortfolioOutcome(outcome.GetError());
  }
}

DisassociatePrincipalFromPortfolioOutcomeCallable ServiceCatalogClient::DisassociatePrincipalFromPortfolioCallable(const DisassociatePrincipalFromPortfolioRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociatePrincipalFromPortfolioOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociatePrincipalFromPortfolio(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::DisassociatePrincipalFromPortfolioAsync(const DisassociatePrincipalFromPortfolioRequest& request, const DisassociatePrincipalFromPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociatePrincipalFromPortfolioAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::DisassociatePrincipalFromPortfolioAsyncHelper(const DisassociatePrincipalFromPortfolioRequest& request, const DisassociatePrincipalFromPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociatePrincipalFromPortfolio(request), context);
}

DisassociateProductFromPortfolioOutcome ServiceCatalogClient::DisassociateProductFromPortfolio(const DisassociateProductFromPortfolioRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DisassociateProductFromPortfolioOutcome(DisassociateProductFromPortfolioResult(outcome.GetResult()));
  }
  else
  {
    return DisassociateProductFromPortfolioOutcome(outcome.GetError());
  }
}

DisassociateProductFromPortfolioOutcomeCallable ServiceCatalogClient::DisassociateProductFromPortfolioCallable(const DisassociateProductFromPortfolioRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateProductFromPortfolioOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateProductFromPortfolio(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::DisassociateProductFromPortfolioAsync(const DisassociateProductFromPortfolioRequest& request, const DisassociateProductFromPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateProductFromPortfolioAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::DisassociateProductFromPortfolioAsyncHelper(const DisassociateProductFromPortfolioRequest& request, const DisassociateProductFromPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateProductFromPortfolio(request), context);
}

DisassociateTagOptionFromResourceOutcome ServiceCatalogClient::DisassociateTagOptionFromResource(const DisassociateTagOptionFromResourceRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DisassociateTagOptionFromResourceOutcome(DisassociateTagOptionFromResourceResult(outcome.GetResult()));
  }
  else
  {
    return DisassociateTagOptionFromResourceOutcome(outcome.GetError());
  }
}

DisassociateTagOptionFromResourceOutcomeCallable ServiceCatalogClient::DisassociateTagOptionFromResourceCallable(const DisassociateTagOptionFromResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateTagOptionFromResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateTagOptionFromResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::DisassociateTagOptionFromResourceAsync(const DisassociateTagOptionFromResourceRequest& request, const DisassociateTagOptionFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateTagOptionFromResourceAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::DisassociateTagOptionFromResourceAsyncHelper(const DisassociateTagOptionFromResourceRequest& request, const DisassociateTagOptionFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateTagOptionFromResource(request), context);
}

ExecuteProvisionedProductPlanOutcome ServiceCatalogClient::ExecuteProvisionedProductPlan(const ExecuteProvisionedProductPlanRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ExecuteProvisionedProductPlanOutcome(ExecuteProvisionedProductPlanResult(outcome.GetResult()));
  }
  else
  {
    return ExecuteProvisionedProductPlanOutcome(outcome.GetError());
  }
}

ExecuteProvisionedProductPlanOutcomeCallable ServiceCatalogClient::ExecuteProvisionedProductPlanCallable(const ExecuteProvisionedProductPlanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ExecuteProvisionedProductPlanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ExecuteProvisionedProductPlan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::ExecuteProvisionedProductPlanAsync(const ExecuteProvisionedProductPlanRequest& request, const ExecuteProvisionedProductPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ExecuteProvisionedProductPlanAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::ExecuteProvisionedProductPlanAsyncHelper(const ExecuteProvisionedProductPlanRequest& request, const ExecuteProvisionedProductPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ExecuteProvisionedProductPlan(request), context);
}

ListAcceptedPortfolioSharesOutcome ServiceCatalogClient::ListAcceptedPortfolioShares(const ListAcceptedPortfolioSharesRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListAcceptedPortfolioSharesOutcome(ListAcceptedPortfolioSharesResult(outcome.GetResult()));
  }
  else
  {
    return ListAcceptedPortfolioSharesOutcome(outcome.GetError());
  }
}

ListAcceptedPortfolioSharesOutcomeCallable ServiceCatalogClient::ListAcceptedPortfolioSharesCallable(const ListAcceptedPortfolioSharesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAcceptedPortfolioSharesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAcceptedPortfolioShares(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::ListAcceptedPortfolioSharesAsync(const ListAcceptedPortfolioSharesRequest& request, const ListAcceptedPortfolioSharesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListAcceptedPortfolioSharesAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::ListAcceptedPortfolioSharesAsyncHelper(const ListAcceptedPortfolioSharesRequest& request, const ListAcceptedPortfolioSharesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAcceptedPortfolioShares(request), context);
}

ListConstraintsForPortfolioOutcome ServiceCatalogClient::ListConstraintsForPortfolio(const ListConstraintsForPortfolioRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListConstraintsForPortfolioOutcome(ListConstraintsForPortfolioResult(outcome.GetResult()));
  }
  else
  {
    return ListConstraintsForPortfolioOutcome(outcome.GetError());
  }
}

ListConstraintsForPortfolioOutcomeCallable ServiceCatalogClient::ListConstraintsForPortfolioCallable(const ListConstraintsForPortfolioRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListConstraintsForPortfolioOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListConstraintsForPortfolio(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::ListConstraintsForPortfolioAsync(const ListConstraintsForPortfolioRequest& request, const ListConstraintsForPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListConstraintsForPortfolioAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::ListConstraintsForPortfolioAsyncHelper(const ListConstraintsForPortfolioRequest& request, const ListConstraintsForPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListConstraintsForPortfolio(request), context);
}

ListLaunchPathsOutcome ServiceCatalogClient::ListLaunchPaths(const ListLaunchPathsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListLaunchPathsOutcome(ListLaunchPathsResult(outcome.GetResult()));
  }
  else
  {
    return ListLaunchPathsOutcome(outcome.GetError());
  }
}

ListLaunchPathsOutcomeCallable ServiceCatalogClient::ListLaunchPathsCallable(const ListLaunchPathsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLaunchPathsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLaunchPaths(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::ListLaunchPathsAsync(const ListLaunchPathsRequest& request, const ListLaunchPathsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListLaunchPathsAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::ListLaunchPathsAsyncHelper(const ListLaunchPathsRequest& request, const ListLaunchPathsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListLaunchPaths(request), context);
}

ListPortfolioAccessOutcome ServiceCatalogClient::ListPortfolioAccess(const ListPortfolioAccessRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListPortfolioAccessOutcome(ListPortfolioAccessResult(outcome.GetResult()));
  }
  else
  {
    return ListPortfolioAccessOutcome(outcome.GetError());
  }
}

ListPortfolioAccessOutcomeCallable ServiceCatalogClient::ListPortfolioAccessCallable(const ListPortfolioAccessRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPortfolioAccessOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPortfolioAccess(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::ListPortfolioAccessAsync(const ListPortfolioAccessRequest& request, const ListPortfolioAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListPortfolioAccessAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::ListPortfolioAccessAsyncHelper(const ListPortfolioAccessRequest& request, const ListPortfolioAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPortfolioAccess(request), context);
}

ListPortfoliosOutcome ServiceCatalogClient::ListPortfolios(const ListPortfoliosRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListPortfoliosOutcome(ListPortfoliosResult(outcome.GetResult()));
  }
  else
  {
    return ListPortfoliosOutcome(outcome.GetError());
  }
}

ListPortfoliosOutcomeCallable ServiceCatalogClient::ListPortfoliosCallable(const ListPortfoliosRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPortfoliosOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPortfolios(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::ListPortfoliosAsync(const ListPortfoliosRequest& request, const ListPortfoliosResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListPortfoliosAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::ListPortfoliosAsyncHelper(const ListPortfoliosRequest& request, const ListPortfoliosResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPortfolios(request), context);
}

ListPortfoliosForProductOutcome ServiceCatalogClient::ListPortfoliosForProduct(const ListPortfoliosForProductRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListPortfoliosForProductOutcome(ListPortfoliosForProductResult(outcome.GetResult()));
  }
  else
  {
    return ListPortfoliosForProductOutcome(outcome.GetError());
  }
}

ListPortfoliosForProductOutcomeCallable ServiceCatalogClient::ListPortfoliosForProductCallable(const ListPortfoliosForProductRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPortfoliosForProductOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPortfoliosForProduct(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::ListPortfoliosForProductAsync(const ListPortfoliosForProductRequest& request, const ListPortfoliosForProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListPortfoliosForProductAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::ListPortfoliosForProductAsyncHelper(const ListPortfoliosForProductRequest& request, const ListPortfoliosForProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPortfoliosForProduct(request), context);
}

ListPrincipalsForPortfolioOutcome ServiceCatalogClient::ListPrincipalsForPortfolio(const ListPrincipalsForPortfolioRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListPrincipalsForPortfolioOutcome(ListPrincipalsForPortfolioResult(outcome.GetResult()));
  }
  else
  {
    return ListPrincipalsForPortfolioOutcome(outcome.GetError());
  }
}

ListPrincipalsForPortfolioOutcomeCallable ServiceCatalogClient::ListPrincipalsForPortfolioCallable(const ListPrincipalsForPortfolioRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPrincipalsForPortfolioOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPrincipalsForPortfolio(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::ListPrincipalsForPortfolioAsync(const ListPrincipalsForPortfolioRequest& request, const ListPrincipalsForPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListPrincipalsForPortfolioAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::ListPrincipalsForPortfolioAsyncHelper(const ListPrincipalsForPortfolioRequest& request, const ListPrincipalsForPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPrincipalsForPortfolio(request), context);
}

ListProvisionedProductPlansOutcome ServiceCatalogClient::ListProvisionedProductPlans(const ListProvisionedProductPlansRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListProvisionedProductPlansOutcome(ListProvisionedProductPlansResult(outcome.GetResult()));
  }
  else
  {
    return ListProvisionedProductPlansOutcome(outcome.GetError());
  }
}

ListProvisionedProductPlansOutcomeCallable ServiceCatalogClient::ListProvisionedProductPlansCallable(const ListProvisionedProductPlansRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListProvisionedProductPlansOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListProvisionedProductPlans(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::ListProvisionedProductPlansAsync(const ListProvisionedProductPlansRequest& request, const ListProvisionedProductPlansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListProvisionedProductPlansAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::ListProvisionedProductPlansAsyncHelper(const ListProvisionedProductPlansRequest& request, const ListProvisionedProductPlansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListProvisionedProductPlans(request), context);
}

ListProvisioningArtifactsOutcome ServiceCatalogClient::ListProvisioningArtifacts(const ListProvisioningArtifactsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListProvisioningArtifactsOutcome(ListProvisioningArtifactsResult(outcome.GetResult()));
  }
  else
  {
    return ListProvisioningArtifactsOutcome(outcome.GetError());
  }
}

ListProvisioningArtifactsOutcomeCallable ServiceCatalogClient::ListProvisioningArtifactsCallable(const ListProvisioningArtifactsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListProvisioningArtifactsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListProvisioningArtifacts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::ListProvisioningArtifactsAsync(const ListProvisioningArtifactsRequest& request, const ListProvisioningArtifactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListProvisioningArtifactsAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::ListProvisioningArtifactsAsyncHelper(const ListProvisioningArtifactsRequest& request, const ListProvisioningArtifactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListProvisioningArtifacts(request), context);
}

ListRecordHistoryOutcome ServiceCatalogClient::ListRecordHistory(const ListRecordHistoryRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListRecordHistoryOutcome(ListRecordHistoryResult(outcome.GetResult()));
  }
  else
  {
    return ListRecordHistoryOutcome(outcome.GetError());
  }
}

ListRecordHistoryOutcomeCallable ServiceCatalogClient::ListRecordHistoryCallable(const ListRecordHistoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRecordHistoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRecordHistory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::ListRecordHistoryAsync(const ListRecordHistoryRequest& request, const ListRecordHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListRecordHistoryAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::ListRecordHistoryAsyncHelper(const ListRecordHistoryRequest& request, const ListRecordHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListRecordHistory(request), context);
}

ListResourcesForTagOptionOutcome ServiceCatalogClient::ListResourcesForTagOption(const ListResourcesForTagOptionRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListResourcesForTagOptionOutcome(ListResourcesForTagOptionResult(outcome.GetResult()));
  }
  else
  {
    return ListResourcesForTagOptionOutcome(outcome.GetError());
  }
}

ListResourcesForTagOptionOutcomeCallable ServiceCatalogClient::ListResourcesForTagOptionCallable(const ListResourcesForTagOptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListResourcesForTagOptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListResourcesForTagOption(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::ListResourcesForTagOptionAsync(const ListResourcesForTagOptionRequest& request, const ListResourcesForTagOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListResourcesForTagOptionAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::ListResourcesForTagOptionAsyncHelper(const ListResourcesForTagOptionRequest& request, const ListResourcesForTagOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListResourcesForTagOption(request), context);
}

ListTagOptionsOutcome ServiceCatalogClient::ListTagOptions(const ListTagOptionsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListTagOptionsOutcome(ListTagOptionsResult(outcome.GetResult()));
  }
  else
  {
    return ListTagOptionsOutcome(outcome.GetError());
  }
}

ListTagOptionsOutcomeCallable ServiceCatalogClient::ListTagOptionsCallable(const ListTagOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::ListTagOptionsAsync(const ListTagOptionsRequest& request, const ListTagOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagOptionsAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::ListTagOptionsAsyncHelper(const ListTagOptionsRequest& request, const ListTagOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagOptions(request), context);
}

ProvisionProductOutcome ServiceCatalogClient::ProvisionProduct(const ProvisionProductRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ProvisionProductOutcome(ProvisionProductResult(outcome.GetResult()));
  }
  else
  {
    return ProvisionProductOutcome(outcome.GetError());
  }
}

ProvisionProductOutcomeCallable ServiceCatalogClient::ProvisionProductCallable(const ProvisionProductRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ProvisionProductOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ProvisionProduct(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::ProvisionProductAsync(const ProvisionProductRequest& request, const ProvisionProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ProvisionProductAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::ProvisionProductAsyncHelper(const ProvisionProductRequest& request, const ProvisionProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ProvisionProduct(request), context);
}

RejectPortfolioShareOutcome ServiceCatalogClient::RejectPortfolioShare(const RejectPortfolioShareRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RejectPortfolioShareOutcome(RejectPortfolioShareResult(outcome.GetResult()));
  }
  else
  {
    return RejectPortfolioShareOutcome(outcome.GetError());
  }
}

RejectPortfolioShareOutcomeCallable ServiceCatalogClient::RejectPortfolioShareCallable(const RejectPortfolioShareRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RejectPortfolioShareOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RejectPortfolioShare(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::RejectPortfolioShareAsync(const RejectPortfolioShareRequest& request, const RejectPortfolioShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RejectPortfolioShareAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::RejectPortfolioShareAsyncHelper(const RejectPortfolioShareRequest& request, const RejectPortfolioShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RejectPortfolioShare(request), context);
}

ScanProvisionedProductsOutcome ServiceCatalogClient::ScanProvisionedProducts(const ScanProvisionedProductsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ScanProvisionedProductsOutcome(ScanProvisionedProductsResult(outcome.GetResult()));
  }
  else
  {
    return ScanProvisionedProductsOutcome(outcome.GetError());
  }
}

ScanProvisionedProductsOutcomeCallable ServiceCatalogClient::ScanProvisionedProductsCallable(const ScanProvisionedProductsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ScanProvisionedProductsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ScanProvisionedProducts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::ScanProvisionedProductsAsync(const ScanProvisionedProductsRequest& request, const ScanProvisionedProductsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ScanProvisionedProductsAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::ScanProvisionedProductsAsyncHelper(const ScanProvisionedProductsRequest& request, const ScanProvisionedProductsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ScanProvisionedProducts(request), context);
}

SearchProductsOutcome ServiceCatalogClient::SearchProducts(const SearchProductsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SearchProductsOutcome(SearchProductsResult(outcome.GetResult()));
  }
  else
  {
    return SearchProductsOutcome(outcome.GetError());
  }
}

SearchProductsOutcomeCallable ServiceCatalogClient::SearchProductsCallable(const SearchProductsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchProductsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchProducts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::SearchProductsAsync(const SearchProductsRequest& request, const SearchProductsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SearchProductsAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::SearchProductsAsyncHelper(const SearchProductsRequest& request, const SearchProductsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SearchProducts(request), context);
}

SearchProductsAsAdminOutcome ServiceCatalogClient::SearchProductsAsAdmin(const SearchProductsAsAdminRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SearchProductsAsAdminOutcome(SearchProductsAsAdminResult(outcome.GetResult()));
  }
  else
  {
    return SearchProductsAsAdminOutcome(outcome.GetError());
  }
}

SearchProductsAsAdminOutcomeCallable ServiceCatalogClient::SearchProductsAsAdminCallable(const SearchProductsAsAdminRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchProductsAsAdminOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchProductsAsAdmin(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::SearchProductsAsAdminAsync(const SearchProductsAsAdminRequest& request, const SearchProductsAsAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SearchProductsAsAdminAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::SearchProductsAsAdminAsyncHelper(const SearchProductsAsAdminRequest& request, const SearchProductsAsAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SearchProductsAsAdmin(request), context);
}

SearchProvisionedProductsOutcome ServiceCatalogClient::SearchProvisionedProducts(const SearchProvisionedProductsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SearchProvisionedProductsOutcome(SearchProvisionedProductsResult(outcome.GetResult()));
  }
  else
  {
    return SearchProvisionedProductsOutcome(outcome.GetError());
  }
}

SearchProvisionedProductsOutcomeCallable ServiceCatalogClient::SearchProvisionedProductsCallable(const SearchProvisionedProductsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchProvisionedProductsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchProvisionedProducts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::SearchProvisionedProductsAsync(const SearchProvisionedProductsRequest& request, const SearchProvisionedProductsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SearchProvisionedProductsAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::SearchProvisionedProductsAsyncHelper(const SearchProvisionedProductsRequest& request, const SearchProvisionedProductsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SearchProvisionedProducts(request), context);
}

TerminateProvisionedProductOutcome ServiceCatalogClient::TerminateProvisionedProduct(const TerminateProvisionedProductRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return TerminateProvisionedProductOutcome(TerminateProvisionedProductResult(outcome.GetResult()));
  }
  else
  {
    return TerminateProvisionedProductOutcome(outcome.GetError());
  }
}

TerminateProvisionedProductOutcomeCallable ServiceCatalogClient::TerminateProvisionedProductCallable(const TerminateProvisionedProductRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TerminateProvisionedProductOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TerminateProvisionedProduct(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::TerminateProvisionedProductAsync(const TerminateProvisionedProductRequest& request, const TerminateProvisionedProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TerminateProvisionedProductAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::TerminateProvisionedProductAsyncHelper(const TerminateProvisionedProductRequest& request, const TerminateProvisionedProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TerminateProvisionedProduct(request), context);
}

UpdateConstraintOutcome ServiceCatalogClient::UpdateConstraint(const UpdateConstraintRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateConstraintOutcome(UpdateConstraintResult(outcome.GetResult()));
  }
  else
  {
    return UpdateConstraintOutcome(outcome.GetError());
  }
}

UpdateConstraintOutcomeCallable ServiceCatalogClient::UpdateConstraintCallable(const UpdateConstraintRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateConstraintOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateConstraint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::UpdateConstraintAsync(const UpdateConstraintRequest& request, const UpdateConstraintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateConstraintAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::UpdateConstraintAsyncHelper(const UpdateConstraintRequest& request, const UpdateConstraintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateConstraint(request), context);
}

UpdatePortfolioOutcome ServiceCatalogClient::UpdatePortfolio(const UpdatePortfolioRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdatePortfolioOutcome(UpdatePortfolioResult(outcome.GetResult()));
  }
  else
  {
    return UpdatePortfolioOutcome(outcome.GetError());
  }
}

UpdatePortfolioOutcomeCallable ServiceCatalogClient::UpdatePortfolioCallable(const UpdatePortfolioRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePortfolioOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePortfolio(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::UpdatePortfolioAsync(const UpdatePortfolioRequest& request, const UpdatePortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdatePortfolioAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::UpdatePortfolioAsyncHelper(const UpdatePortfolioRequest& request, const UpdatePortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdatePortfolio(request), context);
}

UpdateProductOutcome ServiceCatalogClient::UpdateProduct(const UpdateProductRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateProductOutcome(UpdateProductResult(outcome.GetResult()));
  }
  else
  {
    return UpdateProductOutcome(outcome.GetError());
  }
}

UpdateProductOutcomeCallable ServiceCatalogClient::UpdateProductCallable(const UpdateProductRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateProductOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateProduct(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::UpdateProductAsync(const UpdateProductRequest& request, const UpdateProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateProductAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::UpdateProductAsyncHelper(const UpdateProductRequest& request, const UpdateProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateProduct(request), context);
}

UpdateProvisionedProductOutcome ServiceCatalogClient::UpdateProvisionedProduct(const UpdateProvisionedProductRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateProvisionedProductOutcome(UpdateProvisionedProductResult(outcome.GetResult()));
  }
  else
  {
    return UpdateProvisionedProductOutcome(outcome.GetError());
  }
}

UpdateProvisionedProductOutcomeCallable ServiceCatalogClient::UpdateProvisionedProductCallable(const UpdateProvisionedProductRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateProvisionedProductOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateProvisionedProduct(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::UpdateProvisionedProductAsync(const UpdateProvisionedProductRequest& request, const UpdateProvisionedProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateProvisionedProductAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::UpdateProvisionedProductAsyncHelper(const UpdateProvisionedProductRequest& request, const UpdateProvisionedProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateProvisionedProduct(request), context);
}

UpdateProvisioningArtifactOutcome ServiceCatalogClient::UpdateProvisioningArtifact(const UpdateProvisioningArtifactRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateProvisioningArtifactOutcome(UpdateProvisioningArtifactResult(outcome.GetResult()));
  }
  else
  {
    return UpdateProvisioningArtifactOutcome(outcome.GetError());
  }
}

UpdateProvisioningArtifactOutcomeCallable ServiceCatalogClient::UpdateProvisioningArtifactCallable(const UpdateProvisioningArtifactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateProvisioningArtifactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateProvisioningArtifact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::UpdateProvisioningArtifactAsync(const UpdateProvisioningArtifactRequest& request, const UpdateProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateProvisioningArtifactAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::UpdateProvisioningArtifactAsyncHelper(const UpdateProvisioningArtifactRequest& request, const UpdateProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateProvisioningArtifact(request), context);
}

UpdateTagOptionOutcome ServiceCatalogClient::UpdateTagOption(const UpdateTagOptionRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateTagOptionOutcome(UpdateTagOptionResult(outcome.GetResult()));
  }
  else
  {
    return UpdateTagOptionOutcome(outcome.GetError());
  }
}

UpdateTagOptionOutcomeCallable ServiceCatalogClient::UpdateTagOptionCallable(const UpdateTagOptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateTagOptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateTagOption(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceCatalogClient::UpdateTagOptionAsync(const UpdateTagOptionRequest& request, const UpdateTagOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateTagOptionAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::UpdateTagOptionAsyncHelper(const UpdateTagOptionRequest& request, const UpdateTagOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateTagOption(request), context);
}

