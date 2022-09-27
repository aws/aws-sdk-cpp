/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/route53-recovery-readiness/Route53RecoveryReadinessErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/route53-recovery-readiness/model/CreateCellResult.h>
#include <aws/route53-recovery-readiness/model/CreateCrossAccountAuthorizationResult.h>
#include <aws/route53-recovery-readiness/model/CreateReadinessCheckResult.h>
#include <aws/route53-recovery-readiness/model/CreateRecoveryGroupResult.h>
#include <aws/route53-recovery-readiness/model/CreateResourceSetResult.h>
#include <aws/route53-recovery-readiness/model/DeleteCrossAccountAuthorizationResult.h>
#include <aws/route53-recovery-readiness/model/GetArchitectureRecommendationsResult.h>
#include <aws/route53-recovery-readiness/model/GetCellResult.h>
#include <aws/route53-recovery-readiness/model/GetCellReadinessSummaryResult.h>
#include <aws/route53-recovery-readiness/model/GetReadinessCheckResult.h>
#include <aws/route53-recovery-readiness/model/GetReadinessCheckResourceStatusResult.h>
#include <aws/route53-recovery-readiness/model/GetReadinessCheckStatusResult.h>
#include <aws/route53-recovery-readiness/model/GetRecoveryGroupResult.h>
#include <aws/route53-recovery-readiness/model/GetRecoveryGroupReadinessSummaryResult.h>
#include <aws/route53-recovery-readiness/model/GetResourceSetResult.h>
#include <aws/route53-recovery-readiness/model/ListCellsResult.h>
#include <aws/route53-recovery-readiness/model/ListCrossAccountAuthorizationsResult.h>
#include <aws/route53-recovery-readiness/model/ListReadinessChecksResult.h>
#include <aws/route53-recovery-readiness/model/ListRecoveryGroupsResult.h>
#include <aws/route53-recovery-readiness/model/ListResourceSetsResult.h>
#include <aws/route53-recovery-readiness/model/ListRulesResult.h>
#include <aws/route53-recovery-readiness/model/ListTagsForResourcesResult.h>
#include <aws/route53-recovery-readiness/model/TagResourceResult.h>
#include <aws/route53-recovery-readiness/model/UpdateCellResult.h>
#include <aws/route53-recovery-readiness/model/UpdateReadinessCheckResult.h>
#include <aws/route53-recovery-readiness/model/UpdateRecoveryGroupResult.h>
#include <aws/route53-recovery-readiness/model/UpdateResourceSetResult.h>
#include <aws/core/NoResult.h>
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

namespace Route53RecoveryReadiness
{

namespace Model
{
        class CreateCellRequest;
        class CreateCrossAccountAuthorizationRequest;
        class CreateReadinessCheckRequest;
        class CreateRecoveryGroupRequest;
        class CreateResourceSetRequest;
        class DeleteCellRequest;
        class DeleteCrossAccountAuthorizationRequest;
        class DeleteReadinessCheckRequest;
        class DeleteRecoveryGroupRequest;
        class DeleteResourceSetRequest;
        class GetArchitectureRecommendationsRequest;
        class GetCellRequest;
        class GetCellReadinessSummaryRequest;
        class GetReadinessCheckRequest;
        class GetReadinessCheckResourceStatusRequest;
        class GetReadinessCheckStatusRequest;
        class GetRecoveryGroupRequest;
        class GetRecoveryGroupReadinessSummaryRequest;
        class GetResourceSetRequest;
        class ListCellsRequest;
        class ListCrossAccountAuthorizationsRequest;
        class ListReadinessChecksRequest;
        class ListRecoveryGroupsRequest;
        class ListResourceSetsRequest;
        class ListRulesRequest;
        class ListTagsForResourcesRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateCellRequest;
        class UpdateReadinessCheckRequest;
        class UpdateRecoveryGroupRequest;
        class UpdateResourceSetRequest;

