/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/interconnect/InterconnectPaginationBase.h>
#include <aws/interconnect/InterconnectServiceClientModel.h>
#include <aws/interconnect/InterconnectWaiter.h>
#include <aws/interconnect/Interconnect_EXPORTS.h>

namespace Aws {
namespace Interconnect {
/**
 * <p>Provides managed connections between your AWS network resources and select
 * partner network resources.</p>
 */
class AWS_INTERCONNECT_API InterconnectClient : public Aws::Client::AWSRpcV2CborClient,
                                                public Aws::Client::ClientWithAsyncTemplateMethods<InterconnectClient>,
                                                public InterconnectPaginationBase<InterconnectClient>,
                                                public InterconnectWaiter<InterconnectClient> {
 public:
  typedef Aws::Client::AWSRpcV2CborClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef InterconnectClientConfiguration ClientConfigurationType;
  typedef InterconnectEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  InterconnectClient(
      const Aws::Interconnect::InterconnectClientConfiguration& clientConfiguration = Aws::Interconnect::InterconnectClientConfiguration(),
      std::shared_ptr<InterconnectEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  InterconnectClient(
      const Aws::Auth::AWSCredentials& credentials, std::shared_ptr<InterconnectEndpointProviderBase> endpointProvider = nullptr,
      const Aws::Interconnect::InterconnectClientConfiguration& clientConfiguration = Aws::Interconnect::InterconnectClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  InterconnectClient(
      const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
      std::shared_ptr<InterconnectEndpointProviderBase> endpointProvider = nullptr,
      const Aws::Interconnect::InterconnectClientConfiguration& clientConfiguration = Aws::Interconnect::InterconnectClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  InterconnectClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  InterconnectClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  InterconnectClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                     const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~InterconnectClient();

  /**
   * <p>Accepts a connection proposal which was generated at a supported partner's
   * portal.</p> <p>The proposal contains the Environment and bandwidth that were
   * chosen on the partner's portal and cannot be modified.</p> <p>Upon accepting the
   * proposal a connection will be made between the AWS network as accessed via the
   * selected Attach Point and the network previously selected network on the
   * partner's portal.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/interconnect-2022-07-26/AcceptConnectionProposal">AWS
   * API Reference</a></p>
   */
  virtual Model::AcceptConnectionProposalOutcome AcceptConnectionProposal(const Model::AcceptConnectionProposalRequest& request) const;

  /**
   * A Callable wrapper for AcceptConnectionProposal that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename AcceptConnectionProposalRequestT = Model::AcceptConnectionProposalRequest>
  Model::AcceptConnectionProposalOutcomeCallable AcceptConnectionProposalCallable(const AcceptConnectionProposalRequestT& request) const {
    return SubmitCallable(&InterconnectClient::AcceptConnectionProposal, request);
  }

  /**
   * An Async wrapper for AcceptConnectionProposal that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename AcceptConnectionProposalRequestT = Model::AcceptConnectionProposalRequest>
  void AcceptConnectionProposalAsync(const AcceptConnectionProposalRequestT& request,
                                     const AcceptConnectionProposalResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&InterconnectClient::AcceptConnectionProposal, request, handler, context);
  }

  /**
   * <p>Initiates the process to create a Connection across the specified
   * Environment. </p> <p>The Environment dictates the specified partner and location
   * to which the other end of the connection should attach. You can see a list of
   * the available Environments by calling <a>ListEnvironments</a> </p> <p>The Attach
   * Point specifies where within the AWS Network your connection will logically
   * connect.</p> <p>After a successful call to this method, the resulting
   * <a>Connection</a> will return an Activation Key which will need to be brought to
   * the specific partner's portal to confirm the <a>Connection</a> on both sides.
   * (See <a>Environment$activationPageUrl</a> for a direct link to the partner
   * portal). </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/interconnect-2022-07-26/CreateConnection">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateConnectionOutcome CreateConnection(const Model::CreateConnectionRequest& request) const;

  /**
   * A Callable wrapper for CreateConnection that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateConnectionRequestT = Model::CreateConnectionRequest>
  Model::CreateConnectionOutcomeCallable CreateConnectionCallable(const CreateConnectionRequestT& request) const {
    return SubmitCallable(&InterconnectClient::CreateConnection, request);
  }

  /**
   * An Async wrapper for CreateConnection that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CreateConnectionRequestT = Model::CreateConnectionRequest>
  void CreateConnectionAsync(const CreateConnectionRequestT& request, const CreateConnectionResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&InterconnectClient::CreateConnection, request, handler, context);
  }

  /**
   * <p>Deletes an existing Connection with the supplied identifier.</p> <p>This
   * operation will also inform the remote partner of your intention to delete your
   * connection. Note, the partner may still require you to delete to fully clean up
   * resources, but the network connectivity provided by the <a>Connection</a> will
   * cease to exist.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/interconnect-2022-07-26/DeleteConnection">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteConnectionOutcome DeleteConnection(const Model::DeleteConnectionRequest& request) const;

  /**
   * A Callable wrapper for DeleteConnection that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteConnectionRequestT = Model::DeleteConnectionRequest>
  Model::DeleteConnectionOutcomeCallable DeleteConnectionCallable(const DeleteConnectionRequestT& request) const {
    return SubmitCallable(&InterconnectClient::DeleteConnection, request);
  }

  /**
   * An Async wrapper for DeleteConnection that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DeleteConnectionRequestT = Model::DeleteConnectionRequest>
  void DeleteConnectionAsync(const DeleteConnectionRequestT& request, const DeleteConnectionResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&InterconnectClient::DeleteConnection, request, handler, context);
  }

  /**
   * <p>Describes the details of a connection proposal generated at a partner's
   * portal.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/interconnect-2022-07-26/DescribeConnectionProposal">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribeConnectionProposalOutcome DescribeConnectionProposal(
      const Model::DescribeConnectionProposalRequest& request) const;

  /**
   * A Callable wrapper for DescribeConnectionProposal that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename DescribeConnectionProposalRequestT = Model::DescribeConnectionProposalRequest>
  Model::DescribeConnectionProposalOutcomeCallable DescribeConnectionProposalCallable(
      const DescribeConnectionProposalRequestT& request) const {
    return SubmitCallable(&InterconnectClient::DescribeConnectionProposal, request);
  }

  /**
   * An Async wrapper for DescribeConnectionProposal that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DescribeConnectionProposalRequestT = Model::DescribeConnectionProposalRequest>
  void DescribeConnectionProposalAsync(const DescribeConnectionProposalRequestT& request,
                                       const DescribeConnectionProposalResponseReceivedHandler& handler,
                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&InterconnectClient::DescribeConnectionProposal, request, handler, context);
  }

  /**
   * <p>Describes the current state of a Connection resource as specified by the
   * identifier. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/interconnect-2022-07-26/GetConnection">AWS
   * API Reference</a></p>
   */
  virtual Model::GetConnectionOutcome GetConnection(const Model::GetConnectionRequest& request) const;

  /**
   * A Callable wrapper for GetConnection that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetConnectionRequestT = Model::GetConnectionRequest>
  Model::GetConnectionOutcomeCallable GetConnectionCallable(const GetConnectionRequestT& request) const {
    return SubmitCallable(&InterconnectClient::GetConnection, request);
  }

  /**
   * An Async wrapper for GetConnection that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetConnectionRequestT = Model::GetConnectionRequest>
  void GetConnectionAsync(const GetConnectionRequestT& request, const GetConnectionResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&InterconnectClient::GetConnection, request, handler, context);
  }

  /**
   * <p>Describes a specific <a>Environment</a> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/interconnect-2022-07-26/GetEnvironment">AWS
   * API Reference</a></p>
   */
  virtual Model::GetEnvironmentOutcome GetEnvironment(const Model::GetEnvironmentRequest& request) const;

  /**
   * A Callable wrapper for GetEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetEnvironmentRequestT = Model::GetEnvironmentRequest>
  Model::GetEnvironmentOutcomeCallable GetEnvironmentCallable(const GetEnvironmentRequestT& request) const {
    return SubmitCallable(&InterconnectClient::GetEnvironment, request);
  }

  /**
   * An Async wrapper for GetEnvironment that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetEnvironmentRequestT = Model::GetEnvironmentRequest>
  void GetEnvironmentAsync(const GetEnvironmentRequestT& request, const GetEnvironmentResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&InterconnectClient::GetEnvironment, request, handler, context);
  }

  /**
   * <p>Lists all Attach Points the caller has access to that are valid for the
   * specified <a>Environment</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/interconnect-2022-07-26/ListAttachPoints">AWS
   * API Reference</a></p>
   */
  virtual Model::ListAttachPointsOutcome ListAttachPoints(const Model::ListAttachPointsRequest& request) const;

  /**
   * A Callable wrapper for ListAttachPoints that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListAttachPointsRequestT = Model::ListAttachPointsRequest>
  Model::ListAttachPointsOutcomeCallable ListAttachPointsCallable(const ListAttachPointsRequestT& request) const {
    return SubmitCallable(&InterconnectClient::ListAttachPoints, request);
  }

  /**
   * An Async wrapper for ListAttachPoints that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListAttachPointsRequestT = Model::ListAttachPointsRequest>
  void ListAttachPointsAsync(const ListAttachPointsRequestT& request, const ListAttachPointsResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&InterconnectClient::ListAttachPoints, request, handler, context);
  }

  /**
   * <p>Lists all connection objects to which the caller has access.</p> <p>Allows
   * for optional filtering by the following properties:</p> <ul> <li> <p>
   * <code>state</code> </p> </li> <li> <p> <code>environmentId</code> </p> </li>
   * <li> <p> <code>provider</code> </p> </li> <li> <p> <code>attach point</code>
   * </p> </li> </ul> <p>Only <a>Connection</a> objects matching all filters will be
   * returned.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/interconnect-2022-07-26/ListConnections">AWS
   * API Reference</a></p>
   */
  virtual Model::ListConnectionsOutcome ListConnections(const Model::ListConnectionsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListConnections that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListConnectionsRequestT = Model::ListConnectionsRequest>
  Model::ListConnectionsOutcomeCallable ListConnectionsCallable(const ListConnectionsRequestT& request = {}) const {
    return SubmitCallable(&InterconnectClient::ListConnections, request);
  }

  /**
   * An Async wrapper for ListConnections that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListConnectionsRequestT = Model::ListConnectionsRequest>
  void ListConnectionsAsync(const ListConnectionsResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                            const ListConnectionsRequestT& request = {}) const {
    return SubmitAsync(&InterconnectClient::ListConnections, request, handler, context);
  }

  /**
   * <p>Lists all of the environments that can produce connections that will land in
   * the called AWS region.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/interconnect-2022-07-26/ListEnvironments">AWS
   * API Reference</a></p>
   */
  virtual Model::ListEnvironmentsOutcome ListEnvironments(const Model::ListEnvironmentsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListEnvironments that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListEnvironmentsRequestT = Model::ListEnvironmentsRequest>
  Model::ListEnvironmentsOutcomeCallable ListEnvironmentsCallable(const ListEnvironmentsRequestT& request = {}) const {
    return SubmitCallable(&InterconnectClient::ListEnvironments, request);
  }

  /**
   * An Async wrapper for ListEnvironments that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListEnvironmentsRequestT = Model::ListEnvironmentsRequest>
  void ListEnvironmentsAsync(const ListEnvironmentsResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                             const ListEnvironmentsRequestT& request = {}) const {
    return SubmitAsync(&InterconnectClient::ListEnvironments, request, handler, context);
  }

  /**
   * <p>List all current tags on the specified resource. Currently this supports
   * <a>Connection</a> resources. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/interconnect-2022-07-26/ListTagsForResource">AWS
   * API Reference</a></p>
   */
  virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

  /**
   * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const {
    return SubmitCallable(&InterconnectClient::ListTagsForResource, request);
  }

  /**
   * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&InterconnectClient::ListTagsForResource, request, handler, context);
  }

  /**
   * <p>Add new tags to the specified resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/interconnect-2022-07-26/TagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

  /**
   * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const {
    return SubmitCallable(&InterconnectClient::TagResource, request);
  }

  /**
   * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&InterconnectClient::TagResource, request, handler, context);
  }

  /**
   * <p>Removes tags from the specified resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/interconnect-2022-07-26/UntagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

  /**
   * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const {
    return SubmitCallable(&InterconnectClient::UntagResource, request);
  }

  /**
   * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&InterconnectClient::UntagResource, request, handler, context);
  }

  /**
   * <p>Modifies an existing connection. Currently we support modifications to the
   * connection's description and/or bandwidth.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/interconnect-2022-07-26/UpdateConnection">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateConnectionOutcome UpdateConnection(const Model::UpdateConnectionRequest& request) const;

  /**
   * A Callable wrapper for UpdateConnection that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateConnectionRequestT = Model::UpdateConnectionRequest>
  Model::UpdateConnectionOutcomeCallable UpdateConnectionCallable(const UpdateConnectionRequestT& request) const {
    return SubmitCallable(&InterconnectClient::UpdateConnection, request);
  }

  /**
   * An Async wrapper for UpdateConnection that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename UpdateConnectionRequestT = Model::UpdateConnectionRequest>
  void UpdateConnectionAsync(const UpdateConnectionRequestT& request, const UpdateConnectionResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&InterconnectClient::UpdateConnection, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<InterconnectEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<InterconnectClient>;
  void init(const InterconnectClientConfiguration& clientConfiguration);

  typedef Aws::Utils::Outcome<Aws::AmazonWebServiceResult<RESPONSE>, InterconnectError> InvokeOperationOutcome;

  InvokeOperationOutcome InvokeServiceOperation(const AmazonWebServiceRequest& request, Aws::Http::HttpMethod httpMethod) const;

  InterconnectClientConfiguration m_clientConfiguration;
  std::shared_ptr<InterconnectEndpointProviderBase> m_endpointProvider;
};

}  // namespace Interconnect
}  // namespace Aws
