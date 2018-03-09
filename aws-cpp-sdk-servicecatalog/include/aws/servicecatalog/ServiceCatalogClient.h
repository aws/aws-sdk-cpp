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

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/ServiceCatalogErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/servicecatalog/model/AcceptPortfolioShareResult.h>
#include <aws/servicecatalog/model/AssociatePrincipalWithPortfolioResult.h>
#include <aws/servicecatalog/model/AssociateProductWithPortfolioResult.h>
#include <aws/servicecatalog/model/AssociateTagOptionWithResourceResult.h>
#include <aws/servicecatalog/model/CopyProductResult.h>
#include <aws/servicecatalog/model/CreateConstraintResult.h>
#include <aws/servicecatalog/model/CreatePortfolioResult.h>
#include <aws/servicecatalog/model/CreatePortfolioShareResult.h>
#include <aws/servicecatalog/model/CreateProductResult.h>
#include <aws/servicecatalog/model/CreateProvisionedProductPlanResult.h>
#include <aws/servicecatalog/model/CreateProvisioningArtifactResult.h>
#include <aws/servicecatalog/model/CreateTagOptionResult.h>
#include <aws/servicecatalog/model/DeleteConstraintResult.h>
#include <aws/servicecatalog/model/DeletePortfolioResult.h>
#include <aws/servicecatalog/model/DeletePortfolioShareResult.h>
#include <aws/servicecatalog/model/DeleteProductResult.h>
#include <aws/servicecatalog/model/DeleteProvisionedProductPlanResult.h>
#include <aws/servicecatalog/model/DeleteProvisioningArtifactResult.h>
#include <aws/servicecatalog/model/DeleteTagOptionResult.h>
#include <aws/servicecatalog/model/DescribeConstraintResult.h>
#include <aws/servicecatalog/model/DescribeCopyProductStatusResult.h>
#include <aws/servicecatalog/model/DescribePortfolioResult.h>
#include <aws/servicecatalog/model/DescribeProductResult.h>
#include <aws/servicecatalog/model/DescribeProductAsAdminResult.h>
#include <aws/servicecatalog/model/DescribeProductViewResult.h>
#include <aws/servicecatalog/model/DescribeProvisionedProductResult.h>
#include <aws/servicecatalog/model/DescribeProvisionedProductPlanResult.h>
#include <aws/servicecatalog/model/DescribeProvisioningArtifactResult.h>
#include <aws/servicecatalog/model/DescribeProvisioningParametersResult.h>
#include <aws/servicecatalog/model/DescribeRecordResult.h>
#include <aws/servicecatalog/model/DescribeTagOptionResult.h>
#include <aws/servicecatalog/model/DisassociatePrincipalFromPortfolioResult.h>
#include <aws/servicecatalog/model/DisassociateProductFromPortfolioResult.h>
#include <aws/servicecatalog/model/DisassociateTagOptionFromResourceResult.h>
#include <aws/servicecatalog/model/ExecuteProvisionedProductPlanResult.h>
#include <aws/servicecatalog/model/ListAcceptedPortfolioSharesResult.h>
#include <aws/servicecatalog/model/ListConstraintsForPortfolioResult.h>
#include <aws/servicecatalog/model/ListLaunchPathsResult.h>
#include <aws/servicecatalog/model/ListPortfolioAccessResult.h>
#include <aws/servicecatalog/model/ListPortfoliosResult.h>
#include <aws/servicecatalog/model/ListPortfoliosForProductResult.h>
#include <aws/servicecatalog/model/ListPrincipalsForPortfolioResult.h>
#include <aws/servicecatalog/model/ListProvisionedProductPlansResult.h>
#include <aws/servicecatalog/model/ListProvisioningArtifactsResult.h>
#include <aws/servicecatalog/model/ListRecordHistoryResult.h>
#include <aws/servicecatalog/model/ListResourcesForTagOptionResult.h>
#include <aws/servicecatalog/model/ListTagOptionsResult.h>
#include <aws/servicecatalog/model/ProvisionProductResult.h>
#include <aws/servicecatalog/model/RejectPortfolioShareResult.h>
#include <aws/servicecatalog/model/ScanProvisionedProductsResult.h>
#include <aws/servicecatalog/model/SearchProductsResult.h>
#include <aws/servicecatalog/model/SearchProductsAsAdminResult.h>
#include <aws/servicecatalog/model/SearchProvisionedProductsResult.h>
#include <aws/servicecatalog/model/TerminateProvisionedProductResult.h>
#include <aws/servicecatalog/model/UpdateConstraintResult.h>
#include <aws/servicecatalog/model/UpdatePortfolioResult.h>
#include <aws/servicecatalog/model/UpdateProductResult.h>
#include <aws/servicecatalog/model/UpdateProvisionedProductResult.h>
#include <aws/servicecatalog/model/UpdateProvisioningArtifactResult.h>
#include <aws/servicecatalog/model/UpdateTagOptionResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;

namespace Threading
{
  class Executor;
} // namespace Threading

namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace ServiceCatalog
{

namespace Model
{
        class AcceptPortfolioShareRequest;
        class AssociatePrincipalWithPortfolioRequest;
        class AssociateProductWithPortfolioRequest;
        class AssociateTagOptionWithResourceRequest;
        class CopyProductRequest;
        class CreateConstraintRequest;
        class CreatePortfolioRequest;
        class CreatePortfolioShareRequest;
        class CreateProductRequest;
        class CreateProvisionedProductPlanRequest;
        class CreateProvisioningArtifactRequest;
        class CreateTagOptionRequest;
        class DeleteConstraintRequest;
        class DeletePortfolioRequest;
        class DeletePortfolioShareRequest;
        class DeleteProductRequest;
        class DeleteProvisionedProductPlanRequest;
        class DeleteProvisioningArtifactRequest;
        class DeleteTagOptionRequest;
        class DescribeConstraintRequest;
        class DescribeCopyProductStatusRequest;
        class DescribePortfolioRequest;
        class DescribeProductRequest;
        class DescribeProductAsAdminRequest;
        class DescribeProductViewRequest;
        class DescribeProvisionedProductRequest;
        class DescribeProvisionedProductPlanRequest;
        class DescribeProvisioningArtifactRequest;
        class DescribeProvisioningParametersRequest;
        class DescribeRecordRequest;
        class DescribeTagOptionRequest;
        class DisassociatePrincipalFromPortfolioRequest;
        class DisassociateProductFromPortfolioRequest;
        class DisassociateTagOptionFromResourceRequest;
        class ExecuteProvisionedProductPlanRequest;
        class ListAcceptedPortfolioSharesRequest;
        class ListConstraintsForPortfolioRequest;
        class ListLaunchPathsRequest;
        class ListPortfolioAccessRequest;
        class ListPortfoliosRequest;
        class ListPortfoliosForProductRequest;
        class ListPrincipalsForPortfolioRequest;
        class ListProvisionedProductPlansRequest;
        class ListProvisioningArtifactsRequest;
        class ListRecordHistoryRequest;
        class ListResourcesForTagOptionRequest;
        class ListTagOptionsRequest;
        class ProvisionProductRequest;
        class RejectPortfolioShareRequest;
        class ScanProvisionedProductsRequest;
        class SearchProductsRequest;
        class SearchProductsAsAdminRequest;
        class SearchProvisionedProductsRequest;
        class TerminateProvisionedProductRequest;
        class UpdateConstraintRequest;
        class UpdatePortfolioRequest;
        class UpdateProductRequest;
        class UpdateProvisionedProductRequest;
        class UpdateProvisioningArtifactRequest;
        class UpdateTagOptionRequest;

        typedef Aws::Utils::Outcome<AcceptPortfolioShareResult, Aws::Client::AWSError<ServiceCatalogErrors>> AcceptPortfolioShareOutcome;
        typedef Aws::Utils::Outcome<AssociatePrincipalWithPortfolioResult, Aws::Client::AWSError<ServiceCatalogErrors>> AssociatePrincipalWithPortfolioOutcome;
        typedef Aws::Utils::Outcome<AssociateProductWithPortfolioResult, Aws::Client::AWSError<ServiceCatalogErrors>> AssociateProductWithPortfolioOutcome;
        typedef Aws::Utils::Outcome<AssociateTagOptionWithResourceResult, Aws::Client::AWSError<ServiceCatalogErrors>> AssociateTagOptionWithResourceOutcome;
        typedef Aws::Utils::Outcome<CopyProductResult, Aws::Client::AWSError<ServiceCatalogErrors>> CopyProductOutcome;
        typedef Aws::Utils::Outcome<CreateConstraintResult, Aws::Client::AWSError<ServiceCatalogErrors>> CreateConstraintOutcome;
        typedef Aws::Utils::Outcome<CreatePortfolioResult, Aws::Client::AWSError<ServiceCatalogErrors>> CreatePortfolioOutcome;
        typedef Aws::Utils::Outcome<CreatePortfolioShareResult, Aws::Client::AWSError<ServiceCatalogErrors>> CreatePortfolioShareOutcome;
        typedef Aws::Utils::Outcome<CreateProductResult, Aws::Client::AWSError<ServiceCatalogErrors>> CreateProductOutcome;
        typedef Aws::Utils::Outcome<CreateProvisionedProductPlanResult, Aws::Client::AWSError<ServiceCatalogErrors>> CreateProvisionedProductPlanOutcome;
        typedef Aws::Utils::Outcome<CreateProvisioningArtifactResult, Aws::Client::AWSError<ServiceCatalogErrors>> CreateProvisioningArtifactOutcome;
        typedef Aws::Utils::Outcome<CreateTagOptionResult, Aws::Client::AWSError<ServiceCatalogErrors>> CreateTagOptionOutcome;
        typedef Aws::Utils::Outcome<DeleteConstraintResult, Aws::Client::AWSError<ServiceCatalogErrors>> DeleteConstraintOutcome;
        typedef Aws::Utils::Outcome<DeletePortfolioResult, Aws::Client::AWSError<ServiceCatalogErrors>> DeletePortfolioOutcome;
        typedef Aws::Utils::Outcome<DeletePortfolioShareResult, Aws::Client::AWSError<ServiceCatalogErrors>> DeletePortfolioShareOutcome;
        typedef Aws::Utils::Outcome<DeleteProductResult, Aws::Client::AWSError<ServiceCatalogErrors>> DeleteProductOutcome;
        typedef Aws::Utils::Outcome<DeleteProvisionedProductPlanResult, Aws::Client::AWSError<ServiceCatalogErrors>> DeleteProvisionedProductPlanOutcome;
        typedef Aws::Utils::Outcome<DeleteProvisioningArtifactResult, Aws::Client::AWSError<ServiceCatalogErrors>> DeleteProvisioningArtifactOutcome;
        typedef Aws::Utils::Outcome<DeleteTagOptionResult, Aws::Client::AWSError<ServiceCatalogErrors>> DeleteTagOptionOutcome;
        typedef Aws::Utils::Outcome<DescribeConstraintResult, Aws::Client::AWSError<ServiceCatalogErrors>> DescribeConstraintOutcome;
        typedef Aws::Utils::Outcome<DescribeCopyProductStatusResult, Aws::Client::AWSError<ServiceCatalogErrors>> DescribeCopyProductStatusOutcome;
        typedef Aws::Utils::Outcome<DescribePortfolioResult, Aws::Client::AWSError<ServiceCatalogErrors>> DescribePortfolioOutcome;
        typedef Aws::Utils::Outcome<DescribeProductResult, Aws::Client::AWSError<ServiceCatalogErrors>> DescribeProductOutcome;
        typedef Aws::Utils::Outcome<DescribeProductAsAdminResult, Aws::Client::AWSError<ServiceCatalogErrors>> DescribeProductAsAdminOutcome;
        typedef Aws::Utils::Outcome<DescribeProductViewResult, Aws::Client::AWSError<ServiceCatalogErrors>> DescribeProductViewOutcome;
        typedef Aws::Utils::Outcome<DescribeProvisionedProductResult, Aws::Client::AWSError<ServiceCatalogErrors>> DescribeProvisionedProductOutcome;
        typedef Aws::Utils::Outcome<DescribeProvisionedProductPlanResult, Aws::Client::AWSError<ServiceCatalogErrors>> DescribeProvisionedProductPlanOutcome;
        typedef Aws::Utils::Outcome<DescribeProvisioningArtifactResult, Aws::Client::AWSError<ServiceCatalogErrors>> DescribeProvisioningArtifactOutcome;
        typedef Aws::Utils::Outcome<DescribeProvisioningParametersResult, Aws::Client::AWSError<ServiceCatalogErrors>> DescribeProvisioningParametersOutcome;
        typedef Aws::Utils::Outcome<DescribeRecordResult, Aws::Client::AWSError<ServiceCatalogErrors>> DescribeRecordOutcome;
        typedef Aws::Utils::Outcome<DescribeTagOptionResult, Aws::Client::AWSError<ServiceCatalogErrors>> DescribeTagOptionOutcome;
        typedef Aws::Utils::Outcome<DisassociatePrincipalFromPortfolioResult, Aws::Client::AWSError<ServiceCatalogErrors>> DisassociatePrincipalFromPortfolioOutcome;
        typedef Aws::Utils::Outcome<DisassociateProductFromPortfolioResult, Aws::Client::AWSError<ServiceCatalogErrors>> DisassociateProductFromPortfolioOutcome;
        typedef Aws::Utils::Outcome<DisassociateTagOptionFromResourceResult, Aws::Client::AWSError<ServiceCatalogErrors>> DisassociateTagOptionFromResourceOutcome;
        typedef Aws::Utils::Outcome<ExecuteProvisionedProductPlanResult, Aws::Client::AWSError<ServiceCatalogErrors>> ExecuteProvisionedProductPlanOutcome;
        typedef Aws::Utils::Outcome<ListAcceptedPortfolioSharesResult, Aws::Client::AWSError<ServiceCatalogErrors>> ListAcceptedPortfolioSharesOutcome;
        typedef Aws::Utils::Outcome<ListConstraintsForPortfolioResult, Aws::Client::AWSError<ServiceCatalogErrors>> ListConstraintsForPortfolioOutcome;
        typedef Aws::Utils::Outcome<ListLaunchPathsResult, Aws::Client::AWSError<ServiceCatalogErrors>> ListLaunchPathsOutcome;
        typedef Aws::Utils::Outcome<ListPortfolioAccessResult, Aws::Client::AWSError<ServiceCatalogErrors>> ListPortfolioAccessOutcome;
        typedef Aws::Utils::Outcome<ListPortfoliosResult, Aws::Client::AWSError<ServiceCatalogErrors>> ListPortfoliosOutcome;
        typedef Aws::Utils::Outcome<ListPortfoliosForProductResult, Aws::Client::AWSError<ServiceCatalogErrors>> ListPortfoliosForProductOutcome;
        typedef Aws::Utils::Outcome<ListPrincipalsForPortfolioResult, Aws::Client::AWSError<ServiceCatalogErrors>> ListPrincipalsForPortfolioOutcome;
        typedef Aws::Utils::Outcome<ListProvisionedProductPlansResult, Aws::Client::AWSError<ServiceCatalogErrors>> ListProvisionedProductPlansOutcome;
        typedef Aws::Utils::Outcome<ListProvisioningArtifactsResult, Aws::Client::AWSError<ServiceCatalogErrors>> ListProvisioningArtifactsOutcome;
        typedef Aws::Utils::Outcome<ListRecordHistoryResult, Aws::Client::AWSError<ServiceCatalogErrors>> ListRecordHistoryOutcome;
        typedef Aws::Utils::Outcome<ListResourcesForTagOptionResult, Aws::Client::AWSError<ServiceCatalogErrors>> ListResourcesForTagOptionOutcome;
        typedef Aws::Utils::Outcome<ListTagOptionsResult, Aws::Client::AWSError<ServiceCatalogErrors>> ListTagOptionsOutcome;
        typedef Aws::Utils::Outcome<ProvisionProductResult, Aws::Client::AWSError<ServiceCatalogErrors>> ProvisionProductOutcome;
        typedef Aws::Utils::Outcome<RejectPortfolioShareResult, Aws::Client::AWSError<ServiceCatalogErrors>> RejectPortfolioShareOutcome;
        typedef Aws::Utils::Outcome<ScanProvisionedProductsResult, Aws::Client::AWSError<ServiceCatalogErrors>> ScanProvisionedProductsOutcome;
        typedef Aws::Utils::Outcome<SearchProductsResult, Aws::Client::AWSError<ServiceCatalogErrors>> SearchProductsOutcome;
        typedef Aws::Utils::Outcome<SearchProductsAsAdminResult, Aws::Client::AWSError<ServiceCatalogErrors>> SearchProductsAsAdminOutcome;
        typedef Aws::Utils::Outcome<SearchProvisionedProductsResult, Aws::Client::AWSError<ServiceCatalogErrors>> SearchProvisionedProductsOutcome;
        typedef Aws::Utils::Outcome<TerminateProvisionedProductResult, Aws::Client::AWSError<ServiceCatalogErrors>> TerminateProvisionedProductOutcome;
        typedef Aws::Utils::Outcome<UpdateConstraintResult, Aws::Client::AWSError<ServiceCatalogErrors>> UpdateConstraintOutcome;
        typedef Aws::Utils::Outcome<UpdatePortfolioResult, Aws::Client::AWSError<ServiceCatalogErrors>> UpdatePortfolioOutcome;
        typedef Aws::Utils::Outcome<UpdateProductResult, Aws::Client::AWSError<ServiceCatalogErrors>> UpdateProductOutcome;
        typedef Aws::Utils::Outcome<UpdateProvisionedProductResult, Aws::Client::AWSError<ServiceCatalogErrors>> UpdateProvisionedProductOutcome;
        typedef Aws::Utils::Outcome<UpdateProvisioningArtifactResult, Aws::Client::AWSError<ServiceCatalogErrors>> UpdateProvisioningArtifactOutcome;
        typedef Aws::Utils::Outcome<UpdateTagOptionResult, Aws::Client::AWSError<ServiceCatalogErrors>> UpdateTagOptionOutcome;

        typedef std::future<AcceptPortfolioShareOutcome> AcceptPortfolioShareOutcomeCallable;
        typedef std::future<AssociatePrincipalWithPortfolioOutcome> AssociatePrincipalWithPortfolioOutcomeCallable;
        typedef std::future<AssociateProductWithPortfolioOutcome> AssociateProductWithPortfolioOutcomeCallable;
        typedef std::future<AssociateTagOptionWithResourceOutcome> AssociateTagOptionWithResourceOutcomeCallable;
        typedef std::future<CopyProductOutcome> CopyProductOutcomeCallable;
        typedef std::future<CreateConstraintOutcome> CreateConstraintOutcomeCallable;
        typedef std::future<CreatePortfolioOutcome> CreatePortfolioOutcomeCallable;
        typedef std::future<CreatePortfolioShareOutcome> CreatePortfolioShareOutcomeCallable;
        typedef std::future<CreateProductOutcome> CreateProductOutcomeCallable;
        typedef std::future<CreateProvisionedProductPlanOutcome> CreateProvisionedProductPlanOutcomeCallable;
        typedef std::future<CreateProvisioningArtifactOutcome> CreateProvisioningArtifactOutcomeCallable;
        typedef std::future<CreateTagOptionOutcome> CreateTagOptionOutcomeCallable;
        typedef std::future<DeleteConstraintOutcome> DeleteConstraintOutcomeCallable;
        typedef std::future<DeletePortfolioOutcome> DeletePortfolioOutcomeCallable;
        typedef std::future<DeletePortfolioShareOutcome> DeletePortfolioShareOutcomeCallable;
        typedef std::future<DeleteProductOutcome> DeleteProductOutcomeCallable;
        typedef std::future<DeleteProvisionedProductPlanOutcome> DeleteProvisionedProductPlanOutcomeCallable;
        typedef std::future<DeleteProvisioningArtifactOutcome> DeleteProvisioningArtifactOutcomeCallable;
        typedef std::future<DeleteTagOptionOutcome> DeleteTagOptionOutcomeCallable;
        typedef std::future<DescribeConstraintOutcome> DescribeConstraintOutcomeCallable;
        typedef std::future<DescribeCopyProductStatusOutcome> DescribeCopyProductStatusOutcomeCallable;
        typedef std::future<DescribePortfolioOutcome> DescribePortfolioOutcomeCallable;
        typedef std::future<DescribeProductOutcome> DescribeProductOutcomeCallable;
        typedef std::future<DescribeProductAsAdminOutcome> DescribeProductAsAdminOutcomeCallable;
        typedef std::future<DescribeProductViewOutcome> DescribeProductViewOutcomeCallable;
        typedef std::future<DescribeProvisionedProductOutcome> DescribeProvisionedProductOutcomeCallable;
        typedef std::future<DescribeProvisionedProductPlanOutcome> DescribeProvisionedProductPlanOutcomeCallable;
        typedef std::future<DescribeProvisioningArtifactOutcome> DescribeProvisioningArtifactOutcomeCallable;
        typedef std::future<DescribeProvisioningParametersOutcome> DescribeProvisioningParametersOutcomeCallable;
        typedef std::future<DescribeRecordOutcome> DescribeRecordOutcomeCallable;
        typedef std::future<DescribeTagOptionOutcome> DescribeTagOptionOutcomeCallable;
        typedef std::future<DisassociatePrincipalFromPortfolioOutcome> DisassociatePrincipalFromPortfolioOutcomeCallable;
        typedef std::future<DisassociateProductFromPortfolioOutcome> DisassociateProductFromPortfolioOutcomeCallable;
        typedef std::future<DisassociateTagOptionFromResourceOutcome> DisassociateTagOptionFromResourceOutcomeCallable;
        typedef std::future<ExecuteProvisionedProductPlanOutcome> ExecuteProvisionedProductPlanOutcomeCallable;
        typedef std::future<ListAcceptedPortfolioSharesOutcome> ListAcceptedPortfolioSharesOutcomeCallable;
        typedef std::future<ListConstraintsForPortfolioOutcome> ListConstraintsForPortfolioOutcomeCallable;
        typedef std::future<ListLaunchPathsOutcome> ListLaunchPathsOutcomeCallable;
        typedef std::future<ListPortfolioAccessOutcome> ListPortfolioAccessOutcomeCallable;
        typedef std::future<ListPortfoliosOutcome> ListPortfoliosOutcomeCallable;
        typedef std::future<ListPortfoliosForProductOutcome> ListPortfoliosForProductOutcomeCallable;
        typedef std::future<ListPrincipalsForPortfolioOutcome> ListPrincipalsForPortfolioOutcomeCallable;
        typedef std::future<ListProvisionedProductPlansOutcome> ListProvisionedProductPlansOutcomeCallable;
        typedef std::future<ListProvisioningArtifactsOutcome> ListProvisioningArtifactsOutcomeCallable;
        typedef std::future<ListRecordHistoryOutcome> ListRecordHistoryOutcomeCallable;
        typedef std::future<ListResourcesForTagOptionOutcome> ListResourcesForTagOptionOutcomeCallable;
        typedef std::future<ListTagOptionsOutcome> ListTagOptionsOutcomeCallable;
        typedef std::future<ProvisionProductOutcome> ProvisionProductOutcomeCallable;
        typedef std::future<RejectPortfolioShareOutcome> RejectPortfolioShareOutcomeCallable;
        typedef std::future<ScanProvisionedProductsOutcome> ScanProvisionedProductsOutcomeCallable;
        typedef std::future<SearchProductsOutcome> SearchProductsOutcomeCallable;
        typedef std::future<SearchProductsAsAdminOutcome> SearchProductsAsAdminOutcomeCallable;
        typedef std::future<SearchProvisionedProductsOutcome> SearchProvisionedProductsOutcomeCallable;
        typedef std::future<TerminateProvisionedProductOutcome> TerminateProvisionedProductOutcomeCallable;
        typedef std::future<UpdateConstraintOutcome> UpdateConstraintOutcomeCallable;
        typedef std::future<UpdatePortfolioOutcome> UpdatePortfolioOutcomeCallable;
        typedef std::future<UpdateProductOutcome> UpdateProductOutcomeCallable;
        typedef std::future<UpdateProvisionedProductOutcome> UpdateProvisionedProductOutcomeCallable;
        typedef std::future<UpdateProvisioningArtifactOutcome> UpdateProvisioningArtifactOutcomeCallable;
        typedef std::future<UpdateTagOptionOutcome> UpdateTagOptionOutcomeCallable;
} // namespace Model

  class ServiceCatalogClient;

    typedef std::function<void(const ServiceCatalogClient*, const Model::AcceptPortfolioShareRequest&, const Model::AcceptPortfolioShareOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcceptPortfolioShareResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::AssociatePrincipalWithPortfolioRequest&, const Model::AssociatePrincipalWithPortfolioOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociatePrincipalWithPortfolioResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::AssociateProductWithPortfolioRequest&, const Model::AssociateProductWithPortfolioOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateProductWithPortfolioResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::AssociateTagOptionWithResourceRequest&, const Model::AssociateTagOptionWithResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateTagOptionWithResourceResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::CopyProductRequest&, const Model::CopyProductOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CopyProductResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::CreateConstraintRequest&, const Model::CreateConstraintOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConstraintResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::CreatePortfolioRequest&, const Model::CreatePortfolioOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePortfolioResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::CreatePortfolioShareRequest&, const Model::CreatePortfolioShareOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePortfolioShareResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::CreateProductRequest&, const Model::CreateProductOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProductResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::CreateProvisionedProductPlanRequest&, const Model::CreateProvisionedProductPlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProvisionedProductPlanResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::CreateProvisioningArtifactRequest&, const Model::CreateProvisioningArtifactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProvisioningArtifactResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::CreateTagOptionRequest&, const Model::CreateTagOptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTagOptionResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DeleteConstraintRequest&, const Model::DeleteConstraintOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConstraintResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DeletePortfolioRequest&, const Model::DeletePortfolioOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePortfolioResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DeletePortfolioShareRequest&, const Model::DeletePortfolioShareOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePortfolioShareResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DeleteProductRequest&, const Model::DeleteProductOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProductResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DeleteProvisionedProductPlanRequest&, const Model::DeleteProvisionedProductPlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProvisionedProductPlanResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DeleteProvisioningArtifactRequest&, const Model::DeleteProvisioningArtifactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProvisioningArtifactResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DeleteTagOptionRequest&, const Model::DeleteTagOptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTagOptionResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DescribeConstraintRequest&, const Model::DescribeConstraintOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConstraintResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DescribeCopyProductStatusRequest&, const Model::DescribeCopyProductStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCopyProductStatusResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DescribePortfolioRequest&, const Model::DescribePortfolioOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePortfolioResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DescribeProductRequest&, const Model::DescribeProductOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeProductResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DescribeProductAsAdminRequest&, const Model::DescribeProductAsAdminOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeProductAsAdminResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DescribeProductViewRequest&, const Model::DescribeProductViewOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeProductViewResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DescribeProvisionedProductRequest&, const Model::DescribeProvisionedProductOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeProvisionedProductResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DescribeProvisionedProductPlanRequest&, const Model::DescribeProvisionedProductPlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeProvisionedProductPlanResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DescribeProvisioningArtifactRequest&, const Model::DescribeProvisioningArtifactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeProvisioningArtifactResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DescribeProvisioningParametersRequest&, const Model::DescribeProvisioningParametersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeProvisioningParametersResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DescribeRecordRequest&, const Model::DescribeRecordOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRecordResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DescribeTagOptionRequest&, const Model::DescribeTagOptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTagOptionResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DisassociatePrincipalFromPortfolioRequest&, const Model::DisassociatePrincipalFromPortfolioOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociatePrincipalFromPortfolioResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DisassociateProductFromPortfolioRequest&, const Model::DisassociateProductFromPortfolioOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateProductFromPortfolioResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DisassociateTagOptionFromResourceRequest&, const Model::DisassociateTagOptionFromResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateTagOptionFromResourceResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ExecuteProvisionedProductPlanRequest&, const Model::ExecuteProvisionedProductPlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExecuteProvisionedProductPlanResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ListAcceptedPortfolioSharesRequest&, const Model::ListAcceptedPortfolioSharesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAcceptedPortfolioSharesResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ListConstraintsForPortfolioRequest&, const Model::ListConstraintsForPortfolioOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListConstraintsForPortfolioResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ListLaunchPathsRequest&, const Model::ListLaunchPathsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLaunchPathsResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ListPortfolioAccessRequest&, const Model::ListPortfolioAccessOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPortfolioAccessResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ListPortfoliosRequest&, const Model::ListPortfoliosOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPortfoliosResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ListPortfoliosForProductRequest&, const Model::ListPortfoliosForProductOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPortfoliosForProductResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ListPrincipalsForPortfolioRequest&, const Model::ListPrincipalsForPortfolioOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPrincipalsForPortfolioResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ListProvisionedProductPlansRequest&, const Model::ListProvisionedProductPlansOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProvisionedProductPlansResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ListProvisioningArtifactsRequest&, const Model::ListProvisioningArtifactsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProvisioningArtifactsResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ListRecordHistoryRequest&, const Model::ListRecordHistoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRecordHistoryResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ListResourcesForTagOptionRequest&, const Model::ListResourcesForTagOptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResourcesForTagOptionResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ListTagOptionsRequest&, const Model::ListTagOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagOptionsResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ProvisionProductRequest&, const Model::ProvisionProductOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ProvisionProductResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::RejectPortfolioShareRequest&, const Model::RejectPortfolioShareOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RejectPortfolioShareResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ScanProvisionedProductsRequest&, const Model::ScanProvisionedProductsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ScanProvisionedProductsResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::SearchProductsRequest&, const Model::SearchProductsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchProductsResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::SearchProductsAsAdminRequest&, const Model::SearchProductsAsAdminOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchProductsAsAdminResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::SearchProvisionedProductsRequest&, const Model::SearchProvisionedProductsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchProvisionedProductsResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::TerminateProvisionedProductRequest&, const Model::TerminateProvisionedProductOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TerminateProvisionedProductResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::UpdateConstraintRequest&, const Model::UpdateConstraintOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateConstraintResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::UpdatePortfolioRequest&, const Model::UpdatePortfolioOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePortfolioResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::UpdateProductRequest&, const Model::UpdateProductOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateProductResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::UpdateProvisionedProductRequest&, const Model::UpdateProvisionedProductOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateProvisionedProductResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::UpdateProvisioningArtifactRequest&, const Model::UpdateProvisioningArtifactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateProvisioningArtifactResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::UpdateTagOptionRequest&, const Model::UpdateTagOptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTagOptionResponseReceivedHandler;

  /**
   * <fullname>AWS Service Catalog</fullname> <p> <a
   * href="https://aws.amazon.com/servicecatalog/">AWS Service Catalog</a> enables
   * organizations to create and manage catalogs of IT services that are approved for
   * use on AWS. To get the most out of this documentation, you should be familiar
   * with the terminology discussed in <a
   * href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/what-is_concepts.html">AWS
   * Service Catalog Concepts</a>.</p>
   */
  class AWS_SERVICECATALOG_API ServiceCatalogClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ServiceCatalogClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ServiceCatalogClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ServiceCatalogClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~ServiceCatalogClient();

        inline virtual const char* GetServiceClientName() const override { return "servicecatalog"; }


        /**
         * <p>Accepts an offer to share the specified portfolio.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/AcceptPortfolioShare">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptPortfolioShareOutcome AcceptPortfolioShare(const Model::AcceptPortfolioShareRequest& request) const;

        /**
         * <p>Accepts an offer to share the specified portfolio.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/AcceptPortfolioShare">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AcceptPortfolioShareOutcomeCallable AcceptPortfolioShareCallable(const Model::AcceptPortfolioShareRequest& request) const;

        /**
         * <p>Accepts an offer to share the specified portfolio.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/AcceptPortfolioShare">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AcceptPortfolioShareAsync(const Model::AcceptPortfolioShareRequest& request, const AcceptPortfolioShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates the specified principal ARN with the specified
         * portfolio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/AssociatePrincipalWithPortfolio">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociatePrincipalWithPortfolioOutcome AssociatePrincipalWithPortfolio(const Model::AssociatePrincipalWithPortfolioRequest& request) const;

        /**
         * <p>Associates the specified principal ARN with the specified
         * portfolio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/AssociatePrincipalWithPortfolio">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociatePrincipalWithPortfolioOutcomeCallable AssociatePrincipalWithPortfolioCallable(const Model::AssociatePrincipalWithPortfolioRequest& request) const;

        /**
         * <p>Associates the specified principal ARN with the specified
         * portfolio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/AssociatePrincipalWithPortfolio">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociatePrincipalWithPortfolioAsync(const Model::AssociatePrincipalWithPortfolioRequest& request, const AssociatePrincipalWithPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates the specified product with the specified portfolio.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/AssociateProductWithPortfolio">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateProductWithPortfolioOutcome AssociateProductWithPortfolio(const Model::AssociateProductWithPortfolioRequest& request) const;

        /**
         * <p>Associates the specified product with the specified portfolio.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/AssociateProductWithPortfolio">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateProductWithPortfolioOutcomeCallable AssociateProductWithPortfolioCallable(const Model::AssociateProductWithPortfolioRequest& request) const;

        /**
         * <p>Associates the specified product with the specified portfolio.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/AssociateProductWithPortfolio">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateProductWithPortfolioAsync(const Model::AssociateProductWithPortfolioRequest& request, const AssociateProductWithPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associate the specified TagOption with the specified portfolio or
         * product.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/AssociateTagOptionWithResource">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateTagOptionWithResourceOutcome AssociateTagOptionWithResource(const Model::AssociateTagOptionWithResourceRequest& request) const;

        /**
         * <p>Associate the specified TagOption with the specified portfolio or
         * product.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/AssociateTagOptionWithResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateTagOptionWithResourceOutcomeCallable AssociateTagOptionWithResourceCallable(const Model::AssociateTagOptionWithResourceRequest& request) const;

        /**
         * <p>Associate the specified TagOption with the specified portfolio or
         * product.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/AssociateTagOptionWithResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateTagOptionWithResourceAsync(const Model::AssociateTagOptionWithResourceRequest& request, const AssociateTagOptionWithResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Copies the specified source product to the specified target product or a new
         * product.</p> <p>You can copy a product to the same account or another account.
         * You can copy a product to the same region or another region.</p> <p>This
         * operation is performed asynchronously. To track the progress of the operation,
         * use <a>DescribeCopyProductStatus</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/CopyProduct">AWS
         * API Reference</a></p>
         */
        virtual Model::CopyProductOutcome CopyProduct(const Model::CopyProductRequest& request) const;

        /**
         * <p>Copies the specified source product to the specified target product or a new
         * product.</p> <p>You can copy a product to the same account or another account.
         * You can copy a product to the same region or another region.</p> <p>This
         * operation is performed asynchronously. To track the progress of the operation,
         * use <a>DescribeCopyProductStatus</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/CopyProduct">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CopyProductOutcomeCallable CopyProductCallable(const Model::CopyProductRequest& request) const;

        /**
         * <p>Copies the specified source product to the specified target product or a new
         * product.</p> <p>You can copy a product to the same account or another account.
         * You can copy a product to the same region or another region.</p> <p>This
         * operation is performed asynchronously. To track the progress of the operation,
         * use <a>DescribeCopyProductStatus</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/CopyProduct">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CopyProductAsync(const Model::CopyProductRequest& request, const CopyProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a constraint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/CreateConstraint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConstraintOutcome CreateConstraint(const Model::CreateConstraintRequest& request) const;

        /**
         * <p>Creates a constraint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/CreateConstraint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateConstraintOutcomeCallable CreateConstraintCallable(const Model::CreateConstraintRequest& request) const;

        /**
         * <p>Creates a constraint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/CreateConstraint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateConstraintAsync(const Model::CreateConstraintRequest& request, const CreateConstraintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a portfolio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/CreatePortfolio">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePortfolioOutcome CreatePortfolio(const Model::CreatePortfolioRequest& request) const;

        /**
         * <p>Creates a portfolio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/CreatePortfolio">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePortfolioOutcomeCallable CreatePortfolioCallable(const Model::CreatePortfolioRequest& request) const;

        /**
         * <p>Creates a portfolio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/CreatePortfolio">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePortfolioAsync(const Model::CreatePortfolioRequest& request, const CreatePortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Shares the specified portfolio with the specified account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/CreatePortfolioShare">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePortfolioShareOutcome CreatePortfolioShare(const Model::CreatePortfolioShareRequest& request) const;

        /**
         * <p>Shares the specified portfolio with the specified account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/CreatePortfolioShare">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePortfolioShareOutcomeCallable CreatePortfolioShareCallable(const Model::CreatePortfolioShareRequest& request) const;

        /**
         * <p>Shares the specified portfolio with the specified account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/CreatePortfolioShare">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePortfolioShareAsync(const Model::CreatePortfolioShareRequest& request, const CreatePortfolioShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a product.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/CreateProduct">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProductOutcome CreateProduct(const Model::CreateProductRequest& request) const;

        /**
         * <p>Creates a product.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/CreateProduct">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateProductOutcomeCallable CreateProductCallable(const Model::CreateProductRequest& request) const;

        /**
         * <p>Creates a product.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/CreateProduct">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateProductAsync(const Model::CreateProductRequest& request, const CreateProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a plan. A plan includes the list of resources to be created (when
         * provisioning a new product) or modified (when updating a provisioned product)
         * when the plan is executed.</p> <p>You can create one plan per provisioned
         * product. To create a plan for an existing provisioned product, the product
         * status must be AVAILBLE or TAINTED.</p> <p>To view the resource changes in the
         * change set, use <a>DescribeProvisionedProductPlan</a>. To create or modify the
         * provisioned product, use <a>ExecuteProvisionedProductPlan</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/CreateProvisionedProductPlan">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProvisionedProductPlanOutcome CreateProvisionedProductPlan(const Model::CreateProvisionedProductPlanRequest& request) const;

        /**
         * <p>Creates a plan. A plan includes the list of resources to be created (when
         * provisioning a new product) or modified (when updating a provisioned product)
         * when the plan is executed.</p> <p>You can create one plan per provisioned
         * product. To create a plan for an existing provisioned product, the product
         * status must be AVAILBLE or TAINTED.</p> <p>To view the resource changes in the
         * change set, use <a>DescribeProvisionedProductPlan</a>. To create or modify the
         * provisioned product, use <a>ExecuteProvisionedProductPlan</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/CreateProvisionedProductPlan">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateProvisionedProductPlanOutcomeCallable CreateProvisionedProductPlanCallable(const Model::CreateProvisionedProductPlanRequest& request) const;

        /**
         * <p>Creates a plan. A plan includes the list of resources to be created (when
         * provisioning a new product) or modified (when updating a provisioned product)
         * when the plan is executed.</p> <p>You can create one plan per provisioned
         * product. To create a plan for an existing provisioned product, the product
         * status must be AVAILBLE or TAINTED.</p> <p>To view the resource changes in the
         * change set, use <a>DescribeProvisionedProductPlan</a>. To create or modify the
         * provisioned product, use <a>ExecuteProvisionedProductPlan</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/CreateProvisionedProductPlan">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateProvisionedProductPlanAsync(const Model::CreateProvisionedProductPlanRequest& request, const CreateProvisionedProductPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a provisioning artifact (also known as a version) for the specified
         * product.</p> <p>You cannot create a provisioning artifact for a product that was
         * shared with you.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/CreateProvisioningArtifact">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProvisioningArtifactOutcome CreateProvisioningArtifact(const Model::CreateProvisioningArtifactRequest& request) const;

        /**
         * <p>Creates a provisioning artifact (also known as a version) for the specified
         * product.</p> <p>You cannot create a provisioning artifact for a product that was
         * shared with you.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/CreateProvisioningArtifact">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateProvisioningArtifactOutcomeCallable CreateProvisioningArtifactCallable(const Model::CreateProvisioningArtifactRequest& request) const;

        /**
         * <p>Creates a provisioning artifact (also known as a version) for the specified
         * product.</p> <p>You cannot create a provisioning artifact for a product that was
         * shared with you.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/CreateProvisioningArtifact">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateProvisioningArtifactAsync(const Model::CreateProvisioningArtifactRequest& request, const CreateProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a TagOption.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/CreateTagOption">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTagOptionOutcome CreateTagOption(const Model::CreateTagOptionRequest& request) const;

        /**
         * <p>Creates a TagOption.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/CreateTagOption">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTagOptionOutcomeCallable CreateTagOptionCallable(const Model::CreateTagOptionRequest& request) const;

        /**
         * <p>Creates a TagOption.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/CreateTagOption">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTagOptionAsync(const Model::CreateTagOptionRequest& request, const CreateTagOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified constraint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DeleteConstraint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConstraintOutcome DeleteConstraint(const Model::DeleteConstraintRequest& request) const;

        /**
         * <p>Deletes the specified constraint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DeleteConstraint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteConstraintOutcomeCallable DeleteConstraintCallable(const Model::DeleteConstraintRequest& request) const;

        /**
         * <p>Deletes the specified constraint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DeleteConstraint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteConstraintAsync(const Model::DeleteConstraintRequest& request, const DeleteConstraintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified portfolio.</p> <p>You cannot delete a portfolio if it
         * was shared with you or if it has associated products, users, constraints, or
         * shared accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DeletePortfolio">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePortfolioOutcome DeletePortfolio(const Model::DeletePortfolioRequest& request) const;

        /**
         * <p>Deletes the specified portfolio.</p> <p>You cannot delete a portfolio if it
         * was shared with you or if it has associated products, users, constraints, or
         * shared accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DeletePortfolio">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePortfolioOutcomeCallable DeletePortfolioCallable(const Model::DeletePortfolioRequest& request) const;

        /**
         * <p>Deletes the specified portfolio.</p> <p>You cannot delete a portfolio if it
         * was shared with you or if it has associated products, users, constraints, or
         * shared accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DeletePortfolio">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePortfolioAsync(const Model::DeletePortfolioRequest& request, const DeletePortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops sharing the specified portfolio with the specified
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DeletePortfolioShare">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePortfolioShareOutcome DeletePortfolioShare(const Model::DeletePortfolioShareRequest& request) const;

        /**
         * <p>Stops sharing the specified portfolio with the specified
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DeletePortfolioShare">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePortfolioShareOutcomeCallable DeletePortfolioShareCallable(const Model::DeletePortfolioShareRequest& request) const;

        /**
         * <p>Stops sharing the specified portfolio with the specified
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DeletePortfolioShare">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePortfolioShareAsync(const Model::DeletePortfolioShareRequest& request, const DeletePortfolioShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified product.</p> <p>You cannot delete a product if it was
         * shared with you or is associated with a portfolio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DeleteProduct">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProductOutcome DeleteProduct(const Model::DeleteProductRequest& request) const;

        /**
         * <p>Deletes the specified product.</p> <p>You cannot delete a product if it was
         * shared with you or is associated with a portfolio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DeleteProduct">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteProductOutcomeCallable DeleteProductCallable(const Model::DeleteProductRequest& request) const;

        /**
         * <p>Deletes the specified product.</p> <p>You cannot delete a product if it was
         * shared with you or is associated with a portfolio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DeleteProduct">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteProductAsync(const Model::DeleteProductRequest& request, const DeleteProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DeleteProvisionedProductPlan">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProvisionedProductPlanOutcome DeleteProvisionedProductPlan(const Model::DeleteProvisionedProductPlanRequest& request) const;

        /**
         * <p>Deletes the specified plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DeleteProvisionedProductPlan">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteProvisionedProductPlanOutcomeCallable DeleteProvisionedProductPlanCallable(const Model::DeleteProvisionedProductPlanRequest& request) const;

        /**
         * <p>Deletes the specified plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DeleteProvisionedProductPlan">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteProvisionedProductPlanAsync(const Model::DeleteProvisionedProductPlanRequest& request, const DeleteProvisionedProductPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified provisioning artifact (also known as a version) for the
         * specified product.</p> <p>You cannot delete a provisioning artifact associated
         * with a product that was shared with you. You cannot delete the last provisioning
         * artifact for a product, because a product must have at least one provisioning
         * artifact.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DeleteProvisioningArtifact">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProvisioningArtifactOutcome DeleteProvisioningArtifact(const Model::DeleteProvisioningArtifactRequest& request) const;

        /**
         * <p>Deletes the specified provisioning artifact (also known as a version) for the
         * specified product.</p> <p>You cannot delete a provisioning artifact associated
         * with a product that was shared with you. You cannot delete the last provisioning
         * artifact for a product, because a product must have at least one provisioning
         * artifact.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DeleteProvisioningArtifact">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteProvisioningArtifactOutcomeCallable DeleteProvisioningArtifactCallable(const Model::DeleteProvisioningArtifactRequest& request) const;

        /**
         * <p>Deletes the specified provisioning artifact (also known as a version) for the
         * specified product.</p> <p>You cannot delete a provisioning artifact associated
         * with a product that was shared with you. You cannot delete the last provisioning
         * artifact for a product, because a product must have at least one provisioning
         * artifact.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DeleteProvisioningArtifact">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteProvisioningArtifactAsync(const Model::DeleteProvisioningArtifactRequest& request, const DeleteProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified TagOption.</p> <p>You cannot delete a TagOption if it
         * is associated with a product or portfolio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DeleteTagOption">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTagOptionOutcome DeleteTagOption(const Model::DeleteTagOptionRequest& request) const;

        /**
         * <p>Deletes the specified TagOption.</p> <p>You cannot delete a TagOption if it
         * is associated with a product or portfolio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DeleteTagOption">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTagOptionOutcomeCallable DeleteTagOptionCallable(const Model::DeleteTagOptionRequest& request) const;

        /**
         * <p>Deletes the specified TagOption.</p> <p>You cannot delete a TagOption if it
         * is associated with a product or portfolio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DeleteTagOption">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTagOptionAsync(const Model::DeleteTagOptionRequest& request, const DeleteTagOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the specified constraint.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeConstraint">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConstraintOutcome DescribeConstraint(const Model::DescribeConstraintRequest& request) const;

        /**
         * <p>Gets information about the specified constraint.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeConstraint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeConstraintOutcomeCallable DescribeConstraintCallable(const Model::DescribeConstraintRequest& request) const;

        /**
         * <p>Gets information about the specified constraint.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeConstraint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeConstraintAsync(const Model::DescribeConstraintRequest& request, const DescribeConstraintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the status of the specified copy product operation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeCopyProductStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCopyProductStatusOutcome DescribeCopyProductStatus(const Model::DescribeCopyProductStatusRequest& request) const;

        /**
         * <p>Gets the status of the specified copy product operation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeCopyProductStatus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCopyProductStatusOutcomeCallable DescribeCopyProductStatusCallable(const Model::DescribeCopyProductStatusRequest& request) const;

        /**
         * <p>Gets the status of the specified copy product operation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeCopyProductStatus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCopyProductStatusAsync(const Model::DescribeCopyProductStatusRequest& request, const DescribeCopyProductStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the specified portfolio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribePortfolio">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePortfolioOutcome DescribePortfolio(const Model::DescribePortfolioRequest& request) const;

        /**
         * <p>Gets information about the specified portfolio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribePortfolio">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePortfolioOutcomeCallable DescribePortfolioCallable(const Model::DescribePortfolioRequest& request) const;

        /**
         * <p>Gets information about the specified portfolio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribePortfolio">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePortfolioAsync(const Model::DescribePortfolioRequest& request, const DescribePortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the specified product.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeProduct">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProductOutcome DescribeProduct(const Model::DescribeProductRequest& request) const;

        /**
         * <p>Gets information about the specified product.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeProduct">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeProductOutcomeCallable DescribeProductCallable(const Model::DescribeProductRequest& request) const;

        /**
         * <p>Gets information about the specified product.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeProduct">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeProductAsync(const Model::DescribeProductRequest& request, const DescribeProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the specified product. This operation is run with
         * administrator access.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeProductAsAdmin">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProductAsAdminOutcome DescribeProductAsAdmin(const Model::DescribeProductAsAdminRequest& request) const;

        /**
         * <p>Gets information about the specified product. This operation is run with
         * administrator access.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeProductAsAdmin">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeProductAsAdminOutcomeCallable DescribeProductAsAdminCallable(const Model::DescribeProductAsAdminRequest& request) const;

        /**
         * <p>Gets information about the specified product. This operation is run with
         * administrator access.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeProductAsAdmin">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeProductAsAdminAsync(const Model::DescribeProductAsAdminRequest& request, const DescribeProductAsAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the specified product.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeProductView">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProductViewOutcome DescribeProductView(const Model::DescribeProductViewRequest& request) const;

        /**
         * <p>Gets information about the specified product.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeProductView">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeProductViewOutcomeCallable DescribeProductViewCallable(const Model::DescribeProductViewRequest& request) const;

        /**
         * <p>Gets information about the specified product.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeProductView">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeProductViewAsync(const Model::DescribeProductViewRequest& request, const DescribeProductViewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the specified provisioned product.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeProvisionedProduct">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProvisionedProductOutcome DescribeProvisionedProduct(const Model::DescribeProvisionedProductRequest& request) const;

        /**
         * <p>Gets information about the specified provisioned product.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeProvisionedProduct">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeProvisionedProductOutcomeCallable DescribeProvisionedProductCallable(const Model::DescribeProvisionedProductRequest& request) const;

        /**
         * <p>Gets information about the specified provisioned product.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeProvisionedProduct">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeProvisionedProductAsync(const Model::DescribeProvisionedProductRequest& request, const DescribeProvisionedProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the resource changes for the specified
         * plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeProvisionedProductPlan">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProvisionedProductPlanOutcome DescribeProvisionedProductPlan(const Model::DescribeProvisionedProductPlanRequest& request) const;

        /**
         * <p>Gets information about the resource changes for the specified
         * plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeProvisionedProductPlan">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeProvisionedProductPlanOutcomeCallable DescribeProvisionedProductPlanCallable(const Model::DescribeProvisionedProductPlanRequest& request) const;

        /**
         * <p>Gets information about the resource changes for the specified
         * plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeProvisionedProductPlan">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeProvisionedProductPlanAsync(const Model::DescribeProvisionedProductPlanRequest& request, const DescribeProvisionedProductPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the specified provisioning artifact (also known as a
         * version) for the specified product.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeProvisioningArtifact">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProvisioningArtifactOutcome DescribeProvisioningArtifact(const Model::DescribeProvisioningArtifactRequest& request) const;

        /**
         * <p>Gets information about the specified provisioning artifact (also known as a
         * version) for the specified product.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeProvisioningArtifact">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeProvisioningArtifactOutcomeCallable DescribeProvisioningArtifactCallable(const Model::DescribeProvisioningArtifactRequest& request) const;

        /**
         * <p>Gets information about the specified provisioning artifact (also known as a
         * version) for the specified product.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeProvisioningArtifact">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeProvisioningArtifactAsync(const Model::DescribeProvisioningArtifactRequest& request, const DescribeProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the configuration required to provision the specified
         * product using the specified provisioning artifact.</p> <p>If the output contains
         * a TagOption key with an empty list of values, there is a TagOption conflict for
         * that key. The end user cannot take action to fix the conflict, and launch is not
         * blocked. In subsequent calls to <a>ProvisionProduct</a>, do not include
         * conflicted TagOption keys as tags, or this causes the error "Parameter
         * validation failed: Missing required parameter in Tags[<i>N</i>]:<i>Value</i>".
         * Tag the provisioned product with the value
         * <code>sc-tagoption-conflict-portfolioId-productId</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeProvisioningParameters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProvisioningParametersOutcome DescribeProvisioningParameters(const Model::DescribeProvisioningParametersRequest& request) const;

        /**
         * <p>Gets information about the configuration required to provision the specified
         * product using the specified provisioning artifact.</p> <p>If the output contains
         * a TagOption key with an empty list of values, there is a TagOption conflict for
         * that key. The end user cannot take action to fix the conflict, and launch is not
         * blocked. In subsequent calls to <a>ProvisionProduct</a>, do not include
         * conflicted TagOption keys as tags, or this causes the error "Parameter
         * validation failed: Missing required parameter in Tags[<i>N</i>]:<i>Value</i>".
         * Tag the provisioned product with the value
         * <code>sc-tagoption-conflict-portfolioId-productId</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeProvisioningParameters">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeProvisioningParametersOutcomeCallable DescribeProvisioningParametersCallable(const Model::DescribeProvisioningParametersRequest& request) const;

        /**
         * <p>Gets information about the configuration required to provision the specified
         * product using the specified provisioning artifact.</p> <p>If the output contains
         * a TagOption key with an empty list of values, there is a TagOption conflict for
         * that key. The end user cannot take action to fix the conflict, and launch is not
         * blocked. In subsequent calls to <a>ProvisionProduct</a>, do not include
         * conflicted TagOption keys as tags, or this causes the error "Parameter
         * validation failed: Missing required parameter in Tags[<i>N</i>]:<i>Value</i>".
         * Tag the provisioned product with the value
         * <code>sc-tagoption-conflict-portfolioId-productId</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeProvisioningParameters">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeProvisioningParametersAsync(const Model::DescribeProvisioningParametersRequest& request, const DescribeProvisioningParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the specified request operation.</p> <p>Use this
         * operation after calling a request operation (for example,
         * <a>ProvisionProduct</a>, <a>TerminateProvisionedProduct</a>, or
         * <a>UpdateProvisionedProduct</a>). </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeRecord">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRecordOutcome DescribeRecord(const Model::DescribeRecordRequest& request) const;

        /**
         * <p>Gets information about the specified request operation.</p> <p>Use this
         * operation after calling a request operation (for example,
         * <a>ProvisionProduct</a>, <a>TerminateProvisionedProduct</a>, or
         * <a>UpdateProvisionedProduct</a>). </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeRecord">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRecordOutcomeCallable DescribeRecordCallable(const Model::DescribeRecordRequest& request) const;

        /**
         * <p>Gets information about the specified request operation.</p> <p>Use this
         * operation after calling a request operation (for example,
         * <a>ProvisionProduct</a>, <a>TerminateProvisionedProduct</a>, or
         * <a>UpdateProvisionedProduct</a>). </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeRecord">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRecordAsync(const Model::DescribeRecordRequest& request, const DescribeRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the specified TagOption.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeTagOption">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTagOptionOutcome DescribeTagOption(const Model::DescribeTagOptionRequest& request) const;

        /**
         * <p>Gets information about the specified TagOption.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeTagOption">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTagOptionOutcomeCallable DescribeTagOptionCallable(const Model::DescribeTagOptionRequest& request) const;

        /**
         * <p>Gets information about the specified TagOption.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeTagOption">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTagOptionAsync(const Model::DescribeTagOptionRequest& request, const DescribeTagOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates a previously associated principal ARN from a specified
         * portfolio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DisassociatePrincipalFromPortfolio">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociatePrincipalFromPortfolioOutcome DisassociatePrincipalFromPortfolio(const Model::DisassociatePrincipalFromPortfolioRequest& request) const;

        /**
         * <p>Disassociates a previously associated principal ARN from a specified
         * portfolio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DisassociatePrincipalFromPortfolio">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociatePrincipalFromPortfolioOutcomeCallable DisassociatePrincipalFromPortfolioCallable(const Model::DisassociatePrincipalFromPortfolioRequest& request) const;

        /**
         * <p>Disassociates a previously associated principal ARN from a specified
         * portfolio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DisassociatePrincipalFromPortfolio">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociatePrincipalFromPortfolioAsync(const Model::DisassociatePrincipalFromPortfolioRequest& request, const DisassociatePrincipalFromPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates the specified product from the specified portfolio.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DisassociateProductFromPortfolio">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateProductFromPortfolioOutcome DisassociateProductFromPortfolio(const Model::DisassociateProductFromPortfolioRequest& request) const;

        /**
         * <p>Disassociates the specified product from the specified portfolio.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DisassociateProductFromPortfolio">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateProductFromPortfolioOutcomeCallable DisassociateProductFromPortfolioCallable(const Model::DisassociateProductFromPortfolioRequest& request) const;

        /**
         * <p>Disassociates the specified product from the specified portfolio.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DisassociateProductFromPortfolio">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateProductFromPortfolioAsync(const Model::DisassociateProductFromPortfolioRequest& request, const DisassociateProductFromPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates the specified TagOption from the specified
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DisassociateTagOptionFromResource">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateTagOptionFromResourceOutcome DisassociateTagOptionFromResource(const Model::DisassociateTagOptionFromResourceRequest& request) const;

        /**
         * <p>Disassociates the specified TagOption from the specified
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DisassociateTagOptionFromResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateTagOptionFromResourceOutcomeCallable DisassociateTagOptionFromResourceCallable(const Model::DisassociateTagOptionFromResourceRequest& request) const;

        /**
         * <p>Disassociates the specified TagOption from the specified
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DisassociateTagOptionFromResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateTagOptionFromResourceAsync(const Model::DisassociateTagOptionFromResourceRequest& request, const DisassociateTagOptionFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provisions or modifies a product based on the resource changes for the
         * specified plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ExecuteProvisionedProductPlan">AWS
         * API Reference</a></p>
         */
        virtual Model::ExecuteProvisionedProductPlanOutcome ExecuteProvisionedProductPlan(const Model::ExecuteProvisionedProductPlanRequest& request) const;

        /**
         * <p>Provisions or modifies a product based on the resource changes for the
         * specified plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ExecuteProvisionedProductPlan">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ExecuteProvisionedProductPlanOutcomeCallable ExecuteProvisionedProductPlanCallable(const Model::ExecuteProvisionedProductPlanRequest& request) const;

        /**
         * <p>Provisions or modifies a product based on the resource changes for the
         * specified plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ExecuteProvisionedProductPlan">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ExecuteProvisionedProductPlanAsync(const Model::ExecuteProvisionedProductPlanRequest& request, const ExecuteProvisionedProductPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all portfolios for which sharing was accepted by this
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListAcceptedPortfolioShares">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAcceptedPortfolioSharesOutcome ListAcceptedPortfolioShares(const Model::ListAcceptedPortfolioSharesRequest& request) const;

        /**
         * <p>Lists all portfolios for which sharing was accepted by this
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListAcceptedPortfolioShares">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAcceptedPortfolioSharesOutcomeCallable ListAcceptedPortfolioSharesCallable(const Model::ListAcceptedPortfolioSharesRequest& request) const;

        /**
         * <p>Lists all portfolios for which sharing was accepted by this
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListAcceptedPortfolioShares">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAcceptedPortfolioSharesAsync(const Model::ListAcceptedPortfolioSharesRequest& request, const ListAcceptedPortfolioSharesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the constraints for the specified portfolio and product.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListConstraintsForPortfolio">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConstraintsForPortfolioOutcome ListConstraintsForPortfolio(const Model::ListConstraintsForPortfolioRequest& request) const;

        /**
         * <p>Lists the constraints for the specified portfolio and product.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListConstraintsForPortfolio">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListConstraintsForPortfolioOutcomeCallable ListConstraintsForPortfolioCallable(const Model::ListConstraintsForPortfolioRequest& request) const;

        /**
         * <p>Lists the constraints for the specified portfolio and product.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListConstraintsForPortfolio">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListConstraintsForPortfolioAsync(const Model::ListConstraintsForPortfolioRequest& request, const ListConstraintsForPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the paths to the specified product. A path is how the user has access
         * to a specified product, and is necessary when provisioning a product. A path
         * also determines the constraints put on the product.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListLaunchPaths">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLaunchPathsOutcome ListLaunchPaths(const Model::ListLaunchPathsRequest& request) const;

        /**
         * <p>Lists the paths to the specified product. A path is how the user has access
         * to a specified product, and is necessary when provisioning a product. A path
         * also determines the constraints put on the product.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListLaunchPaths">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLaunchPathsOutcomeCallable ListLaunchPathsCallable(const Model::ListLaunchPathsRequest& request) const;

        /**
         * <p>Lists the paths to the specified product. A path is how the user has access
         * to a specified product, and is necessary when provisioning a product. A path
         * also determines the constraints put on the product.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListLaunchPaths">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLaunchPathsAsync(const Model::ListLaunchPathsRequest& request, const ListLaunchPathsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the account IDs that have access to the specified
         * portfolio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListPortfolioAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPortfolioAccessOutcome ListPortfolioAccess(const Model::ListPortfolioAccessRequest& request) const;

        /**
         * <p>Lists the account IDs that have access to the specified
         * portfolio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListPortfolioAccess">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPortfolioAccessOutcomeCallable ListPortfolioAccessCallable(const Model::ListPortfolioAccessRequest& request) const;

        /**
         * <p>Lists the account IDs that have access to the specified
         * portfolio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListPortfolioAccess">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPortfolioAccessAsync(const Model::ListPortfolioAccessRequest& request, const ListPortfolioAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all portfolios in the catalog.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListPortfolios">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPortfoliosOutcome ListPortfolios(const Model::ListPortfoliosRequest& request) const;

        /**
         * <p>Lists all portfolios in the catalog.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListPortfolios">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPortfoliosOutcomeCallable ListPortfoliosCallable(const Model::ListPortfoliosRequest& request) const;

        /**
         * <p>Lists all portfolios in the catalog.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListPortfolios">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPortfoliosAsync(const Model::ListPortfoliosRequest& request, const ListPortfoliosResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all portfolios that the specified product is associated
         * with.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListPortfoliosForProduct">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPortfoliosForProductOutcome ListPortfoliosForProduct(const Model::ListPortfoliosForProductRequest& request) const;

        /**
         * <p>Lists all portfolios that the specified product is associated
         * with.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListPortfoliosForProduct">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPortfoliosForProductOutcomeCallable ListPortfoliosForProductCallable(const Model::ListPortfoliosForProductRequest& request) const;

        /**
         * <p>Lists all portfolios that the specified product is associated
         * with.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListPortfoliosForProduct">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPortfoliosForProductAsync(const Model::ListPortfoliosForProductRequest& request, const ListPortfoliosForProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all principal ARNs associated with the specified
         * portfolio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListPrincipalsForPortfolio">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPrincipalsForPortfolioOutcome ListPrincipalsForPortfolio(const Model::ListPrincipalsForPortfolioRequest& request) const;

        /**
         * <p>Lists all principal ARNs associated with the specified
         * portfolio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListPrincipalsForPortfolio">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPrincipalsForPortfolioOutcomeCallable ListPrincipalsForPortfolioCallable(const Model::ListPrincipalsForPortfolioRequest& request) const;

        /**
         * <p>Lists all principal ARNs associated with the specified
         * portfolio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListPrincipalsForPortfolio">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPrincipalsForPortfolioAsync(const Model::ListPrincipalsForPortfolioRequest& request, const ListPrincipalsForPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the plans for the specified provisioned product or all plans to which
         * the user has access.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListProvisionedProductPlans">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProvisionedProductPlansOutcome ListProvisionedProductPlans(const Model::ListProvisionedProductPlansRequest& request) const;

        /**
         * <p>Lists the plans for the specified provisioned product or all plans to which
         * the user has access.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListProvisionedProductPlans">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListProvisionedProductPlansOutcomeCallable ListProvisionedProductPlansCallable(const Model::ListProvisionedProductPlansRequest& request) const;

        /**
         * <p>Lists the plans for the specified provisioned product or all plans to which
         * the user has access.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListProvisionedProductPlans">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListProvisionedProductPlansAsync(const Model::ListProvisionedProductPlansRequest& request, const ListProvisionedProductPlansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all provisioning artifacts (also known as versions) for the specified
         * product.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListProvisioningArtifacts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProvisioningArtifactsOutcome ListProvisioningArtifacts(const Model::ListProvisioningArtifactsRequest& request) const;

        /**
         * <p>Lists all provisioning artifacts (also known as versions) for the specified
         * product.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListProvisioningArtifacts">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListProvisioningArtifactsOutcomeCallable ListProvisioningArtifactsCallable(const Model::ListProvisioningArtifactsRequest& request) const;

        /**
         * <p>Lists all provisioning artifacts (also known as versions) for the specified
         * product.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListProvisioningArtifacts">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListProvisioningArtifactsAsync(const Model::ListProvisioningArtifactsRequest& request, const ListProvisioningArtifactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the specified requests or all performed requests.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListRecordHistory">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRecordHistoryOutcome ListRecordHistory(const Model::ListRecordHistoryRequest& request) const;

        /**
         * <p>Lists the specified requests or all performed requests.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListRecordHistory">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRecordHistoryOutcomeCallable ListRecordHistoryCallable(const Model::ListRecordHistoryRequest& request) const;

        /**
         * <p>Lists the specified requests or all performed requests.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListRecordHistory">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRecordHistoryAsync(const Model::ListRecordHistoryRequest& request, const ListRecordHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the resources associated with the specified TagOption.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListResourcesForTagOption">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourcesForTagOptionOutcome ListResourcesForTagOption(const Model::ListResourcesForTagOptionRequest& request) const;

        /**
         * <p>Lists the resources associated with the specified TagOption.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListResourcesForTagOption">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListResourcesForTagOptionOutcomeCallable ListResourcesForTagOptionCallable(const Model::ListResourcesForTagOptionRequest& request) const;

        /**
         * <p>Lists the resources associated with the specified TagOption.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListResourcesForTagOption">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListResourcesForTagOptionAsync(const Model::ListResourcesForTagOptionRequest& request, const ListResourcesForTagOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the specified TagOptions or all TagOptions.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListTagOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagOptionsOutcome ListTagOptions(const Model::ListTagOptionsRequest& request) const;

        /**
         * <p>Lists the specified TagOptions or all TagOptions.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListTagOptions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagOptionsOutcomeCallable ListTagOptionsCallable(const Model::ListTagOptionsRequest& request) const;

        /**
         * <p>Lists the specified TagOptions or all TagOptions.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListTagOptions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagOptionsAsync(const Model::ListTagOptionsRequest& request, const ListTagOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provisions the specified product.</p> <p>A provisioned product is a resourced
         * instance of a product. For example, provisioning a product based on a
         * CloudFormation template launches a CloudFormation stack and its underlying
         * resources. You can check the status of this request using
         * <a>DescribeRecord</a>.</p> <p>If the request contains a tag key with an empty
         * list of values, there is a tag conflict for that key. Do not include conflicted
         * keys as tags, or this causes the error "Parameter validation failed: Missing
         * required parameter in Tags[<i>N</i>]:<i>Value</i>".</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ProvisionProduct">AWS
         * API Reference</a></p>
         */
        virtual Model::ProvisionProductOutcome ProvisionProduct(const Model::ProvisionProductRequest& request) const;

        /**
         * <p>Provisions the specified product.</p> <p>A provisioned product is a resourced
         * instance of a product. For example, provisioning a product based on a
         * CloudFormation template launches a CloudFormation stack and its underlying
         * resources. You can check the status of this request using
         * <a>DescribeRecord</a>.</p> <p>If the request contains a tag key with an empty
         * list of values, there is a tag conflict for that key. Do not include conflicted
         * keys as tags, or this causes the error "Parameter validation failed: Missing
         * required parameter in Tags[<i>N</i>]:<i>Value</i>".</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ProvisionProduct">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ProvisionProductOutcomeCallable ProvisionProductCallable(const Model::ProvisionProductRequest& request) const;

        /**
         * <p>Provisions the specified product.</p> <p>A provisioned product is a resourced
         * instance of a product. For example, provisioning a product based on a
         * CloudFormation template launches a CloudFormation stack and its underlying
         * resources. You can check the status of this request using
         * <a>DescribeRecord</a>.</p> <p>If the request contains a tag key with an empty
         * list of values, there is a tag conflict for that key. Do not include conflicted
         * keys as tags, or this causes the error "Parameter validation failed: Missing
         * required parameter in Tags[<i>N</i>]:<i>Value</i>".</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ProvisionProduct">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ProvisionProductAsync(const Model::ProvisionProductRequest& request, const ProvisionProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Rejects an offer to share the specified portfolio.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/RejectPortfolioShare">AWS
         * API Reference</a></p>
         */
        virtual Model::RejectPortfolioShareOutcome RejectPortfolioShare(const Model::RejectPortfolioShareRequest& request) const;

        /**
         * <p>Rejects an offer to share the specified portfolio.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/RejectPortfolioShare">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RejectPortfolioShareOutcomeCallable RejectPortfolioShareCallable(const Model::RejectPortfolioShareRequest& request) const;

        /**
         * <p>Rejects an offer to share the specified portfolio.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/RejectPortfolioShare">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RejectPortfolioShareAsync(const Model::RejectPortfolioShareRequest& request, const RejectPortfolioShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the provisioned products that are available (not terminated).</p> <p>To
         * use additional filtering, see <a>SearchProvisionedProducts</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ScanProvisionedProducts">AWS
         * API Reference</a></p>
         */
        virtual Model::ScanProvisionedProductsOutcome ScanProvisionedProducts(const Model::ScanProvisionedProductsRequest& request) const;

        /**
         * <p>Lists the provisioned products that are available (not terminated).</p> <p>To
         * use additional filtering, see <a>SearchProvisionedProducts</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ScanProvisionedProducts">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ScanProvisionedProductsOutcomeCallable ScanProvisionedProductsCallable(const Model::ScanProvisionedProductsRequest& request) const;

        /**
         * <p>Lists the provisioned products that are available (not terminated).</p> <p>To
         * use additional filtering, see <a>SearchProvisionedProducts</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ScanProvisionedProducts">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ScanProvisionedProductsAsync(const Model::ScanProvisionedProductsRequest& request, const ScanProvisionedProductsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the products to which the caller has
         * access.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/SearchProducts">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchProductsOutcome SearchProducts(const Model::SearchProductsRequest& request) const;

        /**
         * <p>Gets information about the products to which the caller has
         * access.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/SearchProducts">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchProductsOutcomeCallable SearchProductsCallable(const Model::SearchProductsRequest& request) const;

        /**
         * <p>Gets information about the products to which the caller has
         * access.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/SearchProducts">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchProductsAsync(const Model::SearchProductsRequest& request, const SearchProductsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the products for the specified portfolio or all
         * products.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/SearchProductsAsAdmin">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchProductsAsAdminOutcome SearchProductsAsAdmin(const Model::SearchProductsAsAdminRequest& request) const;

        /**
         * <p>Gets information about the products for the specified portfolio or all
         * products.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/SearchProductsAsAdmin">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchProductsAsAdminOutcomeCallable SearchProductsAsAdminCallable(const Model::SearchProductsAsAdminRequest& request) const;

        /**
         * <p>Gets information about the products for the specified portfolio or all
         * products.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/SearchProductsAsAdmin">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchProductsAsAdminAsync(const Model::SearchProductsAsAdminRequest& request, const SearchProductsAsAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the provisioned products that meet the specified
         * criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/SearchProvisionedProducts">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchProvisionedProductsOutcome SearchProvisionedProducts(const Model::SearchProvisionedProductsRequest& request) const;

        /**
         * <p>Gets information about the provisioned products that meet the specified
         * criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/SearchProvisionedProducts">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchProvisionedProductsOutcomeCallable SearchProvisionedProductsCallable(const Model::SearchProvisionedProductsRequest& request) const;

        /**
         * <p>Gets information about the provisioned products that meet the specified
         * criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/SearchProvisionedProducts">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchProvisionedProductsAsync(const Model::SearchProvisionedProductsRequest& request, const SearchProvisionedProductsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Terminates the specified provisioned product.</p> <p>This operation does not
         * delete any records associated with the provisioned product.</p> <p>You can check
         * the status of this request using <a>DescribeRecord</a>.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/TerminateProvisionedProduct">AWS
         * API Reference</a></p>
         */
        virtual Model::TerminateProvisionedProductOutcome TerminateProvisionedProduct(const Model::TerminateProvisionedProductRequest& request) const;

        /**
         * <p>Terminates the specified provisioned product.</p> <p>This operation does not
         * delete any records associated with the provisioned product.</p> <p>You can check
         * the status of this request using <a>DescribeRecord</a>.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/TerminateProvisionedProduct">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TerminateProvisionedProductOutcomeCallable TerminateProvisionedProductCallable(const Model::TerminateProvisionedProductRequest& request) const;

        /**
         * <p>Terminates the specified provisioned product.</p> <p>This operation does not
         * delete any records associated with the provisioned product.</p> <p>You can check
         * the status of this request using <a>DescribeRecord</a>.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/TerminateProvisionedProduct">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TerminateProvisionedProductAsync(const Model::TerminateProvisionedProductRequest& request, const TerminateProvisionedProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified constraint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/UpdateConstraint">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConstraintOutcome UpdateConstraint(const Model::UpdateConstraintRequest& request) const;

        /**
         * <p>Updates the specified constraint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/UpdateConstraint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateConstraintOutcomeCallable UpdateConstraintCallable(const Model::UpdateConstraintRequest& request) const;

        /**
         * <p>Updates the specified constraint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/UpdateConstraint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateConstraintAsync(const Model::UpdateConstraintRequest& request, const UpdateConstraintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified portfolio.</p> <p>You cannot update a product that was
         * shared with you.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/UpdatePortfolio">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePortfolioOutcome UpdatePortfolio(const Model::UpdatePortfolioRequest& request) const;

        /**
         * <p>Updates the specified portfolio.</p> <p>You cannot update a product that was
         * shared with you.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/UpdatePortfolio">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePortfolioOutcomeCallable UpdatePortfolioCallable(const Model::UpdatePortfolioRequest& request) const;

        /**
         * <p>Updates the specified portfolio.</p> <p>You cannot update a product that was
         * shared with you.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/UpdatePortfolio">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePortfolioAsync(const Model::UpdatePortfolioRequest& request, const UpdatePortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified product.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/UpdateProduct">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateProductOutcome UpdateProduct(const Model::UpdateProductRequest& request) const;

        /**
         * <p>Updates the specified product.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/UpdateProduct">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateProductOutcomeCallable UpdateProductCallable(const Model::UpdateProductRequest& request) const;

        /**
         * <p>Updates the specified product.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/UpdateProduct">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateProductAsync(const Model::UpdateProductRequest& request, const UpdateProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Requests updates to the configuration of the specified provisioned
         * product.</p> <p>If there are tags associated with the object, they cannot be
         * updated or added. Depending on the specific updates requested, this operation
         * can update with no interruption, with some interruption, or replace the
         * provisioned product entirely.</p> <p>You can check the status of this request
         * using <a>DescribeRecord</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/UpdateProvisionedProduct">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateProvisionedProductOutcome UpdateProvisionedProduct(const Model::UpdateProvisionedProductRequest& request) const;

        /**
         * <p>Requests updates to the configuration of the specified provisioned
         * product.</p> <p>If there are tags associated with the object, they cannot be
         * updated or added. Depending on the specific updates requested, this operation
         * can update with no interruption, with some interruption, or replace the
         * provisioned product entirely.</p> <p>You can check the status of this request
         * using <a>DescribeRecord</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/UpdateProvisionedProduct">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateProvisionedProductOutcomeCallable UpdateProvisionedProductCallable(const Model::UpdateProvisionedProductRequest& request) const;

        /**
         * <p>Requests updates to the configuration of the specified provisioned
         * product.</p> <p>If there are tags associated with the object, they cannot be
         * updated or added. Depending on the specific updates requested, this operation
         * can update with no interruption, with some interruption, or replace the
         * provisioned product entirely.</p> <p>You can check the status of this request
         * using <a>DescribeRecord</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/UpdateProvisionedProduct">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateProvisionedProductAsync(const Model::UpdateProvisionedProductRequest& request, const UpdateProvisionedProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified provisioning artifact (also known as a version) for the
         * specified product.</p> <p>You cannot update a provisioning artifact for a
         * product that was shared with you.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/UpdateProvisioningArtifact">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateProvisioningArtifactOutcome UpdateProvisioningArtifact(const Model::UpdateProvisioningArtifactRequest& request) const;

        /**
         * <p>Updates the specified provisioning artifact (also known as a version) for the
         * specified product.</p> <p>You cannot update a provisioning artifact for a
         * product that was shared with you.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/UpdateProvisioningArtifact">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateProvisioningArtifactOutcomeCallable UpdateProvisioningArtifactCallable(const Model::UpdateProvisioningArtifactRequest& request) const;

        /**
         * <p>Updates the specified provisioning artifact (also known as a version) for the
         * specified product.</p> <p>You cannot update a provisioning artifact for a
         * product that was shared with you.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/UpdateProvisioningArtifact">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateProvisioningArtifactAsync(const Model::UpdateProvisioningArtifactRequest& request, const UpdateProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified TagOption.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/UpdateTagOption">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTagOptionOutcome UpdateTagOption(const Model::UpdateTagOptionRequest& request) const;

        /**
         * <p>Updates the specified TagOption.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/UpdateTagOption">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateTagOptionOutcomeCallable UpdateTagOptionCallable(const Model::UpdateTagOptionRequest& request) const;

        /**
         * <p>Updates the specified TagOption.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/UpdateTagOption">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateTagOptionAsync(const Model::UpdateTagOptionRequest& request, const UpdateTagOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void AcceptPortfolioShareAsyncHelper(const Model::AcceptPortfolioShareRequest& request, const AcceptPortfolioShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociatePrincipalWithPortfolioAsyncHelper(const Model::AssociatePrincipalWithPortfolioRequest& request, const AssociatePrincipalWithPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateProductWithPortfolioAsyncHelper(const Model::AssociateProductWithPortfolioRequest& request, const AssociateProductWithPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateTagOptionWithResourceAsyncHelper(const Model::AssociateTagOptionWithResourceRequest& request, const AssociateTagOptionWithResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CopyProductAsyncHelper(const Model::CopyProductRequest& request, const CopyProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateConstraintAsyncHelper(const Model::CreateConstraintRequest& request, const CreateConstraintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePortfolioAsyncHelper(const Model::CreatePortfolioRequest& request, const CreatePortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePortfolioShareAsyncHelper(const Model::CreatePortfolioShareRequest& request, const CreatePortfolioShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateProductAsyncHelper(const Model::CreateProductRequest& request, const CreateProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateProvisionedProductPlanAsyncHelper(const Model::CreateProvisionedProductPlanRequest& request, const CreateProvisionedProductPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateProvisioningArtifactAsyncHelper(const Model::CreateProvisioningArtifactRequest& request, const CreateProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateTagOptionAsyncHelper(const Model::CreateTagOptionRequest& request, const CreateTagOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteConstraintAsyncHelper(const Model::DeleteConstraintRequest& request, const DeleteConstraintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePortfolioAsyncHelper(const Model::DeletePortfolioRequest& request, const DeletePortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePortfolioShareAsyncHelper(const Model::DeletePortfolioShareRequest& request, const DeletePortfolioShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteProductAsyncHelper(const Model::DeleteProductRequest& request, const DeleteProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteProvisionedProductPlanAsyncHelper(const Model::DeleteProvisionedProductPlanRequest& request, const DeleteProvisionedProductPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteProvisioningArtifactAsyncHelper(const Model::DeleteProvisioningArtifactRequest& request, const DeleteProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteTagOptionAsyncHelper(const Model::DeleteTagOptionRequest& request, const DeleteTagOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeConstraintAsyncHelper(const Model::DescribeConstraintRequest& request, const DescribeConstraintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeCopyProductStatusAsyncHelper(const Model::DescribeCopyProductStatusRequest& request, const DescribeCopyProductStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribePortfolioAsyncHelper(const Model::DescribePortfolioRequest& request, const DescribePortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeProductAsyncHelper(const Model::DescribeProductRequest& request, const DescribeProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeProductAsAdminAsyncHelper(const Model::DescribeProductAsAdminRequest& request, const DescribeProductAsAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeProductViewAsyncHelper(const Model::DescribeProductViewRequest& request, const DescribeProductViewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeProvisionedProductAsyncHelper(const Model::DescribeProvisionedProductRequest& request, const DescribeProvisionedProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeProvisionedProductPlanAsyncHelper(const Model::DescribeProvisionedProductPlanRequest& request, const DescribeProvisionedProductPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeProvisioningArtifactAsyncHelper(const Model::DescribeProvisioningArtifactRequest& request, const DescribeProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeProvisioningParametersAsyncHelper(const Model::DescribeProvisioningParametersRequest& request, const DescribeProvisioningParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeRecordAsyncHelper(const Model::DescribeRecordRequest& request, const DescribeRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTagOptionAsyncHelper(const Model::DescribeTagOptionRequest& request, const DescribeTagOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociatePrincipalFromPortfolioAsyncHelper(const Model::DisassociatePrincipalFromPortfolioRequest& request, const DisassociatePrincipalFromPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateProductFromPortfolioAsyncHelper(const Model::DisassociateProductFromPortfolioRequest& request, const DisassociateProductFromPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateTagOptionFromResourceAsyncHelper(const Model::DisassociateTagOptionFromResourceRequest& request, const DisassociateTagOptionFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ExecuteProvisionedProductPlanAsyncHelper(const Model::ExecuteProvisionedProductPlanRequest& request, const ExecuteProvisionedProductPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAcceptedPortfolioSharesAsyncHelper(const Model::ListAcceptedPortfolioSharesRequest& request, const ListAcceptedPortfolioSharesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListConstraintsForPortfolioAsyncHelper(const Model::ListConstraintsForPortfolioRequest& request, const ListConstraintsForPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListLaunchPathsAsyncHelper(const Model::ListLaunchPathsRequest& request, const ListLaunchPathsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPortfolioAccessAsyncHelper(const Model::ListPortfolioAccessRequest& request, const ListPortfolioAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPortfoliosAsyncHelper(const Model::ListPortfoliosRequest& request, const ListPortfoliosResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPortfoliosForProductAsyncHelper(const Model::ListPortfoliosForProductRequest& request, const ListPortfoliosForProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPrincipalsForPortfolioAsyncHelper(const Model::ListPrincipalsForPortfolioRequest& request, const ListPrincipalsForPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListProvisionedProductPlansAsyncHelper(const Model::ListProvisionedProductPlansRequest& request, const ListProvisionedProductPlansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListProvisioningArtifactsAsyncHelper(const Model::ListProvisioningArtifactsRequest& request, const ListProvisioningArtifactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRecordHistoryAsyncHelper(const Model::ListRecordHistoryRequest& request, const ListRecordHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListResourcesForTagOptionAsyncHelper(const Model::ListResourcesForTagOptionRequest& request, const ListResourcesForTagOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagOptionsAsyncHelper(const Model::ListTagOptionsRequest& request, const ListTagOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ProvisionProductAsyncHelper(const Model::ProvisionProductRequest& request, const ProvisionProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RejectPortfolioShareAsyncHelper(const Model::RejectPortfolioShareRequest& request, const RejectPortfolioShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ScanProvisionedProductsAsyncHelper(const Model::ScanProvisionedProductsRequest& request, const ScanProvisionedProductsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SearchProductsAsyncHelper(const Model::SearchProductsRequest& request, const SearchProductsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SearchProductsAsAdminAsyncHelper(const Model::SearchProductsAsAdminRequest& request, const SearchProductsAsAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SearchProvisionedProductsAsyncHelper(const Model::SearchProvisionedProductsRequest& request, const SearchProvisionedProductsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TerminateProvisionedProductAsyncHelper(const Model::TerminateProvisionedProductRequest& request, const TerminateProvisionedProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateConstraintAsyncHelper(const Model::UpdateConstraintRequest& request, const UpdateConstraintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdatePortfolioAsyncHelper(const Model::UpdatePortfolioRequest& request, const UpdatePortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateProductAsyncHelper(const Model::UpdateProductRequest& request, const UpdateProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateProvisionedProductAsyncHelper(const Model::UpdateProvisionedProductRequest& request, const UpdateProvisionedProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateProvisioningArtifactAsyncHelper(const Model::UpdateProvisioningArtifactRequest& request, const UpdateProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateTagOptionAsyncHelper(const Model::UpdateTagOptionRequest& request, const UpdateTagOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace ServiceCatalog
} // namespace Aws