        typedef Aws::Utils::Outcome<CreateCellResult, Route53RecoveryReadinessError> CreateCellOutcome;
        typedef Aws::Utils::Outcome<CreateCrossAccountAuthorizationResult, Route53RecoveryReadinessError> CreateCrossAccountAuthorizationOutcome;
        typedef Aws::Utils::Outcome<CreateReadinessCheckResult, Route53RecoveryReadinessError> CreateReadinessCheckOutcome;
        typedef Aws::Utils::Outcome<CreateRecoveryGroupResult, Route53RecoveryReadinessError> CreateRecoveryGroupOutcome;
        typedef Aws::Utils::Outcome<CreateResourceSetResult, Route53RecoveryReadinessError> CreateResourceSetOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Route53RecoveryReadinessError> DeleteCellOutcome;
        typedef Aws::Utils::Outcome<DeleteCrossAccountAuthorizationResult, Route53RecoveryReadinessError> DeleteCrossAccountAuthorizationOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Route53RecoveryReadinessError> DeleteReadinessCheckOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Route53RecoveryReadinessError> DeleteRecoveryGroupOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Route53RecoveryReadinessError> DeleteResourceSetOutcome;
        typedef Aws::Utils::Outcome<GetArchitectureRecommendationsResult, Route53RecoveryReadinessError> GetArchitectureRecommendationsOutcome;
        typedef Aws::Utils::Outcome<GetCellResult, Route53RecoveryReadinessError> GetCellOutcome;
        typedef Aws::Utils::Outcome<GetCellReadinessSummaryResult, Route53RecoveryReadinessError> GetCellReadinessSummaryOutcome;
        typedef Aws::Utils::Outcome<GetReadinessCheckResult, Route53RecoveryReadinessError> GetReadinessCheckOutcome;
        typedef Aws::Utils::Outcome<GetReadinessCheckResourceStatusResult, Route53RecoveryReadinessError> GetReadinessCheckResourceStatusOutcome;
        typedef Aws::Utils::Outcome<GetReadinessCheckStatusResult, Route53RecoveryReadinessError> GetReadinessCheckStatusOutcome;
        typedef Aws::Utils::Outcome<GetRecoveryGroupResult, Route53RecoveryReadinessError> GetRecoveryGroupOutcome;
        typedef Aws::Utils::Outcome<GetRecoveryGroupReadinessSummaryResult, Route53RecoveryReadinessError> GetRecoveryGroupReadinessSummaryOutcome;
        typedef Aws::Utils::Outcome<GetResourceSetResult, Route53RecoveryReadinessError> GetResourceSetOutcome;
        typedef Aws::Utils::Outcome<ListCellsResult, Route53RecoveryReadinessError> ListCellsOutcome;
        typedef Aws::Utils::Outcome<ListCrossAccountAuthorizationsResult, Route53RecoveryReadinessError> ListCrossAccountAuthorizationsOutcome;
        typedef Aws::Utils::Outcome<ListReadinessChecksResult, Route53RecoveryReadinessError> ListReadinessChecksOutcome;
        typedef Aws::Utils::Outcome<ListRecoveryGroupsResult, Route53RecoveryReadinessError> ListRecoveryGroupsOutcome;
        typedef Aws::Utils::Outcome<ListResourceSetsResult, Route53RecoveryReadinessError> ListResourceSetsOutcome;
        typedef Aws::Utils::Outcome<ListRulesResult, Route53RecoveryReadinessError> ListRulesOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourcesResult, Route53RecoveryReadinessError> ListTagsForResourcesOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, Route53RecoveryReadinessError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Route53RecoveryReadinessError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateCellResult, Route53RecoveryReadinessError> UpdateCellOutcome;
        typedef Aws::Utils::Outcome<UpdateReadinessCheckResult, Route53RecoveryReadinessError> UpdateReadinessCheckOutcome;
        typedef Aws::Utils::Outcome<UpdateRecoveryGroupResult, Route53RecoveryReadinessError> UpdateRecoveryGroupOutcome;
        typedef Aws::Utils::Outcome<UpdateResourceSetResult, Route53RecoveryReadinessError> UpdateResourceSetOutcome;

