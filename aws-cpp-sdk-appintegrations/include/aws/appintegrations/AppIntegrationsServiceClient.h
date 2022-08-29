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
#include <aws/appintegrations/model/CreateDataIntegrationResult.h>
#include <aws/appintegrations/model/CreateEventIntegrationResult.h>
#include <aws/appintegrations/model/DeleteDataIntegrationResult.h>
#include <aws/appintegrations/model/DeleteEventIntegrationResult.h>
#include <aws/appintegrations/model/GetDataIntegrationResult.h>
#include <aws/appintegrations/model/GetEventIntegrationResult.h>
#include <aws/appintegrations/model/ListDataIntegrationAssociationsResult.h>
#include <aws/appintegrations/model/ListDataIntegrationsResult.h>
#include <aws/appintegrations/model/ListEventIntegrationAssociationsResult.h>
#include <aws/appintegrations/model/ListEventIntegrationsResult.h>
#include <aws/appintegrations/model/ListTagsForResourceResult.h>
#include <aws/appintegrations/model/TagResourceResult.h>
#include <aws/appintegrations/model/UntagResourceResult.h>
#include <aws/appintegrations/model/UpdateDataIntegrationResult.h>
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
        class CreateDataIntegrationRequest;
        class CreateEventIntegrationRequest;
        class DeleteDataIntegrationRequest;
        class DeleteEventIntegrationRequest;
        class GetDataIntegrationRequest;
        class GetEventIntegrationRequest;
        class ListDataIntegrationAssociationsRequest;
        class ListDataIntegrationsRequest;
        class ListEventIntegrationAssociationsRequest;
        class ListEventIntegrationsRequest;
        class ListTagsForResourceRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateDataIntegrationRequest;
        class UpdateEventIntegrationRequest;

        typedef Aws::Utils::Outcome<CreateDataIntegrationResult, AppIntegrationsServiceError> CreateDataIntegrationOutcome;
        typedef Aws::Utils::Outcome<CreateEventIntegrationResult, AppIntegrationsServiceError> CreateEventIntegrationOutcome;
        typedef Aws::Utils::Outcome<DeleteDataIntegrationResult, AppIntegrationsServiceError> DeleteDataIntegrationOutcome;
        typedef Aws::Utils::Outcome<DeleteEventIntegrationResult, AppIntegrationsServiceError> DeleteEventIntegrationOutcome;
        typedef Aws::Utils::Outcome<GetDataIntegrationResult, AppIntegrationsServiceError> GetDataIntegrationOutcome;
        typedef Aws::Utils::Outcome<GetEventIntegrationResult, AppIntegrationsServiceError> GetEventIntegrationOutcome;
        typedef Aws::Utils::Outcome<ListDataIntegrationAssociationsResult, AppIntegrationsServiceError> ListDataIntegrationAssociationsOutcome;
        typedef Aws::Utils::Outcome<ListDataIntegrationsResult, AppIntegrationsServiceError> ListDataIntegrationsOutcome;
        typedef Aws::Utils::Outcome<ListEventIntegrationAssociationsResult, AppIntegrationsServiceError> ListEventIntegrationAssociationsOutcome;
        typedef Aws::Utils::Outcome<ListEventIntegrationsResult, AppIntegrationsServiceError> ListEventIntegrationsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, AppIntegrationsServiceError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, AppIntegrationsServiceError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, AppIntegrationsServiceError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateDataIntegrationResult, AppIntegrationsServiceError> UpdateDataIntegrationOutcome;
        typedef Aws::Utils::Outcome<UpdateEventIntegrationResult, AppIntegrationsServiceError> UpdateEventIntegrationOutcome;

        typedef std::future<CreateDataIntegrationOutcome> CreateDataIntegrationOutcomeCallable;
        typedef std::future<CreateEventIntegrationOutcome> CreateEventIntegrationOutcomeCallable;
        typedef std::future<DeleteDataIntegrationOutcome> DeleteDataIntegrationOutcomeCallable;
        typedef std::future<DeleteEventIntegrationOutcome> DeleteEventIntegrationOutcomeCallable;
        typedef std::future<GetDataIntegrationOutcome> GetDataIntegrationOutcomeCallable;
        typedef std::future<GetEventIntegrationOutcome> GetEventIntegrationOutcomeCallable;
        typedef std::future<ListDataIntegrationAssociationsOutcome> ListDataIntegrationAssociationsOutcomeCallable;
        typedef std::future<ListDataIntegrationsOutcome> ListDataIntegrationsOutcomeCallable;
        typedef std::future<ListEventIntegrationAssociationsOutcome> ListEventIntegrationAssociationsOutcomeCallable;
        typedef std::future<ListEventIntegrationsOutcome> ListEventIntegrationsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateDataIntegrationOutcome> UpdateDataIntegrationOutcomeCallable;
        typedef std::future<UpdateEventIntegrationOutcome> UpdateEventIntegrationOutcomeCallable;
} // namespace Model

  class AppIntegrationsServiceClient;

    typedef std::function<void(const AppIntegrationsServiceClient*, const Model::CreateDataIntegrationRequest&, const Model::CreateDataIntegrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDataIntegrationResponseReceivedHandler;
    typedef std::function<void(const AppIntegrationsServiceClient*, const Model::CreateEventIntegrationRequest&, const Model::CreateEventIntegrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEventIntegrationResponseReceivedHandler;
    typedef std::function<void(const AppIntegrationsServiceClient*, const Model::DeleteDataIntegrationRequest&, const Model::DeleteDataIntegrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDataIntegrationResponseReceivedHandler;
    typedef std::function<void(const AppIntegrationsServiceClient*, const Model::DeleteEventIntegrationRequest&, const Model::DeleteEventIntegrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEventIntegrationResponseReceivedHandler;
    typedef std::function<void(const AppIntegrationsServiceClient*, const Model::GetDataIntegrationRequest&, const Model::GetDataIntegrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDataIntegrationResponseReceivedHandler;
    typedef std::function<void(const AppIntegrationsServiceClient*, const Model::GetEventIntegrationRequest&, const Model::GetEventIntegrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEventIntegrationResponseReceivedHandler;
    typedef std::function<void(const AppIntegrationsServiceClient*, const Model::ListDataIntegrationAssociationsRequest&, const Model::ListDataIntegrationAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDataIntegrationAssociationsResponseReceivedHandler;
    typedef std::function<void(const AppIntegrationsServiceClient*, const Model::ListDataIntegrationsRequest&, const Model::ListDataIntegrationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDataIntegrationsResponseReceivedHandler;
    typedef std::function<void(const AppIntegrationsServiceClient*, const Model::ListEventIntegrationAssociationsRequest&, const Model::ListEventIntegrationAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEventIntegrationAssociationsResponseReceivedHandler;
    typedef std::function<void(const AppIntegrationsServiceClient*, const Model::ListEventIntegrationsRequest&, const Model::ListEventIntegrationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEventIntegrationsResponseReceivedHandler;
    typedef std::function<void(const AppIntegrationsServiceClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const AppIntegrationsServiceClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const AppIntegrationsServiceClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const AppIntegrationsServiceClient*, const Model::UpdateDataIntegrationRequest&, const Model::UpdateDataIntegrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDataIntegrationResponseReceivedHandler;
    typedef std::function<void(const AppIntegrationsServiceClient*, const Model::UpdateEventIntegrationRequest&, const Model::UpdateEventIntegrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEventIntegrationResponseReceivedHandler;

  /**
   * <p>The Amazon AppIntegrations service enables you to configure and reuse
   * connections to external applications.</p> <p>For information about how you can
   * use external applications with Amazon Connect, see <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/crm.html">Set up
   * pre-built integrations</a> and <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/amazon-connect-wisdom.html">Deliver
   * information to agents using Amazon Connect Wisdom</a> in the <i>Amazon Connect
   * Administrator Guide</i>.</p>
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
        AppIntegrationsServiceClient(const Aws::Auth::AWSCredentials& credentials,
                                     const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AppIntegrationsServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                     const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~AppIntegrationsServiceClient();


        /**
         * <p>Creates and persists a DataIntegration resource.</p>  <p>You cannot
         * create a DataIntegration association for a DataIntegration that has been
         * previously associated. Use a different DataIntegration, or recreate the
         * DataIntegration using the <code>CreateDataIntegration</code> API.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/CreateDataIntegration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDataIntegrationOutcome CreateDataIntegration(const Model::CreateDataIntegrationRequest& request) const;

        /**
         * A Callable wrapper for CreateDataIntegration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDataIntegrationOutcomeCallable CreateDataIntegrationCallable(const Model::CreateDataIntegrationRequest& request) const;

        /**
         * An Async wrapper for CreateDataIntegration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDataIntegrationAsync(const Model::CreateDataIntegrationRequest& request, const CreateDataIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an EventIntegration, given a specified name, description, and a
         * reference to an Amazon EventBridge bus in your account and a partner event
         * source that pushes events to that bus. No objects are created in the your
         * account, only metadata that is persisted on the EventIntegration control
         * plane.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/CreateEventIntegration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEventIntegrationOutcome CreateEventIntegration(const Model::CreateEventIntegrationRequest& request) const;

        /**
         * A Callable wrapper for CreateEventIntegration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateEventIntegrationOutcomeCallable CreateEventIntegrationCallable(const Model::CreateEventIntegrationRequest& request) const;

        /**
         * An Async wrapper for CreateEventIntegration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateEventIntegrationAsync(const Model::CreateEventIntegrationRequest& request, const CreateEventIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the DataIntegration. Only DataIntegrations that don't have any
         * DataIntegrationAssociations can be deleted. Deleting a DataIntegration also
         * deletes the underlying Amazon AppFlow flow and service linked role. </p> 
         * <p>You cannot create a DataIntegration association for a DataIntegration that
         * has been previously associated. Use a different DataIntegration, or recreate the
         * DataIntegration using the <a
         * href="https://docs.aws.amazon.com/appintegrations/latest/APIReference/API_CreateDataIntegration.html">CreateDataIntegration</a>
         * API.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/DeleteDataIntegration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDataIntegrationOutcome DeleteDataIntegration(const Model::DeleteDataIntegrationRequest& request) const;

        /**
         * A Callable wrapper for DeleteDataIntegration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDataIntegrationOutcomeCallable DeleteDataIntegrationCallable(const Model::DeleteDataIntegrationRequest& request) const;

        /**
         * An Async wrapper for DeleteDataIntegration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDataIntegrationAsync(const Model::DeleteDataIntegrationRequest& request, const DeleteDataIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified existing event integration. If the event integration is
         * associated with clients, the request is rejected.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/DeleteEventIntegration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEventIntegrationOutcome DeleteEventIntegration(const Model::DeleteEventIntegrationRequest& request) const;

        /**
         * A Callable wrapper for DeleteEventIntegration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEventIntegrationOutcomeCallable DeleteEventIntegrationCallable(const Model::DeleteEventIntegrationRequest& request) const;

        /**
         * An Async wrapper for DeleteEventIntegration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEventIntegrationAsync(const Model::DeleteEventIntegrationRequest& request, const DeleteEventIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the DataIntegration.</p>  <p>You cannot
         * create a DataIntegration association for a DataIntegration that has been
         * previously associated. Use a different DataIntegration, or recreate the
         * DataIntegration using the <a
         * href="https://docs.aws.amazon.com/appintegrations/latest/APIReference/API_CreateDataIntegration.html">CreateDataIntegration</a>
         * API.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/GetDataIntegration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDataIntegrationOutcome GetDataIntegration(const Model::GetDataIntegrationRequest& request) const;

        /**
         * A Callable wrapper for GetDataIntegration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDataIntegrationOutcomeCallable GetDataIntegrationCallable(const Model::GetDataIntegrationRequest& request) const;

        /**
         * An Async wrapper for GetDataIntegration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDataIntegrationAsync(const Model::GetDataIntegrationRequest& request, const GetDataIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the event integration.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/GetEventIntegration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEventIntegrationOutcome GetEventIntegration(const Model::GetEventIntegrationRequest& request) const;

        /**
         * A Callable wrapper for GetEventIntegration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEventIntegrationOutcomeCallable GetEventIntegrationCallable(const Model::GetEventIntegrationRequest& request) const;

        /**
         * An Async wrapper for GetEventIntegration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEventIntegrationAsync(const Model::GetEventIntegrationRequest& request, const GetEventIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a paginated list of DataIntegration associations in the account.</p>
         *  <p>You cannot create a DataIntegration association for a DataIntegration
         * that has been previously associated. Use a different DataIntegration, or
         * recreate the DataIntegration using the <a
         * href="https://docs.aws.amazon.com/appintegrations/latest/APIReference/API_CreateDataIntegration.html">CreateDataIntegration</a>
         * API.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/ListDataIntegrationAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDataIntegrationAssociationsOutcome ListDataIntegrationAssociations(const Model::ListDataIntegrationAssociationsRequest& request) const;

        /**
         * A Callable wrapper for ListDataIntegrationAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDataIntegrationAssociationsOutcomeCallable ListDataIntegrationAssociationsCallable(const Model::ListDataIntegrationAssociationsRequest& request) const;

        /**
         * An Async wrapper for ListDataIntegrationAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDataIntegrationAssociationsAsync(const Model::ListDataIntegrationAssociationsRequest& request, const ListDataIntegrationAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a paginated list of DataIntegrations in the account.</p> 
         * <p>You cannot create a DataIntegration association for a DataIntegration that
         * has been previously associated. Use a different DataIntegration, or recreate the
         * DataIntegration using the <a
         * href="https://docs.aws.amazon.com/appintegrations/latest/APIReference/API_CreateDataIntegration.html">CreateDataIntegration</a>
         * API.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/ListDataIntegrations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDataIntegrationsOutcome ListDataIntegrations(const Model::ListDataIntegrationsRequest& request) const;

        /**
         * A Callable wrapper for ListDataIntegrations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDataIntegrationsOutcomeCallable ListDataIntegrationsCallable(const Model::ListDataIntegrationsRequest& request) const;

        /**
         * An Async wrapper for ListDataIntegrations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDataIntegrationsAsync(const Model::ListDataIntegrationsRequest& request, const ListDataIntegrationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a paginated list of event integration associations in the account.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/ListEventIntegrationAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEventIntegrationAssociationsOutcome ListEventIntegrationAssociations(const Model::ListEventIntegrationAssociationsRequest& request) const;

        /**
         * A Callable wrapper for ListEventIntegrationAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEventIntegrationAssociationsOutcomeCallable ListEventIntegrationAssociationsCallable(const Model::ListEventIntegrationAssociationsRequest& request) const;

        /**
         * An Async wrapper for ListEventIntegrationAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEventIntegrationAssociationsAsync(const Model::ListEventIntegrationAssociationsRequest& request, const ListEventIntegrationAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a paginated list of event integrations in the account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/ListEventIntegrations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEventIntegrationsOutcome ListEventIntegrations(const Model::ListEventIntegrationsRequest& request) const;

        /**
         * A Callable wrapper for ListEventIntegrations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEventIntegrationsOutcomeCallable ListEventIntegrationsCallable(const Model::ListEventIntegrationsRequest& request) const;

        /**
         * An Async wrapper for ListEventIntegrations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEventIntegrationsAsync(const Model::ListEventIntegrationsRequest& request, const ListEventIntegrationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags for the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds the specified tags to the specified resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/TagResource">AWS
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
         * <p>Removes the specified tags from the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/UntagResource">AWS
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
         * <p>Updates the description of a DataIntegration.</p>  <p>You cannot create
         * a DataIntegration association for a DataIntegration that has been previously
         * associated. Use a different DataIntegration, or recreate the DataIntegration
         * using the <a
         * href="https://docs.aws.amazon.com/appintegrations/latest/APIReference/API_CreateDataIntegration.html">CreateDataIntegration</a>
         * API.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/UpdateDataIntegration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDataIntegrationOutcome UpdateDataIntegration(const Model::UpdateDataIntegrationRequest& request) const;

        /**
         * A Callable wrapper for UpdateDataIntegration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDataIntegrationOutcomeCallable UpdateDataIntegrationCallable(const Model::UpdateDataIntegrationRequest& request) const;

        /**
         * An Async wrapper for UpdateDataIntegration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDataIntegrationAsync(const Model::UpdateDataIntegrationRequest& request, const UpdateDataIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the description of an event integration.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/UpdateEventIntegration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEventIntegrationOutcome UpdateEventIntegration(const Model::UpdateEventIntegrationRequest& request) const;

        /**
         * A Callable wrapper for UpdateEventIntegration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateEventIntegrationOutcomeCallable UpdateEventIntegrationCallable(const Model::UpdateEventIntegrationRequest& request) const;

        /**
         * An Async wrapper for UpdateEventIntegration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateEventIntegrationAsync(const Model::UpdateEventIntegrationRequest& request, const UpdateEventIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateDataIntegrationAsyncHelper(const Model::CreateDataIntegrationRequest& request, const CreateDataIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateEventIntegrationAsyncHelper(const Model::CreateEventIntegrationRequest& request, const CreateEventIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDataIntegrationAsyncHelper(const Model::DeleteDataIntegrationRequest& request, const DeleteDataIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteEventIntegrationAsyncHelper(const Model::DeleteEventIntegrationRequest& request, const DeleteEventIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDataIntegrationAsyncHelper(const Model::GetDataIntegrationRequest& request, const GetDataIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetEventIntegrationAsyncHelper(const Model::GetEventIntegrationRequest& request, const GetEventIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDataIntegrationAssociationsAsyncHelper(const Model::ListDataIntegrationAssociationsRequest& request, const ListDataIntegrationAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDataIntegrationsAsyncHelper(const Model::ListDataIntegrationsRequest& request, const ListDataIntegrationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListEventIntegrationAssociationsAsyncHelper(const Model::ListEventIntegrationAssociationsRequest& request, const ListEventIntegrationAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListEventIntegrationsAsyncHelper(const Model::ListEventIntegrationsRequest& request, const ListEventIntegrationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDataIntegrationAsyncHelper(const Model::UpdateDataIntegrationRequest& request, const UpdateDataIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateEventIntegrationAsyncHelper(const Model::UpdateEventIntegrationRequest& request, const UpdateEventIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace AppIntegrationsService
} // namespace Aws
