/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/servicecatalog/ServiceCatalogServiceClientModel.h>
#include <aws/servicecatalog/ServiceCatalogLegacyAsyncMacros.h>

namespace Aws
{
namespace ServiceCatalog
{
  /**
   * <fullname>AWS Service Catalog</fullname> <p> <a
   * href="https://aws.amazon.com/servicecatalog/">Service Catalog</a> enables
   * organizations to create and manage catalogs of IT services that are approved for
   * Amazon Web Services. To get the most out of this documentation, you should be
   * familiar with the terminology discussed in <a
   * href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/what-is_concepts.html">Service
   * Catalog Concepts</a>.</p>
   */
  class AWS_SERVICECATALOG_API ServiceCatalogClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ServiceCatalogClient(const Aws::ServiceCatalog::ServiceCatalogClientConfiguration& clientConfiguration = Aws::ServiceCatalog::ServiceCatalogClientConfiguration(),
                             std::shared_ptr<ServiceCatalogEndpointProviderBase> endpointProvider = Aws::MakeShared<ServiceCatalogEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ServiceCatalogClient(const Aws::Auth::AWSCredentials& credentials,
                             std::shared_ptr<ServiceCatalogEndpointProviderBase> endpointProvider = Aws::MakeShared<ServiceCatalogEndpointProvider>(ALLOCATION_TAG),
                             const Aws::ServiceCatalog::ServiceCatalogClientConfiguration& clientConfiguration = Aws::ServiceCatalog::ServiceCatalogClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ServiceCatalogClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             std::shared_ptr<ServiceCatalogEndpointProviderBase> endpointProvider = Aws::MakeShared<ServiceCatalogEndpointProvider>(ALLOCATION_TAG),
                             const Aws::ServiceCatalog::ServiceCatalogClientConfiguration& clientConfiguration = Aws::ServiceCatalog::ServiceCatalogClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ServiceCatalogClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ServiceCatalogClient(const Aws::Auth::AWSCredentials& credentials,
                             const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ServiceCatalogClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~ServiceCatalogClient();


        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         const RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncStreamingOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            const RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableStreamingOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }


        /**
         * <p>Accepts an offer to share the specified portfolio.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/AcceptPortfolioShare">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptPortfolioShareOutcome AcceptPortfolioShare(const Model::AcceptPortfolioShareRequest& request) const;


        /**
         * <p>Associates the specified budget with the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/AssociateBudgetWithResource">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateBudgetWithResourceOutcome AssociateBudgetWithResource(const Model::AssociateBudgetWithResourceRequest& request) const;


        /**
         * <p>Associates the specified principal ARN with the specified
         * portfolio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/AssociatePrincipalWithPortfolio">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociatePrincipalWithPortfolioOutcome AssociatePrincipalWithPortfolio(const Model::AssociatePrincipalWithPortfolioRequest& request) const;


        /**
         * <p>Associates the specified product with the specified portfolio.</p> <p>A
         * delegated admin is authorized to invoke this command.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/AssociateProductWithPortfolio">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateProductWithPortfolioOutcome AssociateProductWithPortfolio(const Model::AssociateProductWithPortfolioRequest& request) const;


        /**
         * <p>Associates a self-service action with a provisioning artifact.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/AssociateServiceActionWithProvisioningArtifact">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateServiceActionWithProvisioningArtifactOutcome AssociateServiceActionWithProvisioningArtifact(const Model::AssociateServiceActionWithProvisioningArtifactRequest& request) const;


        /**
         * <p>Associate the specified TagOption with the specified portfolio or
         * product.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/AssociateTagOptionWithResource">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateTagOptionWithResourceOutcome AssociateTagOptionWithResource(const Model::AssociateTagOptionWithResourceRequest& request) const;


        /**
         * <p>Associates multiple self-service actions with provisioning
         * artifacts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/BatchAssociateServiceActionWithProvisioningArtifact">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchAssociateServiceActionWithProvisioningArtifactOutcome BatchAssociateServiceActionWithProvisioningArtifact(const Model::BatchAssociateServiceActionWithProvisioningArtifactRequest& request) const;


        /**
         * <p>Disassociates a batch of self-service actions from the specified provisioning
         * artifact.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/BatchDisassociateServiceActionFromProvisioningArtifact">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDisassociateServiceActionFromProvisioningArtifactOutcome BatchDisassociateServiceActionFromProvisioningArtifact(const Model::BatchDisassociateServiceActionFromProvisioningArtifactRequest& request) const;


        /**
         * <p>Copies the specified source product to the specified target product or a new
         * product.</p> <p>You can copy a product to the same account or another account.
         * You can copy a product to the same Region or another Region. If you copy a
         * product to another account, you must first share the product in a portfolio
         * using <a>CreatePortfolioShare</a>.</p> <p>This operation is performed
         * asynchronously. To track the progress of the operation, use
         * <a>DescribeCopyProductStatus</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/CopyProduct">AWS
         * API Reference</a></p>
         */
        virtual Model::CopyProductOutcome CopyProduct(const Model::CopyProductRequest& request) const;


        /**
         * <p>Creates a constraint.</p> <p>A delegated admin is authorized to invoke this
         * command.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/CreateConstraint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConstraintOutcome CreateConstraint(const Model::CreateConstraintRequest& request) const;


        /**
         * <p>Creates a portfolio.</p> <p>A delegated admin is authorized to invoke this
         * command.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/CreatePortfolio">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePortfolioOutcome CreatePortfolio(const Model::CreatePortfolioRequest& request) const;


        /**
         * <p>Shares the specified portfolio with the specified account or organization
         * node. Shares to an organization node can only be created by the management
         * account of an organization or by a delegated administrator. You can share
         * portfolios to an organization, an organizational unit, or a specific
         * account.</p> <p>Note that if a delegated admin is de-registered, they can no
         * longer create portfolio shares.</p> <p> <code>AWSOrganizationsAccess</code> must
         * be enabled in order to create a portfolio share to an organization node.</p>
         * <p>You can't share a shared resource, including portfolios that contain a shared
         * product.</p> <p>If the portfolio share with the specified account or
         * organization node already exists, this action will have no effect and will not
         * return an error. To update an existing share, you must use the <code>
         * UpdatePortfolioShare</code> API instead.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/CreatePortfolioShare">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePortfolioShareOutcome CreatePortfolioShare(const Model::CreatePortfolioShareRequest& request) const;


        /**
         * <p>Creates a product.</p> <p>A delegated admin is authorized to invoke this
         * command.</p> <p>The user or role that performs this operation must have the
         * <code>cloudformation:GetTemplate</code> IAM policy permission. This policy
         * permission is required when using the <code>ImportFromPhysicalId</code> template
         * source in the information data section.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/CreateProduct">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProductOutcome CreateProduct(const Model::CreateProductRequest& request) const;


        /**
         * <p>Creates a plan.</p> <p>A plan includes the list of resources to be created
         * (when provisioning a new product) or modified (when updating a provisioned
         * product) when the plan is executed.</p> <p>You can create one plan for each
         * provisioned product. To create a plan for an existing provisioned product, the
         * product status must be AVAILABLE or TAINTED.</p> <p>To view the resource changes
         * in the change set, use <a>DescribeProvisionedProductPlan</a>. To create or
         * modify the provisioned product, use
         * <a>ExecuteProvisionedProductPlan</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/CreateProvisionedProductPlan">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProvisionedProductPlanOutcome CreateProvisionedProductPlan(const Model::CreateProvisionedProductPlanRequest& request) const;


        /**
         * <p>Creates a provisioning artifact (also known as a version) for the specified
         * product.</p> <p>You cannot create a provisioning artifact for a product that was
         * shared with you.</p> <p>The user or role that performs this operation must have
         * the <code>cloudformation:GetTemplate</code> IAM policy permission. This policy
         * permission is required when using the <code>ImportFromPhysicalId</code> template
         * source in the information data section.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/CreateProvisioningArtifact">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProvisioningArtifactOutcome CreateProvisioningArtifact(const Model::CreateProvisioningArtifactRequest& request) const;


        /**
         * <p>Creates a self-service action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/CreateServiceAction">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateServiceActionOutcome CreateServiceAction(const Model::CreateServiceActionRequest& request) const;


        /**
         * <p>Creates a TagOption.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/CreateTagOption">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTagOptionOutcome CreateTagOption(const Model::CreateTagOptionRequest& request) const;


        /**
         * <p>Deletes the specified constraint.</p> <p>A delegated admin is authorized to
         * invoke this command.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DeleteConstraint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConstraintOutcome DeleteConstraint(const Model::DeleteConstraintRequest& request) const;


        /**
         * <p>Deletes the specified portfolio.</p> <p>You cannot delete a portfolio if it
         * was shared with you or if it has associated products, users, constraints, or
         * shared accounts.</p> <p>A delegated admin is authorized to invoke this
         * command.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DeletePortfolio">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePortfolioOutcome DeletePortfolio(const Model::DeletePortfolioRequest& request) const;


        /**
         * <p>Stops sharing the specified portfolio with the specified account or
         * organization node. Shares to an organization node can only be deleted by the
         * management account of an organization or by a delegated administrator.</p>
         * <p>Note that if a delegated admin is de-registered, portfolio shares created
         * from that account are removed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DeletePortfolioShare">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePortfolioShareOutcome DeletePortfolioShare(const Model::DeletePortfolioShareRequest& request) const;


        /**
         * <p>Deletes the specified product.</p> <p>You cannot delete a product if it was
         * shared with you or is associated with a portfolio.</p> <p>A delegated admin is
         * authorized to invoke this command.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DeleteProduct">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProductOutcome DeleteProduct(const Model::DeleteProductRequest& request) const;


        /**
         * <p>Deletes the specified plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DeleteProvisionedProductPlan">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProvisionedProductPlanOutcome DeleteProvisionedProductPlan(const Model::DeleteProvisionedProductPlanRequest& request) const;


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
         * <p>Deletes a self-service action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DeleteServiceAction">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteServiceActionOutcome DeleteServiceAction(const Model::DeleteServiceActionRequest& request) const;


        /**
         * <p>Deletes the specified TagOption.</p> <p>You cannot delete a TagOption if it
         * is associated with a product or portfolio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DeleteTagOption">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTagOptionOutcome DeleteTagOption(const Model::DeleteTagOptionRequest& request) const;


        /**
         * <p>Gets information about the specified constraint.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeConstraint">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConstraintOutcome DescribeConstraint(const Model::DescribeConstraintRequest& request) const;


        /**
         * <p>Gets the status of the specified copy product operation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeCopyProductStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCopyProductStatusOutcome DescribeCopyProductStatus(const Model::DescribeCopyProductStatusRequest& request) const;


        /**
         * <p>Gets information about the specified portfolio.</p> <p>A delegated admin is
         * authorized to invoke this command.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribePortfolio">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePortfolioOutcome DescribePortfolio(const Model::DescribePortfolioRequest& request) const;


        /**
         * <p>Gets the status of the specified portfolio share operation. This API can only
         * be called by the management account in the organization or by a delegated
         * admin.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribePortfolioShareStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePortfolioShareStatusOutcome DescribePortfolioShareStatus(const Model::DescribePortfolioShareStatusRequest& request) const;


        /**
         * <p>Returns a summary of each of the portfolio shares that were created for the
         * specified portfolio.</p> <p>You can use this API to determine which accounts or
         * organizational nodes this portfolio have been shared, whether the recipient
         * entity has imported the share, and whether TagOptions are included with the
         * share.</p> <p>The <code>PortfolioId</code> and <code>Type</code> parameters are
         * both required.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribePortfolioShares">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePortfolioSharesOutcome DescribePortfolioShares(const Model::DescribePortfolioSharesRequest& request) const;


        /**
         * <p>Gets information about the specified product.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeProduct">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProductOutcome DescribeProduct(const Model::DescribeProductRequest& request) const;


        /**
         * <p>Gets information about the specified product. This operation is run with
         * administrator access.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeProductAsAdmin">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProductAsAdminOutcome DescribeProductAsAdmin(const Model::DescribeProductAsAdminRequest& request) const;


        /**
         * <p>Gets information about the specified product.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeProductView">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProductViewOutcome DescribeProductView(const Model::DescribeProductViewRequest& request) const;


        /**
         * <p>Gets information about the specified provisioned product.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeProvisionedProduct">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProvisionedProductOutcome DescribeProvisionedProduct(const Model::DescribeProvisionedProductRequest& request) const;


        /**
         * <p>Gets information about the resource changes for the specified
         * plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeProvisionedProductPlan">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProvisionedProductPlanOutcome DescribeProvisionedProductPlan(const Model::DescribeProvisionedProductPlanRequest& request) const;


        /**
         * <p>Gets information about the specified provisioning artifact (also known as a
         * version) for the specified product.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeProvisioningArtifact">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProvisioningArtifactOutcome DescribeProvisioningArtifact(const Model::DescribeProvisioningArtifactRequest& request) const;


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
         * <p>Gets information about the specified request operation.</p> <p>Use this
         * operation after calling a request operation (for example,
         * <a>ProvisionProduct</a>, <a>TerminateProvisionedProduct</a>, or
         * <a>UpdateProvisionedProduct</a>). </p>  <p>If a provisioned product was
         * transferred to a new owner using <a>UpdateProvisionedProductProperties</a>, the
         * new owner will be able to describe all past records for that product. The
         * previous owner will no longer be able to describe the records, but will be able
         * to use <a>ListRecordHistory</a> to see the product's history from when he was
         * the owner.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeRecord">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRecordOutcome DescribeRecord(const Model::DescribeRecordRequest& request) const;


        /**
         * <p>Describes a self-service action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeServiceAction">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeServiceActionOutcome DescribeServiceAction(const Model::DescribeServiceActionRequest& request) const;


        /**
         * <p>Finds the default parameters for a specific self-service action on a specific
         * provisioned product and returns a map of the results to the user.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeServiceActionExecutionParameters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeServiceActionExecutionParametersOutcome DescribeServiceActionExecutionParameters(const Model::DescribeServiceActionExecutionParametersRequest& request) const;


        /**
         * <p>Gets information about the specified TagOption.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeTagOption">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTagOptionOutcome DescribeTagOption(const Model::DescribeTagOptionRequest& request) const;


        /**
         * <p>Disable portfolio sharing through the Organizations service. This command
         * will not delete your current shares, but prevents you from creating new shares
         * throughout your organization. Current shares are not kept in sync with your
         * organization structure if the structure changes after calling this API. Only the
         * management account in the organization can call this API.</p> <p>You cannot call
         * this API if there are active delegated administrators in the organization.</p>
         * <p>Note that a delegated administrator is not authorized to invoke
         * <code>DisableAWSOrganizationsAccess</code>.</p>  <p>If you share an
         * Service Catalog portfolio in an organization within Organizations, and then
         * disable Organizations access for Service Catalog, the portfolio access
         * permissions will not sync with the latest changes to the organization structure.
         * Specifically, accounts that you removed from the organization after disabling
         * Service Catalog access will retain access to the previously shared
         * portfolio.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DisableAWSOrganizationsAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableAWSOrganizationsAccessOutcome DisableAWSOrganizationsAccess(const Model::DisableAWSOrganizationsAccessRequest& request) const;


        /**
         * <p>Disassociates the specified budget from the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DisassociateBudgetFromResource">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateBudgetFromResourceOutcome DisassociateBudgetFromResource(const Model::DisassociateBudgetFromResourceRequest& request) const;


        /**
         * <p>Disassociates a previously associated principal ARN from a specified
         * portfolio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DisassociatePrincipalFromPortfolio">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociatePrincipalFromPortfolioOutcome DisassociatePrincipalFromPortfolio(const Model::DisassociatePrincipalFromPortfolioRequest& request) const;


        /**
         * <p>Disassociates the specified product from the specified portfolio. </p> <p>A
         * delegated admin is authorized to invoke this command.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DisassociateProductFromPortfolio">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateProductFromPortfolioOutcome DisassociateProductFromPortfolio(const Model::DisassociateProductFromPortfolioRequest& request) const;


        /**
         * <p>Disassociates the specified self-service action association from the
         * specified provisioning artifact.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DisassociateServiceActionFromProvisioningArtifact">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateServiceActionFromProvisioningArtifactOutcome DisassociateServiceActionFromProvisioningArtifact(const Model::DisassociateServiceActionFromProvisioningArtifactRequest& request) const;


        /**
         * <p>Disassociates the specified TagOption from the specified
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DisassociateTagOptionFromResource">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateTagOptionFromResourceOutcome DisassociateTagOptionFromResource(const Model::DisassociateTagOptionFromResourceRequest& request) const;


        /**
         * <p>Enable portfolio sharing feature through Organizations. This API will allow
         * Service Catalog to receive updates on your organization in order to sync your
         * shares with the current structure. This API can only be called by the management
         * account in the organization.</p> <p>When you call this API, Service Catalog
         * calls <code>organizations:EnableAWSServiceAccess</code> on your behalf so that
         * your shares stay in sync with any changes in your Organizations structure.</p>
         * <p>Note that a delegated administrator is not authorized to invoke
         * <code>EnableAWSOrganizationsAccess</code>.</p>  <p>If you have
         * previously disabled Organizations access for Service Catalog, and then enable
         * access again, the portfolio access permissions might not sync with the latest
         * changes to the organization structure. Specifically, accounts that you removed
         * from the organization after disabling Service Catalog access, and before you
         * enabled access again, can retain access to the previously shared portfolio. As a
         * result, an account that has been removed from the organization might still be
         * able to create or manage Amazon Web Services resources when it is no longer
         * authorized to do so. Amazon Web Services is working to resolve this issue.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/EnableAWSOrganizationsAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableAWSOrganizationsAccessOutcome EnableAWSOrganizationsAccess(const Model::EnableAWSOrganizationsAccessRequest& request) const;


        /**
         * <p>Provisions or modifies a product based on the resource changes for the
         * specified plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ExecuteProvisionedProductPlan">AWS
         * API Reference</a></p>
         */
        virtual Model::ExecuteProvisionedProductPlanOutcome ExecuteProvisionedProductPlan(const Model::ExecuteProvisionedProductPlanRequest& request) const;


        /**
         * <p>Executes a self-service action against a provisioned product.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ExecuteProvisionedProductServiceAction">AWS
         * API Reference</a></p>
         */
        virtual Model::ExecuteProvisionedProductServiceActionOutcome ExecuteProvisionedProductServiceAction(const Model::ExecuteProvisionedProductServiceActionRequest& request) const;


        /**
         * <p>Get the Access Status for Organizations portfolio share feature. This API can
         * only be called by the management account in the organization or by a delegated
         * admin.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/GetAWSOrganizationsAccessStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAWSOrganizationsAccessStatusOutcome GetAWSOrganizationsAccessStatus(const Model::GetAWSOrganizationsAccessStatusRequest& request) const;


        /**
         * <p>This API takes either a <code>ProvisonedProductId</code> or a
         * <code>ProvisionedProductName</code>, along with a list of one or more output
         * keys, and responds with the key/value pairs of those outputs.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/GetProvisionedProductOutputs">AWS
         * API Reference</a></p>
         */
        virtual Model::GetProvisionedProductOutputsOutcome GetProvisionedProductOutputs(const Model::GetProvisionedProductOutputsRequest& request) const;


        /**
         * <p>Requests the import of a resource as a Amazon Web Services Service Catalog
         * provisioned product that is associated to a Amazon Web Services Service Catalog
         * product and provisioning artifact. Once imported, all supported Amazon Web
         * Services Service Catalog governance actions are supported on the provisioned
         * product.</p> <p>Resource import only supports CloudFormation stack ARNs.
         * CloudFormation StackSets and non-root nested stacks are not supported.</p>
         * <p>The CloudFormation stack must have one of the following statuses to be
         * imported: <code>CREATE_COMPLETE</code>, <code>UPDATE_COMPLETE</code>,
         * <code>UPDATE_ROLLBACK_COMPLETE</code>, <code>IMPORT_COMPLETE</code>,
         * <code>IMPORT_ROLLBACK_COMPLETE</code>.</p> <p>Import of the resource requires
         * that the CloudFormation stack template matches the associated Amazon Web
         * Services Service Catalog product provisioning artifact. </p> <p>The user or role
         * that performs this operation must have the
         * <code>cloudformation:GetTemplate</code> and
         * <code>cloudformation:DescribeStacks</code> IAM policy permissions.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ImportAsProvisionedProduct">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportAsProvisionedProductOutcome ImportAsProvisionedProduct(const Model::ImportAsProvisionedProductRequest& request) const;


        /**
         * <p>Lists all imported portfolios for which account-to-account shares were
         * accepted by this account. By specifying the <code>PortfolioShareType</code>, you
         * can list portfolios for which organizational shares were accepted by this
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListAcceptedPortfolioShares">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAcceptedPortfolioSharesOutcome ListAcceptedPortfolioShares(const Model::ListAcceptedPortfolioSharesRequest& request) const;


        /**
         * <p>Lists all the budgets associated to the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListBudgetsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBudgetsForResourceOutcome ListBudgetsForResource(const Model::ListBudgetsForResourceRequest& request) const;


        /**
         * <p>Lists the constraints for the specified portfolio and product.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListConstraintsForPortfolio">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConstraintsForPortfolioOutcome ListConstraintsForPortfolio(const Model::ListConstraintsForPortfolioRequest& request) const;


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
         * <p>Lists the organization nodes that have access to the specified portfolio.
         * This API can only be called by the management account in the organization or by
         * a delegated admin.</p> <p>If a delegated admin is de-registered, they can no
         * longer perform this operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListOrganizationPortfolioAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOrganizationPortfolioAccessOutcome ListOrganizationPortfolioAccess(const Model::ListOrganizationPortfolioAccessRequest& request) const;


        /**
         * <p>Lists the account IDs that have access to the specified portfolio.</p> <p>A
         * delegated admin can list the accounts that have access to the shared portfolio.
         * Note that if a delegated admin is de-registered, they can no longer perform this
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListPortfolioAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPortfolioAccessOutcome ListPortfolioAccess(const Model::ListPortfolioAccessRequest& request) const;


        /**
         * <p>Lists all portfolios in the catalog.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListPortfolios">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPortfoliosOutcome ListPortfolios(const Model::ListPortfoliosRequest& request) const;


        /**
         * <p>Lists all portfolios that the specified product is associated
         * with.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListPortfoliosForProduct">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPortfoliosForProductOutcome ListPortfoliosForProduct(const Model::ListPortfoliosForProductRequest& request) const;


        /**
         * <p>Lists all principal ARNs associated with the specified
         * portfolio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListPrincipalsForPortfolio">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPrincipalsForPortfolioOutcome ListPrincipalsForPortfolio(const Model::ListPrincipalsForPortfolioRequest& request) const;


        /**
         * <p>Lists the plans for the specified provisioned product or all plans to which
         * the user has access.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListProvisionedProductPlans">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProvisionedProductPlansOutcome ListProvisionedProductPlans(const Model::ListProvisionedProductPlansRequest& request) const;


        /**
         * <p>Lists all provisioning artifacts (also known as versions) for the specified
         * product.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListProvisioningArtifacts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProvisioningArtifactsOutcome ListProvisioningArtifacts(const Model::ListProvisioningArtifactsRequest& request) const;


        /**
         * <p>Lists all provisioning artifacts (also known as versions) for the specified
         * self-service action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListProvisioningArtifactsForServiceAction">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProvisioningArtifactsForServiceActionOutcome ListProvisioningArtifactsForServiceAction(const Model::ListProvisioningArtifactsForServiceActionRequest& request) const;


        /**
         * <p>Lists the specified requests or all performed requests.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListRecordHistory">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRecordHistoryOutcome ListRecordHistory(const Model::ListRecordHistoryRequest& request) const;


        /**
         * <p>Lists the resources associated with the specified TagOption.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListResourcesForTagOption">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourcesForTagOptionOutcome ListResourcesForTagOption(const Model::ListResourcesForTagOptionRequest& request) const;


        /**
         * <p>Lists all self-service actions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListServiceActions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServiceActionsOutcome ListServiceActions(const Model::ListServiceActionsRequest& request) const;


        /**
         * <p>Returns a paginated list of self-service actions associated with the
         * specified Product ID and Provisioning Artifact ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListServiceActionsForProvisioningArtifact">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServiceActionsForProvisioningArtifactOutcome ListServiceActionsForProvisioningArtifact(const Model::ListServiceActionsForProvisioningArtifactRequest& request) const;


        /**
         * <p>Returns summary information about stack instances that are associated with
         * the specified <code>CFN_STACKSET</code> type provisioned product. You can filter
         * for stack instances that are associated with a specific Amazon Web Services
         * account name or Region. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListStackInstancesForProvisionedProduct">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStackInstancesForProvisionedProductOutcome ListStackInstancesForProvisionedProduct(const Model::ListStackInstancesForProvisionedProductRequest& request) const;


        /**
         * <p>Lists the specified TagOptions or all TagOptions.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListTagOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagOptionsOutcome ListTagOptions(const Model::ListTagOptionsRequest& request) const;


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
         * <p>Rejects an offer to share the specified portfolio.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/RejectPortfolioShare">AWS
         * API Reference</a></p>
         */
        virtual Model::RejectPortfolioShareOutcome RejectPortfolioShare(const Model::RejectPortfolioShareRequest& request) const;


        /**
         * <p>Lists the provisioned products that are available (not terminated).</p> <p>To
         * use additional filtering, see <a>SearchProvisionedProducts</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ScanProvisionedProducts">AWS
         * API Reference</a></p>
         */
        virtual Model::ScanProvisionedProductsOutcome ScanProvisionedProducts(const Model::ScanProvisionedProductsRequest& request) const;


        /**
         * <p>Gets information about the products to which the caller has
         * access.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/SearchProducts">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchProductsOutcome SearchProducts(const Model::SearchProductsRequest& request) const;


        /**
         * <p>Gets information about the products for the specified portfolio or all
         * products.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/SearchProductsAsAdmin">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchProductsAsAdminOutcome SearchProductsAsAdmin(const Model::SearchProductsAsAdminRequest& request) const;


        /**
         * <p>Gets information about the provisioned products that meet the specified
         * criteria.</p>  <p>To ensure a complete list of provisioned products and
         * remove duplicate products, use <code>sort-by createdTime</code>. </p> <p>Here is
         * a CLI example: <code> </code> </p> <p> <code>aws servicecatalog
         * search-provisioned-products --sort-by createdTime </code> </p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/SearchProvisionedProducts">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchProvisionedProductsOutcome SearchProvisionedProducts(const Model::SearchProvisionedProductsRequest& request) const;


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
         * <p>Updates the specified constraint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/UpdateConstraint">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConstraintOutcome UpdateConstraint(const Model::UpdateConstraintRequest& request) const;


        /**
         * <p>Updates the specified portfolio.</p> <p>You cannot update a product that was
         * shared with you.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/UpdatePortfolio">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePortfolioOutcome UpdatePortfolio(const Model::UpdatePortfolioRequest& request) const;


        /**
         * <p>Updates the specified portfolio share. You can use this API to enable or
         * disable TagOptions sharing for an existing portfolio share. </p> <p>The
         * portfolio share cannot be updated if the <code> CreatePortfolioShare</code>
         * operation is <code>IN_PROGRESS</code>, as the share is not available to
         * recipient entities. In this case, you must wait for the portfolio share to be
         * COMPLETED.</p> <p>You must provide the <code>accountId</code> or organization
         * node in the input, but not both.</p> <p>If the portfolio is shared to both an
         * external account and an organization node, and both shares need to be updated,
         * you must invoke <code>UpdatePortfolioShare</code> separately for each share
         * type. </p> <p>This API cannot be used for removing the portfolio share. You must
         * use <code>DeletePortfolioShare</code> API for that action. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/UpdatePortfolioShare">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePortfolioShareOutcome UpdatePortfolioShare(const Model::UpdatePortfolioShareRequest& request) const;


        /**
         * <p>Updates the specified product.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/UpdateProduct">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateProductOutcome UpdateProduct(const Model::UpdateProductRequest& request) const;


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
         * <p>Requests updates to the properties of the specified provisioned
         * product.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/UpdateProvisionedProductProperties">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateProvisionedProductPropertiesOutcome UpdateProvisionedProductProperties(const Model::UpdateProvisionedProductPropertiesRequest& request) const;


        /**
         * <p>Updates the specified provisioning artifact (also known as a version) for the
         * specified product.</p> <p>You cannot update a provisioning artifact for a
         * product that was shared with you.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/UpdateProvisioningArtifact">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateProvisioningArtifactOutcome UpdateProvisioningArtifact(const Model::UpdateProvisioningArtifactRequest& request) const;


        /**
         * <p>Updates a self-service action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/UpdateServiceAction">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateServiceActionOutcome UpdateServiceAction(const Model::UpdateServiceActionRequest& request) const;


        /**
         * <p>Updates the specified TagOption.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/UpdateTagOption">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTagOptionOutcome UpdateTagOption(const Model::UpdateTagOptionRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ServiceCatalogEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const ServiceCatalogClientConfiguration& clientConfiguration);

      ServiceCatalogClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ServiceCatalogEndpointProviderBase> m_endpointProvider;
  };

} // namespace ServiceCatalog
} // namespace Aws