        typedef std::future<CreateCellOutcome> CreateCellOutcomeCallable;
        typedef std::future<CreateCrossAccountAuthorizationOutcome> CreateCrossAccountAuthorizationOutcomeCallable;
        typedef std::future<CreateReadinessCheckOutcome> CreateReadinessCheckOutcomeCallable;
        typedef std::future<CreateRecoveryGroupOutcome> CreateRecoveryGroupOutcomeCallable;
        typedef std::future<CreateResourceSetOutcome> CreateResourceSetOutcomeCallable;
        typedef std::future<DeleteCellOutcome> DeleteCellOutcomeCallable;
        typedef std::future<DeleteCrossAccountAuthorizationOutcome> DeleteCrossAccountAuthorizationOutcomeCallable;
        typedef std::future<DeleteReadinessCheckOutcome> DeleteReadinessCheckOutcomeCallable;
        typedef std::future<DeleteRecoveryGroupOutcome> DeleteRecoveryGroupOutcomeCallable;
        typedef std::future<DeleteResourceSetOutcome> DeleteResourceSetOutcomeCallable;
        typedef std::future<GetArchitectureRecommendationsOutcome> GetArchitectureRecommendationsOutcomeCallable;
        typedef std::future<GetCellOutcome> GetCellOutcomeCallable;
        typedef std::future<GetCellReadinessSummaryOutcome> GetCellReadinessSummaryOutcomeCallable;
        typedef std::future<GetReadinessCheckOutcome> GetReadinessCheckOutcomeCallable;
        typedef std::future<GetReadinessCheckResourceStatusOutcome> GetReadinessCheckResourceStatusOutcomeCallable;
        typedef std::future<GetReadinessCheckStatusOutcome> GetReadinessCheckStatusOutcomeCallable;
        typedef std::future<GetRecoveryGroupOutcome> GetRecoveryGroupOutcomeCallable;
        typedef std::future<GetRecoveryGroupReadinessSummaryOutcome> GetRecoveryGroupReadinessSummaryOutcomeCallable;
        typedef std::future<GetResourceSetOutcome> GetResourceSetOutcomeCallable;
        typedef std::future<ListCellsOutcome> ListCellsOutcomeCallable;
        typedef std::future<ListCrossAccountAuthorizationsOutcome> ListCrossAccountAuthorizationsOutcomeCallable;
        typedef std::future<ListReadinessChecksOutcome> ListReadinessChecksOutcomeCallable;
        typedef std::future<ListRecoveryGroupsOutcome> ListRecoveryGroupsOutcomeCallable;
        typedef std::future<ListResourceSetsOutcome> ListResourceSetsOutcomeCallable;
        typedef std::future<ListRulesOutcome> ListRulesOutcomeCallable;
        typedef std::future<ListTagsForResourcesOutcome> ListTagsForResourcesOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateCellOutcome> UpdateCellOutcomeCallable;
        typedef std::future<UpdateReadinessCheckOutcome> UpdateReadinessCheckOutcomeCallable;
        typedef std::future<UpdateRecoveryGroupOutcome> UpdateRecoveryGroupOutcomeCallable;
        typedef std::future<UpdateResourceSetOutcome> UpdateResourceSetOutcomeCallable;
} // namespace Model

  class Route53RecoveryReadinessClient;

