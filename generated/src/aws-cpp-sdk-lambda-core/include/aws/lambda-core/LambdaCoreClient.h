/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda-core/LambdaCorePaginationBase.h>
#include <aws/lambda-core/LambdaCoreServiceClientModel.h>
#include <aws/lambda-core/LambdaCoreWaiter.h>
#include <aws/lambda-core/LambdaCore_EXPORTS.h>

namespace Aws {
namespace LambdaCore {
/**
 * <p>AWS Lambda Core is a set of APIs for managing shared infrastructure resources
 * used by AWS Lambda. The Lambda Core API provides operations for creating and
 * managing network connectors that enable Lambda MicroVMs to access resources in
 * your Amazon Virtual Private Cloud (Amazon VPC).</p> <p>Network connectors
 * provision elastic network interfaces (ENIs) in your VPC subnets, providing a
 * managed network path from Lambda compute environments to private resources such
 * as Amazon RDS databases, Amazon ElastiCache clusters, and internal APIs. You
 * create a network connector once and attach it to one or more Lambda MicroVMs at
 * run time.</p>
 */
class AWS_LAMBDACORE_API LambdaCoreClient : public Aws::Client::AWSJsonClient,
                                            public Aws::Client::ClientWithAsyncTemplateMethods<LambdaCoreClient>,
                                            public LambdaCorePaginationBase<LambdaCoreClient>,
                                            public LambdaCoreWaiter<LambdaCoreClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef LambdaCoreClientConfiguration ClientConfigurationType;
  typedef LambdaCoreEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  LambdaCoreClient(
      const Aws::LambdaCore::LambdaCoreClientConfiguration& clientConfiguration = Aws::LambdaCore::LambdaCoreClientConfiguration(),
      std::shared_ptr<LambdaCoreEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  LambdaCoreClient(
      const Aws::Auth::AWSCredentials& credentials, std::shared_ptr<LambdaCoreEndpointProviderBase> endpointProvider = nullptr,
      const Aws::LambdaCore::LambdaCoreClientConfiguration& clientConfiguration = Aws::LambdaCore::LambdaCoreClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  LambdaCoreClient(
      const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
      std::shared_ptr<LambdaCoreEndpointProviderBase> endpointProvider = nullptr,
      const Aws::LambdaCore::LambdaCoreClientConfiguration& clientConfiguration = Aws::LambdaCore::LambdaCoreClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  LambdaCoreClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  LambdaCoreClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  LambdaCoreClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                   const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~LambdaCoreClient();

  /**
   * <p>Creates a network connector that enables Lambda compute resources to route
   * outbound traffic through your Amazon VPC. The network connector provisions
   * elastic network interfaces (ENIs) in the subnets you specify, providing a
   * managed network path to private resources such as databases, caches, and
   * internal APIs.</p> <p>This operation is asynchronous. The network connector
   * starts in <code>PENDING</code> state while ENIs are provisioned in your VPC
   * (provisioning typically takes up to 10 minutes). Use
   * <code>GetNetworkConnector</code> to poll the connector state until it reaches
   * <code>ACTIVE</code>. Once active, you can attach the connector to Lambda
   * MicroVMs at run time using the <code>egressNetworkConnectors</code> parameter on
   * <code>RunMicroVm</code>.</p> <p>This operation is idempotent when you provide a
   * <code>ClientToken</code> — if you retry a request that completed successfully
   * using the same client token, the operation returns the existing connector
   * without creating a duplicate.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-core-2026-04-30/CreateNetworkConnector">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateNetworkConnectorOutcome CreateNetworkConnector(const Model::CreateNetworkConnectorRequest& request) const;

  /**
   * A Callable wrapper for CreateNetworkConnector that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateNetworkConnectorRequestT = Model::CreateNetworkConnectorRequest>
  Model::CreateNetworkConnectorOutcomeCallable CreateNetworkConnectorCallable(const CreateNetworkConnectorRequestT& request) const {
    return SubmitCallable(&LambdaCoreClient::CreateNetworkConnector, request);
  }

  /**
   * An Async wrapper for CreateNetworkConnector that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename CreateNetworkConnectorRequestT = Model::CreateNetworkConnectorRequest>
  void CreateNetworkConnectorAsync(const CreateNetworkConnectorRequestT& request,
                                   const CreateNetworkConnectorResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&LambdaCoreClient::CreateNetworkConnector, request, handler, context);
  }

  /**
   * <p>Initiates deletion of a network connector. The connector transitions to
   * <code>DELETING</code> state while elastic network interfaces are cleaned up
   * asynchronously. After deletion completes, subsequent calls to
   * <code>GetNetworkConnector</code> return
   * <code>ResourceNotFoundException</code>.</p> <p>This operation is idempotent —
   * calling delete on a connector that is already deleting or has been deleted
   * succeeds without error. You can delete connectors in <code>ACTIVE</code> or
   * <code>FAILED</code> states. Before deleting a connector, ensure that no Lambda
   * MicroVMs are using it, as they will lose VPC egress connectivity
   * immediately.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-core-2026-04-30/DeleteNetworkConnector">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteNetworkConnectorOutcome DeleteNetworkConnector(const Model::DeleteNetworkConnectorRequest& request) const;

  /**
   * A Callable wrapper for DeleteNetworkConnector that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteNetworkConnectorRequestT = Model::DeleteNetworkConnectorRequest>
  Model::DeleteNetworkConnectorOutcomeCallable DeleteNetworkConnectorCallable(const DeleteNetworkConnectorRequestT& request) const {
    return SubmitCallable(&LambdaCoreClient::DeleteNetworkConnector, request);
  }

  /**
   * An Async wrapper for DeleteNetworkConnector that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DeleteNetworkConnectorRequestT = Model::DeleteNetworkConnectorRequest>
  void DeleteNetworkConnectorAsync(const DeleteNetworkConnectorRequestT& request,
                                   const DeleteNetworkConnectorResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&LambdaCoreClient::DeleteNetworkConnector, request, handler, context);
  }

  /**
   * <p>Retrieves the current configuration, state, and metadata of a network
   * connector. The <code>Identifier</code> parameter accepts the connector ID, name,
   * or full ARN. Use this operation to poll connector state after creation or
   * update, or to inspect the current VPC configuration and any failure reasons.</p>
   * <p>The response includes the full connector configuration, current state, and —
   * if the connector has been updated — the <code>LastUpdateStatus</code> and
   * <code>LastUpdateStatusReasonCode</code> fields that indicate whether the most
   * recent update succeeded or failed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-core-2026-04-30/GetNetworkConnector">AWS
   * API Reference</a></p>
   */
  virtual Model::GetNetworkConnectorOutcome GetNetworkConnector(const Model::GetNetworkConnectorRequest& request) const;

  /**
   * A Callable wrapper for GetNetworkConnector that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetNetworkConnectorRequestT = Model::GetNetworkConnectorRequest>
  Model::GetNetworkConnectorOutcomeCallable GetNetworkConnectorCallable(const GetNetworkConnectorRequestT& request) const {
    return SubmitCallable(&LambdaCoreClient::GetNetworkConnector, request);
  }

  /**
   * An Async wrapper for GetNetworkConnector that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename GetNetworkConnectorRequestT = Model::GetNetworkConnectorRequest>
  void GetNetworkConnectorAsync(const GetNetworkConnectorRequestT& request, const GetNetworkConnectorResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&LambdaCoreClient::GetNetworkConnector, request, handler, context);
  }

  /**
   * <p>Returns a paginated list of network connectors in your account for the
   * current Region. You can optionally filter results by connector state. Use the
   * <code>Marker</code> parameter from a previous response to retrieve the next page
   * of results.</p> <p>Each item in the response includes the connector ARN, name,
   * ID, type, current state, and last modified timestamp. To retrieve full
   * configuration details for a specific connector, use
   * <code>GetNetworkConnector</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-core-2026-04-30/ListNetworkConnectors">AWS
   * API Reference</a></p>
   */
  virtual Model::ListNetworkConnectorsOutcome ListNetworkConnectors(const Model::ListNetworkConnectorsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListNetworkConnectors that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListNetworkConnectorsRequestT = Model::ListNetworkConnectorsRequest>
  Model::ListNetworkConnectorsOutcomeCallable ListNetworkConnectorsCallable(const ListNetworkConnectorsRequestT& request = {}) const {
    return SubmitCallable(&LambdaCoreClient::ListNetworkConnectors, request);
  }

  /**
   * An Async wrapper for ListNetworkConnectors that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListNetworkConnectorsRequestT = Model::ListNetworkConnectorsRequest>
  void ListNetworkConnectorsAsync(const ListNetworkConnectorsResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                  const ListNetworkConnectorsRequestT& request = {}) const {
    return SubmitAsync(&LambdaCoreClient::ListNetworkConnectors, request, handler, context);
  }

  /**
   * <p>Updates the VPC configuration or operator role of an existing network
   * connector. You can modify the subnet IDs, security group IDs, network protocol,
   * or operator role. The connector must be in <code>ACTIVE</code> state to accept
   * updates.</p> <p>This operation is asynchronous. The connector remains in
   * <code>ACTIVE</code> state during the update — existing workloads that reference
   * this connector are not disrupted. Use <code>GetNetworkConnector</code> to
   * monitor the <code>LastUpdateStatus</code> field, which transitions through
   * <code>InProgress</code> to <code>Successful</code> or <code>Failed</code>. If
   * the update fails, the <code>LastUpdateStatusReasonCode</code> field provides a
   * specific error code for troubleshooting. This operation is idempotent when you
   * provide a <code>ClientToken</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-core-2026-04-30/UpdateNetworkConnector">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateNetworkConnectorOutcome UpdateNetworkConnector(const Model::UpdateNetworkConnectorRequest& request) const;

  /**
   * A Callable wrapper for UpdateNetworkConnector that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateNetworkConnectorRequestT = Model::UpdateNetworkConnectorRequest>
  Model::UpdateNetworkConnectorOutcomeCallable UpdateNetworkConnectorCallable(const UpdateNetworkConnectorRequestT& request) const {
    return SubmitCallable(&LambdaCoreClient::UpdateNetworkConnector, request);
  }

  /**
   * An Async wrapper for UpdateNetworkConnector that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename UpdateNetworkConnectorRequestT = Model::UpdateNetworkConnectorRequest>
  void UpdateNetworkConnectorAsync(const UpdateNetworkConnectorRequestT& request,
                                   const UpdateNetworkConnectorResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&LambdaCoreClient::UpdateNetworkConnector, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<LambdaCoreEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<LambdaCoreClient>;
  void init(const LambdaCoreClientConfiguration& clientConfiguration);

  typedef Aws::Utils::Outcome<Aws::AmazonWebServiceResult<RESPONSE>, LambdaCoreError> InvokeOperationOutcome;

  InvokeOperationOutcome InvokeServiceOperation(const AmazonWebServiceRequest& request,
                                                const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
                                                Aws::Http::HttpMethod httpMethod) const;

  LambdaCoreClientConfiguration m_clientConfiguration;
  std::shared_ptr<LambdaCoreEndpointProviderBase> m_endpointProvider;
};

}  // namespace LambdaCore
}  // namespace Aws
