/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/route53-recovery-readiness/Route53RecoveryReadinessServiceClientModel.h>
#include <aws/route53-recovery-readiness/Route53RecoveryReadinessLegacyAsyncMacros.h>

namespace Aws
{
namespace Route53RecoveryReadiness
{
  /**
   * <p>Recovery readiness</p>
   */
  class AWS_ROUTE53RECOVERYREADINESS_API Route53RecoveryReadinessClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Route53RecoveryReadinessClient(const Aws::Route53RecoveryReadiness::Route53RecoveryReadinessClientConfiguration& clientConfiguration = Aws::Route53RecoveryReadiness::Route53RecoveryReadinessClientConfiguration(),
                                       std::shared_ptr<Route53RecoveryReadinessEndpointProviderBase> endpointProvider = Aws::MakeShared<Route53RecoveryReadinessEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Route53RecoveryReadinessClient(const Aws::Auth::AWSCredentials& credentials,
                                       std::shared_ptr<Route53RecoveryReadinessEndpointProviderBase> endpointProvider = Aws::MakeShared<Route53RecoveryReadinessEndpointProvider>(ALLOCATION_TAG),
                                       const Aws::Route53RecoveryReadiness::Route53RecoveryReadinessClientConfiguration& clientConfiguration = Aws::Route53RecoveryReadiness::Route53RecoveryReadinessClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        Route53RecoveryReadinessClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                       std::shared_ptr<Route53RecoveryReadinessEndpointProviderBase> endpointProvider = Aws::MakeShared<Route53RecoveryReadinessEndpointProvider>(ALLOCATION_TAG),
                                       const Aws::Route53RecoveryReadiness::Route53RecoveryReadinessClientConfiguration& clientConfiguration = Aws::Route53RecoveryReadiness::Route53RecoveryReadinessClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Route53RecoveryReadinessClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Route53RecoveryReadinessClient(const Aws::Auth::AWSCredentials& credentials,
                                       const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        Route53RecoveryReadinessClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                       const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~Route53RecoveryReadinessClient();


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
         * <p>Creates a cell in an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/CreateCell">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCellOutcome CreateCell(const Model::CreateCellRequest& request) const;


        /**
         * <p>Creates a cross-account readiness authorization. This lets you authorize
         * another account to work with Route 53 Application Recovery Controller, for
         * example, to check the readiness status of resources in a separate
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/CreateCrossAccountAuthorization">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCrossAccountAuthorizationOutcome CreateCrossAccountAuthorization(const Model::CreateCrossAccountAuthorizationRequest& request) const;


        /**
         * <p>Creates a readiness check in an account. A readiness check monitors a
         * resource set in your application, such as a set of Amazon Aurora instances, that
         * Application Recovery Controller is auditing recovery readiness for. The audits
         * run once every minute on every resource that's associated with a readiness
         * check.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/CreateReadinessCheck">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateReadinessCheckOutcome CreateReadinessCheck(const Model::CreateReadinessCheckRequest& request) const;


        /**
         * <p>Creates a recovery group in an account. A recovery group corresponds to an
         * application and includes a list of the cells that make up the
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/CreateRecoveryGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRecoveryGroupOutcome CreateRecoveryGroup(const Model::CreateRecoveryGroupRequest& request) const;


        /**
         * <p>Creates a resource set. A resource set is a set of resources of one type that
         * span multiple cells. You can associate a resource set with a readiness check to
         * monitor the resources for failover readiness.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/CreateResourceSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateResourceSetOutcome CreateResourceSet(const Model::CreateResourceSetRequest& request) const;


        /**
         * <p>Delete a cell. When successful, the response code is 204, with no response
         * body.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/DeleteCell">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCellOutcome DeleteCell(const Model::DeleteCellRequest& request) const;


        /**
         * <p>Deletes cross account readiness authorization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/DeleteCrossAccountAuthorization">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCrossAccountAuthorizationOutcome DeleteCrossAccountAuthorization(const Model::DeleteCrossAccountAuthorizationRequest& request) const;


        /**
         * <p>Deletes a readiness check.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/DeleteReadinessCheck">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteReadinessCheckOutcome DeleteReadinessCheck(const Model::DeleteReadinessCheckRequest& request) const;


        /**
         * <p>Deletes a recovery group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/DeleteRecoveryGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRecoveryGroupOutcome DeleteRecoveryGroup(const Model::DeleteRecoveryGroupRequest& request) const;


        /**
         * <p>Deletes a resource set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/DeleteResourceSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourceSetOutcome DeleteResourceSet(const Model::DeleteResourceSetRequest& request) const;


        /**
         * <p>Gets recommendations about architecture designs for improving resiliency for
         * an application, based on a recovery group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/GetArchitectureRecommendations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetArchitectureRecommendationsOutcome GetArchitectureRecommendations(const Model::GetArchitectureRecommendationsRequest& request) const;


        /**
         * <p>Gets information about a cell including cell name, cell Amazon Resource Name
         * (ARN), ARNs of nested cells for this cell, and a list of those cell ARNs with
         * their associated recovery group ARNs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/GetCell">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCellOutcome GetCell(const Model::GetCellRequest& request) const;


        /**
         * <p>Gets readiness for a cell. Aggregates the readiness of all the resources that
         * are associated with the cell into a single value.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/GetCellReadinessSummary">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCellReadinessSummaryOutcome GetCellReadinessSummary(const Model::GetCellReadinessSummaryRequest& request) const;


        /**
         * <p>Gets details about a readiness check.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/GetReadinessCheck">AWS
         * API Reference</a></p>
         */
        virtual Model::GetReadinessCheckOutcome GetReadinessCheck(const Model::GetReadinessCheckRequest& request) const;


        /**
         * <p>Gets individual readiness status for a readiness check. To see the overall
         * readiness status for a recovery group, that considers the readiness status for
         * all the readiness checks in the recovery group, use
         * GetRecoveryGroupReadinessSummary.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/GetReadinessCheckResourceStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetReadinessCheckResourceStatusOutcome GetReadinessCheckResourceStatus(const Model::GetReadinessCheckResourceStatusRequest& request) const;


        /**
         * <p>Gets the readiness status for an individual readiness check. To see the
         * overall readiness status for a recovery group, that considers the readiness
         * status for all the readiness checks in a recovery group, use
         * GetRecoveryGroupReadinessSummary.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/GetReadinessCheckStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetReadinessCheckStatusOutcome GetReadinessCheckStatus(const Model::GetReadinessCheckStatusRequest& request) const;


        /**
         * <p>Gets details about a recovery group, including a list of the cells that are
         * included in it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/GetRecoveryGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRecoveryGroupOutcome GetRecoveryGroup(const Model::GetRecoveryGroupRequest& request) const;


        /**
         * <p>Displays a summary of information about a recovery group's readiness status.
         * Includes the readiness checks for resources in the recovery group and the
         * readiness status of each one.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/GetRecoveryGroupReadinessSummary">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRecoveryGroupReadinessSummaryOutcome GetRecoveryGroupReadinessSummary(const Model::GetRecoveryGroupReadinessSummaryRequest& request) const;


        /**
         * <p>Displays the details about a resource set, including a list of the resources
         * in the set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/GetResourceSet">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourceSetOutcome GetResourceSet(const Model::GetResourceSetRequest& request) const;


        /**
         * <p>Lists the cells for an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/ListCells">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCellsOutcome ListCells(const Model::ListCellsRequest& request) const;


        /**
         * <p>Lists the cross-account readiness authorizations that are in place for an
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/ListCrossAccountAuthorizations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCrossAccountAuthorizationsOutcome ListCrossAccountAuthorizations(const Model::ListCrossAccountAuthorizationsRequest& request) const;


        /**
         * <p>Lists the readiness checks for an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/ListReadinessChecks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReadinessChecksOutcome ListReadinessChecks(const Model::ListReadinessChecksRequest& request) const;


        /**
         * <p>Lists the recovery groups in an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/ListRecoveryGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRecoveryGroupsOutcome ListRecoveryGroups(const Model::ListRecoveryGroupsRequest& request) const;


        /**
         * <p>Lists the resource sets in an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/ListResourceSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourceSetsOutcome ListResourceSets(const Model::ListResourceSetsRequest& request) const;


        /**
         * <p>Lists all readiness rules, or lists the readiness rules for a specific
         * resource type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/ListRules">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRulesOutcome ListRules(const Model::ListRulesRequest& request) const;


        /**
         * <p>Lists the tags for a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/ListTagsForResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourcesOutcome ListTagsForResources(const Model::ListTagsForResourcesRequest& request) const;


        /**
         * <p>Adds a tag to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Removes a tag from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Updates a cell to replace the list of nested cells with a new list of nested
         * cells.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/UpdateCell">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCellOutcome UpdateCell(const Model::UpdateCellRequest& request) const;


        /**
         * <p>Updates a readiness check.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/UpdateReadinessCheck">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateReadinessCheckOutcome UpdateReadinessCheck(const Model::UpdateReadinessCheckRequest& request) const;


        /**
         * <p>Updates a recovery group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/UpdateRecoveryGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRecoveryGroupOutcome UpdateRecoveryGroup(const Model::UpdateRecoveryGroupRequest& request) const;


        /**
         * <p>Updates a resource set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/UpdateResourceSet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateResourceSetOutcome UpdateResourceSet(const Model::UpdateResourceSetRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<Route53RecoveryReadinessEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const Route53RecoveryReadinessClientConfiguration& clientConfiguration);

      Route53RecoveryReadinessClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<Route53RecoveryReadinessEndpointProviderBase> m_endpointProvider;
  };

} // namespace Route53RecoveryReadiness
} // namespace Aws