    typedef std::function<void(const Route53RecoveryReadinessClient*, const Model::CreateCellRequest&, const Model::CreateCellOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCellResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryReadinessClient*, const Model::CreateCrossAccountAuthorizationRequest&, const Model::CreateCrossAccountAuthorizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCrossAccountAuthorizationResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryReadinessClient*, const Model::CreateReadinessCheckRequest&, const Model::CreateReadinessCheckOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateReadinessCheckResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryReadinessClient*, const Model::CreateRecoveryGroupRequest&, const Model::CreateRecoveryGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRecoveryGroupResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryReadinessClient*, const Model::CreateResourceSetRequest&, const Model::CreateResourceSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateResourceSetResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryReadinessClient*, const Model::DeleteCellRequest&, const Model::DeleteCellOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCellResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryReadinessClient*, const Model::DeleteCrossAccountAuthorizationRequest&, const Model::DeleteCrossAccountAuthorizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCrossAccountAuthorizationResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryReadinessClient*, const Model::DeleteReadinessCheckRequest&, const Model::DeleteReadinessCheckOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteReadinessCheckResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryReadinessClient*, const Model::DeleteRecoveryGroupRequest&, const Model::DeleteRecoveryGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRecoveryGroupResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryReadinessClient*, const Model::DeleteResourceSetRequest&, const Model::DeleteResourceSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteResourceSetResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryReadinessClient*, const Model::GetArchitectureRecommendationsRequest&, const Model::GetArchitectureRecommendationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetArchitectureRecommendationsResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryReadinessClient*, const Model::GetCellRequest&, const Model::GetCellOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCellResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryReadinessClient*, const Model::GetCellReadinessSummaryRequest&, const Model::GetCellReadinessSummaryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCellReadinessSummaryResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryReadinessClient*, const Model::GetReadinessCheckRequest&, const Model::GetReadinessCheckOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetReadinessCheckResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryReadinessClient*, const Model::GetReadinessCheckResourceStatusRequest&, const Model::GetReadinessCheckResourceStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetReadinessCheckResourceStatusResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryReadinessClient*, const Model::GetReadinessCheckStatusRequest&, const Model::GetReadinessCheckStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetReadinessCheckStatusResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryReadinessClient*, const Model::GetRecoveryGroupRequest&, const Model::GetRecoveryGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRecoveryGroupResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryReadinessClient*, const Model::GetRecoveryGroupReadinessSummaryRequest&, const Model::GetRecoveryGroupReadinessSummaryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRecoveryGroupReadinessSummaryResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryReadinessClient*, const Model::GetResourceSetRequest&, const Model::GetResourceSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourceSetResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryReadinessClient*, const Model::ListCellsRequest&, const Model::ListCellsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCellsResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryReadinessClient*, const Model::ListCrossAccountAuthorizationsRequest&, const Model::ListCrossAccountAuthorizationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCrossAccountAuthorizationsResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryReadinessClient*, const Model::ListReadinessChecksRequest&, const Model::ListReadinessChecksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListReadinessChecksResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryReadinessClient*, const Model::ListRecoveryGroupsRequest&, const Model::ListRecoveryGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRecoveryGroupsResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryReadinessClient*, const Model::ListResourceSetsRequest&, const Model::ListResourceSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResourceSetsResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryReadinessClient*, const Model::ListRulesRequest&, const Model::ListRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRulesResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryReadinessClient*, const Model::ListTagsForResourcesRequest&, const Model::ListTagsForResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourcesResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryReadinessClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryReadinessClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryReadinessClient*, const Model::UpdateCellRequest&, const Model::UpdateCellOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCellResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryReadinessClient*, const Model::UpdateReadinessCheckRequest&, const Model::UpdateReadinessCheckOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateReadinessCheckResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryReadinessClient*, const Model::UpdateRecoveryGroupRequest&, const Model::UpdateRecoveryGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRecoveryGroupResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryReadinessClient*, const Model::UpdateResourceSetRequest&, const Model::UpdateResourceSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateResourceSetResponseReceivedHandler;

  /**
   * <p>Recovery readiness</p>
   */
  class AWS_ROUTE53RECOVERYREADINESS_API Route53RecoveryReadinessClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Route53RecoveryReadinessClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Route53RecoveryReadinessClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        Route53RecoveryReadinessClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~Route53RecoveryReadinessClient();


        /**
         * <p>Creates a cell in an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/CreateCell">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCellOutcome CreateCell(const Model::CreateCellRequest& request) const;

        /**
         * A Callable wrapper for CreateCell that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCellOutcomeCallable CreateCellCallable(const Model::CreateCellRequest& request) const;

        /**
         * An Async wrapper for CreateCell that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCellAsync(const Model::CreateCellRequest& request, const CreateCellResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for CreateCrossAccountAuthorization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCrossAccountAuthorizationOutcomeCallable CreateCrossAccountAuthorizationCallable(const Model::CreateCrossAccountAuthorizationRequest& request) const;

        /**
         * An Async wrapper for CreateCrossAccountAuthorization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCrossAccountAuthorizationAsync(const Model::CreateCrossAccountAuthorizationRequest& request, const CreateCrossAccountAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for CreateReadinessCheck that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateReadinessCheckOutcomeCallable CreateReadinessCheckCallable(const Model::CreateReadinessCheckRequest& request) const;

        /**
         * An Async wrapper for CreateReadinessCheck that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateReadinessCheckAsync(const Model::CreateReadinessCheckRequest& request, const CreateReadinessCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a recovery group in an account. A recovery group corresponds to an
         * application and includes a list of the cells that make up the
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/CreateRecoveryGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRecoveryGroupOutcome CreateRecoveryGroup(const Model::CreateRecoveryGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateRecoveryGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRecoveryGroupOutcomeCallable CreateRecoveryGroupCallable(const Model::CreateRecoveryGroupRequest& request) const;

        /**
         * An Async wrapper for CreateRecoveryGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRecoveryGroupAsync(const Model::CreateRecoveryGroupRequest& request, const CreateRecoveryGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a resource set. A resource set is a set of resources of one type that
         * span multiple cells. You can associate a resource set with a readiness check to
         * monitor the resources for failover readiness.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/CreateResourceSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateResourceSetOutcome CreateResourceSet(const Model::CreateResourceSetRequest& request) const;

        /**
         * A Callable wrapper for CreateResourceSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateResourceSetOutcomeCallable CreateResourceSetCallable(const Model::CreateResourceSetRequest& request) const;

        /**
         * An Async wrapper for CreateResourceSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateResourceSetAsync(const Model::CreateResourceSetRequest& request, const CreateResourceSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete a cell. When successful, the response code is 204, with no response
         * body.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/DeleteCell">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCellOutcome DeleteCell(const Model::DeleteCellRequest& request) const;

        /**
         * A Callable wrapper for DeleteCell that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCellOutcomeCallable DeleteCellCallable(const Model::DeleteCellRequest& request) const;

        /**
         * An Async wrapper for DeleteCell that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCellAsync(const Model::DeleteCellRequest& request, const DeleteCellResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes cross account readiness authorization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/DeleteCrossAccountAuthorization">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCrossAccountAuthorizationOutcome DeleteCrossAccountAuthorization(const Model::DeleteCrossAccountAuthorizationRequest& request) const;

        /**
         * A Callable wrapper for DeleteCrossAccountAuthorization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCrossAccountAuthorizationOutcomeCallable DeleteCrossAccountAuthorizationCallable(const Model::DeleteCrossAccountAuthorizationRequest& request) const;

        /**
         * An Async wrapper for DeleteCrossAccountAuthorization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCrossAccountAuthorizationAsync(const Model::DeleteCrossAccountAuthorizationRequest& request, const DeleteCrossAccountAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a readiness check.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/DeleteReadinessCheck">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteReadinessCheckOutcome DeleteReadinessCheck(const Model::DeleteReadinessCheckRequest& request) const;

        /**
         * A Callable wrapper for DeleteReadinessCheck that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteReadinessCheckOutcomeCallable DeleteReadinessCheckCallable(const Model::DeleteReadinessCheckRequest& request) const;

        /**
         * An Async wrapper for DeleteReadinessCheck that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteReadinessCheckAsync(const Model::DeleteReadinessCheckRequest& request, const DeleteReadinessCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a recovery group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/DeleteRecoveryGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRecoveryGroupOutcome DeleteRecoveryGroup(const Model::DeleteRecoveryGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteRecoveryGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRecoveryGroupOutcomeCallable DeleteRecoveryGroupCallable(const Model::DeleteRecoveryGroupRequest& request) const;

        /**
         * An Async wrapper for DeleteRecoveryGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRecoveryGroupAsync(const Model::DeleteRecoveryGroupRequest& request, const DeleteRecoveryGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a resource set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/DeleteResourceSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourceSetOutcome DeleteResourceSet(const Model::DeleteResourceSetRequest& request) const;

        /**
         * A Callable wrapper for DeleteResourceSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteResourceSetOutcomeCallable DeleteResourceSetCallable(const Model::DeleteResourceSetRequest& request) const;

        /**
         * An Async wrapper for DeleteResourceSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteResourceSetAsync(const Model::DeleteResourceSetRequest& request, const DeleteResourceSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets recommendations about architecture designs for improving resiliency for
         * an application, based on a recovery group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/GetArchitectureRecommendations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetArchitectureRecommendationsOutcome GetArchitectureRecommendations(const Model::GetArchitectureRecommendationsRequest& request) const;

        /**
         * A Callable wrapper for GetArchitectureRecommendations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetArchitectureRecommendationsOutcomeCallable GetArchitectureRecommendationsCallable(const Model::GetArchitectureRecommendationsRequest& request) const;

        /**
         * An Async wrapper for GetArchitectureRecommendations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetArchitectureRecommendationsAsync(const Model::GetArchitectureRecommendationsRequest& request, const GetArchitectureRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a cell including cell name, cell Amazon Resource Name
         * (ARN), ARNs of nested cells for this cell, and a list of those cell ARNs with
         * their associated recovery group ARNs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/GetCell">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCellOutcome GetCell(const Model::GetCellRequest& request) const;

        /**
         * A Callable wrapper for GetCell that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCellOutcomeCallable GetCellCallable(const Model::GetCellRequest& request) const;

        /**
         * An Async wrapper for GetCell that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCellAsync(const Model::GetCellRequest& request, const GetCellResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets readiness for a cell. Aggregates the readiness of all the resources that
         * are associated with the cell into a single value.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/GetCellReadinessSummary">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCellReadinessSummaryOutcome GetCellReadinessSummary(const Model::GetCellReadinessSummaryRequest& request) const;

        /**
         * A Callable wrapper for GetCellReadinessSummary that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCellReadinessSummaryOutcomeCallable GetCellReadinessSummaryCallable(const Model::GetCellReadinessSummaryRequest& request) const;

        /**
         * An Async wrapper for GetCellReadinessSummary that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCellReadinessSummaryAsync(const Model::GetCellReadinessSummaryRequest& request, const GetCellReadinessSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets details about a readiness check.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/GetReadinessCheck">AWS
         * API Reference</a></p>
         */
        virtual Model::GetReadinessCheckOutcome GetReadinessCheck(const Model::GetReadinessCheckRequest& request) const;

        /**
         * A Callable wrapper for GetReadinessCheck that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetReadinessCheckOutcomeCallable GetReadinessCheckCallable(const Model::GetReadinessCheckRequest& request) const;

        /**
         * An Async wrapper for GetReadinessCheck that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetReadinessCheckAsync(const Model::GetReadinessCheckRequest& request, const GetReadinessCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for GetReadinessCheckResourceStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetReadinessCheckResourceStatusOutcomeCallable GetReadinessCheckResourceStatusCallable(const Model::GetReadinessCheckResourceStatusRequest& request) const;

        /**
         * An Async wrapper for GetReadinessCheckResourceStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetReadinessCheckResourceStatusAsync(const Model::GetReadinessCheckResourceStatusRequest& request, const GetReadinessCheckResourceStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for GetReadinessCheckStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetReadinessCheckStatusOutcomeCallable GetReadinessCheckStatusCallable(const Model::GetReadinessCheckStatusRequest& request) const;

        /**
         * An Async wrapper for GetReadinessCheckStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetReadinessCheckStatusAsync(const Model::GetReadinessCheckStatusRequest& request, const GetReadinessCheckStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets details about a recovery group, including a list of the cells that are
         * included in it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/GetRecoveryGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRecoveryGroupOutcome GetRecoveryGroup(const Model::GetRecoveryGroupRequest& request) const;

        /**
         * A Callable wrapper for GetRecoveryGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRecoveryGroupOutcomeCallable GetRecoveryGroupCallable(const Model::GetRecoveryGroupRequest& request) const;

        /**
         * An Async wrapper for GetRecoveryGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRecoveryGroupAsync(const Model::GetRecoveryGroupRequest& request, const GetRecoveryGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Displays a summary of information about a recovery group's readiness status.
         * Includes the readiness checks for resources in the recovery group and the
         * readiness status of each one.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/GetRecoveryGroupReadinessSummary">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRecoveryGroupReadinessSummaryOutcome GetRecoveryGroupReadinessSummary(const Model::GetRecoveryGroupReadinessSummaryRequest& request) const;

        /**
         * A Callable wrapper for GetRecoveryGroupReadinessSummary that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRecoveryGroupReadinessSummaryOutcomeCallable GetRecoveryGroupReadinessSummaryCallable(const Model::GetRecoveryGroupReadinessSummaryRequest& request) const;

        /**
         * An Async wrapper for GetRecoveryGroupReadinessSummary that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRecoveryGroupReadinessSummaryAsync(const Model::GetRecoveryGroupReadinessSummaryRequest& request, const GetRecoveryGroupReadinessSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Displays the details about a resource set, including a list of the resources
         * in the set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/GetResourceSet">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourceSetOutcome GetResourceSet(const Model::GetResourceSetRequest& request) const;

        /**
         * A Callable wrapper for GetResourceSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResourceSetOutcomeCallable GetResourceSetCallable(const Model::GetResourceSetRequest& request) const;

        /**
         * An Async wrapper for GetResourceSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResourceSetAsync(const Model::GetResourceSetRequest& request, const GetResourceSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the cells for an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/ListCells">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCellsOutcome ListCells(const Model::ListCellsRequest& request) const;

        /**
         * A Callable wrapper for ListCells that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCellsOutcomeCallable ListCellsCallable(const Model::ListCellsRequest& request) const;

        /**
         * An Async wrapper for ListCells that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCellsAsync(const Model::ListCellsRequest& request, const ListCellsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the cross-account readiness authorizations that are in place for an
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/ListCrossAccountAuthorizations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCrossAccountAuthorizationsOutcome ListCrossAccountAuthorizations(const Model::ListCrossAccountAuthorizationsRequest& request) const;

        /**
         * A Callable wrapper for ListCrossAccountAuthorizations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCrossAccountAuthorizationsOutcomeCallable ListCrossAccountAuthorizationsCallable(const Model::ListCrossAccountAuthorizationsRequest& request) const;

        /**
         * An Async wrapper for ListCrossAccountAuthorizations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCrossAccountAuthorizationsAsync(const Model::ListCrossAccountAuthorizationsRequest& request, const ListCrossAccountAuthorizationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the readiness checks for an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/ListReadinessChecks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReadinessChecksOutcome ListReadinessChecks(const Model::ListReadinessChecksRequest& request) const;

        /**
         * A Callable wrapper for ListReadinessChecks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListReadinessChecksOutcomeCallable ListReadinessChecksCallable(const Model::ListReadinessChecksRequest& request) const;

        /**
         * An Async wrapper for ListReadinessChecks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListReadinessChecksAsync(const Model::ListReadinessChecksRequest& request, const ListReadinessChecksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the recovery groups in an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/ListRecoveryGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRecoveryGroupsOutcome ListRecoveryGroups(const Model::ListRecoveryGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListRecoveryGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRecoveryGroupsOutcomeCallable ListRecoveryGroupsCallable(const Model::ListRecoveryGroupsRequest& request) const;

        /**
         * An Async wrapper for ListRecoveryGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRecoveryGroupsAsync(const Model::ListRecoveryGroupsRequest& request, const ListRecoveryGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the resource sets in an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/ListResourceSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourceSetsOutcome ListResourceSets(const Model::ListResourceSetsRequest& request) const;

        /**
         * A Callable wrapper for ListResourceSets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListResourceSetsOutcomeCallable ListResourceSetsCallable(const Model::ListResourceSetsRequest& request) const;

        /**
         * An Async wrapper for ListResourceSets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListResourceSetsAsync(const Model::ListResourceSetsRequest& request, const ListResourceSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all readiness rules, or lists the readiness rules for a specific
         * resource type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/ListRules">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRulesOutcome ListRules(const Model::ListRulesRequest& request) const;

        /**
         * A Callable wrapper for ListRules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRulesOutcomeCallable ListRulesCallable(const Model::ListRulesRequest& request) const;

        /**
         * An Async wrapper for ListRules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRulesAsync(const Model::ListRulesRequest& request, const ListRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags for a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/ListTagsForResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourcesOutcome ListTagsForResources(const Model::ListTagsForResourcesRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourcesOutcomeCallable ListTagsForResourcesCallable(const Model::ListTagsForResourcesRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourcesAsync(const Model::ListTagsForResourcesRequest& request, const ListTagsForResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds a tag to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a tag from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a cell to replace the list of nested cells with a new list of nested
         * cells.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/UpdateCell">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCellOutcome UpdateCell(const Model::UpdateCellRequest& request) const;

        /**
         * A Callable wrapper for UpdateCell that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateCellOutcomeCallable UpdateCellCallable(const Model::UpdateCellRequest& request) const;

        /**
         * An Async wrapper for UpdateCell that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateCellAsync(const Model::UpdateCellRequest& request, const UpdateCellResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a readiness check.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/UpdateReadinessCheck">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateReadinessCheckOutcome UpdateReadinessCheck(const Model::UpdateReadinessCheckRequest& request) const;

        /**
         * A Callable wrapper for UpdateReadinessCheck that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateReadinessCheckOutcomeCallable UpdateReadinessCheckCallable(const Model::UpdateReadinessCheckRequest& request) const;

        /**
         * An Async wrapper for UpdateReadinessCheck that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateReadinessCheckAsync(const Model::UpdateReadinessCheckRequest& request, const UpdateReadinessCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a recovery group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/UpdateRecoveryGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRecoveryGroupOutcome UpdateRecoveryGroup(const Model::UpdateRecoveryGroupRequest& request) const;

        /**
         * A Callable wrapper for UpdateRecoveryGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRecoveryGroupOutcomeCallable UpdateRecoveryGroupCallable(const Model::UpdateRecoveryGroupRequest& request) const;

        /**
         * An Async wrapper for UpdateRecoveryGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRecoveryGroupAsync(const Model::UpdateRecoveryGroupRequest& request, const UpdateRecoveryGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a resource set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/UpdateResourceSet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateResourceSetOutcome UpdateResourceSet(const Model::UpdateResourceSetRequest& request) const;

        /**
         * A Callable wrapper for UpdateResourceSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateResourceSetOutcomeCallable UpdateResourceSetCallable(const Model::UpdateResourceSetRequest& request) const;

        /**
         * An Async wrapper for UpdateResourceSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateResourceSetAsync(const Model::UpdateResourceSetRequest& request, const UpdateResourceSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateCellAsyncHelper(const Model::CreateCellRequest& request, const CreateCellResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateCrossAccountAuthorizationAsyncHelper(const Model::CreateCrossAccountAuthorizationRequest& request, const CreateCrossAccountAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateReadinessCheckAsyncHelper(const Model::CreateReadinessCheckRequest& request, const CreateReadinessCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateRecoveryGroupAsyncHelper(const Model::CreateRecoveryGroupRequest& request, const CreateRecoveryGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateResourceSetAsyncHelper(const Model::CreateResourceSetRequest& request, const CreateResourceSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteCellAsyncHelper(const Model::DeleteCellRequest& request, const DeleteCellResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteCrossAccountAuthorizationAsyncHelper(const Model::DeleteCrossAccountAuthorizationRequest& request, const DeleteCrossAccountAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteReadinessCheckAsyncHelper(const Model::DeleteReadinessCheckRequest& request, const DeleteReadinessCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRecoveryGroupAsyncHelper(const Model::DeleteRecoveryGroupRequest& request, const DeleteRecoveryGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteResourceSetAsyncHelper(const Model::DeleteResourceSetRequest& request, const DeleteResourceSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetArchitectureRecommendationsAsyncHelper(const Model::GetArchitectureRecommendationsRequest& request, const GetArchitectureRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCellAsyncHelper(const Model::GetCellRequest& request, const GetCellResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCellReadinessSummaryAsyncHelper(const Model::GetCellReadinessSummaryRequest& request, const GetCellReadinessSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetReadinessCheckAsyncHelper(const Model::GetReadinessCheckRequest& request, const GetReadinessCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetReadinessCheckResourceStatusAsyncHelper(const Model::GetReadinessCheckResourceStatusRequest& request, const GetReadinessCheckResourceStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetReadinessCheckStatusAsyncHelper(const Model::GetReadinessCheckStatusRequest& request, const GetReadinessCheckStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRecoveryGroupAsyncHelper(const Model::GetRecoveryGroupRequest& request, const GetRecoveryGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRecoveryGroupReadinessSummaryAsyncHelper(const Model::GetRecoveryGroupReadinessSummaryRequest& request, const GetRecoveryGroupReadinessSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetResourceSetAsyncHelper(const Model::GetResourceSetRequest& request, const GetResourceSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListCellsAsyncHelper(const Model::ListCellsRequest& request, const ListCellsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListCrossAccountAuthorizationsAsyncHelper(const Model::ListCrossAccountAuthorizationsRequest& request, const ListCrossAccountAuthorizationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListReadinessChecksAsyncHelper(const Model::ListReadinessChecksRequest& request, const ListReadinessChecksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRecoveryGroupsAsyncHelper(const Model::ListRecoveryGroupsRequest& request, const ListRecoveryGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListResourceSetsAsyncHelper(const Model::ListResourceSetsRequest& request, const ListResourceSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRulesAsyncHelper(const Model::ListRulesRequest& request, const ListRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourcesAsyncHelper(const Model::ListTagsForResourcesRequest& request, const ListTagsForResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateCellAsyncHelper(const Model::UpdateCellRequest& request, const UpdateCellResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateReadinessCheckAsyncHelper(const Model::UpdateReadinessCheckRequest& request, const UpdateReadinessCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateRecoveryGroupAsyncHelper(const Model::UpdateRecoveryGroupRequest& request, const UpdateRecoveryGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateResourceSetAsyncHelper(const Model::UpdateResourceSetRequest& request, const UpdateResourceSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Route53RecoveryReadiness
} // namespace Aws
