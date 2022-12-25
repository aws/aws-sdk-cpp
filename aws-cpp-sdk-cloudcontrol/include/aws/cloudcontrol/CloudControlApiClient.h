/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudcontrol/CloudControlApi_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/cloudcontrol/CloudControlApiServiceClientModel.h>

namespace Aws
{
namespace CloudControlApi
{
  /**
   * <p>For more information about Amazon Web Services Cloud Control API, see the <a
   * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/what-is-cloudcontrolapi.html">Amazon
   * Web Services Cloud Control API User Guide</a>.</p>
   */
  class AWS_CLOUDCONTROLAPI_API CloudControlApiClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<CloudControlApiClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudControlApiClient(const Aws::CloudControlApi::CloudControlApiClientConfiguration& clientConfiguration = Aws::CloudControlApi::CloudControlApiClientConfiguration(),
                              std::shared_ptr<CloudControlApiEndpointProviderBase> endpointProvider = Aws::MakeShared<CloudControlApiEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudControlApiClient(const Aws::Auth::AWSCredentials& credentials,
                              std::shared_ptr<CloudControlApiEndpointProviderBase> endpointProvider = Aws::MakeShared<CloudControlApiEndpointProvider>(ALLOCATION_TAG),
                              const Aws::CloudControlApi::CloudControlApiClientConfiguration& clientConfiguration = Aws::CloudControlApi::CloudControlApiClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CloudControlApiClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                              std::shared_ptr<CloudControlApiEndpointProviderBase> endpointProvider = Aws::MakeShared<CloudControlApiEndpointProvider>(ALLOCATION_TAG),
                              const Aws::CloudControlApi::CloudControlApiClientConfiguration& clientConfiguration = Aws::CloudControlApi::CloudControlApiClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudControlApiClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudControlApiClient(const Aws::Auth::AWSCredentials& credentials,
                              const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CloudControlApiClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                              const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~CloudControlApiClient();

        /**
         * <p>Cancels the specified resource operation request. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/resource-operations-manage-requests.html#resource-operations-manage-requests-cancel">Canceling
         * resource operation requests</a> in the <i>Amazon Web Services Cloud Control API
         * User Guide</i>.</p> <p>Only resource operations requests with a status of
         * <code>PENDING</code> or <code>IN_PROGRESS</code> can be canceled.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudcontrol-2021-09-30/CancelResourceRequest">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelResourceRequestOutcome CancelResourceRequest(const Model::CancelResourceRequestRequest& request) const;

        /**
         * A Callable wrapper for CancelResourceRequest that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelResourceRequestOutcomeCallable CancelResourceRequestCallable(const Model::CancelResourceRequestRequest& request) const;

        /**
         * An Async wrapper for CancelResourceRequest that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelResourceRequestAsync(const Model::CancelResourceRequestRequest& request, const CancelResourceRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates the specified resource. For more information, see <a
         * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/resource-operations-create.html">Creating
         * a resource</a> in the <i>Amazon Web Services Cloud Control API User
         * Guide</i>.</p> <p>After you have initiated a resource creation request, you can
         * monitor the progress of your request by calling <a
         * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/APIReference/API_GetResourceRequestStatus.html">GetResourceRequestStatus</a>
         * using the <code>RequestToken</code> of the <code>ProgressEvent</code> type
         * returned by <code>CreateResource</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudcontrol-2021-09-30/CreateResource">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateResourceOutcome CreateResource(const Model::CreateResourceRequest& request) const;

        /**
         * A Callable wrapper for CreateResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateResourceOutcomeCallable CreateResourceCallable(const Model::CreateResourceRequest& request) const;

        /**
         * An Async wrapper for CreateResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateResourceAsync(const Model::CreateResourceRequest& request, const CreateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified resource. For details, see <a
         * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/resource-operations-delete.html">Deleting
         * a resource</a> in the <i>Amazon Web Services Cloud Control API User
         * Guide</i>.</p> <p>After you have initiated a resource deletion request, you can
         * monitor the progress of your request by calling <a
         * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/APIReference/API_GetResourceRequestStatus.html">GetResourceRequestStatus</a>
         * using the <code>RequestToken</code> of the <code>ProgressEvent</code> returned
         * by <code>DeleteResource</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudcontrol-2021-09-30/DeleteResource">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourceOutcome DeleteResource(const Model::DeleteResourceRequest& request) const;

        /**
         * A Callable wrapper for DeleteResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteResourceOutcomeCallable DeleteResourceCallable(const Model::DeleteResourceRequest& request) const;

        /**
         * An Async wrapper for DeleteResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteResourceAsync(const Model::DeleteResourceRequest& request, const DeleteResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the current state of the specified resource. For
         * details, see <a
         * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/resource-operations-read.html">Reading
         * a resource's current state</a>.</p> <p>You can use this action to return
         * information about an existing resource in your account and Amazon Web Services
         * Region, whether those resources were provisioned using Cloud Control
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudcontrol-2021-09-30/GetResource">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourceOutcome GetResource(const Model::GetResourceRequest& request) const;

        /**
         * A Callable wrapper for GetResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResourceOutcomeCallable GetResourceCallable(const Model::GetResourceRequest& request) const;

        /**
         * An Async wrapper for GetResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResourceAsync(const Model::GetResourceRequest& request, const GetResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the current status of a resource operation request. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/resource-operations-manage-requests.html#resource-operations-manage-requests-track">Tracking
         * the progress of resource operation requests</a> in the <i>Amazon Web Services
         * Cloud Control API User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudcontrol-2021-09-30/GetResourceRequestStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourceRequestStatusOutcome GetResourceRequestStatus(const Model::GetResourceRequestStatusRequest& request) const;

        /**
         * A Callable wrapper for GetResourceRequestStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResourceRequestStatusOutcomeCallable GetResourceRequestStatusCallable(const Model::GetResourceRequestStatusRequest& request) const;

        /**
         * An Async wrapper for GetResourceRequestStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResourceRequestStatusAsync(const Model::GetResourceRequestStatusRequest& request, const GetResourceRequestStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns existing resource operation requests. This includes requests of all
         * status types. For more information, see <a
         * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/resource-operations-manage-requests.html#resource-operations-manage-requests-list">Listing
         * active resource operation requests</a> in the <i>Amazon Web Services Cloud
         * Control API User Guide</i>.</p>  <p>Resource operation requests expire
         * after 7 days.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudcontrol-2021-09-30/ListResourceRequests">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourceRequestsOutcome ListResourceRequests(const Model::ListResourceRequestsRequest& request) const;

        /**
         * A Callable wrapper for ListResourceRequests that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListResourceRequestsOutcomeCallable ListResourceRequestsCallable(const Model::ListResourceRequestsRequest& request) const;

        /**
         * An Async wrapper for ListResourceRequests that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListResourceRequestsAsync(const Model::ListResourceRequestsRequest& request, const ListResourceRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the specified resources. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/resource-operations-list.html">Discovering
         * resources</a> in the <i>Amazon Web Services Cloud Control API User
         * Guide</i>.</p> <p>You can use this action to return information about existing
         * resources in your account and Amazon Web Services Region, whether those
         * resources were provisioned using Cloud Control API.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudcontrol-2021-09-30/ListResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourcesOutcome ListResources(const Model::ListResourcesRequest& request) const;

        /**
         * A Callable wrapper for ListResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListResourcesOutcomeCallable ListResourcesCallable(const Model::ListResourcesRequest& request) const;

        /**
         * An Async wrapper for ListResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListResourcesAsync(const Model::ListResourcesRequest& request, const ListResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified property values in the resource.</p> <p>You specify
         * your resource property updates as a list of patch operations contained in a JSON
         * patch document that adheres to the <a
         * href="https://datatracker.ietf.org/doc/html/rfc6902"> <i>RFC 6902 - JavaScript
         * Object Notation (JSON) Patch</i> </a> standard.</p> <p>For details on how Cloud
         * Control API performs resource update operations, see <a
         * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/resource-operations-update.html">Updating
         * a resource</a> in the <i>Amazon Web Services Cloud Control API User
         * Guide</i>.</p> <p>After you have initiated a resource update request, you can
         * monitor the progress of your request by calling <a
         * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/APIReference/API_GetResourceRequestStatus.html">GetResourceRequestStatus</a>
         * using the <code>RequestToken</code> of the <code>ProgressEvent</code> returned
         * by <code>UpdateResource</code>.</p> <p>For more information about the properties
         * of a specific resource, refer to the related topic for the resource in the <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">Resource
         * and property types reference</a> in the <i>CloudFormation Users
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudcontrol-2021-09-30/UpdateResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateResourceOutcome UpdateResource(const Model::UpdateResourceRequest& request) const;

        /**
         * A Callable wrapper for UpdateResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateResourceOutcomeCallable UpdateResourceCallable(const Model::UpdateResourceRequest& request) const;

        /**
         * An Async wrapper for UpdateResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateResourceAsync(const Model::UpdateResourceRequest& request, const UpdateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<CloudControlApiEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<CloudControlApiClient>;
      void init(const CloudControlApiClientConfiguration& clientConfiguration);

      CloudControlApiClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<CloudControlApiEndpointProviderBase> m_endpointProvider;
  };

} // namespace CloudControlApi
} // namespace Aws
