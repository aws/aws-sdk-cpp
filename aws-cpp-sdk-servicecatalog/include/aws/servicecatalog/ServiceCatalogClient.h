/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/servicecatalog/model/CreateConstraintResult.h>
#include <aws/servicecatalog/model/CreatePortfolioResult.h>
#include <aws/servicecatalog/model/CreatePortfolioShareResult.h>
#include <aws/servicecatalog/model/CreateProductResult.h>
#include <aws/servicecatalog/model/CreateProvisioningArtifactResult.h>
#include <aws/servicecatalog/model/DeleteConstraintResult.h>
#include <aws/servicecatalog/model/DeletePortfolioResult.h>
#include <aws/servicecatalog/model/DeletePortfolioShareResult.h>
#include <aws/servicecatalog/model/DeleteProductResult.h>
#include <aws/servicecatalog/model/DeleteProvisioningArtifactResult.h>
#include <aws/servicecatalog/model/DescribeConstraintResult.h>
#include <aws/servicecatalog/model/DescribePortfolioResult.h>
#include <aws/servicecatalog/model/DescribeProductResult.h>
#include <aws/servicecatalog/model/DescribeProductAsAdminResult.h>
#include <aws/servicecatalog/model/DescribeProductViewResult.h>
#include <aws/servicecatalog/model/DescribeProvisioningArtifactResult.h>
#include <aws/servicecatalog/model/DescribeProvisioningParametersResult.h>
#include <aws/servicecatalog/model/DescribeRecordResult.h>
#include <aws/servicecatalog/model/DisassociatePrincipalFromPortfolioResult.h>
#include <aws/servicecatalog/model/DisassociateProductFromPortfolioResult.h>
#include <aws/servicecatalog/model/ListAcceptedPortfolioSharesResult.h>
#include <aws/servicecatalog/model/ListConstraintsForPortfolioResult.h>
#include <aws/servicecatalog/model/ListLaunchPathsResult.h>
#include <aws/servicecatalog/model/ListPortfolioAccessResult.h>
#include <aws/servicecatalog/model/ListPortfoliosResult.h>
#include <aws/servicecatalog/model/ListPortfoliosForProductResult.h>
#include <aws/servicecatalog/model/ListPrincipalsForPortfolioResult.h>
#include <aws/servicecatalog/model/ListProvisioningArtifactsResult.h>
#include <aws/servicecatalog/model/ListRecordHistoryResult.h>
#include <aws/servicecatalog/model/ProvisionProductResult.h>
#include <aws/servicecatalog/model/RejectPortfolioShareResult.h>
#include <aws/servicecatalog/model/ScanProvisionedProductsResult.h>
#include <aws/servicecatalog/model/SearchProductsResult.h>
#include <aws/servicecatalog/model/SearchProductsAsAdminResult.h>
#include <aws/servicecatalog/model/TerminateProvisionedProductResult.h>
#include <aws/servicecatalog/model/UpdateConstraintResult.h>
#include <aws/servicecatalog/model/UpdatePortfolioResult.h>
#include <aws/servicecatalog/model/UpdateProductResult.h>
#include <aws/servicecatalog/model/UpdateProvisionedProductResult.h>
#include <aws/servicecatalog/model/UpdateProvisioningArtifactResult.h>
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
        class CreateConstraintRequest;
        class CreatePortfolioRequest;
        class CreatePortfolioShareRequest;
        class CreateProductRequest;
        class CreateProvisioningArtifactRequest;
        class DeleteConstraintRequest;
        class DeletePortfolioRequest;
        class DeletePortfolioShareRequest;
        class DeleteProductRequest;
        class DeleteProvisioningArtifactRequest;
        class DescribeConstraintRequest;
        class DescribePortfolioRequest;
        class DescribeProductRequest;
        class DescribeProductAsAdminRequest;
        class DescribeProductViewRequest;
        class DescribeProvisioningArtifactRequest;
        class DescribeProvisioningParametersRequest;
        class DescribeRecordRequest;
        class DisassociatePrincipalFromPortfolioRequest;
        class DisassociateProductFromPortfolioRequest;
        class ListAcceptedPortfolioSharesRequest;
        class ListConstraintsForPortfolioRequest;
        class ListLaunchPathsRequest;
        class ListPortfolioAccessRequest;
        class ListPortfoliosRequest;
        class ListPortfoliosForProductRequest;
        class ListPrincipalsForPortfolioRequest;
        class ListProvisioningArtifactsRequest;
        class ListRecordHistoryRequest;
        class ProvisionProductRequest;
        class RejectPortfolioShareRequest;
        class ScanProvisionedProductsRequest;
        class SearchProductsRequest;
        class SearchProductsAsAdminRequest;
        class TerminateProvisionedProductRequest;
        class UpdateConstraintRequest;
        class UpdatePortfolioRequest;
        class UpdateProductRequest;
        class UpdateProvisionedProductRequest;
        class UpdateProvisioningArtifactRequest;

        typedef Aws::Utils::Outcome<AcceptPortfolioShareResult, Aws::Client::AWSError<ServiceCatalogErrors>> AcceptPortfolioShareOutcome;
        typedef Aws::Utils::Outcome<AssociatePrincipalWithPortfolioResult, Aws::Client::AWSError<ServiceCatalogErrors>> AssociatePrincipalWithPortfolioOutcome;
        typedef Aws::Utils::Outcome<AssociateProductWithPortfolioResult, Aws::Client::AWSError<ServiceCatalogErrors>> AssociateProductWithPortfolioOutcome;
        typedef Aws::Utils::Outcome<CreateConstraintResult, Aws::Client::AWSError<ServiceCatalogErrors>> CreateConstraintOutcome;
        typedef Aws::Utils::Outcome<CreatePortfolioResult, Aws::Client::AWSError<ServiceCatalogErrors>> CreatePortfolioOutcome;
        typedef Aws::Utils::Outcome<CreatePortfolioShareResult, Aws::Client::AWSError<ServiceCatalogErrors>> CreatePortfolioShareOutcome;
        typedef Aws::Utils::Outcome<CreateProductResult, Aws::Client::AWSError<ServiceCatalogErrors>> CreateProductOutcome;
        typedef Aws::Utils::Outcome<CreateProvisioningArtifactResult, Aws::Client::AWSError<ServiceCatalogErrors>> CreateProvisioningArtifactOutcome;
        typedef Aws::Utils::Outcome<DeleteConstraintResult, Aws::Client::AWSError<ServiceCatalogErrors>> DeleteConstraintOutcome;
        typedef Aws::Utils::Outcome<DeletePortfolioResult, Aws::Client::AWSError<ServiceCatalogErrors>> DeletePortfolioOutcome;
        typedef Aws::Utils::Outcome<DeletePortfolioShareResult, Aws::Client::AWSError<ServiceCatalogErrors>> DeletePortfolioShareOutcome;
        typedef Aws::Utils::Outcome<DeleteProductResult, Aws::Client::AWSError<ServiceCatalogErrors>> DeleteProductOutcome;
        typedef Aws::Utils::Outcome<DeleteProvisioningArtifactResult, Aws::Client::AWSError<ServiceCatalogErrors>> DeleteProvisioningArtifactOutcome;
        typedef Aws::Utils::Outcome<DescribeConstraintResult, Aws::Client::AWSError<ServiceCatalogErrors>> DescribeConstraintOutcome;
        typedef Aws::Utils::Outcome<DescribePortfolioResult, Aws::Client::AWSError<ServiceCatalogErrors>> DescribePortfolioOutcome;
        typedef Aws::Utils::Outcome<DescribeProductResult, Aws::Client::AWSError<ServiceCatalogErrors>> DescribeProductOutcome;
        typedef Aws::Utils::Outcome<DescribeProductAsAdminResult, Aws::Client::AWSError<ServiceCatalogErrors>> DescribeProductAsAdminOutcome;
        typedef Aws::Utils::Outcome<DescribeProductViewResult, Aws::Client::AWSError<ServiceCatalogErrors>> DescribeProductViewOutcome;
        typedef Aws::Utils::Outcome<DescribeProvisioningArtifactResult, Aws::Client::AWSError<ServiceCatalogErrors>> DescribeProvisioningArtifactOutcome;
        typedef Aws::Utils::Outcome<DescribeProvisioningParametersResult, Aws::Client::AWSError<ServiceCatalogErrors>> DescribeProvisioningParametersOutcome;
        typedef Aws::Utils::Outcome<DescribeRecordResult, Aws::Client::AWSError<ServiceCatalogErrors>> DescribeRecordOutcome;
        typedef Aws::Utils::Outcome<DisassociatePrincipalFromPortfolioResult, Aws::Client::AWSError<ServiceCatalogErrors>> DisassociatePrincipalFromPortfolioOutcome;
        typedef Aws::Utils::Outcome<DisassociateProductFromPortfolioResult, Aws::Client::AWSError<ServiceCatalogErrors>> DisassociateProductFromPortfolioOutcome;
        typedef Aws::Utils::Outcome<ListAcceptedPortfolioSharesResult, Aws::Client::AWSError<ServiceCatalogErrors>> ListAcceptedPortfolioSharesOutcome;
        typedef Aws::Utils::Outcome<ListConstraintsForPortfolioResult, Aws::Client::AWSError<ServiceCatalogErrors>> ListConstraintsForPortfolioOutcome;
        typedef Aws::Utils::Outcome<ListLaunchPathsResult, Aws::Client::AWSError<ServiceCatalogErrors>> ListLaunchPathsOutcome;
        typedef Aws::Utils::Outcome<ListPortfolioAccessResult, Aws::Client::AWSError<ServiceCatalogErrors>> ListPortfolioAccessOutcome;
        typedef Aws::Utils::Outcome<ListPortfoliosResult, Aws::Client::AWSError<ServiceCatalogErrors>> ListPortfoliosOutcome;
        typedef Aws::Utils::Outcome<ListPortfoliosForProductResult, Aws::Client::AWSError<ServiceCatalogErrors>> ListPortfoliosForProductOutcome;
        typedef Aws::Utils::Outcome<ListPrincipalsForPortfolioResult, Aws::Client::AWSError<ServiceCatalogErrors>> ListPrincipalsForPortfolioOutcome;
        typedef Aws::Utils::Outcome<ListProvisioningArtifactsResult, Aws::Client::AWSError<ServiceCatalogErrors>> ListProvisioningArtifactsOutcome;
        typedef Aws::Utils::Outcome<ListRecordHistoryResult, Aws::Client::AWSError<ServiceCatalogErrors>> ListRecordHistoryOutcome;
        typedef Aws::Utils::Outcome<ProvisionProductResult, Aws::Client::AWSError<ServiceCatalogErrors>> ProvisionProductOutcome;
        typedef Aws::Utils::Outcome<RejectPortfolioShareResult, Aws::Client::AWSError<ServiceCatalogErrors>> RejectPortfolioShareOutcome;
        typedef Aws::Utils::Outcome<ScanProvisionedProductsResult, Aws::Client::AWSError<ServiceCatalogErrors>> ScanProvisionedProductsOutcome;
        typedef Aws::Utils::Outcome<SearchProductsResult, Aws::Client::AWSError<ServiceCatalogErrors>> SearchProductsOutcome;
        typedef Aws::Utils::Outcome<SearchProductsAsAdminResult, Aws::Client::AWSError<ServiceCatalogErrors>> SearchProductsAsAdminOutcome;
        typedef Aws::Utils::Outcome<TerminateProvisionedProductResult, Aws::Client::AWSError<ServiceCatalogErrors>> TerminateProvisionedProductOutcome;
        typedef Aws::Utils::Outcome<UpdateConstraintResult, Aws::Client::AWSError<ServiceCatalogErrors>> UpdateConstraintOutcome;
        typedef Aws::Utils::Outcome<UpdatePortfolioResult, Aws::Client::AWSError<ServiceCatalogErrors>> UpdatePortfolioOutcome;
        typedef Aws::Utils::Outcome<UpdateProductResult, Aws::Client::AWSError<ServiceCatalogErrors>> UpdateProductOutcome;
        typedef Aws::Utils::Outcome<UpdateProvisionedProductResult, Aws::Client::AWSError<ServiceCatalogErrors>> UpdateProvisionedProductOutcome;
        typedef Aws::Utils::Outcome<UpdateProvisioningArtifactResult, Aws::Client::AWSError<ServiceCatalogErrors>> UpdateProvisioningArtifactOutcome;

        typedef std::future<AcceptPortfolioShareOutcome> AcceptPortfolioShareOutcomeCallable;
        typedef std::future<AssociatePrincipalWithPortfolioOutcome> AssociatePrincipalWithPortfolioOutcomeCallable;
        typedef std::future<AssociateProductWithPortfolioOutcome> AssociateProductWithPortfolioOutcomeCallable;
        typedef std::future<CreateConstraintOutcome> CreateConstraintOutcomeCallable;
        typedef std::future<CreatePortfolioOutcome> CreatePortfolioOutcomeCallable;
        typedef std::future<CreatePortfolioShareOutcome> CreatePortfolioShareOutcomeCallable;
        typedef std::future<CreateProductOutcome> CreateProductOutcomeCallable;
        typedef std::future<CreateProvisioningArtifactOutcome> CreateProvisioningArtifactOutcomeCallable;
        typedef std::future<DeleteConstraintOutcome> DeleteConstraintOutcomeCallable;
        typedef std::future<DeletePortfolioOutcome> DeletePortfolioOutcomeCallable;
        typedef std::future<DeletePortfolioShareOutcome> DeletePortfolioShareOutcomeCallable;
        typedef std::future<DeleteProductOutcome> DeleteProductOutcomeCallable;
        typedef std::future<DeleteProvisioningArtifactOutcome> DeleteProvisioningArtifactOutcomeCallable;
        typedef std::future<DescribeConstraintOutcome> DescribeConstraintOutcomeCallable;
        typedef std::future<DescribePortfolioOutcome> DescribePortfolioOutcomeCallable;
        typedef std::future<DescribeProductOutcome> DescribeProductOutcomeCallable;
        typedef std::future<DescribeProductAsAdminOutcome> DescribeProductAsAdminOutcomeCallable;
        typedef std::future<DescribeProductViewOutcome> DescribeProductViewOutcomeCallable;
        typedef std::future<DescribeProvisioningArtifactOutcome> DescribeProvisioningArtifactOutcomeCallable;
        typedef std::future<DescribeProvisioningParametersOutcome> DescribeProvisioningParametersOutcomeCallable;
        typedef std::future<DescribeRecordOutcome> DescribeRecordOutcomeCallable;
        typedef std::future<DisassociatePrincipalFromPortfolioOutcome> DisassociatePrincipalFromPortfolioOutcomeCallable;
        typedef std::future<DisassociateProductFromPortfolioOutcome> DisassociateProductFromPortfolioOutcomeCallable;
        typedef std::future<ListAcceptedPortfolioSharesOutcome> ListAcceptedPortfolioSharesOutcomeCallable;
        typedef std::future<ListConstraintsForPortfolioOutcome> ListConstraintsForPortfolioOutcomeCallable;
        typedef std::future<ListLaunchPathsOutcome> ListLaunchPathsOutcomeCallable;
        typedef std::future<ListPortfolioAccessOutcome> ListPortfolioAccessOutcomeCallable;
        typedef std::future<ListPortfoliosOutcome> ListPortfoliosOutcomeCallable;
        typedef std::future<ListPortfoliosForProductOutcome> ListPortfoliosForProductOutcomeCallable;
        typedef std::future<ListPrincipalsForPortfolioOutcome> ListPrincipalsForPortfolioOutcomeCallable;
        typedef std::future<ListProvisioningArtifactsOutcome> ListProvisioningArtifactsOutcomeCallable;
        typedef std::future<ListRecordHistoryOutcome> ListRecordHistoryOutcomeCallable;
        typedef std::future<ProvisionProductOutcome> ProvisionProductOutcomeCallable;
        typedef std::future<RejectPortfolioShareOutcome> RejectPortfolioShareOutcomeCallable;
        typedef std::future<ScanProvisionedProductsOutcome> ScanProvisionedProductsOutcomeCallable;
        typedef std::future<SearchProductsOutcome> SearchProductsOutcomeCallable;
        typedef std::future<SearchProductsAsAdminOutcome> SearchProductsAsAdminOutcomeCallable;
        typedef std::future<TerminateProvisionedProductOutcome> TerminateProvisionedProductOutcomeCallable;
        typedef std::future<UpdateConstraintOutcome> UpdateConstraintOutcomeCallable;
        typedef std::future<UpdatePortfolioOutcome> UpdatePortfolioOutcomeCallable;
        typedef std::future<UpdateProductOutcome> UpdateProductOutcomeCallable;
        typedef std::future<UpdateProvisionedProductOutcome> UpdateProvisionedProductOutcomeCallable;
        typedef std::future<UpdateProvisioningArtifactOutcome> UpdateProvisioningArtifactOutcomeCallable;
} // namespace Model

  class ServiceCatalogClient;

    typedef std::function<void(const ServiceCatalogClient*, const Model::AcceptPortfolioShareRequest&, const Model::AcceptPortfolioShareOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcceptPortfolioShareResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::AssociatePrincipalWithPortfolioRequest&, const Model::AssociatePrincipalWithPortfolioOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociatePrincipalWithPortfolioResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::AssociateProductWithPortfolioRequest&, const Model::AssociateProductWithPortfolioOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateProductWithPortfolioResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::CreateConstraintRequest&, const Model::CreateConstraintOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConstraintResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::CreatePortfolioRequest&, const Model::CreatePortfolioOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePortfolioResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::CreatePortfolioShareRequest&, const Model::CreatePortfolioShareOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePortfolioShareResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::CreateProductRequest&, const Model::CreateProductOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProductResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::CreateProvisioningArtifactRequest&, const Model::CreateProvisioningArtifactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProvisioningArtifactResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DeleteConstraintRequest&, const Model::DeleteConstraintOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConstraintResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DeletePortfolioRequest&, const Model::DeletePortfolioOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePortfolioResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DeletePortfolioShareRequest&, const Model::DeletePortfolioShareOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePortfolioShareResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DeleteProductRequest&, const Model::DeleteProductOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProductResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DeleteProvisioningArtifactRequest&, const Model::DeleteProvisioningArtifactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProvisioningArtifactResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DescribeConstraintRequest&, const Model::DescribeConstraintOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConstraintResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DescribePortfolioRequest&, const Model::DescribePortfolioOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePortfolioResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DescribeProductRequest&, const Model::DescribeProductOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeProductResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DescribeProductAsAdminRequest&, const Model::DescribeProductAsAdminOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeProductAsAdminResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DescribeProductViewRequest&, const Model::DescribeProductViewOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeProductViewResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DescribeProvisioningArtifactRequest&, const Model::DescribeProvisioningArtifactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeProvisioningArtifactResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DescribeProvisioningParametersRequest&, const Model::DescribeProvisioningParametersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeProvisioningParametersResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DescribeRecordRequest&, const Model::DescribeRecordOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRecordResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DisassociatePrincipalFromPortfolioRequest&, const Model::DisassociatePrincipalFromPortfolioOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociatePrincipalFromPortfolioResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DisassociateProductFromPortfolioRequest&, const Model::DisassociateProductFromPortfolioOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateProductFromPortfolioResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ListAcceptedPortfolioSharesRequest&, const Model::ListAcceptedPortfolioSharesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAcceptedPortfolioSharesResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ListConstraintsForPortfolioRequest&, const Model::ListConstraintsForPortfolioOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListConstraintsForPortfolioResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ListLaunchPathsRequest&, const Model::ListLaunchPathsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLaunchPathsResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ListPortfolioAccessRequest&, const Model::ListPortfolioAccessOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPortfolioAccessResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ListPortfoliosRequest&, const Model::ListPortfoliosOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPortfoliosResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ListPortfoliosForProductRequest&, const Model::ListPortfoliosForProductOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPortfoliosForProductResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ListPrincipalsForPortfolioRequest&, const Model::ListPrincipalsForPortfolioOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPrincipalsForPortfolioResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ListProvisioningArtifactsRequest&, const Model::ListProvisioningArtifactsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProvisioningArtifactsResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ListRecordHistoryRequest&, const Model::ListRecordHistoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRecordHistoryResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ProvisionProductRequest&, const Model::ProvisionProductOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ProvisionProductResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::RejectPortfolioShareRequest&, const Model::RejectPortfolioShareOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RejectPortfolioShareResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ScanProvisionedProductsRequest&, const Model::ScanProvisionedProductsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ScanProvisionedProductsResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::SearchProductsRequest&, const Model::SearchProductsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchProductsResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::SearchProductsAsAdminRequest&, const Model::SearchProductsAsAdminOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchProductsAsAdminResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::TerminateProvisionedProductRequest&, const Model::TerminateProvisionedProductOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TerminateProvisionedProductResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::UpdateConstraintRequest&, const Model::UpdateConstraintOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateConstraintResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::UpdatePortfolioRequest&, const Model::UpdatePortfolioOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePortfolioResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::UpdateProductRequest&, const Model::UpdateProductOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateProductResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::UpdateProvisionedProductRequest&, const Model::UpdateProvisionedProductOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateProvisionedProductResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::UpdateProvisioningArtifactRequest&, const Model::UpdateProvisioningArtifactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateProvisioningArtifactResponseReceivedHandler;

  /**
   * <fullname>AWS Service Catalog</fullname> <p> <b>Overview</b> </p> <p> <a
   * href="https://aws.amazon.com/servicecatalog/">AWS Service Catalog</a> allows
   * organizations to create and manage catalogs of IT services that are approved for
   * use on AWS. This documentation provides reference material for the AWS Service
   * Catalog end user API. To get the most out of this documentation, you need to be
   * familiar with the terminology discussed in <a
   * href="http://docs.aws.amazon.com/servicecatalog/latest/userguide/what-is_concepts.html">AWS
   * Service Catalog Concepts</a>.</p> <p> <i>Additional Resources</i> </p> <ul> <li>
   * <p> <a
   * href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/introduction.html">AWS
   * Service Catalog Administrator Guide</a> </p> </li> <li> <p> <a
   * href="http://docs.aws.amazon.com/servicecatalog/latest/userguide/introduction.html">AWS
   * Service Catalog User Guide</a> </p> </li> </ul>
   */
  class AWS_SERVICECATALOG_API ServiceCatalogClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ServiceCatalogClient(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ServiceCatalogClient(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ServiceCatalogClient(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
            const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

        virtual ~ServiceCatalogClient();

        /**
         * <p>Accepts an offer to share a portfolio.</p>
         */
        virtual Model::AcceptPortfolioShareOutcome AcceptPortfolioShare(const Model::AcceptPortfolioShareRequest& request) const;

        /**
         * <p>Accepts an offer to share a portfolio.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AcceptPortfolioShareOutcomeCallable AcceptPortfolioShareCallable(const Model::AcceptPortfolioShareRequest& request) const;

        /**
         * <p>Accepts an offer to share a portfolio.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AcceptPortfolioShareAsync(const Model::AcceptPortfolioShareRequest& request, const AcceptPortfolioShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates the specified principal ARN with the specified portfolio.</p>
         */
        virtual Model::AssociatePrincipalWithPortfolioOutcome AssociatePrincipalWithPortfolio(const Model::AssociatePrincipalWithPortfolioRequest& request) const;

        /**
         * <p>Associates the specified principal ARN with the specified portfolio.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociatePrincipalWithPortfolioOutcomeCallable AssociatePrincipalWithPortfolioCallable(const Model::AssociatePrincipalWithPortfolioRequest& request) const;

        /**
         * <p>Associates the specified principal ARN with the specified portfolio.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociatePrincipalWithPortfolioAsync(const Model::AssociatePrincipalWithPortfolioRequest& request, const AssociatePrincipalWithPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a product with a portfolio.</p>
         */
        virtual Model::AssociateProductWithPortfolioOutcome AssociateProductWithPortfolio(const Model::AssociateProductWithPortfolioRequest& request) const;

        /**
         * <p>Associates a product with a portfolio.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateProductWithPortfolioOutcomeCallable AssociateProductWithPortfolioCallable(const Model::AssociateProductWithPortfolioRequest& request) const;

        /**
         * <p>Associates a product with a portfolio.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateProductWithPortfolioAsync(const Model::AssociateProductWithPortfolioRequest& request, const AssociateProductWithPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new constraint.</p>
         */
        virtual Model::CreateConstraintOutcome CreateConstraint(const Model::CreateConstraintRequest& request) const;

        /**
         * <p>Creates a new constraint.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateConstraintOutcomeCallable CreateConstraintCallable(const Model::CreateConstraintRequest& request) const;

        /**
         * <p>Creates a new constraint.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateConstraintAsync(const Model::CreateConstraintRequest& request, const CreateConstraintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new portfolio.</p>
         */
        virtual Model::CreatePortfolioOutcome CreatePortfolio(const Model::CreatePortfolioRequest& request) const;

        /**
         * <p>Creates a new portfolio.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePortfolioOutcomeCallable CreatePortfolioCallable(const Model::CreatePortfolioRequest& request) const;

        /**
         * <p>Creates a new portfolio.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePortfolioAsync(const Model::CreatePortfolioRequest& request, const CreatePortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new portfolio share.</p>
         */
        virtual Model::CreatePortfolioShareOutcome CreatePortfolioShare(const Model::CreatePortfolioShareRequest& request) const;

        /**
         * <p>Creates a new portfolio share.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePortfolioShareOutcomeCallable CreatePortfolioShareCallable(const Model::CreatePortfolioShareRequest& request) const;

        /**
         * <p>Creates a new portfolio share.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePortfolioShareAsync(const Model::CreatePortfolioShareRequest& request, const CreatePortfolioShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new product.</p>
         */
        virtual Model::CreateProductOutcome CreateProduct(const Model::CreateProductRequest& request) const;

        /**
         * <p>Creates a new product.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateProductOutcomeCallable CreateProductCallable(const Model::CreateProductRequest& request) const;

        /**
         * <p>Creates a new product.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateProductAsync(const Model::CreateProductRequest& request, const CreateProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create a new provisioning artifact for the specified product. This operation
         * will not work with a product that has been shared with you.</p>
         */
        virtual Model::CreateProvisioningArtifactOutcome CreateProvisioningArtifact(const Model::CreateProvisioningArtifactRequest& request) const;

        /**
         * <p>Create a new provisioning artifact for the specified product. This operation
         * will not work with a product that has been shared with you.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateProvisioningArtifactOutcomeCallable CreateProvisioningArtifactCallable(const Model::CreateProvisioningArtifactRequest& request) const;

        /**
         * <p>Create a new provisioning artifact for the specified product. This operation
         * will not work with a product that has been shared with you.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateProvisioningArtifactAsync(const Model::CreateProvisioningArtifactRequest& request, const CreateProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified constraint.</p>
         */
        virtual Model::DeleteConstraintOutcome DeleteConstraint(const Model::DeleteConstraintRequest& request) const;

        /**
         * <p>Deletes the specified constraint.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteConstraintOutcomeCallable DeleteConstraintCallable(const Model::DeleteConstraintRequest& request) const;

        /**
         * <p>Deletes the specified constraint.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteConstraintAsync(const Model::DeleteConstraintRequest& request, const DeleteConstraintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified portfolio. This operation will not work with a
         * portfolio that has been shared with you or if it has products, users,
         * constraints, or shared accounts associated with it.</p>
         */
        virtual Model::DeletePortfolioOutcome DeletePortfolio(const Model::DeletePortfolioRequest& request) const;

        /**
         * <p>Deletes the specified portfolio. This operation will not work with a
         * portfolio that has been shared with you or if it has products, users,
         * constraints, or shared accounts associated with it.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePortfolioOutcomeCallable DeletePortfolioCallable(const Model::DeletePortfolioRequest& request) const;

        /**
         * <p>Deletes the specified portfolio. This operation will not work with a
         * portfolio that has been shared with you or if it has products, users,
         * constraints, or shared accounts associated with it.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePortfolioAsync(const Model::DeletePortfolioRequest& request, const DeletePortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified portfolio share.</p>
         */
        virtual Model::DeletePortfolioShareOutcome DeletePortfolioShare(const Model::DeletePortfolioShareRequest& request) const;

        /**
         * <p>Deletes the specified portfolio share.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePortfolioShareOutcomeCallable DeletePortfolioShareCallable(const Model::DeletePortfolioShareRequest& request) const;

        /**
         * <p>Deletes the specified portfolio share.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePortfolioShareAsync(const Model::DeletePortfolioShareRequest& request, const DeletePortfolioShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified product. This operation will not work with a product
         * that has been shared with you or is associated with a portfolio. </p>
         */
        virtual Model::DeleteProductOutcome DeleteProduct(const Model::DeleteProductRequest& request) const;

        /**
         * <p>Deletes the specified product. This operation will not work with a product
         * that has been shared with you or is associated with a portfolio. </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteProductOutcomeCallable DeleteProductCallable(const Model::DeleteProductRequest& request) const;

        /**
         * <p>Deletes the specified product. This operation will not work with a product
         * that has been shared with you or is associated with a portfolio. </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteProductAsync(const Model::DeleteProductRequest& request, const DeleteProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified provisioning artifact. This operation will not work on
         * a provisioning artifact associated with a product that has been shared with you,
         * or on the last provisioning artifact associated with a product (a product must
         * have at least one provisioning artifact).</p>
         */
        virtual Model::DeleteProvisioningArtifactOutcome DeleteProvisioningArtifact(const Model::DeleteProvisioningArtifactRequest& request) const;

        /**
         * <p>Deletes the specified provisioning artifact. This operation will not work on
         * a provisioning artifact associated with a product that has been shared with you,
         * or on the last provisioning artifact associated with a product (a product must
         * have at least one provisioning artifact).</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteProvisioningArtifactOutcomeCallable DeleteProvisioningArtifactCallable(const Model::DeleteProvisioningArtifactRequest& request) const;

        /**
         * <p>Deletes the specified provisioning artifact. This operation will not work on
         * a provisioning artifact associated with a product that has been shared with you,
         * or on the last provisioning artifact associated with a product (a product must
         * have at least one provisioning artifact).</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteProvisioningArtifactAsync(const Model::DeleteProvisioningArtifactRequest& request, const DeleteProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves detailed information for a specified constraint.</p>
         */
        virtual Model::DescribeConstraintOutcome DescribeConstraint(const Model::DescribeConstraintRequest& request) const;

        /**
         * <p>Retrieves detailed information for a specified constraint.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeConstraintOutcomeCallable DescribeConstraintCallable(const Model::DescribeConstraintRequest& request) const;

        /**
         * <p>Retrieves detailed information for a specified constraint.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeConstraintAsync(const Model::DescribeConstraintRequest& request, const DescribeConstraintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves detailed information and any tags associated with the specified
         * portfolio.</p>
         */
        virtual Model::DescribePortfolioOutcome DescribePortfolio(const Model::DescribePortfolioRequest& request) const;

        /**
         * <p>Retrieves detailed information and any tags associated with the specified
         * portfolio.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePortfolioOutcomeCallable DescribePortfolioCallable(const Model::DescribePortfolioRequest& request) const;

        /**
         * <p>Retrieves detailed information and any tags associated with the specified
         * portfolio.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePortfolioAsync(const Model::DescribePortfolioRequest& request, const DescribePortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about a specified product.</p> <p>This operation is
         * functionally identical to <a>DescribeProductView</a> except that it takes as
         * input <code>ProductId</code> instead of <code>ProductViewId</code>.</p>
         */
        virtual Model::DescribeProductOutcome DescribeProduct(const Model::DescribeProductRequest& request) const;

        /**
         * <p>Retrieves information about a specified product.</p> <p>This operation is
         * functionally identical to <a>DescribeProductView</a> except that it takes as
         * input <code>ProductId</code> instead of <code>ProductViewId</code>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeProductOutcomeCallable DescribeProductCallable(const Model::DescribeProductRequest& request) const;

        /**
         * <p>Retrieves information about a specified product.</p> <p>This operation is
         * functionally identical to <a>DescribeProductView</a> except that it takes as
         * input <code>ProductId</code> instead of <code>ProductViewId</code>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeProductAsync(const Model::DescribeProductRequest& request, const DescribeProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about a specified product, run with administrator
         * access.</p>
         */
        virtual Model::DescribeProductAsAdminOutcome DescribeProductAsAdmin(const Model::DescribeProductAsAdminRequest& request) const;

        /**
         * <p>Retrieves information about a specified product, run with administrator
         * access.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeProductAsAdminOutcomeCallable DescribeProductAsAdminCallable(const Model::DescribeProductAsAdminRequest& request) const;

        /**
         * <p>Retrieves information about a specified product, run with administrator
         * access.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeProductAsAdminAsync(const Model::DescribeProductAsAdminRequest& request, const DescribeProductAsAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about a specified product.</p> <p>This operation is
         * functionally identical to <a>DescribeProduct</a> except that it takes as input
         * <code>ProductViewId</code> instead of <code>ProductId</code>.</p>
         */
        virtual Model::DescribeProductViewOutcome DescribeProductView(const Model::DescribeProductViewRequest& request) const;

        /**
         * <p>Retrieves information about a specified product.</p> <p>This operation is
         * functionally identical to <a>DescribeProduct</a> except that it takes as input
         * <code>ProductViewId</code> instead of <code>ProductId</code>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeProductViewOutcomeCallable DescribeProductViewCallable(const Model::DescribeProductViewRequest& request) const;

        /**
         * <p>Retrieves information about a specified product.</p> <p>This operation is
         * functionally identical to <a>DescribeProduct</a> except that it takes as input
         * <code>ProductViewId</code> instead of <code>ProductId</code>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeProductViewAsync(const Model::DescribeProductViewRequest& request, const DescribeProductViewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves detailed information about the specified provisioning artifact.</p>
         */
        virtual Model::DescribeProvisioningArtifactOutcome DescribeProvisioningArtifact(const Model::DescribeProvisioningArtifactRequest& request) const;

        /**
         * <p>Retrieves detailed information about the specified provisioning artifact.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeProvisioningArtifactOutcomeCallable DescribeProvisioningArtifactCallable(const Model::DescribeProvisioningArtifactRequest& request) const;

        /**
         * <p>Retrieves detailed information about the specified provisioning artifact.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeProvisioningArtifactAsync(const Model::DescribeProvisioningArtifactRequest& request, const DescribeProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides information about parameters required to provision a specified
         * product in a specified manner. Use this operation to obtain the list of
         * <code>ProvisioningArtifactParameters</code> parameters available to call the
         * <a>ProvisionProduct</a> operation for the specified product.</p>
         */
        virtual Model::DescribeProvisioningParametersOutcome DescribeProvisioningParameters(const Model::DescribeProvisioningParametersRequest& request) const;

        /**
         * <p>Provides information about parameters required to provision a specified
         * product in a specified manner. Use this operation to obtain the list of
         * <code>ProvisioningArtifactParameters</code> parameters available to call the
         * <a>ProvisionProduct</a> operation for the specified product.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeProvisioningParametersOutcomeCallable DescribeProvisioningParametersCallable(const Model::DescribeProvisioningParametersRequest& request) const;

        /**
         * <p>Provides information about parameters required to provision a specified
         * product in a specified manner. Use this operation to obtain the list of
         * <code>ProvisioningArtifactParameters</code> parameters available to call the
         * <a>ProvisionProduct</a> operation for the specified product.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeProvisioningParametersAsync(const Model::DescribeProvisioningParametersRequest& request, const DescribeProvisioningParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a paginated list of the full details of a specific request. Use
         * this operation after calling a request operation (<a>ProvisionProduct</a>,
         * <a>TerminateProvisionedProduct</a>, or <a>UpdateProvisionedProduct</a>). </p>
         */
        virtual Model::DescribeRecordOutcome DescribeRecord(const Model::DescribeRecordRequest& request) const;

        /**
         * <p>Retrieves a paginated list of the full details of a specific request. Use
         * this operation after calling a request operation (<a>ProvisionProduct</a>,
         * <a>TerminateProvisionedProduct</a>, or <a>UpdateProvisionedProduct</a>). </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRecordOutcomeCallable DescribeRecordCallable(const Model::DescribeRecordRequest& request) const;

        /**
         * <p>Retrieves a paginated list of the full details of a specific request. Use
         * this operation after calling a request operation (<a>ProvisionProduct</a>,
         * <a>TerminateProvisionedProduct</a>, or <a>UpdateProvisionedProduct</a>). </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRecordAsync(const Model::DescribeRecordRequest& request, const DescribeRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates a previously associated principal ARN from a specified
         * portfolio.</p>
         */
        virtual Model::DisassociatePrincipalFromPortfolioOutcome DisassociatePrincipalFromPortfolio(const Model::DisassociatePrincipalFromPortfolioRequest& request) const;

        /**
         * <p>Disassociates a previously associated principal ARN from a specified
         * portfolio.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociatePrincipalFromPortfolioOutcomeCallable DisassociatePrincipalFromPortfolioCallable(const Model::DisassociatePrincipalFromPortfolioRequest& request) const;

        /**
         * <p>Disassociates a previously associated principal ARN from a specified
         * portfolio.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociatePrincipalFromPortfolioAsync(const Model::DisassociatePrincipalFromPortfolioRequest& request, const DisassociatePrincipalFromPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates the specified product from the specified portfolio. </p>
         */
        virtual Model::DisassociateProductFromPortfolioOutcome DisassociateProductFromPortfolio(const Model::DisassociateProductFromPortfolioRequest& request) const;

        /**
         * <p>Disassociates the specified product from the specified portfolio. </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateProductFromPortfolioOutcomeCallable DisassociateProductFromPortfolioCallable(const Model::DisassociateProductFromPortfolioRequest& request) const;

        /**
         * <p>Disassociates the specified product from the specified portfolio. </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateProductFromPortfolioAsync(const Model::DisassociateProductFromPortfolioRequest& request, const DisassociateProductFromPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists details of all portfolios for which sharing was accepted by this
         * account.</p>
         */
        virtual Model::ListAcceptedPortfolioSharesOutcome ListAcceptedPortfolioShares(const Model::ListAcceptedPortfolioSharesRequest& request) const;

        /**
         * <p>Lists details of all portfolios for which sharing was accepted by this
         * account.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAcceptedPortfolioSharesOutcomeCallable ListAcceptedPortfolioSharesCallable(const Model::ListAcceptedPortfolioSharesRequest& request) const;

        /**
         * <p>Lists details of all portfolios for which sharing was accepted by this
         * account.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAcceptedPortfolioSharesAsync(const Model::ListAcceptedPortfolioSharesRequest& request, const ListAcceptedPortfolioSharesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves detailed constraint information for the specified portfolio and
         * product.</p>
         */
        virtual Model::ListConstraintsForPortfolioOutcome ListConstraintsForPortfolio(const Model::ListConstraintsForPortfolioRequest& request) const;

        /**
         * <p>Retrieves detailed constraint information for the specified portfolio and
         * product.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListConstraintsForPortfolioOutcomeCallable ListConstraintsForPortfolioCallable(const Model::ListConstraintsForPortfolioRequest& request) const;

        /**
         * <p>Retrieves detailed constraint information for the specified portfolio and
         * product.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListConstraintsForPortfolioAsync(const Model::ListConstraintsForPortfolioRequest& request, const ListConstraintsForPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a paginated list of all paths to a specified product. A path is how
         * the user has access to a specified product, and is necessary when provisioning a
         * product. A path also determines the constraints put on the product.</p>
         */
        virtual Model::ListLaunchPathsOutcome ListLaunchPaths(const Model::ListLaunchPathsRequest& request) const;

        /**
         * <p>Returns a paginated list of all paths to a specified product. A path is how
         * the user has access to a specified product, and is necessary when provisioning a
         * product. A path also determines the constraints put on the product.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLaunchPathsOutcomeCallable ListLaunchPathsCallable(const Model::ListLaunchPathsRequest& request) const;

        /**
         * <p>Returns a paginated list of all paths to a specified product. A path is how
         * the user has access to a specified product, and is necessary when provisioning a
         * product. A path also determines the constraints put on the product.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLaunchPathsAsync(const Model::ListLaunchPathsRequest& request, const ListLaunchPathsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the account IDs that have been authorized sharing of the specified
         * portfolio.</p>
         */
        virtual Model::ListPortfolioAccessOutcome ListPortfolioAccess(const Model::ListPortfolioAccessRequest& request) const;

        /**
         * <p>Lists the account IDs that have been authorized sharing of the specified
         * portfolio.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPortfolioAccessOutcomeCallable ListPortfolioAccessCallable(const Model::ListPortfolioAccessRequest& request) const;

        /**
         * <p>Lists the account IDs that have been authorized sharing of the specified
         * portfolio.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPortfolioAccessAsync(const Model::ListPortfolioAccessRequest& request, const ListPortfolioAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all portfolios in the catalog.</p>
         */
        virtual Model::ListPortfoliosOutcome ListPortfolios(const Model::ListPortfoliosRequest& request) const;

        /**
         * <p>Lists all portfolios in the catalog.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPortfoliosOutcomeCallable ListPortfoliosCallable(const Model::ListPortfoliosRequest& request) const;

        /**
         * <p>Lists all portfolios in the catalog.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPortfoliosAsync(const Model::ListPortfoliosRequest& request, const ListPortfoliosResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all portfolios that the specified product is associated with.</p>
         */
        virtual Model::ListPortfoliosForProductOutcome ListPortfoliosForProduct(const Model::ListPortfoliosForProductRequest& request) const;

        /**
         * <p>Lists all portfolios that the specified product is associated with.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPortfoliosForProductOutcomeCallable ListPortfoliosForProductCallable(const Model::ListPortfoliosForProductRequest& request) const;

        /**
         * <p>Lists all portfolios that the specified product is associated with.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPortfoliosForProductAsync(const Model::ListPortfoliosForProductRequest& request, const ListPortfoliosForProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all principal ARNs associated with the specified portfolio.</p>
         */
        virtual Model::ListPrincipalsForPortfolioOutcome ListPrincipalsForPortfolio(const Model::ListPrincipalsForPortfolioRequest& request) const;

        /**
         * <p>Lists all principal ARNs associated with the specified portfolio.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPrincipalsForPortfolioOutcomeCallable ListPrincipalsForPortfolioCallable(const Model::ListPrincipalsForPortfolioRequest& request) const;

        /**
         * <p>Lists all principal ARNs associated with the specified portfolio.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPrincipalsForPortfolioAsync(const Model::ListPrincipalsForPortfolioRequest& request, const ListPrincipalsForPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all provisioning artifacts associated with the specified product.</p>
         */
        virtual Model::ListProvisioningArtifactsOutcome ListProvisioningArtifacts(const Model::ListProvisioningArtifactsRequest& request) const;

        /**
         * <p>Lists all provisioning artifacts associated with the specified product.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListProvisioningArtifactsOutcomeCallable ListProvisioningArtifactsCallable(const Model::ListProvisioningArtifactsRequest& request) const;

        /**
         * <p>Lists all provisioning artifacts associated with the specified product.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListProvisioningArtifactsAsync(const Model::ListProvisioningArtifactsRequest& request, const ListProvisioningArtifactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a paginated list of all performed requests, in the form of
         * RecordDetails objects that are filtered as specified.</p>
         */
        virtual Model::ListRecordHistoryOutcome ListRecordHistory(const Model::ListRecordHistoryRequest& request) const;

        /**
         * <p>Returns a paginated list of all performed requests, in the form of
         * RecordDetails objects that are filtered as specified.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRecordHistoryOutcomeCallable ListRecordHistoryCallable(const Model::ListRecordHistoryRequest& request) const;

        /**
         * <p>Returns a paginated list of all performed requests, in the form of
         * RecordDetails objects that are filtered as specified.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRecordHistoryAsync(const Model::ListRecordHistoryRequest& request, const ListRecordHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Requests a <i>Provision</i> of a specified product. A
         * <i>ProvisionedProduct</i> is a resourced instance for a product. For example,
         * provisioning a CloudFormation-template-backed product results in launching a
         * CloudFormation stack and all the underlying resources that come with it. </p>
         * <p>You can check the status of this request using the <a>DescribeRecord</a>
         * operation.</p>
         */
        virtual Model::ProvisionProductOutcome ProvisionProduct(const Model::ProvisionProductRequest& request) const;

        /**
         * <p>Requests a <i>Provision</i> of a specified product. A
         * <i>ProvisionedProduct</i> is a resourced instance for a product. For example,
         * provisioning a CloudFormation-template-backed product results in launching a
         * CloudFormation stack and all the underlying resources that come with it. </p>
         * <p>You can check the status of this request using the <a>DescribeRecord</a>
         * operation.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ProvisionProductOutcomeCallable ProvisionProductCallable(const Model::ProvisionProductRequest& request) const;

        /**
         * <p>Requests a <i>Provision</i> of a specified product. A
         * <i>ProvisionedProduct</i> is a resourced instance for a product. For example,
         * provisioning a CloudFormation-template-backed product results in launching a
         * CloudFormation stack and all the underlying resources that come with it. </p>
         * <p>You can check the status of this request using the <a>DescribeRecord</a>
         * operation.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ProvisionProductAsync(const Model::ProvisionProductRequest& request, const ProvisionProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Rejects an offer to share a portfolio.</p>
         */
        virtual Model::RejectPortfolioShareOutcome RejectPortfolioShare(const Model::RejectPortfolioShareRequest& request) const;

        /**
         * <p>Rejects an offer to share a portfolio.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RejectPortfolioShareOutcomeCallable RejectPortfolioShareCallable(const Model::RejectPortfolioShareRequest& request) const;

        /**
         * <p>Rejects an offer to share a portfolio.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RejectPortfolioShareAsync(const Model::RejectPortfolioShareRequest& request, const RejectPortfolioShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a paginated list of all the ProvisionedProduct objects that are
         * currently available (not terminated). </p>
         */
        virtual Model::ScanProvisionedProductsOutcome ScanProvisionedProducts(const Model::ScanProvisionedProductsRequest& request) const;

        /**
         * <p>Returns a paginated list of all the ProvisionedProduct objects that are
         * currently available (not terminated). </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ScanProvisionedProductsOutcomeCallable ScanProvisionedProductsCallable(const Model::ScanProvisionedProductsRequest& request) const;

        /**
         * <p>Returns a paginated list of all the ProvisionedProduct objects that are
         * currently available (not terminated). </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ScanProvisionedProductsAsync(const Model::ScanProvisionedProductsRequest& request, const ScanProvisionedProductsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a paginated list all of the <code>Products</code> objects to which
         * the caller has access. </p> <p>The output of this operation can be used as input
         * for other operations, such as <a>DescribeProductView</a>.</p>
         */
        virtual Model::SearchProductsOutcome SearchProducts(const Model::SearchProductsRequest& request) const;

        /**
         * <p>Returns a paginated list all of the <code>Products</code> objects to which
         * the caller has access. </p> <p>The output of this operation can be used as input
         * for other operations, such as <a>DescribeProductView</a>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchProductsOutcomeCallable SearchProductsCallable(const Model::SearchProductsRequest& request) const;

        /**
         * <p>Returns a paginated list all of the <code>Products</code> objects to which
         * the caller has access. </p> <p>The output of this operation can be used as input
         * for other operations, such as <a>DescribeProductView</a>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchProductsAsync(const Model::SearchProductsRequest& request, const SearchProductsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves summary and status information about all products created within
         * the caller's account. If a portfolio ID is provided, this operation retrieves
         * information for only those products that are associated with the specified
         * portfolio.</p>
         */
        virtual Model::SearchProductsAsAdminOutcome SearchProductsAsAdmin(const Model::SearchProductsAsAdminRequest& request) const;

        /**
         * <p>Retrieves summary and status information about all products created within
         * the caller's account. If a portfolio ID is provided, this operation retrieves
         * information for only those products that are associated with the specified
         * portfolio.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchProductsAsAdminOutcomeCallable SearchProductsAsAdminCallable(const Model::SearchProductsAsAdminRequest& request) const;

        /**
         * <p>Retrieves summary and status information about all products created within
         * the caller's account. If a portfolio ID is provided, this operation retrieves
         * information for only those products that are associated with the specified
         * portfolio.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchProductsAsAdminAsync(const Model::SearchProductsAsAdminRequest& request, const SearchProductsAsAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Requests termination of an existing ProvisionedProduct object. If there are
         * <code>Tags</code> associated with the object, they are terminated when the
         * ProvisionedProduct object is terminated. </p> <p>This operation does not delete
         * any records associated with the ProvisionedProduct object.</p> <p>You can check
         * the status of this request using the <a>DescribeRecord</a> operation.</p>
         */
        virtual Model::TerminateProvisionedProductOutcome TerminateProvisionedProduct(const Model::TerminateProvisionedProductRequest& request) const;

        /**
         * <p>Requests termination of an existing ProvisionedProduct object. If there are
         * <code>Tags</code> associated with the object, they are terminated when the
         * ProvisionedProduct object is terminated. </p> <p>This operation does not delete
         * any records associated with the ProvisionedProduct object.</p> <p>You can check
         * the status of this request using the <a>DescribeRecord</a> operation.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TerminateProvisionedProductOutcomeCallable TerminateProvisionedProductCallable(const Model::TerminateProvisionedProductRequest& request) const;

        /**
         * <p>Requests termination of an existing ProvisionedProduct object. If there are
         * <code>Tags</code> associated with the object, they are terminated when the
         * ProvisionedProduct object is terminated. </p> <p>This operation does not delete
         * any records associated with the ProvisionedProduct object.</p> <p>You can check
         * the status of this request using the <a>DescribeRecord</a> operation.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TerminateProvisionedProductAsync(const Model::TerminateProvisionedProductRequest& request, const TerminateProvisionedProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing constraint.</p>
         */
        virtual Model::UpdateConstraintOutcome UpdateConstraint(const Model::UpdateConstraintRequest& request) const;

        /**
         * <p>Updates an existing constraint.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateConstraintOutcomeCallable UpdateConstraintCallable(const Model::UpdateConstraintRequest& request) const;

        /**
         * <p>Updates an existing constraint.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateConstraintAsync(const Model::UpdateConstraintRequest& request, const UpdateConstraintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified portfolio's details. This operation will not work with
         * a product that has been shared with you.</p>
         */
        virtual Model::UpdatePortfolioOutcome UpdatePortfolio(const Model::UpdatePortfolioRequest& request) const;

        /**
         * <p>Updates the specified portfolio's details. This operation will not work with
         * a product that has been shared with you.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePortfolioOutcomeCallable UpdatePortfolioCallable(const Model::UpdatePortfolioRequest& request) const;

        /**
         * <p>Updates the specified portfolio's details. This operation will not work with
         * a product that has been shared with you.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePortfolioAsync(const Model::UpdatePortfolioRequest& request, const UpdatePortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing product.</p>
         */
        virtual Model::UpdateProductOutcome UpdateProduct(const Model::UpdateProductRequest& request) const;

        /**
         * <p>Updates an existing product.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateProductOutcomeCallable UpdateProductCallable(const Model::UpdateProductRequest& request) const;

        /**
         * <p>Updates an existing product.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateProductAsync(const Model::UpdateProductRequest& request, const UpdateProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Requests updates to the configuration of an existing ProvisionedProduct
         * object. If there are tags associated with the object, they cannot be updated or
         * added with this operation. Depending on the specific updates requested, this
         * operation may update with no interruption, with some interruption, or replace
         * the ProvisionedProduct object entirely. </p> <p>You can check the status of this
         * request using the <a>DescribeRecord</a> operation.</p>
         */
        virtual Model::UpdateProvisionedProductOutcome UpdateProvisionedProduct(const Model::UpdateProvisionedProductRequest& request) const;

        /**
         * <p>Requests updates to the configuration of an existing ProvisionedProduct
         * object. If there are tags associated with the object, they cannot be updated or
         * added with this operation. Depending on the specific updates requested, this
         * operation may update with no interruption, with some interruption, or replace
         * the ProvisionedProduct object entirely. </p> <p>You can check the status of this
         * request using the <a>DescribeRecord</a> operation.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateProvisionedProductOutcomeCallable UpdateProvisionedProductCallable(const Model::UpdateProvisionedProductRequest& request) const;

        /**
         * <p>Requests updates to the configuration of an existing ProvisionedProduct
         * object. If there are tags associated with the object, they cannot be updated or
         * added with this operation. Depending on the specific updates requested, this
         * operation may update with no interruption, with some interruption, or replace
         * the ProvisionedProduct object entirely. </p> <p>You can check the status of this
         * request using the <a>DescribeRecord</a> operation.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateProvisionedProductAsync(const Model::UpdateProvisionedProductRequest& request, const UpdateProvisionedProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing provisioning artifact's information. This operation will
         * not work on a provisioning artifact associated with a product that has been
         * shared with you.</p>
         */
        virtual Model::UpdateProvisioningArtifactOutcome UpdateProvisioningArtifact(const Model::UpdateProvisioningArtifactRequest& request) const;

        /**
         * <p>Updates an existing provisioning artifact's information. This operation will
         * not work on a provisioning artifact associated with a product that has been
         * shared with you.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateProvisioningArtifactOutcomeCallable UpdateProvisioningArtifactCallable(const Model::UpdateProvisioningArtifactRequest& request) const;

        /**
         * <p>Updates an existing provisioning artifact's information. This operation will
         * not work on a provisioning artifact associated with a product that has been
         * shared with you.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateProvisioningArtifactAsync(const Model::UpdateProvisioningArtifactRequest& request, const UpdateProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


    private:
      void init(const Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void AcceptPortfolioShareAsyncHelper(const Model::AcceptPortfolioShareRequest& request, const AcceptPortfolioShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociatePrincipalWithPortfolioAsyncHelper(const Model::AssociatePrincipalWithPortfolioRequest& request, const AssociatePrincipalWithPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateProductWithPortfolioAsyncHelper(const Model::AssociateProductWithPortfolioRequest& request, const AssociateProductWithPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateConstraintAsyncHelper(const Model::CreateConstraintRequest& request, const CreateConstraintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePortfolioAsyncHelper(const Model::CreatePortfolioRequest& request, const CreatePortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePortfolioShareAsyncHelper(const Model::CreatePortfolioShareRequest& request, const CreatePortfolioShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateProductAsyncHelper(const Model::CreateProductRequest& request, const CreateProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateProvisioningArtifactAsyncHelper(const Model::CreateProvisioningArtifactRequest& request, const CreateProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteConstraintAsyncHelper(const Model::DeleteConstraintRequest& request, const DeleteConstraintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePortfolioAsyncHelper(const Model::DeletePortfolioRequest& request, const DeletePortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePortfolioShareAsyncHelper(const Model::DeletePortfolioShareRequest& request, const DeletePortfolioShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteProductAsyncHelper(const Model::DeleteProductRequest& request, const DeleteProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteProvisioningArtifactAsyncHelper(const Model::DeleteProvisioningArtifactRequest& request, const DeleteProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeConstraintAsyncHelper(const Model::DescribeConstraintRequest& request, const DescribeConstraintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribePortfolioAsyncHelper(const Model::DescribePortfolioRequest& request, const DescribePortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeProductAsyncHelper(const Model::DescribeProductRequest& request, const DescribeProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeProductAsAdminAsyncHelper(const Model::DescribeProductAsAdminRequest& request, const DescribeProductAsAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeProductViewAsyncHelper(const Model::DescribeProductViewRequest& request, const DescribeProductViewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeProvisioningArtifactAsyncHelper(const Model::DescribeProvisioningArtifactRequest& request, const DescribeProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeProvisioningParametersAsyncHelper(const Model::DescribeProvisioningParametersRequest& request, const DescribeProvisioningParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeRecordAsyncHelper(const Model::DescribeRecordRequest& request, const DescribeRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociatePrincipalFromPortfolioAsyncHelper(const Model::DisassociatePrincipalFromPortfolioRequest& request, const DisassociatePrincipalFromPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateProductFromPortfolioAsyncHelper(const Model::DisassociateProductFromPortfolioRequest& request, const DisassociateProductFromPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAcceptedPortfolioSharesAsyncHelper(const Model::ListAcceptedPortfolioSharesRequest& request, const ListAcceptedPortfolioSharesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListConstraintsForPortfolioAsyncHelper(const Model::ListConstraintsForPortfolioRequest& request, const ListConstraintsForPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListLaunchPathsAsyncHelper(const Model::ListLaunchPathsRequest& request, const ListLaunchPathsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPortfolioAccessAsyncHelper(const Model::ListPortfolioAccessRequest& request, const ListPortfolioAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPortfoliosAsyncHelper(const Model::ListPortfoliosRequest& request, const ListPortfoliosResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPortfoliosForProductAsyncHelper(const Model::ListPortfoliosForProductRequest& request, const ListPortfoliosForProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPrincipalsForPortfolioAsyncHelper(const Model::ListPrincipalsForPortfolioRequest& request, const ListPrincipalsForPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListProvisioningArtifactsAsyncHelper(const Model::ListProvisioningArtifactsRequest& request, const ListProvisioningArtifactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRecordHistoryAsyncHelper(const Model::ListRecordHistoryRequest& request, const ListRecordHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ProvisionProductAsyncHelper(const Model::ProvisionProductRequest& request, const ProvisionProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RejectPortfolioShareAsyncHelper(const Model::RejectPortfolioShareRequest& request, const RejectPortfolioShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ScanProvisionedProductsAsyncHelper(const Model::ScanProvisionedProductsRequest& request, const ScanProvisionedProductsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SearchProductsAsyncHelper(const Model::SearchProductsRequest& request, const SearchProductsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SearchProductsAsAdminAsyncHelper(const Model::SearchProductsAsAdminRequest& request, const SearchProductsAsAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TerminateProvisionedProductAsyncHelper(const Model::TerminateProvisionedProductRequest& request, const TerminateProvisionedProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateConstraintAsyncHelper(const Model::UpdateConstraintRequest& request, const UpdateConstraintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdatePortfolioAsyncHelper(const Model::UpdatePortfolioRequest& request, const UpdatePortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateProductAsyncHelper(const Model::UpdateProductRequest& request, const UpdateProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateProvisionedProductAsyncHelper(const Model::UpdateProvisionedProductRequest& request, const UpdateProvisionedProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateProvisioningArtifactAsyncHelper(const Model::UpdateProvisioningArtifactRequest& request, const UpdateProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      std::shared_ptr<Utils::Threading::Executor> m_executor;
  };

} // namespace ServiceCatalog
} // namespace Aws
