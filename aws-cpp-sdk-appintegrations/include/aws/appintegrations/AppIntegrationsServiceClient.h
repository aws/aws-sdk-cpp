/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appintegrations/AppIntegrationsService_EXPORTS.h>
#include <aws/appintegrations/AppIntegrationsServiceErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/appintegrations/model/CreateEventIntegrationResult.h>
#include <aws/appintegrations/model/DeleteEventIntegrationResult.h>
#include <aws/appintegrations/model/GetEventIntegrationResult.h>
#include <aws/appintegrations/model/ListEventIntegrationAssociationsResult.h>
#include <aws/appintegrations/model/ListEventIntegrationsResult.h>
#include <aws/appintegrations/model/ListTagsForResourceResult.h>
#include <aws/appintegrations/model/TagResourceResult.h>
#include <aws/appintegrations/model/UntagResourceResult.h>
#include <aws/appintegrations/model/UpdateEventIntegrationResult.h>
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

namespace AppIntegrationsService
{

namespace Model
{
        class CreateEventIntegrationRequest;
        class DeleteEventIntegrationRequest;
        class GetEventIntegrationRequest;
        class ListEventIntegrationAssociationsRequest;
        class ListEventIntegrationsRequest;
        class ListTagsForResourceRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateEventIntegrationRequest;

        typedef Aws::Utils::Outcome<CreateEventIntegrationResult, AppIntegrationsServiceError> CreateEventIntegrationOutcome;
        typedef Aws::Utils::Outcome<DeleteEventIntegrationResult, AppIntegrationsServiceError> DeleteEventIntegrationOutcome;
        typedef Aws::Utils::Outcome<GetEventIntegrationResult, AppIntegrationsServiceError> GetEventIntegrationOutcome;
        typedef Aws::Utils::Outcome<ListEventIntegrationAssociationsResult, AppIntegrationsServiceError> ListEventIntegrationAssociationsOutcome;
        typedef Aws::Utils::Outcome<ListEventIntegrationsResult, AppIntegrationsServiceError> ListEventIntegrationsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, AppIntegrationsServiceError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, AppIntegrationsServiceError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, AppIntegrationsServiceError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateEventIntegrationResult, AppIntegrationsServiceError> UpdateEventIntegrationOutcome;

        typedef std::future<CreateEventIntegrationOutcome> CreateEventIntegrationOutcomeCallable;
        typedef std::future<DeleteEventIntegrationOutcome> DeleteEventIntegrationOutcomeCallable;
        typedef std::future<GetEventIntegrationOutcome> GetEventIntegrationOutcomeCallable;
        typedef std::future<ListEventIntegrationAssociationsOutcome> ListEventIntegrationAssociationsOutcomeCallable;
        typedef std::future<ListEventIntegrationsOutcome> ListEventIntegrationsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateEventIntegrationOutcome> UpdateEventIntegrationOutcomeCallable;
} // namespace Model

  class AppIntegrationsServiceClient;

