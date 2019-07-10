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
#include <aws/servicecatalog/model/AssociateBudgetWithResourceResult.h>
#include <aws/servicecatalog/model/AssociatePrincipalWithPortfolioResult.h>
#include <aws/servicecatalog/model/AssociateProductWithPortfolioResult.h>
#include <aws/servicecatalog/model/AssociateServiceActionWithProvisioningArtifactResult.h>
#include <aws/servicecatalog/model/AssociateTagOptionWithResourceResult.h>
#include <aws/servicecatalog/model/BatchAssociateServiceActionWithProvisioningArtifactResult.h>
#include <aws/servicecatalog/model/BatchDisassociateServiceActionFromProvisioningArtifactResult.h>
#include <aws/servicecatalog/model/CopyProductResult.h>
#include <aws/servicecatalog/model/CreateConstraintResult.h>
#include <aws/servicecatalog/model/CreatePortfolioResult.h>
#include <aws/servicecatalog/model/CreatePortfolioShareResult.h>
#include <aws/servicecatalog/model/CreateProductResult.h>
#include <aws/servicecatalog/model/CreateProvisionedProductPlanResult.h>
#include <aws/servicecatalog/model/CreateProvisioningArtifactResult.h>
#include <aws/servicecatalog/model/CreateServiceActionResult.h>
#include <aws/servicecatalog/model/CreateTagOptionResult.h>
#include <aws/servicecatalog/model/DeleteConstraintResult.h>
#include <aws/servicecatalog/model/DeletePortfolioResult.h>
#include <aws/servicecatalog/model/DeletePortfolioShareResult.h>
#include <aws/servicecatalog/model/DeleteProductResult.h>
#include <aws/servicecatalog/model/DeleteProvisionedProductPlanResult.h>
#include <aws/servicecatalog/model/DeleteProvisioningArtifactResult.h>
#include <aws/servicecatalog/model/DeleteServiceActionResult.h>
#include <aws/servicecatalog/model/DeleteTagOptionResult.h>
#include <aws/servicecatalog/model/DescribeConstraintResult.h>
#include <aws/servicecatalog/model/DescribeCopyProductStatusResult.h>
#include <aws/servicecatalog/model/DescribePortfolioResult.h>
#include <aws/servicecatalog/model/DescribePortfolioShareStatusResult.h>
#include <aws/servicecatalog/model/DescribeProductResult.h>
#include <aws/servicecatalog/model/DescribeProductAsAdminResult.h>
#include <aws/servicecatalog/model/DescribeProductViewResult.h>
#include <aws/servicecatalog/model/DescribeProvisionedProductResult.h>
#include <aws/servicecatalog/model/DescribeProvisionedProductPlanResult.h>
#include <aws/servicecatalog/model/DescribeProvisioningArtifactResult.h>
#include <aws/servicecatalog/model/DescribeProvisioningParametersResult.h>
#include <aws/servicecatalog/model/DescribeRecordResult.h>
#include <aws/servicecatalog/model/DescribeServiceActionResult.h>
#include <aws/servicecatalog/model/DescribeServiceActionExecutionParametersResult.h>
#include <aws/servicecatalog/model/DescribeTagOptionResult.h>
#include <aws/servicecatalog/model/DisableAWSOrganizationsAccessResult.h>
#include <aws/servicecatalog/model/DisassociateBudgetFromResourceResult.h>
#include <aws/servicecatalog/model/DisassociatePrincipalFromPortfolioResult.h>
#include <aws/servicecatalog/model/DisassociateProductFromPortfolioResult.h>
#include <aws/servicecatalog/model/DisassociateServiceActionFromProvisioningArtifactResult.h>
#include <aws/servicecatalog/model/DisassociateTagOptionFromResourceResult.h>
#include <aws/servicecatalog/model/EnableAWSOrganizationsAccessResult.h>
#include <aws/servicecatalog/model/ExecuteProvisionedProductPlanResult.h>
#include <aws/servicecatalog/model/ExecuteProvisionedProductServiceActionResult.h>
#include <aws/servicecatalog/model/GetAWSOrganizationsAccessStatusResult.h>
#include <aws/servicecatalog/model/ListAcceptedPortfolioSharesResult.h>
#include <aws/servicecatalog/model/ListBudgetsForResourceResult.h>
#include <aws/servicecatalog/model/ListConstraintsForPortfolioResult.h>
#include <aws/servicecatalog/model/ListLaunchPathsResult.h>
#include <aws/servicecatalog/model/ListOrganizationPortfolioAccessResult.h>
#include <aws/servicecatalog/model/ListPortfolioAccessResult.h>
#include <aws/servicecatalog/model/ListPortfoliosResult.h>
#include <aws/servicecatalog/model/ListPortfoliosForProductResult.h>
#include <aws/servicecatalog/model/ListPrincipalsForPortfolioResult.h>
#include <aws/servicecatalog/model/ListProvisionedProductPlansResult.h>
#include <aws/servicecatalog/model/ListProvisioningArtifactsResult.h>
#include <aws/servicecatalog/model/ListProvisioningArtifactsForServiceActionResult.h>
#include <aws/servicecatalog/model/ListRecordHistoryResult.h>
#include <aws/servicecatalog/model/ListResourcesForTagOptionResult.h>
#include <aws/servicecatalog/model/ListServiceActionsResult.h>
#include <aws/servicecatalog/model/ListServiceActionsForProvisioningArtifactResult.h>
#include <aws/servicecatalog/model/ListStackInstancesForProvisionedProductResult.h>
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
#include <aws/servicecatalog/model/UpdateProvisionedProductPropertiesResult.h>
#include <aws/servicecatalog/model/UpdateProvisioningArtifactResult.h>
#include <aws/servicecatalog/model/UpdateServiceActionResult.h>
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
        class AssociateBudgetWithResourceRequest;
        class AssociatePrincipalWithPortfolioRequest;
        class AssociateProductWithPortfolioRequest;
        class AssociateServiceActionWithProvisioningArtifactRequest;
        class AssociateTagOptionWithResourceRequest;
        class BatchAssociateServiceActionWithProvisioningArtifactRequest;
        class BatchDisassociateServiceActionFromProvisioningArtifactRequest;
        class CopyProductRequest;
        class CreateConstraintRequest;
        class CreatePortfolioRequest;
        class CreatePortfolioShareRequest;
        class CreateProductRequest;
        class CreateProvisionedProductPlanRequest;
        class CreateProvisioningArtifactRequest;
        class CreateServiceActionRequest;
        class CreateTagOptionRequest;
        class DeleteConstraintRequest;
        class DeletePortfolioRequest;
        class DeletePortfolioShareRequest;
        class DeleteProductRequest;
        class DeleteProvisionedProductPlanRequest;
        class DeleteProvisioningArtifactRequest;
        class DeleteServiceActionRequest;
        class DeleteTagOptionRequest;
        class DescribeConstraintRequest;
        class DescribeCopyProductStatusRequest;
        class DescribePortfolioRequest;
        class DescribePortfolioShareStatusRequest;
        class DescribeProductRequest;
        class DescribeProductAsAdminRequest;
        class DescribeProductViewRequest;
        class DescribeProvisionedProductRequest;
        class DescribeProvisionedProductPlanRequest;
        class DescribeProvisioningArtifactRequest;
        class DescribeProvisioningParametersRequest;
        class DescribeRecordRequest;
        class DescribeServiceActionRequest;
        class DescribeServiceActionExecutionParametersRequest;
        class DescribeTagOptionRequest;
        class DisableAWSOrganizationsAccessRequest;
        class DisassociateBudgetFromResourceRequest;
        class DisassociatePrincipalFromPortfolioRequest;
        class DisassociateProductFromPortfolioRequest;
        class DisassociateServiceActionFromProvisioningArtifactRequest;
        class DisassociateTagOptionFromResourceRequest;
        class EnableAWSOrganizationsAccessRequest;
        class ExecuteProvisionedProductPlanRequest;
        class ExecuteProvisionedProductServiceActionRequest;
        class GetAWSOrganizationsAccessStatusRequest;
        class ListAcceptedPortfolioSharesRequest;
        class ListBudgetsForResourceRequest;
        class ListConstraintsForPortfolioRequest;
        class ListLaunchPathsRequest;
        class ListOrganizationPortfolioAccessRequest;
        class ListPortfolioAccessRequest;
        class ListPortfoliosRequest;
        class ListPortfoliosForProductRequest;
        class ListPrincipalsForPortfolioRequest;
        class ListProvisionedProductPlansRequest;
        class ListProvisioningArtifactsRequest;
        class ListProvisioningArtifactsForServiceActionRequest;
        class ListRecordHistoryRequest;
        class ListResourcesForTagOptionRequest;
        class ListServiceActionsRequest;
        class ListServiceActionsForProvisioningArtifactRequest;
        class ListStackInstancesForProvisionedProductRequest;
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
        class UpdateProvisionedProductPropertiesRequest;
        class UpdateProvisioningArtifactRequest;
        class UpdateServiceActionRequest;
        class UpdateTagOptionRequest;

        typedef Aws::Utils::Outcome<AcceptPortfolioShareResult, Aws::Client::AWSError<ServiceCatalogErrors>> AcceptPortfolioShareOutcome;
        typedef Aws::Utils::Outcome<AssociateBudgetWithResourceResult, Aws::Client::AWSError<ServiceCatalogErrors>> AssociateBudgetWithResourceOutcome;
        typedef Aws::Utils::Outcome<AssociatePrincipalWithPortfolioResult, Aws::Client::AWSError<ServiceCatalogErrors>> AssociatePrincipalWithPortfolioOutcome;
        typedef Aws::Utils::Outcome<AssociateProductWithPortfolioResult, Aws::Client::AWSError<ServiceCatalogErrors>> AssociateProductWithPortfolioOutcome;
        typedef Aws::Utils::Outcome<AssociateServiceActionWithProvisioningArtifactResult, Aws::Client::AWSError<ServiceCatalogErrors>> AssociateServiceActionWithProvisioningArtifactOutcome;
        typedef Aws::Utils::Outcome<AssociateTagOptionWithResourceResult, Aws::Client::AWSError<ServiceCatalogErrors>> AssociateTagOptionWithResourceOutcome;
        typedef Aws::Utils::Outcome<BatchAssociateServiceActionWithProvisioningArtifactResult, Aws::Client::AWSError<ServiceCatalogErrors>> BatchAssociateServiceActionWithProvisioningArtifactOutcome;
        typedef Aws::Utils::Outcome<BatchDisassociateServiceActionFromProvisioningArtifactResult, Aws::Client::AWSError<ServiceCatalogErrors>> BatchDisassociateServiceActionFromProvisioningArtifactOutcome;
        typedef Aws::Utils::Outcome<CopyProductResult, Aws::Client::AWSError<ServiceCatalogErrors>> CopyProductOutcome;
        typedef Aws::Utils::Outcome<CreateConstraintResult, Aws::Client::AWSError<ServiceCatalogErrors>> CreateConstraintOutcome;
        typedef Aws::Utils::Outcome<CreatePortfolioResult, Aws::Client::AWSError<ServiceCatalogErrors>> CreatePortfolioOutcome;
        typedef Aws::Utils::Outcome<CreatePortfolioShareResult, Aws::Client::AWSError<ServiceCatalogErrors>> CreatePortfolioShareOutcome;
        typedef Aws::Utils::Outcome<CreateProductResult, Aws::Client::AWSError<ServiceCatalogErrors>> CreateProductOutcome;
        typedef Aws::Utils::Outcome<CreateProvisionedProductPlanResult, Aws::Client::AWSError<ServiceCatalogErrors>> CreateProvisionedProductPlanOutcome;
        typedef Aws::Utils::Outcome<CreateProvisioningArtifactResult, Aws::Client::AWSError<ServiceCatalogErrors>> CreateProvisioningArtifactOutcome;
        typedef Aws::Utils::Outcome<CreateServiceActionResult, Aws::Client::AWSError<ServiceCatalogErrors>> CreateServiceActionOutcome;
        typedef Aws::Utils::Outcome<CreateTagOptionResult, Aws::Client::AWSError<ServiceCatalogErrors>> CreateTagOptionOutcome;
        typedef Aws::Utils::Outcome<DeleteConstraintResult, Aws::Client::AWSError<ServiceCatalogErrors>> DeleteConstraintOutcome;
        typedef Aws::Utils::Outcome<DeletePortfolioResult, Aws::Client::AWSError<ServiceCatalogErrors>> DeletePortfolioOutcome;
        typedef Aws::Utils::Outcome<DeletePortfolioShareResult, Aws::Client::AWSError<ServiceCatalogErrors>> DeletePortfolioShareOutcome;
        typedef Aws::Utils::Outcome<DeleteProductResult, Aws::Client::AWSError<ServiceCatalogErrors>> DeleteProductOutcome;
        typedef Aws::Utils::Outcome<DeleteProvisionedProductPlanResult, Aws::Client::AWSError<ServiceCatalogErrors>> DeleteProvisionedProductPlanOutcome;
        typedef Aws::Utils::Outcome<DeleteProvisioningArtifactResult, Aws::Client::AWSError<ServiceCatalogErrors>> DeleteProvisioningArtifactOutcome;
        typedef Aws::Utils::Outcome<DeleteServiceActionResult, Aws::Client::AWSError<ServiceCatalogErrors>> DeleteServiceActionOutcome;
        typedef Aws::Utils::Outcome<DeleteTagOptionResult, Aws::Client::AWSError<ServiceCatalogErrors>> DeleteTagOptionOutcome;
        typedef Aws::Utils::Outcome<DescribeConstraintResult, Aws::Client::AWSError<ServiceCatalogErrors>> DescribeConstraintOutcome;
        typedef Aws::Utils::Outcome<DescribeCopyProductStatusResult, Aws::Client::AWSError<ServiceCatalogErrors>> DescribeCopyProductStatusOutcome;
        typedef Aws::Utils::Outcome<DescribePortfolioResult, Aws::Client::AWSError<ServiceCatalogErrors>> DescribePortfolioOutcome;
        typedef Aws::Utils::Outcome<DescribePortfolioShareStatusResult, Aws::Client::AWSError<ServiceCatalogErrors>> DescribePortfolioShareStatusOutcome;
        typedef Aws::Utils::Outcome<DescribeProductResult, Aws::Client::AWSError<ServiceCatalogErrors>> DescribeProductOutcome;
        typedef Aws::Utils::Outcome<DescribeProductAsAdminResult, Aws::Client::AWSError<ServiceCatalogErrors>> DescribeProductAsAdminOutcome;
        typedef Aws::Utils::Outcome<DescribeProductViewResult, Aws::Client::AWSError<ServiceCatalogErrors>> DescribeProductViewOutcome;
        typedef Aws::Utils::Outcome<DescribeProvisionedProductResult, Aws::Client::AWSError<ServiceCatalogErrors>> DescribeProvisionedProductOutcome;
        typedef Aws::Utils::Outcome<DescribeProvisionedProductPlanResult, Aws::Client::AWSError<ServiceCatalogErrors>> DescribeProvisionedProductPlanOutcome;
        typedef Aws::Utils::Outcome<DescribeProvisioningArtifactResult, Aws::Client::AWSError<ServiceCatalogErrors>> DescribeProvisioningArtifactOutcome;
        typedef Aws::Utils::Outcome<DescribeProvisioningParametersResult, Aws::Client::AWSError<ServiceCatalogErrors>> DescribeProvisioningParametersOutcome;
        typedef Aws::Utils::Outcome<DescribeRecordResult, Aws::Client::AWSError<ServiceCatalogErrors>> DescribeRecordOutcome;
        typedef Aws::Utils::Outcome<DescribeServiceActionResult, Aws::Client::AWSError<ServiceCatalogErrors>> DescribeServiceActionOutcome;
        typedef Aws::Utils::Outcome<DescribeServiceActionExecutionParametersResult, Aws::Client::AWSError<ServiceCatalogErrors>> DescribeServiceActionExecutionParametersOutcome;
        typedef Aws::Utils::Outcome<DescribeTagOptionResult, Aws::Client::AWSError<ServiceCatalogErrors>> DescribeTagOptionOutcome;
        typedef Aws::Utils::Outcome<DisableAWSOrganizationsAccessResult, Aws::Client::AWSError<ServiceCatalogErrors>> DisableAWSOrganizationsAccessOutcome;
        typedef Aws::Utils::Outcome<DisassociateBudgetFromResourceResult, Aws::Client::AWSError<ServiceCatalogErrors>> DisassociateBudgetFromResourceOutcome;
        typedef Aws::Utils::Outcome<DisassociatePrincipalFromPortfolioResult, Aws::Client::AWSError<ServiceCatalogErrors>> DisassociatePrincipalFromPortfolioOutcome;
        typedef Aws::Utils::Outcome<DisassociateProductFromPortfolioResult, Aws::Client::AWSError<ServiceCatalogErrors>> DisassociateProductFromPortfolioOutcome;
        typedef Aws::Utils::Outcome<DisassociateServiceActionFromProvisioningArtifactResult, Aws::Client::AWSError<ServiceCatalogErrors>> DisassociateServiceActionFromProvisioningArtifactOutcome;
        typedef Aws::Utils::Outcome<DisassociateTagOptionFromResourceResult, Aws::Client::AWSError<ServiceCatalogErrors>> DisassociateTagOptionFromResourceOutcome;
        typedef Aws::Utils::Outcome<EnableAWSOrganizationsAccessResult, Aws::Client::AWSError<ServiceCatalogErrors>> EnableAWSOrganizationsAccessOutcome;
        typedef Aws::Utils::Outcome<ExecuteProvisionedProductPlanResult, Aws::Client::AWSError<ServiceCatalogErrors>> ExecuteProvisionedProductPlanOutcome;
        typedef Aws::Utils::Outcome<ExecuteProvisionedProductServiceActionResult, Aws::Client::AWSError<ServiceCatalogErrors>> ExecuteProvisionedProductServiceActionOutcome;
        typedef Aws::Utils::Outcome<GetAWSOrganizationsAccessStatusResult, Aws::Client::AWSError<ServiceCatalogErrors>> GetAWSOrganizationsAccessStatusOutcome;
        typedef Aws::Utils::Outcome<ListAcceptedPortfolioSharesResult, Aws::Client::AWSError<ServiceCatalogErrors>> ListAcceptedPortfolioSharesOutcome;
        typedef Aws::Utils::Outcome<ListBudgetsForResourceResult, Aws::Client::AWSError<ServiceCatalogErrors>> ListBudgetsForResourceOutcome;
        typedef Aws::Utils::Outcome<ListConstraintsForPortfolioResult, Aws::Client::AWSError<ServiceCatalogErrors>> ListConstraintsForPortfolioOutcome;
        typedef Aws::Utils::Outcome<ListLaunchPathsResult, Aws::Client::AWSError<ServiceCatalogErrors>> ListLaunchPathsOutcome;
        typedef Aws::Utils::Outcome<ListOrganizationPortfolioAccessResult, Aws::Client::AWSError<ServiceCatalogErrors>> ListOrganizationPortfolioAccessOutcome;
        typedef Aws::Utils::Outcome<ListPortfolioAccessResult, Aws::Client::AWSError<ServiceCatalogErrors>> ListPortfolioAccessOutcome;
        typedef Aws::Utils::Outcome<ListPortfoliosResult, Aws::Client::AWSError<ServiceCatalogErrors>> ListPortfoliosOutcome;
        typedef Aws::Utils::Outcome<ListPortfoliosForProductResult, Aws::Client::AWSError<ServiceCatalogErrors>> ListPortfoliosForProductOutcome;
        typedef Aws::Utils::Outcome<ListPrincipalsForPortfolioResult, Aws::Client::AWSError<ServiceCatalogErrors>> ListPrincipalsForPortfolioOutcome;
        typedef Aws::Utils::Outcome<ListProvisionedProductPlansResult, Aws::Client::AWSError<ServiceCatalogErrors>> ListProvisionedProductPlansOutcome;
        typedef Aws::Utils::Outcome<ListProvisioningArtifactsResult, Aws::Client::AWSError<ServiceCatalogErrors>> ListProvisioningArtifactsOutcome;
        typedef Aws::Utils::Outcome<ListProvisioningArtifactsForServiceActionResult, Aws::Client::AWSError<ServiceCatalogErrors>> ListProvisioningArtifactsForServiceActionOutcome;
        typedef Aws::Utils::Outcome<ListRecordHistoryResult, Aws::Client::AWSError<ServiceCatalogErrors>> ListRecordHistoryOutcome;
        typedef Aws::Utils::Outcome<ListResourcesForTagOptionResult, Aws::Client::AWSError<ServiceCatalogErrors>> ListResourcesForTagOptionOutcome;
        typedef Aws::Utils::Outcome<ListServiceActionsResult, Aws::Client::AWSError<ServiceCatalogErrors>> ListServiceActionsOutcome;
        typedef Aws::Utils::Outcome<ListServiceActionsForProvisioningArtifactResult, Aws::Client::AWSError<ServiceCatalogErrors>> ListServiceActionsForProvisioningArtifactOutcome;
        typedef Aws::Utils::Outcome<ListStackInstancesForProvisionedProductResult, Aws::Client::AWSError<ServiceCatalogErrors>> ListStackInstancesForProvisionedProductOutcome;
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
        typedef Aws::Utils::Outcome<UpdateProvisionedProductPropertiesResult, Aws::Client::AWSError<ServiceCatalogErrors>> UpdateProvisionedProductPropertiesOutcome;
        typedef Aws::Utils::Outcome<UpdateProvisioningArtifactResult, Aws::Client::AWSError<ServiceCatalogErrors>> UpdateProvisioningArtifactOutcome;
        typedef Aws::Utils::Outcome<UpdateServiceActionResult, Aws::Client::AWSError<ServiceCatalogErrors>> UpdateServiceActionOutcome;
        typedef Aws::Utils::Outcome<UpdateTagOptionResult, Aws::Client::AWSError<ServiceCatalogErrors>> UpdateTagOptionOutcome;

        typedef std::future<AcceptPortfolioShareOutcome> AcceptPortfolioShareOutcomeCallable;
        typedef std::future<AssociateBudgetWithResourceOutcome> AssociateBudgetWithResourceOutcomeCallable;
        typedef std::future<AssociatePrincipalWithPortfolioOutcome> AssociatePrincipalWithPortfolioOutcomeCallable;
        typedef std::future<AssociateProductWithPortfolioOutcome> AssociateProductWithPortfolioOutcomeCallable;
        typedef std::future<AssociateServiceActionWithProvisioningArtifactOutcome> AssociateServiceActionWithProvisioningArtifactOutcomeCallable;
        typedef std::future<AssociateTagOptionWithResourceOutcome> AssociateTagOptionWithResourceOutcomeCallable;
        typedef std::future<BatchAssociateServiceActionWithProvisioningArtifactOutcome> BatchAssociateServiceActionWithProvisioningArtifactOutcomeCallable;
        typedef std::future<BatchDisassociateServiceActionFromProvisioningArtifactOutcome> BatchDisassociateServiceActionFromProvisioningArtifactOutcomeCallable;
        typedef std::future<CopyProductOutcome> CopyProductOutcomeCallable;
        typedef std::future<CreateConstraintOutcome> CreateConstraintOutcomeCallable;
        typedef std::future<CreatePortfolioOutcome> CreatePortfolioOutcomeCallable;
        typedef std::future<CreatePortfolioShareOutcome> CreatePortfolioShareOutcomeCallable;
        typedef std::future<CreateProductOutcome> CreateProductOutcomeCallable;
        typedef std::future<CreateProvisionedProductPlanOutcome> CreateProvisionedProductPlanOutcomeCallable;
        typedef std::future<CreateProvisioningArtifactOutcome> CreateProvisioningArtifactOutcomeCallable;
        typedef std::future<CreateServiceActionOutcome> CreateServiceActionOutcomeCallable;
        typedef std::future<CreateTagOptionOutcome> CreateTagOptionOutcomeCallable;
        typedef std::future<DeleteConstraintOutcome> DeleteConstraintOutcomeCallable;
        typedef std::future<DeletePortfolioOutcome> DeletePortfolioOutcomeCallable;
        typedef std::future<DeletePortfolioShareOutcome> DeletePortfolioShareOutcomeCallable;
        typedef std::future<DeleteProductOutcome> DeleteProductOutcomeCallable;
        typedef std::future<DeleteProvisionedProductPlanOutcome> DeleteProvisionedProductPlanOutcomeCallable;
        typedef std::future<DeleteProvisioningArtifactOutcome> DeleteProvisioningArtifactOutcomeCallable;
        typedef std::future<DeleteServiceActionOutcome> DeleteServiceActionOutcomeCallable;
        typedef std::future<DeleteTagOptionOutcome> DeleteTagOptionOutcomeCallable;
        typedef std::future<DescribeConstraintOutcome> DescribeConstraintOutcomeCallable;
        typedef std::future<DescribeCopyProductStatusOutcome> DescribeCopyProductStatusOutcomeCallable;
        typedef std::future<DescribePortfolioOutcome> DescribePortfolioOutcomeCallable;
        typedef std::future<DescribePortfolioShareStatusOutcome> DescribePortfolioShareStatusOutcomeCallable;
        typedef std::future<DescribeProductOutcome> DescribeProductOutcomeCallable;
        typedef std::future<DescribeProductAsAdminOutcome> DescribeProductAsAdminOutcomeCallable;
        typedef std::future<DescribeProductViewOutcome> DescribeProductViewOutcomeCallable;
        typedef std::future<DescribeProvisionedProductOutcome> DescribeProvisionedProductOutcomeCallable;
        typedef std::future<DescribeProvisionedProductPlanOutcome> DescribeProvisionedProductPlanOutcomeCallable;
        typedef std::future<DescribeProvisioningArtifactOutcome> DescribeProvisioningArtifactOutcomeCallable;
        typedef std::future<DescribeProvisioningParametersOutcome> DescribeProvisioningParametersOutcomeCallable;
        typedef std::future<DescribeRecordOutcome> DescribeRecordOutcomeCallable;
        typedef std::future<DescribeServiceActionOutcome> DescribeServiceActionOutcomeCallable;
        typedef std::future<DescribeServiceActionExecutionParametersOutcome> DescribeServiceActionExecutionParametersOutcomeCallable;
        typedef std::future<DescribeTagOptionOutcome> DescribeTagOptionOutcomeCallable;
        typedef std::future<DisableAWSOrganizationsAccessOutcome> DisableAWSOrganizationsAccessOutcomeCallable;
        typedef std::future<DisassociateBudgetFromResourceOutcome> DisassociateBudgetFromResourceOutcomeCallable;
        typedef std::future<DisassociatePrincipalFromPortfolioOutcome> DisassociatePrincipalFromPortfolioOutcomeCallable;
        typedef std::future<DisassociateProductFromPortfolioOutcome> DisassociateProductFromPortfolioOutcomeCallable;
        typedef std::future<DisassociateServiceActionFromProvisioningArtifactOutcome> DisassociateServiceActionFromProvisioningArtifactOutcomeCallable;
        typedef std::future<DisassociateTagOptionFromResourceOutcome> DisassociateTagOptionFromResourceOutcomeCallable;
        typedef std::future<EnableAWSOrganizationsAccessOutcome> EnableAWSOrganizationsAccessOutcomeCallable;
        typedef std::future<ExecuteProvisionedProductPlanOutcome> ExecuteProvisionedProductPlanOutcomeCallable;
        typedef std::future<ExecuteProvisionedProductServiceActionOutcome> ExecuteProvisionedProductServiceActionOutcomeCallable;
        typedef std::future<GetAWSOrganizationsAccessStatusOutcome> GetAWSOrganizationsAccessStatusOutcomeCallable;
        typedef std::future<ListAcceptedPortfolioSharesOutcome> ListAcceptedPortfolioSharesOutcomeCallable;
        typedef std::future<ListBudgetsForResourceOutcome> ListBudgetsForResourceOutcomeCallable;
        typedef std::future<ListConstraintsForPortfolioOutcome> ListConstraintsForPortfolioOutcomeCallable;
        typedef std::future<ListLaunchPathsOutcome> ListLaunchPathsOutcomeCallable;
        typedef std::future<ListOrganizationPortfolioAccessOutcome> ListOrganizationPortfolioAccessOutcomeCallable;
        typedef std::future<ListPortfolioAccessOutcome> ListPortfolioAccessOutcomeCallable;
        typedef std::future<ListPortfoliosOutcome> ListPortfoliosOutcomeCallable;
        typedef std::future<ListPortfoliosForProductOutcome> ListPortfoliosForProductOutcomeCallable;
        typedef std::future<ListPrincipalsForPortfolioOutcome> ListPrincipalsForPortfolioOutcomeCallable;
        typedef std::future<ListProvisionedProductPlansOutcome> ListProvisionedProductPlansOutcomeCallable;
        typedef std::future<ListProvisioningArtifactsOutcome> ListProvisioningArtifactsOutcomeCallable;
        typedef std::future<ListProvisioningArtifactsForServiceActionOutcome> ListProvisioningArtifactsForServiceActionOutcomeCallable;
        typedef std::future<ListRecordHistoryOutcome> ListRecordHistoryOutcomeCallable;
        typedef std::future<ListResourcesForTagOptionOutcome> ListResourcesForTagOptionOutcomeCallable;
        typedef std::future<ListServiceActionsOutcome> ListServiceActionsOutcomeCallable;
        typedef std::future<ListServiceActionsForProvisioningArtifactOutcome> ListServiceActionsForProvisioningArtifactOutcomeCallable;
        typedef std::future<ListStackInstancesForProvisionedProductOutcome> ListStackInstancesForProvisionedProductOutcomeCallable;
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
        typedef std::future<UpdateProvisionedProductPropertiesOutcome> UpdateProvisionedProductPropertiesOutcomeCallable;
        typedef std::future<UpdateProvisioningArtifactOutcome> UpdateProvisioningArtifactOutcomeCallable;
        typedef std::future<UpdateServiceActionOutcome> UpdateServiceActionOutcomeCallable;
        typedef std::future<UpdateTagOptionOutcome> UpdateTagOptionOutcomeCallable;
} // namespace Model

  class ServiceCatalogClient;

    typedef std::function<void(const ServiceCatalogClient*, const Model::AcceptPortfolioShareRequest&, const Model::AcceptPortfolioShareOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcceptPortfolioShareResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::AssociateBudgetWithResourceRequest&, const Model::AssociateBudgetWithResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateBudgetWithResourceResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::AssociatePrincipalWithPortfolioRequest&, const Model::AssociatePrincipalWithPortfolioOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociatePrincipalWithPortfolioResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::AssociateProductWithPortfolioRequest&, const Model::AssociateProductWithPortfolioOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateProductWithPortfolioResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::AssociateServiceActionWithProvisioningArtifactRequest&, const Model::AssociateServiceActionWithProvisioningArtifactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateServiceActionWithProvisioningArtifactResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::AssociateTagOptionWithResourceRequest&, const Model::AssociateTagOptionWithResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateTagOptionWithResourceResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::BatchAssociateServiceActionWithProvisioningArtifactRequest&, const Model::BatchAssociateServiceActionWithProvisioningArtifactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchAssociateServiceActionWithProvisioningArtifactResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::BatchDisassociateServiceActionFromProvisioningArtifactRequest&, const Model::BatchDisassociateServiceActionFromProvisioningArtifactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDisassociateServiceActionFromProvisioningArtifactResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::CopyProductRequest&, const Model::CopyProductOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CopyProductResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::CreateConstraintRequest&, const Model::CreateConstraintOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConstraintResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::CreatePortfolioRequest&, const Model::CreatePortfolioOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePortfolioResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::CreatePortfolioShareRequest&, const Model::CreatePortfolioShareOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePortfolioShareResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::CreateProductRequest&, const Model::CreateProductOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProductResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::CreateProvisionedProductPlanRequest&, const Model::CreateProvisionedProductPlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProvisionedProductPlanResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::CreateProvisioningArtifactRequest&, const Model::CreateProvisioningArtifactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProvisioningArtifactResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::CreateServiceActionRequest&, const Model::CreateServiceActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateServiceActionResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::CreateTagOptionRequest&, const Model::CreateTagOptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTagOptionResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DeleteConstraintRequest&, const Model::DeleteConstraintOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConstraintResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DeletePortfolioRequest&, const Model::DeletePortfolioOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePortfolioResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DeletePortfolioShareRequest&, const Model::DeletePortfolioShareOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePortfolioShareResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DeleteProductRequest&, const Model::DeleteProductOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProductResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DeleteProvisionedProductPlanRequest&, const Model::DeleteProvisionedProductPlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProvisionedProductPlanResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DeleteProvisioningArtifactRequest&, const Model::DeleteProvisioningArtifactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProvisioningArtifactResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DeleteServiceActionRequest&, const Model::DeleteServiceActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteServiceActionResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DeleteTagOptionRequest&, const Model::DeleteTagOptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTagOptionResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DescribeConstraintRequest&, const Model::DescribeConstraintOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConstraintResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DescribeCopyProductStatusRequest&, const Model::DescribeCopyProductStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCopyProductStatusResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DescribePortfolioRequest&, const Model::DescribePortfolioOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePortfolioResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DescribePortfolioShareStatusRequest&, const Model::DescribePortfolioShareStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePortfolioShareStatusResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DescribeProductRequest&, const Model::DescribeProductOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeProductResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DescribeProductAsAdminRequest&, const Model::DescribeProductAsAdminOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeProductAsAdminResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DescribeProductViewRequest&, const Model::DescribeProductViewOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeProductViewResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DescribeProvisionedProductRequest&, const Model::DescribeProvisionedProductOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeProvisionedProductResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DescribeProvisionedProductPlanRequest&, const Model::DescribeProvisionedProductPlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeProvisionedProductPlanResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DescribeProvisioningArtifactRequest&, const Model::DescribeProvisioningArtifactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeProvisioningArtifactResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DescribeProvisioningParametersRequest&, const Model::DescribeProvisioningParametersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeProvisioningParametersResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DescribeRecordRequest&, const Model::DescribeRecordOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRecordResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DescribeServiceActionRequest&, const Model::DescribeServiceActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeServiceActionResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DescribeServiceActionExecutionParametersRequest&, const Model::DescribeServiceActionExecutionParametersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeServiceActionExecutionParametersResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DescribeTagOptionRequest&, const Model::DescribeTagOptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTagOptionResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DisableAWSOrganizationsAccessRequest&, const Model::DisableAWSOrganizationsAccessOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableAWSOrganizationsAccessResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DisassociateBudgetFromResourceRequest&, const Model::DisassociateBudgetFromResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateBudgetFromResourceResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DisassociatePrincipalFromPortfolioRequest&, const Model::DisassociatePrincipalFromPortfolioOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociatePrincipalFromPortfolioResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DisassociateProductFromPortfolioRequest&, const Model::DisassociateProductFromPortfolioOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateProductFromPortfolioResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DisassociateServiceActionFromProvisioningArtifactRequest&, const Model::DisassociateServiceActionFromProvisioningArtifactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateServiceActionFromProvisioningArtifactResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DisassociateTagOptionFromResourceRequest&, const Model::DisassociateTagOptionFromResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateTagOptionFromResourceResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::EnableAWSOrganizationsAccessRequest&, const Model::EnableAWSOrganizationsAccessOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableAWSOrganizationsAccessResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ExecuteProvisionedProductPlanRequest&, const Model::ExecuteProvisionedProductPlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExecuteProvisionedProductPlanResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ExecuteProvisionedProductServiceActionRequest&, const Model::ExecuteProvisionedProductServiceActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExecuteProvisionedProductServiceActionResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::GetAWSOrganizationsAccessStatusRequest&, const Model::GetAWSOrganizationsAccessStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAWSOrganizationsAccessStatusResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ListAcceptedPortfolioSharesRequest&, const Model::ListAcceptedPortfolioSharesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAcceptedPortfolioSharesResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ListBudgetsForResourceRequest&, const Model::ListBudgetsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBudgetsForResourceResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ListConstraintsForPortfolioRequest&, const Model::ListConstraintsForPortfolioOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListConstraintsForPortfolioResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ListLaunchPathsRequest&, const Model::ListLaunchPathsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLaunchPathsResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ListOrganizationPortfolioAccessRequest&, const Model::ListOrganizationPortfolioAccessOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOrganizationPortfolioAccessResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ListPortfolioAccessRequest&, const Model::ListPortfolioAccessOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPortfolioAccessResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ListPortfoliosRequest&, const Model::ListPortfoliosOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPortfoliosResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ListPortfoliosForProductRequest&, const Model::ListPortfoliosForProductOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPortfoliosForProductResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ListPrincipalsForPortfolioRequest&, const Model::ListPrincipalsForPortfolioOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPrincipalsForPortfolioResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ListProvisionedProductPlansRequest&, const Model::ListProvisionedProductPlansOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProvisionedProductPlansResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ListProvisioningArtifactsRequest&, const Model::ListProvisioningArtifactsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProvisioningArtifactsResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ListProvisioningArtifactsForServiceActionRequest&, const Model::ListProvisioningArtifactsForServiceActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProvisioningArtifactsForServiceActionResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ListRecordHistoryRequest&, const Model::ListRecordHistoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRecordHistoryResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ListResourcesForTagOptionRequest&, const Model::ListResourcesForTagOptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResourcesForTagOptionResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ListServiceActionsRequest&, const Model::ListServiceActionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListServiceActionsResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ListServiceActionsForProvisioningArtifactRequest&, const Model::ListServiceActionsForProvisioningArtifactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListServiceActionsForProvisioningArtifactResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ListStackInstancesForProvisionedProductRequest&, const Model::ListStackInstancesForProvisionedProductOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStackInstancesForProvisionedProductResponseReceivedHandler;
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
    typedef std::function<void(const ServiceCatalogClient*, const Model::UpdateProvisionedProductPropertiesRequest&, const Model::UpdateProvisionedProductPropertiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateProvisionedProductPropertiesResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::UpdateProvisioningArtifactRequest&, const Model::UpdateProvisioningArtifactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateProvisioningArtifactResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::UpdateServiceActionRequest&, const Model::UpdateServiceActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateServiceActionResponseReceivedHandler;
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

        inline virtual const char* GetServiceClientName() const override { return "Service Catalog"; }


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
         * <p>Associates the specified budget with the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/AssociateBudgetWithResource">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateBudgetWithResourceOutcome AssociateBudgetWithResource(const Model::AssociateBudgetWithResourceRequest& request) const;

        /**
         * <p>Associates the specified budget with the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/AssociateBudgetWithResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateBudgetWithResourceOutcomeCallable AssociateBudgetWithResourceCallable(const Model::AssociateBudgetWithResourceRequest& request) const;

        /**
         * <p>Associates the specified budget with the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/AssociateBudgetWithResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateBudgetWithResourceAsync(const Model::AssociateBudgetWithResourceRequest& request, const AssociateBudgetWithResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Associates a self-service action with a provisioning artifact.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/AssociateServiceActionWithProvisioningArtifact">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateServiceActionWithProvisioningArtifactOutcome AssociateServiceActionWithProvisioningArtifact(const Model::AssociateServiceActionWithProvisioningArtifactRequest& request) const;

        /**
         * <p>Associates a self-service action with a provisioning artifact.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/AssociateServiceActionWithProvisioningArtifact">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateServiceActionWithProvisioningArtifactOutcomeCallable AssociateServiceActionWithProvisioningArtifactCallable(const Model::AssociateServiceActionWithProvisioningArtifactRequest& request) const;

        /**
         * <p>Associates a self-service action with a provisioning artifact.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/AssociateServiceActionWithProvisioningArtifact">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateServiceActionWithProvisioningArtifactAsync(const Model::AssociateServiceActionWithProvisioningArtifactRequest& request, const AssociateServiceActionWithProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Associates multiple self-service actions with provisioning
         * artifacts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/BatchAssociateServiceActionWithProvisioningArtifact">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchAssociateServiceActionWithProvisioningArtifactOutcome BatchAssociateServiceActionWithProvisioningArtifact(const Model::BatchAssociateServiceActionWithProvisioningArtifactRequest& request) const;

        /**
         * <p>Associates multiple self-service actions with provisioning
         * artifacts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/BatchAssociateServiceActionWithProvisioningArtifact">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchAssociateServiceActionWithProvisioningArtifactOutcomeCallable BatchAssociateServiceActionWithProvisioningArtifactCallable(const Model::BatchAssociateServiceActionWithProvisioningArtifactRequest& request) const;

        /**
         * <p>Associates multiple self-service actions with provisioning
         * artifacts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/BatchAssociateServiceActionWithProvisioningArtifact">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchAssociateServiceActionWithProvisioningArtifactAsync(const Model::BatchAssociateServiceActionWithProvisioningArtifactRequest& request, const BatchAssociateServiceActionWithProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates a batch of self-service actions from the specified provisioning
         * artifact.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/BatchDisassociateServiceActionFromProvisioningArtifact">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDisassociateServiceActionFromProvisioningArtifactOutcome BatchDisassociateServiceActionFromProvisioningArtifact(const Model::BatchDisassociateServiceActionFromProvisioningArtifactRequest& request) const;

        /**
         * <p>Disassociates a batch of self-service actions from the specified provisioning
         * artifact.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/BatchDisassociateServiceActionFromProvisioningArtifact">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchDisassociateServiceActionFromProvisioningArtifactOutcomeCallable BatchDisassociateServiceActionFromProvisioningArtifactCallable(const Model::BatchDisassociateServiceActionFromProvisioningArtifactRequest& request) const;

        /**
         * <p>Disassociates a batch of self-service actions from the specified provisioning
         * artifact.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/BatchDisassociateServiceActionFromProvisioningArtifact">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchDisassociateServiceActionFromProvisioningArtifactAsync(const Model::BatchDisassociateServiceActionFromProvisioningArtifactRequest& request, const BatchDisassociateServiceActionFromProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Shares the specified portfolio with the specified account or organization
         * node. Shares to an organization node can only be created by the master account
         * of an Organization. AWSOrganizationsAccess must be enabled in order to create a
         * portfolio share to an organization node.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/CreatePortfolioShare">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePortfolioShareOutcome CreatePortfolioShare(const Model::CreatePortfolioShareRequest& request) const;

        /**
         * <p>Shares the specified portfolio with the specified account or organization
         * node. Shares to an organization node can only be created by the master account
         * of an Organization. AWSOrganizationsAccess must be enabled in order to create a
         * portfolio share to an organization node.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/CreatePortfolioShare">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePortfolioShareOutcomeCallable CreatePortfolioShareCallable(const Model::CreatePortfolioShareRequest& request) const;

        /**
         * <p>Shares the specified portfolio with the specified account or organization
         * node. Shares to an organization node can only be created by the master account
         * of an Organization. AWSOrganizationsAccess must be enabled in order to create a
         * portfolio share to an organization node.</p><p><h3>See Also:</h3>   <a
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
         * <p>Creates a self-service action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/CreateServiceAction">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateServiceActionOutcome CreateServiceAction(const Model::CreateServiceActionRequest& request) const;

        /**
         * <p>Creates a self-service action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/CreateServiceAction">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateServiceActionOutcomeCallable CreateServiceActionCallable(const Model::CreateServiceActionRequest& request) const;

        /**
         * <p>Creates a self-service action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/CreateServiceAction">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateServiceActionAsync(const Model::CreateServiceActionRequest& request, const CreateServiceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Stops sharing the specified portfolio with the specified account or
         * organization node. Shares to an organization node can only be deleted by the
         * master account of an Organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DeletePortfolioShare">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePortfolioShareOutcome DeletePortfolioShare(const Model::DeletePortfolioShareRequest& request) const;

        /**
         * <p>Stops sharing the specified portfolio with the specified account or
         * organization node. Shares to an organization node can only be deleted by the
         * master account of an Organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DeletePortfolioShare">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePortfolioShareOutcomeCallable DeletePortfolioShareCallable(const Model::DeletePortfolioShareRequest& request) const;

        /**
         * <p>Stops sharing the specified portfolio with the specified account or
         * organization node. Shares to an organization node can only be deleted by the
         * master account of an Organization.</p><p><h3>See Also:</h3>   <a
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
         * <p>Deletes a self-service action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DeleteServiceAction">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteServiceActionOutcome DeleteServiceAction(const Model::DeleteServiceActionRequest& request) const;

        /**
         * <p>Deletes a self-service action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DeleteServiceAction">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteServiceActionOutcomeCallable DeleteServiceActionCallable(const Model::DeleteServiceActionRequest& request) const;

        /**
         * <p>Deletes a self-service action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DeleteServiceAction">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteServiceActionAsync(const Model::DeleteServiceActionRequest& request, const DeleteServiceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Gets the status of the specified portfolio share operation. This API can only
         * be called by the master account in the organization.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribePortfolioShareStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePortfolioShareStatusOutcome DescribePortfolioShareStatus(const Model::DescribePortfolioShareStatusRequest& request) const;

        /**
         * <p>Gets the status of the specified portfolio share operation. This API can only
         * be called by the master account in the organization.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribePortfolioShareStatus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePortfolioShareStatusOutcomeCallable DescribePortfolioShareStatusCallable(const Model::DescribePortfolioShareStatusRequest& request) const;

        /**
         * <p>Gets the status of the specified portfolio share operation. This API can only
         * be called by the master account in the organization.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribePortfolioShareStatus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePortfolioShareStatusAsync(const Model::DescribePortfolioShareStatusRequest& request, const DescribePortfolioShareStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <a>UpdateProvisionedProduct</a>). </p> <note> <p>If a provisioned product was
         * transferred to a new owner using <a>UpdateProvisionedProductProperties</a>, the
         * new owner will be able to describe all past records for that product. The
         * previous owner will no longer be able to describe the records, but will be able
         * to use <a>ListRecordHistory</a> to see the product's history from when he was
         * the owner.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeRecord">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRecordOutcome DescribeRecord(const Model::DescribeRecordRequest& request) const;

        /**
         * <p>Gets information about the specified request operation.</p> <p>Use this
         * operation after calling a request operation (for example,
         * <a>ProvisionProduct</a>, <a>TerminateProvisionedProduct</a>, or
         * <a>UpdateProvisionedProduct</a>). </p> <note> <p>If a provisioned product was
         * transferred to a new owner using <a>UpdateProvisionedProductProperties</a>, the
         * new owner will be able to describe all past records for that product. The
         * previous owner will no longer be able to describe the records, but will be able
         * to use <a>ListRecordHistory</a> to see the product's history from when he was
         * the owner.</p> </note><p><h3>See Also:</h3>   <a
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
         * <a>UpdateProvisionedProduct</a>). </p> <note> <p>If a provisioned product was
         * transferred to a new owner using <a>UpdateProvisionedProductProperties</a>, the
         * new owner will be able to describe all past records for that product. The
         * previous owner will no longer be able to describe the records, but will be able
         * to use <a>ListRecordHistory</a> to see the product's history from when he was
         * the owner.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeRecord">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRecordAsync(const Model::DescribeRecordRequest& request, const DescribeRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a self-service action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeServiceAction">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeServiceActionOutcome DescribeServiceAction(const Model::DescribeServiceActionRequest& request) const;

        /**
         * <p>Describes a self-service action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeServiceAction">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeServiceActionOutcomeCallable DescribeServiceActionCallable(const Model::DescribeServiceActionRequest& request) const;

        /**
         * <p>Describes a self-service action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeServiceAction">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeServiceActionAsync(const Model::DescribeServiceActionRequest& request, const DescribeServiceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::DescribeServiceActionExecutionParametersOutcome DescribeServiceActionExecutionParameters(const Model::DescribeServiceActionExecutionParametersRequest& request) const;

        /**
         * 
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeServiceActionExecutionParametersOutcomeCallable DescribeServiceActionExecutionParametersCallable(const Model::DescribeServiceActionExecutionParametersRequest& request) const;

        /**
         * 
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeServiceActionExecutionParametersAsync(const Model::DescribeServiceActionExecutionParametersRequest& request, const DescribeServiceActionExecutionParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Disable portfolio sharing through AWS Organizations feature. This feature
         * will not delete your current shares but it will prevent you from creating new
         * shares throughout your organization. Current shares will not be in sync with
         * your organization structure if it changes after calling this API. This API can
         * only be called by the master account in the organization.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DisableAWSOrganizationsAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableAWSOrganizationsAccessOutcome DisableAWSOrganizationsAccess(const Model::DisableAWSOrganizationsAccessRequest& request) const;

        /**
         * <p>Disable portfolio sharing through AWS Organizations feature. This feature
         * will not delete your current shares but it will prevent you from creating new
         * shares throughout your organization. Current shares will not be in sync with
         * your organization structure if it changes after calling this API. This API can
         * only be called by the master account in the organization.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DisableAWSOrganizationsAccess">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableAWSOrganizationsAccessOutcomeCallable DisableAWSOrganizationsAccessCallable(const Model::DisableAWSOrganizationsAccessRequest& request) const;

        /**
         * <p>Disable portfolio sharing through AWS Organizations feature. This feature
         * will not delete your current shares but it will prevent you from creating new
         * shares throughout your organization. Current shares will not be in sync with
         * your organization structure if it changes after calling this API. This API can
         * only be called by the master account in the organization.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DisableAWSOrganizationsAccess">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableAWSOrganizationsAccessAsync(const Model::DisableAWSOrganizationsAccessRequest& request, const DisableAWSOrganizationsAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates the specified budget from the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DisassociateBudgetFromResource">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateBudgetFromResourceOutcome DisassociateBudgetFromResource(const Model::DisassociateBudgetFromResourceRequest& request) const;

        /**
         * <p>Disassociates the specified budget from the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DisassociateBudgetFromResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateBudgetFromResourceOutcomeCallable DisassociateBudgetFromResourceCallable(const Model::DisassociateBudgetFromResourceRequest& request) const;

        /**
         * <p>Disassociates the specified budget from the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DisassociateBudgetFromResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateBudgetFromResourceAsync(const Model::DisassociateBudgetFromResourceRequest& request, const DisassociateBudgetFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Disassociates the specified self-service action association from the
         * specified provisioning artifact.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DisassociateServiceActionFromProvisioningArtifact">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateServiceActionFromProvisioningArtifactOutcome DisassociateServiceActionFromProvisioningArtifact(const Model::DisassociateServiceActionFromProvisioningArtifactRequest& request) const;

        /**
         * <p>Disassociates the specified self-service action association from the
         * specified provisioning artifact.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DisassociateServiceActionFromProvisioningArtifact">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateServiceActionFromProvisioningArtifactOutcomeCallable DisassociateServiceActionFromProvisioningArtifactCallable(const Model::DisassociateServiceActionFromProvisioningArtifactRequest& request) const;

        /**
         * <p>Disassociates the specified self-service action association from the
         * specified provisioning artifact.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DisassociateServiceActionFromProvisioningArtifact">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateServiceActionFromProvisioningArtifactAsync(const Model::DisassociateServiceActionFromProvisioningArtifactRequest& request, const DisassociateServiceActionFromProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Enable portfolio sharing feature through AWS Organizations. This API will
         * allow Service Catalog to receive updates on your organization in order to sync
         * your shares with the current structure. This API can only be called by the
         * master account in the organization.</p> <p>By calling this API Service Catalog
         * will make a call to organizations:EnableAWSServiceAccess on your behalf so that
         * your shares can be in sync with any changes in your AWS Organizations
         * structure.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/EnableAWSOrganizationsAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableAWSOrganizationsAccessOutcome EnableAWSOrganizationsAccess(const Model::EnableAWSOrganizationsAccessRequest& request) const;

        /**
         * <p>Enable portfolio sharing feature through AWS Organizations. This API will
         * allow Service Catalog to receive updates on your organization in order to sync
         * your shares with the current structure. This API can only be called by the
         * master account in the organization.</p> <p>By calling this API Service Catalog
         * will make a call to organizations:EnableAWSServiceAccess on your behalf so that
         * your shares can be in sync with any changes in your AWS Organizations
         * structure.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/EnableAWSOrganizationsAccess">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableAWSOrganizationsAccessOutcomeCallable EnableAWSOrganizationsAccessCallable(const Model::EnableAWSOrganizationsAccessRequest& request) const;

        /**
         * <p>Enable portfolio sharing feature through AWS Organizations. This API will
         * allow Service Catalog to receive updates on your organization in order to sync
         * your shares with the current structure. This API can only be called by the
         * master account in the organization.</p> <p>By calling this API Service Catalog
         * will make a call to organizations:EnableAWSServiceAccess on your behalf so that
         * your shares can be in sync with any changes in your AWS Organizations
         * structure.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/EnableAWSOrganizationsAccess">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableAWSOrganizationsAccessAsync(const Model::EnableAWSOrganizationsAccessRequest& request, const EnableAWSOrganizationsAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Executes a self-service action against a provisioned product.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ExecuteProvisionedProductServiceAction">AWS
         * API Reference</a></p>
         */
        virtual Model::ExecuteProvisionedProductServiceActionOutcome ExecuteProvisionedProductServiceAction(const Model::ExecuteProvisionedProductServiceActionRequest& request) const;

        /**
         * <p>Executes a self-service action against a provisioned product.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ExecuteProvisionedProductServiceAction">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ExecuteProvisionedProductServiceActionOutcomeCallable ExecuteProvisionedProductServiceActionCallable(const Model::ExecuteProvisionedProductServiceActionRequest& request) const;

        /**
         * <p>Executes a self-service action against a provisioned product.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ExecuteProvisionedProductServiceAction">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ExecuteProvisionedProductServiceActionAsync(const Model::ExecuteProvisionedProductServiceActionRequest& request, const ExecuteProvisionedProductServiceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get the Access Status for AWS Organization portfolio share feature. This API
         * can only be called by the master account in the organization.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/GetAWSOrganizationsAccessStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAWSOrganizationsAccessStatusOutcome GetAWSOrganizationsAccessStatus(const Model::GetAWSOrganizationsAccessStatusRequest& request) const;

        /**
         * <p>Get the Access Status for AWS Organization portfolio share feature. This API
         * can only be called by the master account in the organization.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/GetAWSOrganizationsAccessStatus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAWSOrganizationsAccessStatusOutcomeCallable GetAWSOrganizationsAccessStatusCallable(const Model::GetAWSOrganizationsAccessStatusRequest& request) const;

        /**
         * <p>Get the Access Status for AWS Organization portfolio share feature. This API
         * can only be called by the master account in the organization.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/GetAWSOrganizationsAccessStatus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAWSOrganizationsAccessStatusAsync(const Model::GetAWSOrganizationsAccessStatusRequest& request, const GetAWSOrganizationsAccessStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Lists all the budgets associated to the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListBudgetsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBudgetsForResourceOutcome ListBudgetsForResource(const Model::ListBudgetsForResourceRequest& request) const;

        /**
         * <p>Lists all the budgets associated to the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListBudgetsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBudgetsForResourceOutcomeCallable ListBudgetsForResourceCallable(const Model::ListBudgetsForResourceRequest& request) const;

        /**
         * <p>Lists all the budgets associated to the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListBudgetsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBudgetsForResourceAsync(const Model::ListBudgetsForResourceRequest& request, const ListBudgetsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Lists the organization nodes that have access to the specified portfolio.
         * This API can only be called by the master account in the
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListOrganizationPortfolioAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOrganizationPortfolioAccessOutcome ListOrganizationPortfolioAccess(const Model::ListOrganizationPortfolioAccessRequest& request) const;

        /**
         * <p>Lists the organization nodes that have access to the specified portfolio.
         * This API can only be called by the master account in the
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListOrganizationPortfolioAccess">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListOrganizationPortfolioAccessOutcomeCallable ListOrganizationPortfolioAccessCallable(const Model::ListOrganizationPortfolioAccessRequest& request) const;

        /**
         * <p>Lists the organization nodes that have access to the specified portfolio.
         * This API can only be called by the master account in the
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListOrganizationPortfolioAccess">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListOrganizationPortfolioAccessAsync(const Model::ListOrganizationPortfolioAccessRequest& request, const ListOrganizationPortfolioAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Lists all provisioning artifacts (also known as versions) for the specified
         * self-service action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListProvisioningArtifactsForServiceAction">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProvisioningArtifactsForServiceActionOutcome ListProvisioningArtifactsForServiceAction(const Model::ListProvisioningArtifactsForServiceActionRequest& request) const;

        /**
         * <p>Lists all provisioning artifacts (also known as versions) for the specified
         * self-service action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListProvisioningArtifactsForServiceAction">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListProvisioningArtifactsForServiceActionOutcomeCallable ListProvisioningArtifactsForServiceActionCallable(const Model::ListProvisioningArtifactsForServiceActionRequest& request) const;

        /**
         * <p>Lists all provisioning artifacts (also known as versions) for the specified
         * self-service action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListProvisioningArtifactsForServiceAction">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListProvisioningArtifactsForServiceActionAsync(const Model::ListProvisioningArtifactsForServiceActionRequest& request, const ListProvisioningArtifactsForServiceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Lists all self-service actions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListServiceActions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServiceActionsOutcome ListServiceActions(const Model::ListServiceActionsRequest& request) const;

        /**
         * <p>Lists all self-service actions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListServiceActions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListServiceActionsOutcomeCallable ListServiceActionsCallable(const Model::ListServiceActionsRequest& request) const;

        /**
         * <p>Lists all self-service actions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListServiceActions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListServiceActionsAsync(const Model::ListServiceActionsRequest& request, const ListServiceActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a paginated list of self-service actions associated with the
         * specified Product ID and Provisioning Artifact ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListServiceActionsForProvisioningArtifact">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServiceActionsForProvisioningArtifactOutcome ListServiceActionsForProvisioningArtifact(const Model::ListServiceActionsForProvisioningArtifactRequest& request) const;

        /**
         * <p>Returns a paginated list of self-service actions associated with the
         * specified Product ID and Provisioning Artifact ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListServiceActionsForProvisioningArtifact">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListServiceActionsForProvisioningArtifactOutcomeCallable ListServiceActionsForProvisioningArtifactCallable(const Model::ListServiceActionsForProvisioningArtifactRequest& request) const;

        /**
         * <p>Returns a paginated list of self-service actions associated with the
         * specified Product ID and Provisioning Artifact ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListServiceActionsForProvisioningArtifact">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListServiceActionsForProvisioningArtifactAsync(const Model::ListServiceActionsForProvisioningArtifactRequest& request, const ListServiceActionsForProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns summary information about stack instances that are associated with
         * the specified <code>CFN_STACKSET</code> type provisioned product. You can filter
         * for stack instances that are associated with a specific AWS account name or
         * region. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListStackInstancesForProvisionedProduct">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStackInstancesForProvisionedProductOutcome ListStackInstancesForProvisionedProduct(const Model::ListStackInstancesForProvisionedProductRequest& request) const;

        /**
         * <p>Returns summary information about stack instances that are associated with
         * the specified <code>CFN_STACKSET</code> type provisioned product. You can filter
         * for stack instances that are associated with a specific AWS account name or
         * region. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListStackInstancesForProvisionedProduct">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListStackInstancesForProvisionedProductOutcomeCallable ListStackInstancesForProvisionedProductCallable(const Model::ListStackInstancesForProvisionedProductRequest& request) const;

        /**
         * <p>Returns summary information about stack instances that are associated with
         * the specified <code>CFN_STACKSET</code> type provisioned product. You can filter
         * for stack instances that are associated with a specific AWS account name or
         * region. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListStackInstancesForProvisionedProduct">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListStackInstancesForProvisionedProductAsync(const Model::ListStackInstancesForProvisionedProductRequest& request, const ListStackInstancesForProvisionedProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Requests updates to the properties of the specified provisioned
         * product.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/UpdateProvisionedProductProperties">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateProvisionedProductPropertiesOutcome UpdateProvisionedProductProperties(const Model::UpdateProvisionedProductPropertiesRequest& request) const;

        /**
         * <p>Requests updates to the properties of the specified provisioned
         * product.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/UpdateProvisionedProductProperties">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateProvisionedProductPropertiesOutcomeCallable UpdateProvisionedProductPropertiesCallable(const Model::UpdateProvisionedProductPropertiesRequest& request) const;

        /**
         * <p>Requests updates to the properties of the specified provisioned
         * product.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/UpdateProvisionedProductProperties">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateProvisionedProductPropertiesAsync(const Model::UpdateProvisionedProductPropertiesRequest& request, const UpdateProvisionedProductPropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Updates a self-service action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/UpdateServiceAction">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateServiceActionOutcome UpdateServiceAction(const Model::UpdateServiceActionRequest& request) const;

        /**
         * <p>Updates a self-service action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/UpdateServiceAction">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateServiceActionOutcomeCallable UpdateServiceActionCallable(const Model::UpdateServiceActionRequest& request) const;

        /**
         * <p>Updates a self-service action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/UpdateServiceAction">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateServiceActionAsync(const Model::UpdateServiceActionRequest& request, const UpdateServiceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AcceptPortfolioShareAsyncHelper(const Model::AcceptPortfolioShareRequest& request, const AcceptPortfolioShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateBudgetWithResourceAsyncHelper(const Model::AssociateBudgetWithResourceRequest& request, const AssociateBudgetWithResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociatePrincipalWithPortfolioAsyncHelper(const Model::AssociatePrincipalWithPortfolioRequest& request, const AssociatePrincipalWithPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateProductWithPortfolioAsyncHelper(const Model::AssociateProductWithPortfolioRequest& request, const AssociateProductWithPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateServiceActionWithProvisioningArtifactAsyncHelper(const Model::AssociateServiceActionWithProvisioningArtifactRequest& request, const AssociateServiceActionWithProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateTagOptionWithResourceAsyncHelper(const Model::AssociateTagOptionWithResourceRequest& request, const AssociateTagOptionWithResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchAssociateServiceActionWithProvisioningArtifactAsyncHelper(const Model::BatchAssociateServiceActionWithProvisioningArtifactRequest& request, const BatchAssociateServiceActionWithProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchDisassociateServiceActionFromProvisioningArtifactAsyncHelper(const Model::BatchDisassociateServiceActionFromProvisioningArtifactRequest& request, const BatchDisassociateServiceActionFromProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CopyProductAsyncHelper(const Model::CopyProductRequest& request, const CopyProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateConstraintAsyncHelper(const Model::CreateConstraintRequest& request, const CreateConstraintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePortfolioAsyncHelper(const Model::CreatePortfolioRequest& request, const CreatePortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePortfolioShareAsyncHelper(const Model::CreatePortfolioShareRequest& request, const CreatePortfolioShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateProductAsyncHelper(const Model::CreateProductRequest& request, const CreateProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateProvisionedProductPlanAsyncHelper(const Model::CreateProvisionedProductPlanRequest& request, const CreateProvisionedProductPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateProvisioningArtifactAsyncHelper(const Model::CreateProvisioningArtifactRequest& request, const CreateProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateServiceActionAsyncHelper(const Model::CreateServiceActionRequest& request, const CreateServiceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateTagOptionAsyncHelper(const Model::CreateTagOptionRequest& request, const CreateTagOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteConstraintAsyncHelper(const Model::DeleteConstraintRequest& request, const DeleteConstraintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePortfolioAsyncHelper(const Model::DeletePortfolioRequest& request, const DeletePortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePortfolioShareAsyncHelper(const Model::DeletePortfolioShareRequest& request, const DeletePortfolioShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteProductAsyncHelper(const Model::DeleteProductRequest& request, const DeleteProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteProvisionedProductPlanAsyncHelper(const Model::DeleteProvisionedProductPlanRequest& request, const DeleteProvisionedProductPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteProvisioningArtifactAsyncHelper(const Model::DeleteProvisioningArtifactRequest& request, const DeleteProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteServiceActionAsyncHelper(const Model::DeleteServiceActionRequest& request, const DeleteServiceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteTagOptionAsyncHelper(const Model::DeleteTagOptionRequest& request, const DeleteTagOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeConstraintAsyncHelper(const Model::DescribeConstraintRequest& request, const DescribeConstraintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeCopyProductStatusAsyncHelper(const Model::DescribeCopyProductStatusRequest& request, const DescribeCopyProductStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribePortfolioAsyncHelper(const Model::DescribePortfolioRequest& request, const DescribePortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribePortfolioShareStatusAsyncHelper(const Model::DescribePortfolioShareStatusRequest& request, const DescribePortfolioShareStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeProductAsyncHelper(const Model::DescribeProductRequest& request, const DescribeProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeProductAsAdminAsyncHelper(const Model::DescribeProductAsAdminRequest& request, const DescribeProductAsAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeProductViewAsyncHelper(const Model::DescribeProductViewRequest& request, const DescribeProductViewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeProvisionedProductAsyncHelper(const Model::DescribeProvisionedProductRequest& request, const DescribeProvisionedProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeProvisionedProductPlanAsyncHelper(const Model::DescribeProvisionedProductPlanRequest& request, const DescribeProvisionedProductPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeProvisioningArtifactAsyncHelper(const Model::DescribeProvisioningArtifactRequest& request, const DescribeProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeProvisioningParametersAsyncHelper(const Model::DescribeProvisioningParametersRequest& request, const DescribeProvisioningParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeRecordAsyncHelper(const Model::DescribeRecordRequest& request, const DescribeRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeServiceActionAsyncHelper(const Model::DescribeServiceActionRequest& request, const DescribeServiceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeServiceActionExecutionParametersAsyncHelper(const Model::DescribeServiceActionExecutionParametersRequest& request, const DescribeServiceActionExecutionParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTagOptionAsyncHelper(const Model::DescribeTagOptionRequest& request, const DescribeTagOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisableAWSOrganizationsAccessAsyncHelper(const Model::DisableAWSOrganizationsAccessRequest& request, const DisableAWSOrganizationsAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateBudgetFromResourceAsyncHelper(const Model::DisassociateBudgetFromResourceRequest& request, const DisassociateBudgetFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociatePrincipalFromPortfolioAsyncHelper(const Model::DisassociatePrincipalFromPortfolioRequest& request, const DisassociatePrincipalFromPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateProductFromPortfolioAsyncHelper(const Model::DisassociateProductFromPortfolioRequest& request, const DisassociateProductFromPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateServiceActionFromProvisioningArtifactAsyncHelper(const Model::DisassociateServiceActionFromProvisioningArtifactRequest& request, const DisassociateServiceActionFromProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateTagOptionFromResourceAsyncHelper(const Model::DisassociateTagOptionFromResourceRequest& request, const DisassociateTagOptionFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void EnableAWSOrganizationsAccessAsyncHelper(const Model::EnableAWSOrganizationsAccessRequest& request, const EnableAWSOrganizationsAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ExecuteProvisionedProductPlanAsyncHelper(const Model::ExecuteProvisionedProductPlanRequest& request, const ExecuteProvisionedProductPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ExecuteProvisionedProductServiceActionAsyncHelper(const Model::ExecuteProvisionedProductServiceActionRequest& request, const ExecuteProvisionedProductServiceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAWSOrganizationsAccessStatusAsyncHelper(const Model::GetAWSOrganizationsAccessStatusRequest& request, const GetAWSOrganizationsAccessStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAcceptedPortfolioSharesAsyncHelper(const Model::ListAcceptedPortfolioSharesRequest& request, const ListAcceptedPortfolioSharesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListBudgetsForResourceAsyncHelper(const Model::ListBudgetsForResourceRequest& request, const ListBudgetsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListConstraintsForPortfolioAsyncHelper(const Model::ListConstraintsForPortfolioRequest& request, const ListConstraintsForPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListLaunchPathsAsyncHelper(const Model::ListLaunchPathsRequest& request, const ListLaunchPathsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListOrganizationPortfolioAccessAsyncHelper(const Model::ListOrganizationPortfolioAccessRequest& request, const ListOrganizationPortfolioAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPortfolioAccessAsyncHelper(const Model::ListPortfolioAccessRequest& request, const ListPortfolioAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPortfoliosAsyncHelper(const Model::ListPortfoliosRequest& request, const ListPortfoliosResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPortfoliosForProductAsyncHelper(const Model::ListPortfoliosForProductRequest& request, const ListPortfoliosForProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPrincipalsForPortfolioAsyncHelper(const Model::ListPrincipalsForPortfolioRequest& request, const ListPrincipalsForPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListProvisionedProductPlansAsyncHelper(const Model::ListProvisionedProductPlansRequest& request, const ListProvisionedProductPlansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListProvisioningArtifactsAsyncHelper(const Model::ListProvisioningArtifactsRequest& request, const ListProvisioningArtifactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListProvisioningArtifactsForServiceActionAsyncHelper(const Model::ListProvisioningArtifactsForServiceActionRequest& request, const ListProvisioningArtifactsForServiceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRecordHistoryAsyncHelper(const Model::ListRecordHistoryRequest& request, const ListRecordHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListResourcesForTagOptionAsyncHelper(const Model::ListResourcesForTagOptionRequest& request, const ListResourcesForTagOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListServiceActionsAsyncHelper(const Model::ListServiceActionsRequest& request, const ListServiceActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListServiceActionsForProvisioningArtifactAsyncHelper(const Model::ListServiceActionsForProvisioningArtifactRequest& request, const ListServiceActionsForProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListStackInstancesForProvisionedProductAsyncHelper(const Model::ListStackInstancesForProvisionedProductRequest& request, const ListStackInstancesForProvisionedProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
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
        void UpdateProvisionedProductPropertiesAsyncHelper(const Model::UpdateProvisionedProductPropertiesRequest& request, const UpdateProvisionedProductPropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateProvisioningArtifactAsyncHelper(const Model::UpdateProvisioningArtifactRequest& request, const UpdateProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateServiceActionAsyncHelper(const Model::UpdateServiceActionRequest& request, const UpdateServiceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateTagOptionAsyncHelper(const Model::UpdateTagOptionRequest& request, const UpdateTagOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace ServiceCatalog
} // namespace Aws
