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
 * <p><fullname>Lambda</fullname> <p> <b>Overview</b> </p> <p>Lambda Core is a set
 * of APIs for managing shared infrastructure resources used by Lambda. The Lambda
 * Core API provides operations for:</p> <ol> <li> <p>Creating and managing network
 * connectors that enable Lambda MicroVMs and Lambda Web Functions to access
 * resources in your Amazon Virtual Private Cloud (Amazon VPC).</p> </li> <li>
 * <p>Creating customer-managed runtimes which can be used with Lambda Event
 * Functions.</p> </li> </ol> <p>Network connectors provision elastic network
 * interfaces (ENIs) in your VPC subnets, providing a managed network path from
 * Lambda compute environments to private resources such as Amazon RDS databases,
 * Amazon ElastiCache clusters, and internal APIs. You create a network connector
 * once and attach it to one or more Lambda MicroVMs or Lambda Web Functions at run
 * time.</p> <p>A customer-managed runtime is a Lambda runtime that you create and
 * manage as a standalone resource. Lambda Event Functions can use your
 * customer-managed runtime instead of using one of the built-in Lambda-managed
 * runtimes. Customer-managed runtimes enable you to create customized runtimes for
 * your workloads, and give you control over runtime updates and the deprecation
 * lifecycle.</p> <p>The <i>Lambda Core API Reference</i> provides information
 * about each of the API methods, including details about the parameters in each
 * API request and response.</p> <p>You can use Software Development Kits (SDKs),
 * Integrated Development Environment (IDE) Toolkits, and command line tools to
 * access the API. For installation instructions, see <a
 * href="http://aws.amazon.com/tools/">Tools for Amazon Web Services</a>.</p>
 * <p>For a list of Region-specific endpoints that Lambda supports, see <a
 * href="https://docs.aws.amazon.com/general/latest/gr/lambda-service.html">Lambda
 * endpoints and quotas</a> in the <i>Amazon Web Services General Reference.</i>
 * </p> <p>When making the API calls, you will need to authenticate your request by
 * providing a signature. Lambda supports signature version 4. For more
 * information, see <a
 * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
 * Version 4 signing process</a> in the <i>Amazon Web Services General
 * Reference.</i> </p></p>
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
   * <code>ACTIVE</code>. Once active, you can attach the connector to supported
   * Lambda compute resources — such as MicroVMs and WebFunctions — at run time. For
   * how to attach a connector, see the documentation for the specific compute
   * type.</p> <p>This operation is idempotent when you provide a
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
   * <p>Creates a customer-managed runtime, a resource providing a centrally managed
   * execution environment for your Lambda functions. The runtime resource is the
   * parent of the runtime version and runtime alias child resources.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-core-2026-04-30/CreateRuntime">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateRuntimeOutcome CreateRuntime(const Model::CreateRuntimeRequest& request) const;

  /**
   * A Callable wrapper for CreateRuntime that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename CreateRuntimeRequestT = Model::CreateRuntimeRequest>
  Model::CreateRuntimeOutcomeCallable CreateRuntimeCallable(const CreateRuntimeRequestT& request) const {
    return SubmitCallable(&LambdaCoreClient::CreateRuntime, request);
  }

  /**
   * An Async wrapper for CreateRuntime that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreateRuntimeRequestT = Model::CreateRuntimeRequest>
  void CreateRuntimeAsync(const CreateRuntimeRequestT& request, const CreateRuntimeResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&LambdaCoreClient::CreateRuntime, request, handler, context);
  }

  /**
   * <p>Creates a new customer-managed runtime alias. The alias is a named pointer to
   * a runtime version. Functions consume the customer-managed runtime through the
   * runtime alias.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-core-2026-04-30/CreateRuntimeAlias">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateRuntimeAliasOutcome CreateRuntimeAlias(const Model::CreateRuntimeAliasRequest& request) const;

  /**
   * A Callable wrapper for CreateRuntimeAlias that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateRuntimeAliasRequestT = Model::CreateRuntimeAliasRequest>
  Model::CreateRuntimeAliasOutcomeCallable CreateRuntimeAliasCallable(const CreateRuntimeAliasRequestT& request) const {
    return SubmitCallable(&LambdaCoreClient::CreateRuntimeAlias, request);
  }

  /**
   * An Async wrapper for CreateRuntimeAlias that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CreateRuntimeAliasRequestT = Model::CreateRuntimeAliasRequest>
  void CreateRuntimeAliasAsync(const CreateRuntimeAliasRequestT& request, const CreateRuntimeAliasResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&LambdaCoreClient::CreateRuntimeAlias, request, handler, context);
  }

  /**
   * <p>Creates a new runtime version. A runtime version defines the function
   * execution environment by referencing a container image. Runtime versions are
   * immutable. To update the runtime, create a new runtime version and migrate
   * functions by updating the runtime aliases to point to the new runtime
   * version.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-core-2026-04-30/CreateRuntimeVersion">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateRuntimeVersionOutcome CreateRuntimeVersion(const Model::CreateRuntimeVersionRequest& request) const;

  /**
   * A Callable wrapper for CreateRuntimeVersion that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateRuntimeVersionRequestT = Model::CreateRuntimeVersionRequest>
  Model::CreateRuntimeVersionOutcomeCallable CreateRuntimeVersionCallable(const CreateRuntimeVersionRequestT& request) const {
    return SubmitCallable(&LambdaCoreClient::CreateRuntimeVersion, request);
  }

  /**
   * An Async wrapper for CreateRuntimeVersion that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename CreateRuntimeVersionRequestT = Model::CreateRuntimeVersionRequest>
  void CreateRuntimeVersionAsync(const CreateRuntimeVersionRequestT& request, const CreateRuntimeVersionResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&LambdaCoreClient::CreateRuntimeVersion, request, handler, context);
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
   * compute resources are using it, as they will lose VPC egress connectivity
   * immediately.</p> <p>Deleting with an unqualified identifier removes the
   * connector and all of its versions. To remove a single historical version, supply
   * its version-qualified ARN; the connector and its remaining versions are
   * unaffected. You can't delete the latest version on its own — delete the
   * connector to remove it.</p><p><h3>See Also:</h3>   <a
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
   * <p>Schedules a customer-managed runtime to be deleted. Runtimes scheduled for
   * deletion enter the PENDING_DELETION state and can be restored during the
   * scheduled deletion window. Runtime versions and aliases must be deleted or
   * scheduled for deletion before deleting the runtime. Function invokes fail for
   * functions using runtime versions or aliases that are deleted or pending
   * deletion.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-core-2026-04-30/DeleteRuntime">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteRuntimeOutcome DeleteRuntime(const Model::DeleteRuntimeRequest& request) const;

  /**
   * A Callable wrapper for DeleteRuntime that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DeleteRuntimeRequestT = Model::DeleteRuntimeRequest>
  Model::DeleteRuntimeOutcomeCallable DeleteRuntimeCallable(const DeleteRuntimeRequestT& request) const {
    return SubmitCallable(&LambdaCoreClient::DeleteRuntime, request);
  }

  /**
   * An Async wrapper for DeleteRuntime that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DeleteRuntimeRequestT = Model::DeleteRuntimeRequest>
  void DeleteRuntimeAsync(const DeleteRuntimeRequestT& request, const DeleteRuntimeResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&LambdaCoreClient::DeleteRuntime, request, handler, context);
  }

  /**
   * <p>Schedules a runtime alias to be deleted. Runtime aliases scheduled for
   * deletion enter the PENDING_DELETION state and can be restored during the
   * scheduled deletion window. Function invokes fail for functions using runtime
   * aliases that are deleted or pending deletion.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-core-2026-04-30/DeleteRuntimeAlias">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteRuntimeAliasOutcome DeleteRuntimeAlias(const Model::DeleteRuntimeAliasRequest& request) const;

  /**
   * A Callable wrapper for DeleteRuntimeAlias that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteRuntimeAliasRequestT = Model::DeleteRuntimeAliasRequest>
  Model::DeleteRuntimeAliasOutcomeCallable DeleteRuntimeAliasCallable(const DeleteRuntimeAliasRequestT& request) const {
    return SubmitCallable(&LambdaCoreClient::DeleteRuntimeAlias, request);
  }

  /**
   * An Async wrapper for DeleteRuntimeAlias that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DeleteRuntimeAliasRequestT = Model::DeleteRuntimeAliasRequest>
  void DeleteRuntimeAliasAsync(const DeleteRuntimeAliasRequestT& request, const DeleteRuntimeAliasResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&LambdaCoreClient::DeleteRuntimeAlias, request, handler, context);
  }

  /**
   * <p>Schedules a runtime version to be deleted. Runtime versions scheduled for
   * deletion enter the PENDING_DELETION state and can be restored during the
   * scheduled deletion window. Function invokes fail for functions using a runtime
   * version that is deleted or pending deletion.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-core-2026-04-30/DeleteRuntimeVersion">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteRuntimeVersionOutcome DeleteRuntimeVersion(const Model::DeleteRuntimeVersionRequest& request) const;

  /**
   * A Callable wrapper for DeleteRuntimeVersion that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteRuntimeVersionRequestT = Model::DeleteRuntimeVersionRequest>
  Model::DeleteRuntimeVersionOutcomeCallable DeleteRuntimeVersionCallable(const DeleteRuntimeVersionRequestT& request) const {
    return SubmitCallable(&LambdaCoreClient::DeleteRuntimeVersion, request);
  }

  /**
   * An Async wrapper for DeleteRuntimeVersion that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DeleteRuntimeVersionRequestT = Model::DeleteRuntimeVersionRequest>
  void DeleteRuntimeVersionAsync(const DeleteRuntimeVersionRequestT& request, const DeleteRuntimeVersionResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&LambdaCoreClient::DeleteRuntimeVersion, request, handler, context);
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
   * <p>Retrieves the configuration and metadata of a runtime.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-core-2026-04-30/GetRuntime">AWS
   * API Reference</a></p>
   */
  virtual Model::GetRuntimeOutcome GetRuntime(const Model::GetRuntimeRequest& request) const;

  /**
   * A Callable wrapper for GetRuntime that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetRuntimeRequestT = Model::GetRuntimeRequest>
  Model::GetRuntimeOutcomeCallable GetRuntimeCallable(const GetRuntimeRequestT& request) const {
    return SubmitCallable(&LambdaCoreClient::GetRuntime, request);
  }

  /**
   * An Async wrapper for GetRuntime that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetRuntimeRequestT = Model::GetRuntimeRequest>
  void GetRuntimeAsync(const GetRuntimeRequestT& request, const GetRuntimeResponseReceivedHandler& handler,
                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&LambdaCoreClient::GetRuntime, request, handler, context);
  }

  /**
   * <p>Retrieves the configuration, state, and metadata of a runtime
   * alias.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-core-2026-04-30/GetRuntimeAlias">AWS
   * API Reference</a></p>
   */
  virtual Model::GetRuntimeAliasOutcome GetRuntimeAlias(const Model::GetRuntimeAliasRequest& request) const;

  /**
   * A Callable wrapper for GetRuntimeAlias that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetRuntimeAliasRequestT = Model::GetRuntimeAliasRequest>
  Model::GetRuntimeAliasOutcomeCallable GetRuntimeAliasCallable(const GetRuntimeAliasRequestT& request) const {
    return SubmitCallable(&LambdaCoreClient::GetRuntimeAlias, request);
  }

  /**
   * An Async wrapper for GetRuntimeAlias that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetRuntimeAliasRequestT = Model::GetRuntimeAliasRequest>
  void GetRuntimeAliasAsync(const GetRuntimeAliasRequestT& request, const GetRuntimeAliasResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&LambdaCoreClient::GetRuntimeAlias, request, handler, context);
  }

  /**
   * <p>Retrieves the configuration, state, and metadata of a runtime
   * version.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-core-2026-04-30/GetRuntimeVersion">AWS
   * API Reference</a></p>
   */
  virtual Model::GetRuntimeVersionOutcome GetRuntimeVersion(const Model::GetRuntimeVersionRequest& request) const;

  /**
   * A Callable wrapper for GetRuntimeVersion that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetRuntimeVersionRequestT = Model::GetRuntimeVersionRequest>
  Model::GetRuntimeVersionOutcomeCallable GetRuntimeVersionCallable(const GetRuntimeVersionRequestT& request) const {
    return SubmitCallable(&LambdaCoreClient::GetRuntimeVersion, request);
  }

  /**
   * An Async wrapper for GetRuntimeVersion that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename GetRuntimeVersionRequestT = Model::GetRuntimeVersionRequest>
  void GetRuntimeVersionAsync(const GetRuntimeVersionRequestT& request, const GetRuntimeVersionResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&LambdaCoreClient::GetRuntimeVersion, request, handler, context);
  }

  /**
   * <p>Returns a paginated list of the versions of a network connector. Each
   * configuration update creates a new immutable version; this operation lists those
   * versions for the connector you specify. You can optionally filter results by
   * version state. Use the <code>Marker</code> parameter from a previous response to
   * retrieve the next page of results.</p> <p>Each item in the response includes the
   * version-qualified ARN, version number, current state, and last modified
   * timestamp for that version. To retrieve the current (latest) configuration of
   * the connector, use <code>GetNetworkConnector</code>; to inspect a specific
   * version, call <code>GetNetworkConnector</code> with a version-qualified
   * identifier.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-core-2026-04-30/ListNetworkConnectorVersions">AWS
   * API Reference</a></p>
   */
  virtual Model::ListNetworkConnectorVersionsOutcome ListNetworkConnectorVersions(
      const Model::ListNetworkConnectorVersionsRequest& request) const;

  /**
   * A Callable wrapper for ListNetworkConnectorVersions that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename ListNetworkConnectorVersionsRequestT = Model::ListNetworkConnectorVersionsRequest>
  Model::ListNetworkConnectorVersionsOutcomeCallable ListNetworkConnectorVersionsCallable(
      const ListNetworkConnectorVersionsRequestT& request) const {
    return SubmitCallable(&LambdaCoreClient::ListNetworkConnectorVersions, request);
  }

  /**
   * An Async wrapper for ListNetworkConnectorVersions that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListNetworkConnectorVersionsRequestT = Model::ListNetworkConnectorVersionsRequest>
  void ListNetworkConnectorVersionsAsync(const ListNetworkConnectorVersionsRequestT& request,
                                         const ListNetworkConnectorVersionsResponseReceivedHandler& handler,
                                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&LambdaCoreClient::ListNetworkConnectorVersions, request, handler, context);
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
   * <p>Returns a paginated list of aliases for the specified runtime.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-core-2026-04-30/ListRuntimeAliases">AWS
   * API Reference</a></p>
   */
  virtual Model::ListRuntimeAliasesOutcome ListRuntimeAliases(const Model::ListRuntimeAliasesRequest& request) const;

  /**
   * A Callable wrapper for ListRuntimeAliases that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListRuntimeAliasesRequestT = Model::ListRuntimeAliasesRequest>
  Model::ListRuntimeAliasesOutcomeCallable ListRuntimeAliasesCallable(const ListRuntimeAliasesRequestT& request) const {
    return SubmitCallable(&LambdaCoreClient::ListRuntimeAliases, request);
  }

  /**
   * An Async wrapper for ListRuntimeAliases that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListRuntimeAliasesRequestT = Model::ListRuntimeAliasesRequest>
  void ListRuntimeAliasesAsync(const ListRuntimeAliasesRequestT& request, const ListRuntimeAliasesResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&LambdaCoreClient::ListRuntimeAliases, request, handler, context);
  }

  /**
   * <p>Returns a paginated list of versions for the specified runtime.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-core-2026-04-30/ListRuntimeVersions">AWS
   * API Reference</a></p>
   */
  virtual Model::ListRuntimeVersionsOutcome ListRuntimeVersions(const Model::ListRuntimeVersionsRequest& request) const;

  /**
   * A Callable wrapper for ListRuntimeVersions that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListRuntimeVersionsRequestT = Model::ListRuntimeVersionsRequest>
  Model::ListRuntimeVersionsOutcomeCallable ListRuntimeVersionsCallable(const ListRuntimeVersionsRequestT& request) const {
    return SubmitCallable(&LambdaCoreClient::ListRuntimeVersions, request);
  }

  /**
   * An Async wrapper for ListRuntimeVersions that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListRuntimeVersionsRequestT = Model::ListRuntimeVersionsRequest>
  void ListRuntimeVersionsAsync(const ListRuntimeVersionsRequestT& request, const ListRuntimeVersionsResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&LambdaCoreClient::ListRuntimeVersions, request, handler, context);
  }

  /**
   * <p>Returns a paginated list of runtimes in your account for the current
   * Region.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-core-2026-04-30/ListRuntimes">AWS
   * API Reference</a></p>
   */
  virtual Model::ListRuntimesOutcome ListRuntimes(const Model::ListRuntimesRequest& request = {}) const;

  /**
   * A Callable wrapper for ListRuntimes that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListRuntimesRequestT = Model::ListRuntimesRequest>
  Model::ListRuntimesOutcomeCallable ListRuntimesCallable(const ListRuntimesRequestT& request = {}) const {
    return SubmitCallable(&LambdaCoreClient::ListRuntimes, request);
  }

  /**
   * An Async wrapper for ListRuntimes that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListRuntimesRequestT = Model::ListRuntimesRequest>
  void ListRuntimesAsync(const ListRuntimesResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                         const ListRuntimesRequestT& request = {}) const {
    return SubmitAsync(&LambdaCoreClient::ListRuntimes, request, handler, context);
  }

  /**
   * <p>Cancels a pending scheduled deletion, returning the resource to the ACTIVE
   * state. Scope is determined by the RuntimeName path parameter plus an optional,
   * mutually exclusive RuntimeVersion or RuntimeAlias query parameter: with neither,
   * the runtime itself is restored; with RuntimeVersion, the named runtime version;
   * with RuntimeAlias, the named runtime alias. Restoring a resource that is already
   * ACTIVE is a no-op success. Restore only works while the target is
   * PENDING_DELETION; once the scheduled deletion has begun executing (DELETING) or
   * has completed, the call fails.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-core-2026-04-30/RestoreRuntime">AWS
   * API Reference</a></p>
   */
  virtual Model::RestoreRuntimeOutcome RestoreRuntime(const Model::RestoreRuntimeRequest& request) const;

  /**
   * A Callable wrapper for RestoreRuntime that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename RestoreRuntimeRequestT = Model::RestoreRuntimeRequest>
  Model::RestoreRuntimeOutcomeCallable RestoreRuntimeCallable(const RestoreRuntimeRequestT& request) const {
    return SubmitCallable(&LambdaCoreClient::RestoreRuntime, request);
  }

  /**
   * An Async wrapper for RestoreRuntime that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename RestoreRuntimeRequestT = Model::RestoreRuntimeRequest>
  void RestoreRuntimeAsync(const RestoreRuntimeRequestT& request, const RestoreRuntimeResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&LambdaCoreClient::RestoreRuntime, request, handler, context);
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
   * provide a <code>ClientToken</code>.</p> <p>Each successful configuration change
   * creates a new immutable version. A connector can have a limited number of
   * versions; once that limit is reached, further updates fail with
   * <code>NetworkConnectorLimitExceededException</code> until you delete older
   * versions.</p><p><h3>See Also:</h3>   <a
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

  /**
   * <p>Updates the properties of an existing customer-managed runtime, such as its
   * description, license information, or lifecycle information.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-core-2026-04-30/UpdateRuntime">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateRuntimeOutcome UpdateRuntime(const Model::UpdateRuntimeRequest& request) const;

  /**
   * A Callable wrapper for UpdateRuntime that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UpdateRuntimeRequestT = Model::UpdateRuntimeRequest>
  Model::UpdateRuntimeOutcomeCallable UpdateRuntimeCallable(const UpdateRuntimeRequestT& request) const {
    return SubmitCallable(&LambdaCoreClient::UpdateRuntime, request);
  }

  /**
   * An Async wrapper for UpdateRuntime that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UpdateRuntimeRequestT = Model::UpdateRuntimeRequest>
  void UpdateRuntimeAsync(const UpdateRuntimeRequestT& request, const UpdateRuntimeResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&LambdaCoreClient::UpdateRuntime, request, handler, context);
  }

  /**
   * <p>Updates an existing runtime alias to point to a different runtime version or
   * to change its description or lifecycle information.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-core-2026-04-30/UpdateRuntimeAlias">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateRuntimeAliasOutcome UpdateRuntimeAlias(const Model::UpdateRuntimeAliasRequest& request) const;

  /**
   * A Callable wrapper for UpdateRuntimeAlias that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateRuntimeAliasRequestT = Model::UpdateRuntimeAliasRequest>
  Model::UpdateRuntimeAliasOutcomeCallable UpdateRuntimeAliasCallable(const UpdateRuntimeAliasRequestT& request) const {
    return SubmitCallable(&LambdaCoreClient::UpdateRuntimeAlias, request);
  }

  /**
   * An Async wrapper for UpdateRuntimeAlias that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename UpdateRuntimeAliasRequestT = Model::UpdateRuntimeAliasRequest>
  void UpdateRuntimeAliasAsync(const UpdateRuntimeAliasRequestT& request, const UpdateRuntimeAliasResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&LambdaCoreClient::UpdateRuntimeAlias, request, handler, context);
  }

  /**
   * <p>Updates the runtime version release notes. The runtime version must be in the
   * ACTIVE state. The runtime version image is immutable. To change the runtime
   * contents, create a new runtime version.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-core-2026-04-30/UpdateRuntimeVersion">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateRuntimeVersionOutcome UpdateRuntimeVersion(const Model::UpdateRuntimeVersionRequest& request) const;

  /**
   * A Callable wrapper for UpdateRuntimeVersion that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateRuntimeVersionRequestT = Model::UpdateRuntimeVersionRequest>
  Model::UpdateRuntimeVersionOutcomeCallable UpdateRuntimeVersionCallable(const UpdateRuntimeVersionRequestT& request) const {
    return SubmitCallable(&LambdaCoreClient::UpdateRuntimeVersion, request);
  }

  /**
   * An Async wrapper for UpdateRuntimeVersion that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename UpdateRuntimeVersionRequestT = Model::UpdateRuntimeVersionRequest>
  void UpdateRuntimeVersionAsync(const UpdateRuntimeVersionRequestT& request, const UpdateRuntimeVersionResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&LambdaCoreClient::UpdateRuntimeVersion, request, handler, context);
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