    typedef std::function<void(const AppIntegrationsServiceClient*, const Model::CreateEventIntegrationRequest&, const Model::CreateEventIntegrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEventIntegrationResponseReceivedHandler;
    typedef std::function<void(const AppIntegrationsServiceClient*, const Model::DeleteEventIntegrationRequest&, const Model::DeleteEventIntegrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEventIntegrationResponseReceivedHandler;
    typedef std::function<void(const AppIntegrationsServiceClient*, const Model::GetEventIntegrationRequest&, const Model::GetEventIntegrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEventIntegrationResponseReceivedHandler;
    typedef std::function<void(const AppIntegrationsServiceClient*, const Model::ListEventIntegrationAssociationsRequest&, const Model::ListEventIntegrationAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEventIntegrationAssociationsResponseReceivedHandler;
    typedef std::function<void(const AppIntegrationsServiceClient*, const Model::ListEventIntegrationsRequest&, const Model::ListEventIntegrationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEventIntegrationsResponseReceivedHandler;
    typedef std::function<void(const AppIntegrationsServiceClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const AppIntegrationsServiceClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const AppIntegrationsServiceClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const AppIntegrationsServiceClient*, const Model::UpdateEventIntegrationRequest&, const Model::UpdateEventIntegrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEventIntegrationResponseReceivedHandler;

  /**
   * <p>The Amazon AppIntegrations APIs are in preview release and are subject to
   * change.</p> <p>The Amazon AppIntegrations service enables you to configure and
   * reuse connections to external applications.</p> <p>For information about how you
   * can use external applications with Amazon Connect, see <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/crm.html">Set up
   * pre-built integrations</a> in the <i>Amazon Connect Administrator Guide</i>.</p>
   */
  class AWS_APPINTEGRATIONSSERVICE_API AppIntegrationsServiceClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppIntegrationsServiceClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppIntegrationsServiceClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AppIntegrationsServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~AppIntegrationsServiceClient();


        /**
         * <p>The Amazon AppIntegrations APIs are in preview release and are subject to
         * change.</p> <p>Creates an EventIntegration, given a specified name, description,
         * and a reference to an Amazon Eventbridge bus in your account and a partner event
         * source that will push events to that bus. No objects are created in the your
         * account, only metadata that is persisted on the EventIntegration control
         * plane.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/CreateEventIntegration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEventIntegrationOutcome CreateEventIntegration(const Model::CreateEventIntegrationRequest& request) const;

        /**
         * <p>The Amazon AppIntegrations APIs are in preview release and are subject to
         * change.</p> <p>Creates an EventIntegration, given a specified name, description,
         * and a reference to an Amazon Eventbridge bus in your account and a partner event
         * source that will push events to that bus. No objects are created in the your
         * account, only metadata that is persisted on the EventIntegration control
         * plane.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/CreateEventIntegration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateEventIntegrationOutcomeCallable CreateEventIntegrationCallable(const Model::CreateEventIntegrationRequest& request) const;

        /**
         * <p>The Amazon AppIntegrations APIs are in preview release and are subject to
         * change.</p> <p>Creates an EventIntegration, given a specified name, description,
         * and a reference to an Amazon Eventbridge bus in your account and a partner event
         * source that will push events to that bus. No objects are created in the your
         * account, only metadata that is persisted on the EventIntegration control
         * plane.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/CreateEventIntegration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateEventIntegrationAsync(const Model::CreateEventIntegrationRequest& request, const CreateEventIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The Amazon AppIntegrations APIs are in preview release and are subject to
         * change.</p> <p>Deletes the specified existing event integration. If the event
         * integration is associated with clients, the request is rejected.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/DeleteEventIntegration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEventIntegrationOutcome DeleteEventIntegration(const Model::DeleteEventIntegrationRequest& request) const;

        /**
         * <p>The Amazon AppIntegrations APIs are in preview release and are subject to
         * change.</p> <p>Deletes the specified existing event integration. If the event
         * integration is associated with clients, the request is rejected.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/DeleteEventIntegration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEventIntegrationOutcomeCallable DeleteEventIntegrationCallable(const Model::DeleteEventIntegrationRequest& request) const;

        /**
         * <p>The Amazon AppIntegrations APIs are in preview release and are subject to
         * change.</p> <p>Deletes the specified existing event integration. If the event
         * integration is associated with clients, the request is rejected.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/DeleteEventIntegration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEventIntegrationAsync(const Model::DeleteEventIntegrationRequest& request, const DeleteEventIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The Amazon AppIntegrations APIs are in preview release and are subject to
         * change.</p> <p>Return information about the event integration.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/GetEventIntegration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEventIntegrationOutcome GetEventIntegration(const Model::GetEventIntegrationRequest& request) const;

        /**
         * <p>The Amazon AppIntegrations APIs are in preview release and are subject to
         * change.</p> <p>Return information about the event integration.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/GetEventIntegration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEventIntegrationOutcomeCallable GetEventIntegrationCallable(const Model::GetEventIntegrationRequest& request) const;

        /**
         * <p>The Amazon AppIntegrations APIs are in preview release and are subject to
         * change.</p> <p>Return information about the event integration.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/GetEventIntegration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEventIntegrationAsync(const Model::GetEventIntegrationRequest& request, const GetEventIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The Amazon AppIntegrations APIs are in preview release and are subject to
         * change.</p> <p>Returns a paginated list of event integration associations in the
         * account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/ListEventIntegrationAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEventIntegrationAssociationsOutcome ListEventIntegrationAssociations(const Model::ListEventIntegrationAssociationsRequest& request) const;

        /**
         * <p>The Amazon AppIntegrations APIs are in preview release and are subject to
         * change.</p> <p>Returns a paginated list of event integration associations in the
         * account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/ListEventIntegrationAssociations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEventIntegrationAssociationsOutcomeCallable ListEventIntegrationAssociationsCallable(const Model::ListEventIntegrationAssociationsRequest& request) const;

        /**
         * <p>The Amazon AppIntegrations APIs are in preview release and are subject to
         * change.</p> <p>Returns a paginated list of event integration associations in the
         * account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/ListEventIntegrationAssociations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEventIntegrationAssociationsAsync(const Model::ListEventIntegrationAssociationsRequest& request, const ListEventIntegrationAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The Amazon AppIntegrations APIs are in preview release and are subject to
         * change.</p> <p>Returns a paginated list of event integrations in the
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/ListEventIntegrations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEventIntegrationsOutcome ListEventIntegrations(const Model::ListEventIntegrationsRequest& request) const;

        /**
         * <p>The Amazon AppIntegrations APIs are in preview release and are subject to
         * change.</p> <p>Returns a paginated list of event integrations in the
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/ListEventIntegrations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEventIntegrationsOutcomeCallable ListEventIntegrationsCallable(const Model::ListEventIntegrationsRequest& request) const;

        /**
         * <p>The Amazon AppIntegrations APIs are in preview release and are subject to
         * change.</p> <p>Returns a paginated list of event integrations in the
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/ListEventIntegrations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEventIntegrationsAsync(const Model::ListEventIntegrationsRequest& request, const ListEventIntegrationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The Amazon AppIntegrations APIs are in preview release and are subject to
         * change.</p> <p>Lists the tags for the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>The Amazon AppIntegrations APIs are in preview release and are subject to
         * change.</p> <p>Lists the tags for the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>The Amazon AppIntegrations APIs are in preview release and are subject to
         * change.</p> <p>Lists the tags for the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The Amazon AppIntegrations APIs are in preview release and are subject to
         * change.</p> <p>Adds the specified tags to the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>The Amazon AppIntegrations APIs are in preview release and are subject to
         * change.</p> <p>Adds the specified tags to the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>The Amazon AppIntegrations APIs are in preview release and are subject to
         * change.</p> <p>Adds the specified tags to the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The Amazon AppIntegrations APIs are in preview release and are subject to
         * change.</p> <p>Removes the specified tags from the specified
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>The Amazon AppIntegrations APIs are in preview release and are subject to
         * change.</p> <p>Removes the specified tags from the specified
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>The Amazon AppIntegrations APIs are in preview release and are subject to
         * change.</p> <p>Removes the specified tags from the specified
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The Amazon AppIntegrations APIs are in preview release and are subject to
         * change.</p> <p>Updates the description of an event integration.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/UpdateEventIntegration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEventIntegrationOutcome UpdateEventIntegration(const Model::UpdateEventIntegrationRequest& request) const;

        /**
         * <p>The Amazon AppIntegrations APIs are in preview release and are subject to
         * change.</p> <p>Updates the description of an event integration.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/UpdateEventIntegration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateEventIntegrationOutcomeCallable UpdateEventIntegrationCallable(const Model::UpdateEventIntegrationRequest& request) const;

        /**
         * <p>The Amazon AppIntegrations APIs are in preview release and are subject to
         * change.</p> <p>Updates the description of an event integration.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/UpdateEventIntegration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateEventIntegrationAsync(const Model::UpdateEventIntegrationRequest& request, const UpdateEventIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateEventIntegrationAsyncHelper(const Model::CreateEventIntegrationRequest& request, const CreateEventIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteEventIntegrationAsyncHelper(const Model::DeleteEventIntegrationRequest& request, const DeleteEventIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetEventIntegrationAsyncHelper(const Model::GetEventIntegrationRequest& request, const GetEventIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListEventIntegrationAssociationsAsyncHelper(const Model::ListEventIntegrationAssociationsRequest& request, const ListEventIntegrationAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListEventIntegrationsAsyncHelper(const Model::ListEventIntegrationsRequest& request, const ListEventIntegrationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateEventIntegrationAsyncHelper(const Model::UpdateEventIntegrationRequest& request, const UpdateEventIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace AppIntegrationsService
} // namespace Aws
