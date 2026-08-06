/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry/AgentRegistryPaginationBase.h>
#include <aws/agent-registry/AgentRegistryServiceClientModel.h>
#include <aws/agent-registry/AgentRegistryWaiter.h>
#include <aws/agent-registry/AgentRegistry_EXPORTS.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

namespace Aws {
namespace AgentRegistry {
/**
 * <p>Agent Registry lets callers discover, list, and retrieve approved records
 * published to a registry.</p>
 */
class AWS_AGENTREGISTRY_API AgentRegistryClient : public Aws::Client::AWSJsonClient,
                                                  public Aws::Client::ClientWithAsyncTemplateMethods<AgentRegistryClient>,
                                                  public AgentRegistryPaginationBase<AgentRegistryClient>,
                                                  public AgentRegistryWaiter<AgentRegistryClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef AgentRegistryClientConfiguration ClientConfigurationType;
  typedef AgentRegistryEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  AgentRegistryClient(const Aws::AgentRegistry::AgentRegistryClientConfiguration& clientConfiguration =
                          Aws::AgentRegistry::AgentRegistryClientConfiguration(),
                      std::shared_ptr<AgentRegistryEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  AgentRegistryClient(const Aws::Auth::AWSCredentials& credentials,
                      std::shared_ptr<AgentRegistryEndpointProviderBase> endpointProvider = nullptr,
                      const Aws::AgentRegistry::AgentRegistryClientConfiguration& clientConfiguration =
                          Aws::AgentRegistry::AgentRegistryClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  AgentRegistryClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      std::shared_ptr<AgentRegistryEndpointProviderBase> endpointProvider = nullptr,
                      const Aws::AgentRegistry::AgentRegistryClientConfiguration& clientConfiguration =
                          Aws::AgentRegistry::AgentRegistryClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  AgentRegistryClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  AgentRegistryClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  AgentRegistryClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~AgentRegistryClient();

  /**
   * <p> Retrieves multiple discoverable registry records by ID from a single
   * registry. Records that cannot be retrieved are reported individually in the
   * <code>errors</code> list rather than failing the entire request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-2025-12-01/BatchGetDiscoverableRegistryRecord">AWS
   * API Reference</a></p>
   */
  virtual Model::BatchGetDiscoverableRegistryRecordOutcome BatchGetDiscoverableRegistryRecord(
      const Model::BatchGetDiscoverableRegistryRecordRequest& request) const;

  /**
   * A Callable wrapper for BatchGetDiscoverableRegistryRecord that returns a future to the operation so that it can be executed in parallel
   * to other requests.
   */
  template <typename BatchGetDiscoverableRegistryRecordRequestT = Model::BatchGetDiscoverableRegistryRecordRequest>
  Model::BatchGetDiscoverableRegistryRecordOutcomeCallable BatchGetDiscoverableRegistryRecordCallable(
      const BatchGetDiscoverableRegistryRecordRequestT& request) const {
    return SubmitCallable(&AgentRegistryClient::BatchGetDiscoverableRegistryRecord, request);
  }

  /**
   * An Async wrapper for BatchGetDiscoverableRegistryRecord that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename BatchGetDiscoverableRegistryRecordRequestT = Model::BatchGetDiscoverableRegistryRecordRequest>
  void BatchGetDiscoverableRegistryRecordAsync(const BatchGetDiscoverableRegistryRecordRequestT& request,
                                               const BatchGetDiscoverableRegistryRecordResponseReceivedHandler& handler,
                                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&AgentRegistryClient::BatchGetDiscoverableRegistryRecord, request, handler, context);
  }

  /**
   * <p> Lists the discoverable registry records in a registry. You can optionally
   * filter and paginate the results.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-2025-12-01/ListDiscoverableRegistryRecords">AWS
   * API Reference</a></p>
   */
  virtual Model::ListDiscoverableRegistryRecordsOutcome ListDiscoverableRegistryRecords(
      const Model::ListDiscoverableRegistryRecordsRequest& request) const;

  /**
   * A Callable wrapper for ListDiscoverableRegistryRecords that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename ListDiscoverableRegistryRecordsRequestT = Model::ListDiscoverableRegistryRecordsRequest>
  Model::ListDiscoverableRegistryRecordsOutcomeCallable ListDiscoverableRegistryRecordsCallable(
      const ListDiscoverableRegistryRecordsRequestT& request) const {
    return SubmitCallable(&AgentRegistryClient::ListDiscoverableRegistryRecords, request);
  }

  /**
   * An Async wrapper for ListDiscoverableRegistryRecords that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename ListDiscoverableRegistryRecordsRequestT = Model::ListDiscoverableRegistryRecordsRequest>
  void ListDiscoverableRegistryRecordsAsync(const ListDiscoverableRegistryRecordsRequestT& request,
                                            const ListDiscoverableRegistryRecordsResponseReceivedHandler& handler,
                                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&AgentRegistryClient::ListDiscoverableRegistryRecords, request, handler, context);
  }

  /**
   * <p> Searches the discoverable registry records in a registry using a natural
   * language query. Returns metadata for the matching records ordered by
   * relevance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-2025-12-01/SearchDiscoverableRegistryRecords">AWS
   * API Reference</a></p>
   */
  virtual Model::SearchDiscoverableRegistryRecordsOutcome SearchDiscoverableRegistryRecords(
      const Model::SearchDiscoverableRegistryRecordsRequest& request) const;

  /**
   * A Callable wrapper for SearchDiscoverableRegistryRecords that returns a future to the operation so that it can be executed in parallel
   * to other requests.
   */
  template <typename SearchDiscoverableRegistryRecordsRequestT = Model::SearchDiscoverableRegistryRecordsRequest>
  Model::SearchDiscoverableRegistryRecordsOutcomeCallable SearchDiscoverableRegistryRecordsCallable(
      const SearchDiscoverableRegistryRecordsRequestT& request) const {
    return SubmitCallable(&AgentRegistryClient::SearchDiscoverableRegistryRecords, request);
  }

  /**
   * An Async wrapper for SearchDiscoverableRegistryRecords that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename SearchDiscoverableRegistryRecordsRequestT = Model::SearchDiscoverableRegistryRecordsRequest>
  void SearchDiscoverableRegistryRecordsAsync(const SearchDiscoverableRegistryRecordsRequestT& request,
                                              const SearchDiscoverableRegistryRecordsResponseReceivedHandler& handler,
                                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&AgentRegistryClient::SearchDiscoverableRegistryRecords, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<AgentRegistryEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<AgentRegistryClient>;
  void init(const AgentRegistryClientConfiguration& clientConfiguration);

  typedef Aws::Utils::Outcome<Aws::AmazonWebServiceResult<RESPONSE>, AgentRegistryError> InvokeOperationOutcome;

  InvokeOperationOutcome InvokeServiceOperation(const AmazonWebServiceRequest& request,
                                                const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
                                                Aws::Http::HttpMethod httpMethod) const;

  AgentRegistryClientConfiguration m_clientConfiguration;
  std::shared_ptr<AgentRegistryEndpointProviderBase> m_endpointProvider;
};

}  // namespace AgentRegistry
}  // namespace Aws
