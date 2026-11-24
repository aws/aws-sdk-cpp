/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-discovery/AgentDiscoveryPaginationBase.h>
#include <aws/agent-discovery/AgentDiscoveryServiceClientModel.h>
#include <aws/agent-discovery/AgentDiscoveryWaiter.h>
#include <aws/agent-discovery/AgentDiscovery_EXPORTS.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

namespace Aws {
namespace AgentDiscovery {
/**
 * <p>Agent Discovery lets you search public records for AI agents, tools, skills,
 * and other resources that their publishers have made discoverable.</p>
 */
class AWS_AGENTDISCOVERY_API AgentDiscoveryClient : public Aws::Client::AWSJsonClient,
                                                    public Aws::Client::ClientWithAsyncTemplateMethods<AgentDiscoveryClient>,
                                                    public AgentDiscoveryPaginationBase<AgentDiscoveryClient>,
                                                    public AgentDiscoveryWaiter<AgentDiscoveryClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef AgentDiscoveryClientConfiguration ClientConfigurationType;
  typedef AgentDiscoveryEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  AgentDiscoveryClient(const Aws::AgentDiscovery::AgentDiscoveryClientConfiguration& clientConfiguration =
                           Aws::AgentDiscovery::AgentDiscoveryClientConfiguration(),
                       std::shared_ptr<AgentDiscoveryEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  AgentDiscoveryClient(const Aws::Auth::AWSCredentials& credentials,
                       std::shared_ptr<AgentDiscoveryEndpointProviderBase> endpointProvider = nullptr,
                       const Aws::AgentDiscovery::AgentDiscoveryClientConfiguration& clientConfiguration =
                           Aws::AgentDiscovery::AgentDiscoveryClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  AgentDiscoveryClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       std::shared_ptr<AgentDiscoveryEndpointProviderBase> endpointProvider = nullptr,
                       const Aws::AgentDiscovery::AgentDiscoveryClientConfiguration& clientConfiguration =
                           Aws::AgentDiscovery::AgentDiscoveryClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  AgentDiscoveryClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  AgentDiscoveryClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  AgentDiscoveryClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~AgentDiscoveryClient();

  /**
   * <p>Search public agent records across the authoritative + crawler indexes.
   * Hybrid keyword + neural ranking, merged and fused (weighted RRF), with filters,
   * org governance policy, and descriptor-visibility enforcement applied
   * server-side. Public, authenticated (D-1).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/agent-discovery-2022-07-26/SearchPublicRecords">AWS
   * API Reference</a></p>
   */
  virtual Model::SearchPublicRecordsOutcome SearchPublicRecords(const Model::SearchPublicRecordsRequest& request = {}) const;

  /**
   * A Callable wrapper for SearchPublicRecords that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename SearchPublicRecordsRequestT = Model::SearchPublicRecordsRequest>
  Model::SearchPublicRecordsOutcomeCallable SearchPublicRecordsCallable(const SearchPublicRecordsRequestT& request = {}) const {
    return SubmitCallable(&AgentDiscoveryClient::SearchPublicRecords, request);
  }

  /**
   * An Async wrapper for SearchPublicRecords that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename SearchPublicRecordsRequestT = Model::SearchPublicRecordsRequest>
  void SearchPublicRecordsAsync(const SearchPublicRecordsResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                const SearchPublicRecordsRequestT& request = {}) const {
    return SubmitAsync(&AgentDiscoveryClient::SearchPublicRecords, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<AgentDiscoveryEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<AgentDiscoveryClient>;
  void init(const AgentDiscoveryClientConfiguration& clientConfiguration);

  typedef Aws::Utils::Outcome<Aws::AmazonWebServiceResult<RESPONSE>, AgentDiscoveryError> InvokeOperationOutcome;

  InvokeOperationOutcome InvokeServiceOperation(const AmazonWebServiceRequest& request,
                                                const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
                                                Aws::Http::HttpMethod httpMethod) const;

  AgentDiscoveryClientConfiguration m_clientConfiguration;
  std::shared_ptr<AgentDiscoveryEndpointProviderBase> m_endpointProvider;
};

}  // namespace AgentDiscovery
}  // namespace Aws
