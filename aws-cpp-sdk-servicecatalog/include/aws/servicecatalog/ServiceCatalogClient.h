/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/servicecatalog/ServiceCatalogServiceClientModel.h>

namespace Aws
{
namespace ServiceCatalog
{
  /**
   * <fullname>Service Catalog</fullname> <p> <a
   * href="http://aws.amazon.com/servicecatalog">Service Catalog</a> enables
   * organizations to create and manage catalogs of IT services that are approved for
   * Amazon Web Services. To get the most out of this documentation, you should be
   * familiar with the terminology discussed in <a
   * href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/what-is_concepts.html">Service
   * Catalog Concepts</a>.</p>
   */
  class AWS_SERVICECATALOG_API ServiceCatalogClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<ServiceCatalogClient>
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

        /**
         * <p>Accepts an offer to share the specified portfolio.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/AcceptPortfolioShare">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptPortfolioShareOutcome AcceptPortfolioShare(const Model::AcceptPortfolioShareRequest& request) const;

        /**
         * A Callable wrapper for AcceptPortfolioShare that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AcceptPortfolioShareOutcomeCallable AcceptPortfolioShareCallable(const Model::AcceptPortfolioShareRequest& request) const;

        /**
         * An Async wrapper for AcceptPortfolioShare that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for AssociateBudgetWithResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateBudgetWithResourceOutcomeCallable AssociateBudgetWithResourceCallable(const Model::AssociateBudgetWithResourceRequest& request) const;

        /**
         * An Async wrapper for AssociateBudgetWithResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateBudgetWithResourceAsync(const Model::AssociateBudgetWithResourceRequest& request, const AssociateBudgetWithResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates the specified principal ARN with the specified portfolio.</p>
         * <p>If you share the portfolio with principal name sharing enabled, the
         * <code>PrincipalARN</code> association is included in the share. </p> <p>The
         * <code>PortfolioID</code>, <code>PrincipalARN</code>, and
         * <code>PrincipalType</code> parameters are required. </p> <p>You can associate a
         * maximum of 10 Principals with a portfolio using <code>PrincipalType</code> as
         * <code>IAM_PATTERN</code> </p>  <p>When you associate a principal with
         * portfolio, a potential privilege escalation path may occur when that portfolio
         * is then shared with other accounts. For a user in a recipient account who is
         * <i>not</i> an Service Catalog Admin, but still has the ability to create
         * Principals (Users/Groups/Roles), that user could create a role that matches a
         * principal name association for the portfolio. Although this user may not know
         * which principal names are associated through Service Catalog, they may be able
         * to guess the user. If this potential escalation path is a concern, then Service
         * Catalog recommends using <code>PrincipalType</code> as <code>IAM</code>. With
         * this configuration, the <code>PrincipalARN</code> must already exist in the
         * recipient account before it can be associated. </p> <p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/AssociatePrincipalWithPortfolio">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociatePrincipalWithPortfolioOutcome AssociatePrincipalWithPortfolio(const Model::AssociatePrincipalWithPortfolioRequest& request) const;

        /**
         * A Callable wrapper for AssociatePrincipalWithPortfolio that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociatePrincipalWithPortfolioOutcomeCallable AssociatePrincipalWithPortfolioCallable(const Model::AssociatePrincipalWithPortfolioRequest& request) const;

        /**
         * An Async wrapper for AssociatePrincipalWithPortfolio that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociatePrincipalWithPortfolioAsync(const Model::AssociatePrincipalWithPortfolioRequest& request, const AssociatePrincipalWithPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates the specified product with the specified portfolio.</p> <p>A
         * delegated admin is authorized to invoke this command.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/AssociateProductWithPortfolio">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateProductWithPortfolioOutcome AssociateProductWithPortfolio(const Model::AssociateProductWithPortfolioRequest& request) const;

        /**
         * A Callable wrapper for AssociateProductWithPortfolio that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateProductWithPortfolioOutcomeCallable AssociateProductWithPortfolioCallable(const Model::AssociateProductWithPortfolioRequest& request) const;

        /**
         * An Async wrapper for AssociateProductWithPortfolio that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for AssociateServiceActionWithProvisioningArtifact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateServiceActionWithProvisioningArtifactOutcomeCallable AssociateServiceActionWithProvisioningArtifactCallable(const Model::AssociateServiceActionWithProvisioningArtifactRequest& request) const;

        /**
         * An Async wrapper for AssociateServiceActionWithProvisioningArtifact that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for AssociateTagOptionWithResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateTagOptionWithResourceOutcomeCallable AssociateTagOptionWithResourceCallable(const Model::AssociateTagOptionWithResourceRequest& request) const;

        /**
         * An Async wrapper for AssociateTagOptionWithResource that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for BatchAssociateServiceActionWithProvisioningArtifact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchAssociateServiceActionWithProvisioningArtifactOutcomeCallable BatchAssociateServiceActionWithProvisioningArtifactCallable(const Model::BatchAssociateServiceActionWithProvisioningArtifactRequest& request) const;

        /**
         * An Async wrapper for BatchAssociateServiceActionWithProvisioningArtifact that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for BatchDisassociateServiceActionFromProvisioningArtifact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchDisassociateServiceActionFromProvisioningArtifactOutcomeCallable BatchDisassociateServiceActionFromProvisioningArtifactCallable(const Model::BatchDisassociateServiceActionFromProvisioningArtifactRequest& request) const;

        /**
         * An Async wrapper for BatchDisassociateServiceActionFromProvisioningArtifact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchDisassociateServiceActionFromProvisioningArtifactAsync(const Model::BatchDisassociateServiceActionFromProvisioningArtifactRequest& request, const BatchDisassociateServiceActionFromProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for CopyProduct that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CopyProductOutcomeCallable CopyProductCallable(const Model::CopyProductRequest& request) const;

        /**
         * An Async wrapper for CopyProduct that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CopyProductAsync(const Model::CopyProductRequest& request, const CopyProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a constraint.</p> <p>A delegated admin is authorized to invoke this
         * command.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/CreateConstraint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConstraintOutcome CreateConstraint(const Model::CreateConstraintRequest& request) const;

        /**
         * A Callable wrapper for CreateConstraint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateConstraintOutcomeCallable CreateConstraintCallable(const Model::CreateConstraintRequest& request) const;

        /**
         * An Async wrapper for CreateConstraint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateConstraintAsync(const Model::CreateConstraintRequest& request, const CreateConstraintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a portfolio.</p> <p>A delegated admin is authorized to invoke this
         * command.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/CreatePortfolio">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePortfolioOutcome CreatePortfolio(const Model::CreatePortfolioRequest& request) const;

        /**
         * A Callable wrapper for CreatePortfolio that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePortfolioOutcomeCallable CreatePortfolioCallable(const Model::CreatePortfolioRequest& request) const;

        /**
         * An Async wrapper for CreatePortfolio that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePortfolioAsync(const Model::CreatePortfolioRequest& request, const CreatePortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * UpdatePortfolioShare</code> API instead. </p>  <p>When you associate a
         * principal with portfolio, a potential privilege escalation path may occur when
         * that portfolio is then shared with other accounts. For a user in a recipient
         * account who is <i>not</i> an Service Catalog Admin, but still has the ability to
         * create Principals (Users/Groups/Roles), that user could create a role that
         * matches a principal name association for the portfolio. Although this user may
         * not know which principal names are associated through Service Catalog, they may
         * be able to guess the user. If this potential escalation path is a concern, then
         * Service Catalog recommends using <code>PrincipalType</code> as <code>IAM</code>.
         * With this configuration, the <code>PrincipalARN</code> must already exist in the
         * recipient account before it can be associated. </p> <p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/CreatePortfolioShare">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePortfolioShareOutcome CreatePortfolioShare(const Model::CreatePortfolioShareRequest& request) const;

        /**
         * A Callable wrapper for CreatePortfolioShare that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePortfolioShareOutcomeCallable CreatePortfolioShareCallable(const Model::CreatePortfolioShareRequest& request) const;

        /**
         * An Async wrapper for CreatePortfolioShare that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePortfolioShareAsync(const Model::CreatePortfolioShareRequest& request, const CreatePortfolioShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for CreateProduct that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateProductOutcomeCallable CreateProductCallable(const Model::CreateProductRequest& request) const;

        /**
         * An Async wrapper for CreateProduct that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateProductAsync(const Model::CreateProductRequest& request, const CreateProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for CreateProvisionedProductPlan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateProvisionedProductPlanOutcomeCallable CreateProvisionedProductPlanCallable(const Model::CreateProvisionedProductPlanRequest& request) const;

        /**
         * An Async wrapper for CreateProvisionedProductPlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateProvisionedProductPlanAsync(const Model::CreateProvisionedProductPlanRequest& request, const CreateProvisionedProductPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for CreateProvisioningArtifact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateProvisioningArtifactOutcomeCallable CreateProvisioningArtifactCallable(const Model::CreateProvisioningArtifactRequest& request) const;

        /**
         * An Async wrapper for CreateProvisioningArtifact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateProvisioningArtifactAsync(const Model::CreateProvisioningArtifactRequest& request, const CreateProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a self-service action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/CreateServiceAction">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateServiceActionOutcome CreateServiceAction(const Model::CreateServiceActionRequest& request) const;

        /**
         * A Callable wrapper for CreateServiceAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateServiceActionOutcomeCallable CreateServiceActionCallable(const Model::CreateServiceActionRequest& request) const;

        /**
         * An Async wrapper for CreateServiceAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateServiceActionAsync(const Model::CreateServiceActionRequest& request, const CreateServiceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a TagOption.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/CreateTagOption">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTagOptionOutcome CreateTagOption(const Model::CreateTagOptionRequest& request) const;

        /**
         * A Callable wrapper for CreateTagOption that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTagOptionOutcomeCallable CreateTagOptionCallable(const Model::CreateTagOptionRequest& request) const;

        /**
         * An Async wrapper for CreateTagOption that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTagOptionAsync(const Model::CreateTagOptionRequest& request, const CreateTagOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified constraint.</p> <p>A delegated admin is authorized to
         * invoke this command.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DeleteConstraint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConstraintOutcome DeleteConstraint(const Model::DeleteConstraintRequest& request) const;

        /**
         * A Callable wrapper for DeleteConstraint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteConstraintOutcomeCallable DeleteConstraintCallable(const Model::DeleteConstraintRequest& request) const;

        /**
         * An Async wrapper for DeleteConstraint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteConstraintAsync(const Model::DeleteConstraintRequest& request, const DeleteConstraintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for DeletePortfolio that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePortfolioOutcomeCallable DeletePortfolioCallable(const Model::DeletePortfolioRequest& request) const;

        /**
         * An Async wrapper for DeletePortfolio that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePortfolioAsync(const Model::DeletePortfolioRequest& request, const DeletePortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for DeletePortfolioShare that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePortfolioShareOutcomeCallable DeletePortfolioShareCallable(const Model::DeletePortfolioShareRequest& request) const;

        /**
         * An Async wrapper for DeletePortfolioShare that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePortfolioShareAsync(const Model::DeletePortfolioShareRequest& request, const DeletePortfolioShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified product.</p> <p>You cannot delete a product if it was
         * shared with you or is associated with a portfolio.</p> <p>A delegated admin is
         * authorized to invoke this command.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DeleteProduct">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProductOutcome DeleteProduct(const Model::DeleteProductRequest& request) const;

        /**
         * A Callable wrapper for DeleteProduct that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteProductOutcomeCallable DeleteProductCallable(const Model::DeleteProductRequest& request) const;

        /**
         * An Async wrapper for DeleteProduct that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteProductAsync(const Model::DeleteProductRequest& request, const DeleteProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DeleteProvisionedProductPlan">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProvisionedProductPlanOutcome DeleteProvisionedProductPlan(const Model::DeleteProvisionedProductPlanRequest& request) const;

        /**
         * A Callable wrapper for DeleteProvisionedProductPlan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteProvisionedProductPlanOutcomeCallable DeleteProvisionedProductPlanCallable(const Model::DeleteProvisionedProductPlanRequest& request) const;

        /**
         * An Async wrapper for DeleteProvisionedProductPlan that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DeleteProvisioningArtifact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteProvisioningArtifactOutcomeCallable DeleteProvisioningArtifactCallable(const Model::DeleteProvisioningArtifactRequest& request) const;

        /**
         * An Async wrapper for DeleteProvisioningArtifact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteProvisioningArtifactAsync(const Model::DeleteProvisioningArtifactRequest& request, const DeleteProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a self-service action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DeleteServiceAction">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteServiceActionOutcome DeleteServiceAction(const Model::DeleteServiceActionRequest& request) const;

        /**
         * A Callable wrapper for DeleteServiceAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteServiceActionOutcomeCallable DeleteServiceActionCallable(const Model::DeleteServiceActionRequest& request) const;

        /**
         * An Async wrapper for DeleteServiceAction that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DeleteTagOption that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTagOptionOutcomeCallable DeleteTagOptionCallable(const Model::DeleteTagOptionRequest& request) const;

        /**
         * An Async wrapper for DeleteTagOption that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DescribeConstraint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeConstraintOutcomeCallable DescribeConstraintCallable(const Model::DescribeConstraintRequest& request) const;

        /**
         * An Async wrapper for DescribeConstraint that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DescribeCopyProductStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCopyProductStatusOutcomeCallable DescribeCopyProductStatusCallable(const Model::DescribeCopyProductStatusRequest& request) const;

        /**
         * An Async wrapper for DescribeCopyProductStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCopyProductStatusAsync(const Model::DescribeCopyProductStatusRequest& request, const DescribeCopyProductStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the specified portfolio.</p> <p>A delegated admin is
         * authorized to invoke this command.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribePortfolio">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePortfolioOutcome DescribePortfolio(const Model::DescribePortfolioRequest& request) const;

        /**
         * A Callable wrapper for DescribePortfolio that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePortfolioOutcomeCallable DescribePortfolioCallable(const Model::DescribePortfolioRequest& request) const;

        /**
         * An Async wrapper for DescribePortfolio that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePortfolioAsync(const Model::DescribePortfolioRequest& request, const DescribePortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the status of the specified portfolio share operation. This API can only
         * be called by the management account in the organization or by a delegated
         * admin.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribePortfolioShareStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePortfolioShareStatusOutcome DescribePortfolioShareStatus(const Model::DescribePortfolioShareStatusRequest& request) const;

        /**
         * A Callable wrapper for DescribePortfolioShareStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePortfolioShareStatusOutcomeCallable DescribePortfolioShareStatusCallable(const Model::DescribePortfolioShareStatusRequest& request) const;

        /**
         * An Async wrapper for DescribePortfolioShareStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePortfolioShareStatusAsync(const Model::DescribePortfolioShareStatusRequest& request, const DescribePortfolioShareStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for DescribePortfolioShares that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePortfolioSharesOutcomeCallable DescribePortfolioSharesCallable(const Model::DescribePortfolioSharesRequest& request) const;

        /**
         * An Async wrapper for DescribePortfolioShares that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePortfolioSharesAsync(const Model::DescribePortfolioSharesRequest& request, const DescribePortfolioSharesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the specified product.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeProduct">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProductOutcome DescribeProduct(const Model::DescribeProductRequest& request) const;

        /**
         * A Callable wrapper for DescribeProduct that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeProductOutcomeCallable DescribeProductCallable(const Model::DescribeProductRequest& request) const;

        /**
         * An Async wrapper for DescribeProduct that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DescribeProductAsAdmin that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeProductAsAdminOutcomeCallable DescribeProductAsAdminCallable(const Model::DescribeProductAsAdminRequest& request) const;

        /**
         * An Async wrapper for DescribeProductAsAdmin that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeProductAsAdminAsync(const Model::DescribeProductAsAdminRequest& request, const DescribeProductAsAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the specified product.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeProductView">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProductViewOutcome DescribeProductView(const Model::DescribeProductViewRequest& request) const;

        /**
         * A Callable wrapper for DescribeProductView that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeProductViewOutcomeCallable DescribeProductViewCallable(const Model::DescribeProductViewRequest& request) const;

        /**
         * An Async wrapper for DescribeProductView that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DescribeProvisionedProduct that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeProvisionedProductOutcomeCallable DescribeProvisionedProductCallable(const Model::DescribeProvisionedProductRequest& request) const;

        /**
         * An Async wrapper for DescribeProvisionedProduct that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DescribeProvisionedProductPlan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeProvisionedProductPlanOutcomeCallable DescribeProvisionedProductPlanCallable(const Model::DescribeProvisionedProductPlanRequest& request) const;

        /**
         * An Async wrapper for DescribeProvisionedProductPlan that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DescribeProvisioningArtifact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeProvisioningArtifactOutcomeCallable DescribeProvisioningArtifactCallable(const Model::DescribeProvisioningArtifactRequest& request) const;

        /**
         * An Async wrapper for DescribeProvisioningArtifact that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DescribeProvisioningParameters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeProvisioningParametersOutcomeCallable DescribeProvisioningParametersCallable(const Model::DescribeProvisioningParametersRequest& request) const;

        /**
         * An Async wrapper for DescribeProvisioningParameters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeProvisioningParametersAsync(const Model::DescribeProvisioningParametersRequest& request, const DescribeProvisioningParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for DescribeRecord that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRecordOutcomeCallable DescribeRecordCallable(const Model::DescribeRecordRequest& request) const;

        /**
         * An Async wrapper for DescribeRecord that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRecordAsync(const Model::DescribeRecordRequest& request, const DescribeRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a self-service action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeServiceAction">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeServiceActionOutcome DescribeServiceAction(const Model::DescribeServiceActionRequest& request) const;

        /**
         * A Callable wrapper for DescribeServiceAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeServiceActionOutcomeCallable DescribeServiceActionCallable(const Model::DescribeServiceActionRequest& request) const;

        /**
         * An Async wrapper for DescribeServiceAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeServiceActionAsync(const Model::DescribeServiceActionRequest& request, const DescribeServiceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Finds the default parameters for a specific self-service action on a specific
         * provisioned product and returns a map of the results to the user.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeServiceActionExecutionParameters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeServiceActionExecutionParametersOutcome DescribeServiceActionExecutionParameters(const Model::DescribeServiceActionExecutionParametersRequest& request) const;

        /**
         * A Callable wrapper for DescribeServiceActionExecutionParameters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeServiceActionExecutionParametersOutcomeCallable DescribeServiceActionExecutionParametersCallable(const Model::DescribeServiceActionExecutionParametersRequest& request) const;

        /**
         * An Async wrapper for DescribeServiceActionExecutionParameters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeServiceActionExecutionParametersAsync(const Model::DescribeServiceActionExecutionParametersRequest& request, const DescribeServiceActionExecutionParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the specified TagOption.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeTagOption">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTagOptionOutcome DescribeTagOption(const Model::DescribeTagOptionRequest& request) const;

        /**
         * A Callable wrapper for DescribeTagOption that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTagOptionOutcomeCallable DescribeTagOptionCallable(const Model::DescribeTagOptionRequest& request) const;

        /**
         * An Async wrapper for DescribeTagOption that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTagOptionAsync(const Model::DescribeTagOptionRequest& request, const DescribeTagOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for DisableAWSOrganizationsAccess that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableAWSOrganizationsAccessOutcomeCallable DisableAWSOrganizationsAccessCallable(const Model::DisableAWSOrganizationsAccessRequest& request) const;

        /**
         * An Async wrapper for DisableAWSOrganizationsAccess that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DisassociateBudgetFromResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateBudgetFromResourceOutcomeCallable DisassociateBudgetFromResourceCallable(const Model::DisassociateBudgetFromResourceRequest& request) const;

        /**
         * An Async wrapper for DisassociateBudgetFromResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateBudgetFromResourceAsync(const Model::DisassociateBudgetFromResourceRequest& request, const DisassociateBudgetFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates a previously associated principal ARN from a specified
         * portfolio.</p> <p>The <code>PrincipalType</code> and <code>PrincipalARN</code>
         * must match the <code>AssociatePrincipalWithPortfolio</code> call request
         * details. For example, to disassociate an association created with a
         * <code>PrincipalARN</code> of <code>PrincipalType</code> IAM you must use the
         * <code>PrincipalType</code> IAM when calling
         * <code>DisassociatePrincipalFromPortfolio</code>. </p> <p>For portfolios that
         * have been shared with principal name sharing enabled: after disassociating a
         * principal, share recipient accounts will no longer be able to provision products
         * in this portfolio using a role matching the name of the associated principal.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DisassociatePrincipalFromPortfolio">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociatePrincipalFromPortfolioOutcome DisassociatePrincipalFromPortfolio(const Model::DisassociatePrincipalFromPortfolioRequest& request) const;

        /**
         * A Callable wrapper for DisassociatePrincipalFromPortfolio that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociatePrincipalFromPortfolioOutcomeCallable DisassociatePrincipalFromPortfolioCallable(const Model::DisassociatePrincipalFromPortfolioRequest& request) const;

        /**
         * An Async wrapper for DisassociatePrincipalFromPortfolio that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociatePrincipalFromPortfolioAsync(const Model::DisassociatePrincipalFromPortfolioRequest& request, const DisassociatePrincipalFromPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates the specified product from the specified portfolio. </p> <p>A
         * delegated admin is authorized to invoke this command.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DisassociateProductFromPortfolio">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateProductFromPortfolioOutcome DisassociateProductFromPortfolio(const Model::DisassociateProductFromPortfolioRequest& request) const;

        /**
         * A Callable wrapper for DisassociateProductFromPortfolio that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateProductFromPortfolioOutcomeCallable DisassociateProductFromPortfolioCallable(const Model::DisassociateProductFromPortfolioRequest& request) const;

        /**
         * An Async wrapper for DisassociateProductFromPortfolio that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DisassociateServiceActionFromProvisioningArtifact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateServiceActionFromProvisioningArtifactOutcomeCallable DisassociateServiceActionFromProvisioningArtifactCallable(const Model::DisassociateServiceActionFromProvisioningArtifactRequest& request) const;

        /**
         * An Async wrapper for DisassociateServiceActionFromProvisioningArtifact that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DisassociateTagOptionFromResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateTagOptionFromResourceOutcomeCallable DisassociateTagOptionFromResourceCallable(const Model::DisassociateTagOptionFromResourceRequest& request) const;

        /**
         * An Async wrapper for DisassociateTagOptionFromResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateTagOptionFromResourceAsync(const Model::DisassociateTagOptionFromResourceRequest& request, const DisassociateTagOptionFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for EnableAWSOrganizationsAccess that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableAWSOrganizationsAccessOutcomeCallable EnableAWSOrganizationsAccessCallable(const Model::EnableAWSOrganizationsAccessRequest& request) const;

        /**
         * An Async wrapper for EnableAWSOrganizationsAccess that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ExecuteProvisionedProductPlan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ExecuteProvisionedProductPlanOutcomeCallable ExecuteProvisionedProductPlanCallable(const Model::ExecuteProvisionedProductPlanRequest& request) const;

        /**
         * An Async wrapper for ExecuteProvisionedProductPlan that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ExecuteProvisionedProductServiceAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ExecuteProvisionedProductServiceActionOutcomeCallable ExecuteProvisionedProductServiceActionCallable(const Model::ExecuteProvisionedProductServiceActionRequest& request) const;

        /**
         * An Async wrapper for ExecuteProvisionedProductServiceAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ExecuteProvisionedProductServiceActionAsync(const Model::ExecuteProvisionedProductServiceActionRequest& request, const ExecuteProvisionedProductServiceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get the Access Status for Organizations portfolio share feature. This API can
         * only be called by the management account in the organization or by a delegated
         * admin.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/GetAWSOrganizationsAccessStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAWSOrganizationsAccessStatusOutcome GetAWSOrganizationsAccessStatus(const Model::GetAWSOrganizationsAccessStatusRequest& request) const;

        /**
         * A Callable wrapper for GetAWSOrganizationsAccessStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAWSOrganizationsAccessStatusOutcomeCallable GetAWSOrganizationsAccessStatusCallable(const Model::GetAWSOrganizationsAccessStatusRequest& request) const;

        /**
         * An Async wrapper for GetAWSOrganizationsAccessStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAWSOrganizationsAccessStatusAsync(const Model::GetAWSOrganizationsAccessStatusRequest& request, const GetAWSOrganizationsAccessStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for GetProvisionedProductOutputs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetProvisionedProductOutputsOutcomeCallable GetProvisionedProductOutputsCallable(const Model::GetProvisionedProductOutputsRequest& request) const;

        /**
         * An Async wrapper for GetProvisionedProductOutputs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetProvisionedProductOutputsAsync(const Model::GetProvisionedProductOutputsRequest& request, const GetProvisionedProductOutputsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Requests the import of a resource as an Service Catalog provisioned product
         * that is associated to an Service Catalog product and provisioning artifact. Once
         * imported, all supported Service Catalog governance actions are supported on the
         * provisioned product.</p> <p>Resource import only supports CloudFormation stack
         * ARNs. CloudFormation StackSets and non-root nested stacks are not supported.</p>
         * <p>The CloudFormation stack must have one of the following statuses to be
         * imported: <code>CREATE_COMPLETE</code>, <code>UPDATE_COMPLETE</code>,
         * <code>UPDATE_ROLLBACK_COMPLETE</code>, <code>IMPORT_COMPLETE</code>,
         * <code>IMPORT_ROLLBACK_COMPLETE</code>.</p> <p>Import of the resource requires
         * that the CloudFormation stack template matches the associated Service Catalog
         * product provisioning artifact. </p> <p>The user or role that performs this
         * operation must have the <code>cloudformation:GetTemplate</code> and
         * <code>cloudformation:DescribeStacks</code> IAM policy permissions.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ImportAsProvisionedProduct">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportAsProvisionedProductOutcome ImportAsProvisionedProduct(const Model::ImportAsProvisionedProductRequest& request) const;

        /**
         * A Callable wrapper for ImportAsProvisionedProduct that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ImportAsProvisionedProductOutcomeCallable ImportAsProvisionedProductCallable(const Model::ImportAsProvisionedProductRequest& request) const;

        /**
         * An Async wrapper for ImportAsProvisionedProduct that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ImportAsProvisionedProductAsync(const Model::ImportAsProvisionedProductRequest& request, const ImportAsProvisionedProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for ListAcceptedPortfolioShares that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAcceptedPortfolioSharesOutcomeCallable ListAcceptedPortfolioSharesCallable(const Model::ListAcceptedPortfolioSharesRequest& request) const;

        /**
         * An Async wrapper for ListAcceptedPortfolioShares that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListBudgetsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBudgetsForResourceOutcomeCallable ListBudgetsForResourceCallable(const Model::ListBudgetsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListBudgetsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListConstraintsForPortfolio that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListConstraintsForPortfolioOutcomeCallable ListConstraintsForPortfolioCallable(const Model::ListConstraintsForPortfolioRequest& request) const;

        /**
         * An Async wrapper for ListConstraintsForPortfolio that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListLaunchPaths that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLaunchPathsOutcomeCallable ListLaunchPathsCallable(const Model::ListLaunchPathsRequest& request) const;

        /**
         * An Async wrapper for ListLaunchPaths that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLaunchPathsAsync(const Model::ListLaunchPathsRequest& request, const ListLaunchPathsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for ListOrganizationPortfolioAccess that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListOrganizationPortfolioAccessOutcomeCallable ListOrganizationPortfolioAccessCallable(const Model::ListOrganizationPortfolioAccessRequest& request) const;

        /**
         * An Async wrapper for ListOrganizationPortfolioAccess that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListOrganizationPortfolioAccessAsync(const Model::ListOrganizationPortfolioAccessRequest& request, const ListOrganizationPortfolioAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for ListPortfolioAccess that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPortfolioAccessOutcomeCallable ListPortfolioAccessCallable(const Model::ListPortfolioAccessRequest& request) const;

        /**
         * An Async wrapper for ListPortfolioAccess that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPortfolioAccessAsync(const Model::ListPortfolioAccessRequest& request, const ListPortfolioAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all portfolios in the catalog.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListPortfolios">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPortfoliosOutcome ListPortfolios(const Model::ListPortfoliosRequest& request) const;

        /**
         * A Callable wrapper for ListPortfolios that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPortfoliosOutcomeCallable ListPortfoliosCallable(const Model::ListPortfoliosRequest& request) const;

        /**
         * An Async wrapper for ListPortfolios that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListPortfoliosForProduct that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPortfoliosForProductOutcomeCallable ListPortfoliosForProductCallable(const Model::ListPortfoliosForProductRequest& request) const;

        /**
         * An Async wrapper for ListPortfoliosForProduct that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPortfoliosForProductAsync(const Model::ListPortfoliosForProductRequest& request, const ListPortfoliosForProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all <code>PrincipalARN</code>s and corresponding
         * <code>PrincipalType</code>s associated with the specified
         * portfolio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListPrincipalsForPortfolio">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPrincipalsForPortfolioOutcome ListPrincipalsForPortfolio(const Model::ListPrincipalsForPortfolioRequest& request) const;

        /**
         * A Callable wrapper for ListPrincipalsForPortfolio that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPrincipalsForPortfolioOutcomeCallable ListPrincipalsForPortfolioCallable(const Model::ListPrincipalsForPortfolioRequest& request) const;

        /**
         * An Async wrapper for ListPrincipalsForPortfolio that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListProvisionedProductPlans that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListProvisionedProductPlansOutcomeCallable ListProvisionedProductPlansCallable(const Model::ListProvisionedProductPlansRequest& request) const;

        /**
         * An Async wrapper for ListProvisionedProductPlans that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListProvisioningArtifacts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListProvisioningArtifactsOutcomeCallable ListProvisioningArtifactsCallable(const Model::ListProvisioningArtifactsRequest& request) const;

        /**
         * An Async wrapper for ListProvisioningArtifacts that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListProvisioningArtifactsForServiceAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListProvisioningArtifactsForServiceActionOutcomeCallable ListProvisioningArtifactsForServiceActionCallable(const Model::ListProvisioningArtifactsForServiceActionRequest& request) const;

        /**
         * An Async wrapper for ListProvisioningArtifactsForServiceAction that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListRecordHistory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRecordHistoryOutcomeCallable ListRecordHistoryCallable(const Model::ListRecordHistoryRequest& request) const;

        /**
         * An Async wrapper for ListRecordHistory that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListResourcesForTagOption that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListResourcesForTagOptionOutcomeCallable ListResourcesForTagOptionCallable(const Model::ListResourcesForTagOptionRequest& request) const;

        /**
         * An Async wrapper for ListResourcesForTagOption that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListResourcesForTagOptionAsync(const Model::ListResourcesForTagOptionRequest& request, const ListResourcesForTagOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all self-service actions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListServiceActions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServiceActionsOutcome ListServiceActions(const Model::ListServiceActionsRequest& request) const;

        /**
         * A Callable wrapper for ListServiceActions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListServiceActionsOutcomeCallable ListServiceActionsCallable(const Model::ListServiceActionsRequest& request) const;

        /**
         * An Async wrapper for ListServiceActions that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListServiceActionsForProvisioningArtifact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListServiceActionsForProvisioningArtifactOutcomeCallable ListServiceActionsForProvisioningArtifactCallable(const Model::ListServiceActionsForProvisioningArtifactRequest& request) const;

        /**
         * An Async wrapper for ListServiceActionsForProvisioningArtifact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListServiceActionsForProvisioningArtifactAsync(const Model::ListServiceActionsForProvisioningArtifactRequest& request, const ListServiceActionsForProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for ListStackInstancesForProvisionedProduct that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListStackInstancesForProvisionedProductOutcomeCallable ListStackInstancesForProvisionedProductCallable(const Model::ListStackInstancesForProvisionedProductRequest& request) const;

        /**
         * An Async wrapper for ListStackInstancesForProvisionedProduct that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListTagOptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagOptionsOutcomeCallable ListTagOptionsCallable(const Model::ListTagOptionsRequest& request) const;

        /**
         * An Async wrapper for ListTagOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ProvisionProduct that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ProvisionProductOutcomeCallable ProvisionProductCallable(const Model::ProvisionProductRequest& request) const;

        /**
         * An Async wrapper for ProvisionProduct that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for RejectPortfolioShare that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RejectPortfolioShareOutcomeCallable RejectPortfolioShareCallable(const Model::RejectPortfolioShareRequest& request) const;

        /**
         * An Async wrapper for RejectPortfolioShare that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ScanProvisionedProducts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ScanProvisionedProductsOutcomeCallable ScanProvisionedProductsCallable(const Model::ScanProvisionedProductsRequest& request) const;

        /**
         * An Async wrapper for ScanProvisionedProducts that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for SearchProducts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchProductsOutcomeCallable SearchProductsCallable(const Model::SearchProductsRequest& request) const;

        /**
         * An Async wrapper for SearchProducts that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for SearchProductsAsAdmin that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchProductsAsAdminOutcomeCallable SearchProductsAsAdminCallable(const Model::SearchProductsAsAdminRequest& request) const;

        /**
         * An Async wrapper for SearchProductsAsAdmin that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchProductsAsAdminAsync(const Model::SearchProductsAsAdminRequest& request, const SearchProductsAsAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for SearchProvisionedProducts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchProvisionedProductsOutcomeCallable SearchProvisionedProductsCallable(const Model::SearchProvisionedProductsRequest& request) const;

        /**
         * An Async wrapper for SearchProvisionedProducts that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for TerminateProvisionedProduct that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TerminateProvisionedProductOutcomeCallable TerminateProvisionedProductCallable(const Model::TerminateProvisionedProductRequest& request) const;

        /**
         * An Async wrapper for TerminateProvisionedProduct that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TerminateProvisionedProductAsync(const Model::TerminateProvisionedProductRequest& request, const TerminateProvisionedProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified constraint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/UpdateConstraint">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConstraintOutcome UpdateConstraint(const Model::UpdateConstraintRequest& request) const;

        /**
         * A Callable wrapper for UpdateConstraint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateConstraintOutcomeCallable UpdateConstraintCallable(const Model::UpdateConstraintRequest& request) const;

        /**
         * An Async wrapper for UpdateConstraint that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for UpdatePortfolio that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePortfolioOutcomeCallable UpdatePortfolioCallable(const Model::UpdatePortfolioRequest& request) const;

        /**
         * An Async wrapper for UpdatePortfolio that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePortfolioAsync(const Model::UpdatePortfolioRequest& request, const UpdatePortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified portfolio share. You can use this API to enable or
         * disable <code>TagOptions</code> sharing or Principal sharing for an existing
         * portfolio share. </p> <p>The portfolio share cannot be updated if the
         * <code>CreatePortfolioShare</code> operation is <code>IN_PROGRESS</code>, as the
         * share is not available to recipient entities. In this case, you must wait for
         * the portfolio share to be COMPLETED.</p> <p>You must provide the
         * <code>accountId</code> or organization node in the input, but not both.</p>
         * <p>If the portfolio is shared to both an external account and an organization
         * node, and both shares need to be updated, you must invoke
         * <code>UpdatePortfolioShare</code> separately for each share type. </p> <p>This
         * API cannot be used for removing the portfolio share. You must use
         * <code>DeletePortfolioShare</code> API for that action. </p>  <p>When you
         * associate a principal with portfolio, a potential privilege escalation path may
         * occur when that portfolio is then shared with other accounts. For a user in a
         * recipient account who is <i>not</i> an Service Catalog Admin, but still has the
         * ability to create Principals (Users/Groups/Roles), that user could create a role
         * that matches a principal name association for the portfolio. Although this user
         * may not know which principal names are associated through Service Catalog, they
         * may be able to guess the user. If this potential escalation path is a concern,
         * then Service Catalog recommends using <code>PrincipalType</code> as
         * <code>IAM</code>. With this configuration, the <code>PrincipalARN</code> must
         * already exist in the recipient account before it can be associated. </p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/UpdatePortfolioShare">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePortfolioShareOutcome UpdatePortfolioShare(const Model::UpdatePortfolioShareRequest& request) const;

        /**
         * A Callable wrapper for UpdatePortfolioShare that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePortfolioShareOutcomeCallable UpdatePortfolioShareCallable(const Model::UpdatePortfolioShareRequest& request) const;

        /**
         * An Async wrapper for UpdatePortfolioShare that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePortfolioShareAsync(const Model::UpdatePortfolioShareRequest& request, const UpdatePortfolioShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified product.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/UpdateProduct">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateProductOutcome UpdateProduct(const Model::UpdateProductRequest& request) const;

        /**
         * A Callable wrapper for UpdateProduct that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateProductOutcomeCallable UpdateProductCallable(const Model::UpdateProductRequest& request) const;

        /**
         * An Async wrapper for UpdateProduct that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for UpdateProvisionedProduct that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateProvisionedProductOutcomeCallable UpdateProvisionedProductCallable(const Model::UpdateProvisionedProductRequest& request) const;

        /**
         * An Async wrapper for UpdateProvisionedProduct that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for UpdateProvisionedProductProperties that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateProvisionedProductPropertiesOutcomeCallable UpdateProvisionedProductPropertiesCallable(const Model::UpdateProvisionedProductPropertiesRequest& request) const;

        /**
         * An Async wrapper for UpdateProvisionedProductProperties that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for UpdateProvisioningArtifact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateProvisioningArtifactOutcomeCallable UpdateProvisioningArtifactCallable(const Model::UpdateProvisioningArtifactRequest& request) const;

        /**
         * An Async wrapper for UpdateProvisioningArtifact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateProvisioningArtifactAsync(const Model::UpdateProvisioningArtifactRequest& request, const UpdateProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a self-service action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/UpdateServiceAction">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateServiceActionOutcome UpdateServiceAction(const Model::UpdateServiceActionRequest& request) const;

        /**
         * A Callable wrapper for UpdateServiceAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateServiceActionOutcomeCallable UpdateServiceActionCallable(const Model::UpdateServiceActionRequest& request) const;

        /**
         * An Async wrapper for UpdateServiceAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateServiceActionAsync(const Model::UpdateServiceActionRequest& request, const UpdateServiceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified TagOption.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/UpdateTagOption">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTagOptionOutcome UpdateTagOption(const Model::UpdateTagOptionRequest& request) const;

        /**
         * A Callable wrapper for UpdateTagOption that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateTagOptionOutcomeCallable UpdateTagOptionCallable(const Model::UpdateTagOptionRequest& request) const;

        /**
         * An Async wrapper for UpdateTagOption that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateTagOptionAsync(const Model::UpdateTagOptionRequest& request, const UpdateTagOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ServiceCatalogEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<ServiceCatalogClient>;
      void init(const ServiceCatalogClientConfiguration& clientConfiguration);

      ServiceCatalogClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ServiceCatalogEndpointProviderBase> m_endpointProvider;
  };

} // namespace ServiceCatalog
} // namespace Aws
