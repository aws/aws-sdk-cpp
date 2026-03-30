/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/DevOpsAgentPaginationBase.h>
#include <aws/devops-agent/DevOpsAgentServiceClientModel.h>
#include <aws/devops-agent/DevOpsAgentWaiter.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>

namespace Aws {
namespace DevOpsAgent {
/**
 * <p>AWS DevOps Agent is a frontier agent that resolves and proactively prevents
 * incidents, continuously improving reliability and performance. AWS DevOps Agent
 * investigates incidents and identifies operational improvements as an experienced
 * DevOps engineer.</p> <p>The agent works by:</p> <ul> <li>Learning your resources
 * and their relationships.</li> <li>Working with your observability tools,
 * runbooks, code repositories, and CI/CD pipelines.</li> <li>Correlating
 * telemetry, code, and deployment data to understand relationships between your
 * application resources.</li> <li>Supporting applications in multicloud and hybrid
 * environments.</li> </ul>
 */
class AWS_DEVOPSAGENT_API DevOpsAgentClient : public Aws::Client::AWSJsonClient,
                                              public Aws::Client::ClientWithAsyncTemplateMethods<DevOpsAgentClient>,
                                              public DevOpsAgentPaginationBase<DevOpsAgentClient>,
                                              public DevOpsAgentWaiter<DevOpsAgentClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef DevOpsAgentClientConfiguration ClientConfigurationType;
  typedef DevOpsAgentEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  DevOpsAgentClient(
      const Aws::DevOpsAgent::DevOpsAgentClientConfiguration& clientConfiguration = Aws::DevOpsAgent::DevOpsAgentClientConfiguration(),
      std::shared_ptr<DevOpsAgentEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  DevOpsAgentClient(
      const Aws::Auth::AWSCredentials& credentials, std::shared_ptr<DevOpsAgentEndpointProviderBase> endpointProvider = nullptr,
      const Aws::DevOpsAgent::DevOpsAgentClientConfiguration& clientConfiguration = Aws::DevOpsAgent::DevOpsAgentClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  DevOpsAgentClient(
      const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
      std::shared_ptr<DevOpsAgentEndpointProviderBase> endpointProvider = nullptr,
      const Aws::DevOpsAgent::DevOpsAgentClientConfiguration& clientConfiguration = Aws::DevOpsAgent::DevOpsAgentClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  DevOpsAgentClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  DevOpsAgentClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  DevOpsAgentClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                    const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~DevOpsAgentClient();

  /**
   * <p>Authorize Ingestion Hub subscription operation. Looks to see if the derived
   * accountId from FAS has an AgentSpace.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/AllowVendedLogDeliveryForResource">AWS
   * API Reference</a></p>
   */
  virtual Model::AllowVendedLogDeliveryForResourceOutcome AllowVendedLogDeliveryForResource(
      const Model::AllowVendedLogDeliveryForResourceRequest& request) const;

  /**
   * A Callable wrapper for AllowVendedLogDeliveryForResource that returns a future to the operation so that it can be executed in parallel
   * to other requests.
   */
  template <typename AllowVendedLogDeliveryForResourceRequestT = Model::AllowVendedLogDeliveryForResourceRequest>
  Model::AllowVendedLogDeliveryForResourceOutcomeCallable AllowVendedLogDeliveryForResourceCallable(
      const AllowVendedLogDeliveryForResourceRequestT& request) const {
    return SubmitCallable(&DevOpsAgentClient::AllowVendedLogDeliveryForResource, request);
  }

  /**
   * An Async wrapper for AllowVendedLogDeliveryForResource that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename AllowVendedLogDeliveryForResourceRequestT = Model::AllowVendedLogDeliveryForResourceRequest>
  void AllowVendedLogDeliveryForResourceAsync(const AllowVendedLogDeliveryForResourceRequestT& request,
                                              const AllowVendedLogDeliveryForResourceResponseReceivedHandler& handler,
                                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&DevOpsAgentClient::AllowVendedLogDeliveryForResource, request, handler, context);
  }

  /**
   * <p>Adds a specific service association to an AgentSpace. It overwrites the
   * existing association of the same service. Returns 201 Created on
   * success.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/AssociateService">AWS
   * API Reference</a></p>
   */
  virtual Model::AssociateServiceOutcome AssociateService(const Model::AssociateServiceRequest& request) const;

  /**
   * A Callable wrapper for AssociateService that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename AssociateServiceRequestT = Model::AssociateServiceRequest>
  Model::AssociateServiceOutcomeCallable AssociateServiceCallable(const AssociateServiceRequestT& request) const {
    return SubmitCallable(&DevOpsAgentClient::AssociateService, request);
  }

  /**
   * An Async wrapper for AssociateService that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename AssociateServiceRequestT = Model::AssociateServiceRequest>
  void AssociateServiceAsync(const AssociateServiceRequestT& request, const AssociateServiceResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&DevOpsAgentClient::AssociateService, request, handler, context);
  }

  /**
   * <p>Creates a new AgentSpace with the specified name and description. Duplicate
   * space names are allowed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/CreateAgentSpace">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateAgentSpaceOutcome CreateAgentSpace(const Model::CreateAgentSpaceRequest& request) const;

  /**
   * A Callable wrapper for CreateAgentSpace that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateAgentSpaceRequestT = Model::CreateAgentSpaceRequest>
  Model::CreateAgentSpaceOutcomeCallable CreateAgentSpaceCallable(const CreateAgentSpaceRequestT& request) const {
    return SubmitCallable(&DevOpsAgentClient::CreateAgentSpace, request);
  }

  /**
   * An Async wrapper for CreateAgentSpace that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CreateAgentSpaceRequestT = Model::CreateAgentSpaceRequest>
  void CreateAgentSpaceAsync(const CreateAgentSpaceRequestT& request, const CreateAgentSpaceResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&DevOpsAgentClient::CreateAgentSpace, request, handler, context);
  }

  /**
   * <p>Creates a new backlog task in the specified agent space</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/CreateBacklogTask">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateBacklogTaskOutcome CreateBacklogTask(const Model::CreateBacklogTaskRequest& request) const;

  /**
   * A Callable wrapper for CreateBacklogTask that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateBacklogTaskRequestT = Model::CreateBacklogTaskRequest>
  Model::CreateBacklogTaskOutcomeCallable CreateBacklogTaskCallable(const CreateBacklogTaskRequestT& request) const {
    return SubmitCallable(&DevOpsAgentClient::CreateBacklogTask, request);
  }

  /**
   * An Async wrapper for CreateBacklogTask that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CreateBacklogTaskRequestT = Model::CreateBacklogTaskRequest>
  void CreateBacklogTaskAsync(const CreateBacklogTaskRequestT& request, const CreateBacklogTaskResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&DevOpsAgentClient::CreateBacklogTask, request, handler, context);
  }

  /**
   * <p>Creates a new chat execution in the specified agent space</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/CreateChat">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateChatOutcome CreateChat(const Model::CreateChatRequest& request) const;

  /**
   * A Callable wrapper for CreateChat that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename CreateChatRequestT = Model::CreateChatRequest>
  Model::CreateChatOutcomeCallable CreateChatCallable(const CreateChatRequestT& request) const {
    return SubmitCallable(&DevOpsAgentClient::CreateChat, request);
  }

  /**
   * An Async wrapper for CreateChat that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreateChatRequestT = Model::CreateChatRequest>
  void CreateChatAsync(const CreateChatRequestT& request, const CreateChatResponseReceivedHandler& handler,
                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&DevOpsAgentClient::CreateChat, request, handler, context);
  }

  /**
   * <p>Creates a Private Connection to a target resource.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/CreatePrivateConnection">AWS
   * API Reference</a></p>
   */
  virtual Model::CreatePrivateConnectionOutcome CreatePrivateConnection(const Model::CreatePrivateConnectionRequest& request) const;

  /**
   * A Callable wrapper for CreatePrivateConnection that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreatePrivateConnectionRequestT = Model::CreatePrivateConnectionRequest>
  Model::CreatePrivateConnectionOutcomeCallable CreatePrivateConnectionCallable(const CreatePrivateConnectionRequestT& request) const {
    return SubmitCallable(&DevOpsAgentClient::CreatePrivateConnection, request);
  }

  /**
   * An Async wrapper for CreatePrivateConnection that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename CreatePrivateConnectionRequestT = Model::CreatePrivateConnectionRequest>
  void CreatePrivateConnectionAsync(const CreatePrivateConnectionRequestT& request,
                                    const CreatePrivateConnectionResponseReceivedHandler& handler,
                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&DevOpsAgentClient::CreatePrivateConnection, request, handler, context);
  }

  /**
   * <p>Deletes an AgentSpace. This operation is idempotent and returns a 204 No
   * Content response on success.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/DeleteAgentSpace">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteAgentSpaceOutcome DeleteAgentSpace(const Model::DeleteAgentSpaceRequest& request) const;

  /**
   * A Callable wrapper for DeleteAgentSpace that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteAgentSpaceRequestT = Model::DeleteAgentSpaceRequest>
  Model::DeleteAgentSpaceOutcomeCallable DeleteAgentSpaceCallable(const DeleteAgentSpaceRequestT& request) const {
    return SubmitCallable(&DevOpsAgentClient::DeleteAgentSpace, request);
  }

  /**
   * An Async wrapper for DeleteAgentSpace that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DeleteAgentSpaceRequestT = Model::DeleteAgentSpaceRequest>
  void DeleteAgentSpaceAsync(const DeleteAgentSpaceRequestT& request, const DeleteAgentSpaceResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&DevOpsAgentClient::DeleteAgentSpace, request, handler, context);
  }

  /**
   * <p>Deletes a Private Connection. The deletion is asynchronous and returns
   * DELETE_IN_PROGRESS status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/DeletePrivateConnection">AWS
   * API Reference</a></p>
   */
  virtual Model::DeletePrivateConnectionOutcome DeletePrivateConnection(const Model::DeletePrivateConnectionRequest& request) const;

  /**
   * A Callable wrapper for DeletePrivateConnection that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeletePrivateConnectionRequestT = Model::DeletePrivateConnectionRequest>
  Model::DeletePrivateConnectionOutcomeCallable DeletePrivateConnectionCallable(const DeletePrivateConnectionRequestT& request) const {
    return SubmitCallable(&DevOpsAgentClient::DeletePrivateConnection, request);
  }

  /**
   * An Async wrapper for DeletePrivateConnection that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DeletePrivateConnectionRequestT = Model::DeletePrivateConnectionRequest>
  void DeletePrivateConnectionAsync(const DeletePrivateConnectionRequestT& request,
                                    const DeletePrivateConnectionResponseReceivedHandler& handler,
                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&DevOpsAgentClient::DeletePrivateConnection, request, handler, context);
  }

  /**
   * <p>Deregister a service</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/DeregisterService">AWS
   * API Reference</a></p>
   */
  virtual Model::DeregisterServiceOutcome DeregisterService(const Model::DeregisterServiceRequest& request) const;

  /**
   * A Callable wrapper for DeregisterService that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeregisterServiceRequestT = Model::DeregisterServiceRequest>
  Model::DeregisterServiceOutcomeCallable DeregisterServiceCallable(const DeregisterServiceRequestT& request) const {
    return SubmitCallable(&DevOpsAgentClient::DeregisterService, request);
  }

  /**
   * An Async wrapper for DeregisterService that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DeregisterServiceRequestT = Model::DeregisterServiceRequest>
  void DeregisterServiceAsync(const DeregisterServiceRequestT& request, const DeregisterServiceResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&DevOpsAgentClient::DeregisterService, request, handler, context);
  }

  /**
   * <p>Retrieves details of an existing Private Connection.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/DescribePrivateConnection">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribePrivateConnectionOutcome DescribePrivateConnection(const Model::DescribePrivateConnectionRequest& request) const;

  /**
   * A Callable wrapper for DescribePrivateConnection that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DescribePrivateConnectionRequestT = Model::DescribePrivateConnectionRequest>
  Model::DescribePrivateConnectionOutcomeCallable DescribePrivateConnectionCallable(
      const DescribePrivateConnectionRequestT& request) const {
    return SubmitCallable(&DevOpsAgentClient::DescribePrivateConnection, request);
  }

  /**
   * An Async wrapper for DescribePrivateConnection that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DescribePrivateConnectionRequestT = Model::DescribePrivateConnectionRequest>
  void DescribePrivateConnectionAsync(const DescribePrivateConnectionRequestT& request,
                                      const DescribePrivateConnectionResponseReceivedHandler& handler,
                                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&DevOpsAgentClient::DescribePrivateConnection, request, handler, context);
  }

  /**
   * <p>Describe the support level of a CloudSmith customer account.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/DescribeSupportLevel">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribeSupportLevelOutcome DescribeSupportLevel(const Model::DescribeSupportLevelRequest& request) const;

  /**
   * A Callable wrapper for DescribeSupportLevel that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DescribeSupportLevelRequestT = Model::DescribeSupportLevelRequest>
  Model::DescribeSupportLevelOutcomeCallable DescribeSupportLevelCallable(const DescribeSupportLevelRequestT& request) const {
    return SubmitCallable(&DevOpsAgentClient::DescribeSupportLevel, request);
  }

  /**
   * An Async wrapper for DescribeSupportLevel that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DescribeSupportLevelRequestT = Model::DescribeSupportLevelRequest>
  void DescribeSupportLevelAsync(const DescribeSupportLevelRequestT& request, const DescribeSupportLevelResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&DevOpsAgentClient::DescribeSupportLevel, request, handler, context);
  }

  /**
   * <p>Disable the Operator App for the specified AgentSpace</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/DisableOperatorApp">AWS
   * API Reference</a></p>
   */
  virtual Model::DisableOperatorAppOutcome DisableOperatorApp(const Model::DisableOperatorAppRequest& request) const;

  /**
   * A Callable wrapper for DisableOperatorApp that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DisableOperatorAppRequestT = Model::DisableOperatorAppRequest>
  Model::DisableOperatorAppOutcomeCallable DisableOperatorAppCallable(const DisableOperatorAppRequestT& request) const {
    return SubmitCallable(&DevOpsAgentClient::DisableOperatorApp, request);
  }

  /**
   * An Async wrapper for DisableOperatorApp that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DisableOperatorAppRequestT = Model::DisableOperatorAppRequest>
  void DisableOperatorAppAsync(const DisableOperatorAppRequestT& request, const DisableOperatorAppResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&DevOpsAgentClient::DisableOperatorApp, request, handler, context);
  }

  /**
   * <p>Deletes a specific service association from an AgentSpace. This operation is
   * idempotent and returns a 204 No Content response on success.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/DisassociateService">AWS
   * API Reference</a></p>
   */
  virtual Model::DisassociateServiceOutcome DisassociateService(const Model::DisassociateServiceRequest& request) const;

  /**
   * A Callable wrapper for DisassociateService that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DisassociateServiceRequestT = Model::DisassociateServiceRequest>
  Model::DisassociateServiceOutcomeCallable DisassociateServiceCallable(const DisassociateServiceRequestT& request) const {
    return SubmitCallable(&DevOpsAgentClient::DisassociateService, request);
  }

  /**
   * An Async wrapper for DisassociateService that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DisassociateServiceRequestT = Model::DisassociateServiceRequest>
  void DisassociateServiceAsync(const DisassociateServiceRequestT& request, const DisassociateServiceResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&DevOpsAgentClient::DisassociateService, request, handler, context);
  }

  /**
   * <p>Enable the Operator App to access the given AgentSpace</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/EnableOperatorApp">AWS
   * API Reference</a></p>
   */
  virtual Model::EnableOperatorAppOutcome EnableOperatorApp(const Model::EnableOperatorAppRequest& request) const;

  /**
   * A Callable wrapper for EnableOperatorApp that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename EnableOperatorAppRequestT = Model::EnableOperatorAppRequest>
  Model::EnableOperatorAppOutcomeCallable EnableOperatorAppCallable(const EnableOperatorAppRequestT& request) const {
    return SubmitCallable(&DevOpsAgentClient::EnableOperatorApp, request);
  }

  /**
   * An Async wrapper for EnableOperatorApp that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename EnableOperatorAppRequestT = Model::EnableOperatorAppRequest>
  void EnableOperatorAppAsync(const EnableOperatorAppRequestT& request, const EnableOperatorAppResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&DevOpsAgentClient::EnableOperatorApp, request, handler, context);
  }

  /**
   * <p>End a chat session for a support case in the specified agent
   * space</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/EndChatForCase">AWS
   * API Reference</a></p>
   */
  virtual Model::EndChatForCaseOutcome EndChatForCase(const Model::EndChatForCaseRequest& request) const;

  /**
   * A Callable wrapper for EndChatForCase that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename EndChatForCaseRequestT = Model::EndChatForCaseRequest>
  Model::EndChatForCaseOutcomeCallable EndChatForCaseCallable(const EndChatForCaseRequestT& request) const {
    return SubmitCallable(&DevOpsAgentClient::EndChatForCase, request);
  }

  /**
   * An Async wrapper for EndChatForCase that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename EndChatForCaseRequestT = Model::EndChatForCaseRequest>
  void EndChatForCaseAsync(const EndChatForCaseRequestT& request, const EndChatForCaseResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&DevOpsAgentClient::EndChatForCase, request, handler, context);
  }

  /**
   * <p>Retrieves monthly account usage metrics and limits for the AWS
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/GetAccountUsage">AWS
   * API Reference</a></p>
   */
  virtual Model::GetAccountUsageOutcome GetAccountUsage(const Model::GetAccountUsageRequest& request = {}) const;

  /**
   * A Callable wrapper for GetAccountUsage that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetAccountUsageRequestT = Model::GetAccountUsageRequest>
  Model::GetAccountUsageOutcomeCallable GetAccountUsageCallable(const GetAccountUsageRequestT& request = {}) const {
    return SubmitCallable(&DevOpsAgentClient::GetAccountUsage, request);
  }

  /**
   * An Async wrapper for GetAccountUsage that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetAccountUsageRequestT = Model::GetAccountUsageRequest>
  void GetAccountUsageAsync(const GetAccountUsageResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                            const GetAccountUsageRequestT& request = {}) const {
    return SubmitAsync(&DevOpsAgentClient::GetAccountUsage, request, handler, context);
  }

  /**
   * <p>Retrieves detailed information about a specific AgentSpace.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/GetAgentSpace">AWS
   * API Reference</a></p>
   */
  virtual Model::GetAgentSpaceOutcome GetAgentSpace(const Model::GetAgentSpaceRequest& request) const;

  /**
   * A Callable wrapper for GetAgentSpace that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetAgentSpaceRequestT = Model::GetAgentSpaceRequest>
  Model::GetAgentSpaceOutcomeCallable GetAgentSpaceCallable(const GetAgentSpaceRequestT& request) const {
    return SubmitCallable(&DevOpsAgentClient::GetAgentSpace, request);
  }

  /**
   * An Async wrapper for GetAgentSpace that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetAgentSpaceRequestT = Model::GetAgentSpaceRequest>
  void GetAgentSpaceAsync(const GetAgentSpaceRequestT& request, const GetAgentSpaceResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&DevOpsAgentClient::GetAgentSpace, request, handler, context);
  }

  /**
   * <p>Retrieves given associations configured for a specific
   * AgentSpace.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/GetAssociation">AWS
   * API Reference</a></p>
   */
  virtual Model::GetAssociationOutcome GetAssociation(const Model::GetAssociationRequest& request) const;

  /**
   * A Callable wrapper for GetAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetAssociationRequestT = Model::GetAssociationRequest>
  Model::GetAssociationOutcomeCallable GetAssociationCallable(const GetAssociationRequestT& request) const {
    return SubmitCallable(&DevOpsAgentClient::GetAssociation, request);
  }

  /**
   * An Async wrapper for GetAssociation that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetAssociationRequestT = Model::GetAssociationRequest>
  void GetAssociationAsync(const GetAssociationRequestT& request, const GetAssociationResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&DevOpsAgentClient::GetAssociation, request, handler, context);
  }

  /**
   * <p>Gets a backlog task for the specified agent space and task id</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/GetBacklogTask">AWS
   * API Reference</a></p>
   */
  virtual Model::GetBacklogTaskOutcome GetBacklogTask(const Model::GetBacklogTaskRequest& request) const;

  /**
   * A Callable wrapper for GetBacklogTask that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetBacklogTaskRequestT = Model::GetBacklogTaskRequest>
  Model::GetBacklogTaskOutcomeCallable GetBacklogTaskCallable(const GetBacklogTaskRequestT& request) const {
    return SubmitCallable(&DevOpsAgentClient::GetBacklogTask, request);
  }

  /**
   * An Async wrapper for GetBacklogTask that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetBacklogTaskRequestT = Model::GetBacklogTaskRequest>
  void GetBacklogTaskAsync(const GetBacklogTaskRequestT& request, const GetBacklogTaskResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&DevOpsAgentClient::GetBacklogTask, request, handler, context);
  }

  /**
   * <p>Get the full auth configuration of operator including any enabled auth
   * flow</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/GetOperatorApp">AWS
   * API Reference</a></p>
   */
  virtual Model::GetOperatorAppOutcome GetOperatorApp(const Model::GetOperatorAppRequest& request) const;

  /**
   * A Callable wrapper for GetOperatorApp that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetOperatorAppRequestT = Model::GetOperatorAppRequest>
  Model::GetOperatorAppOutcomeCallable GetOperatorAppCallable(const GetOperatorAppRequestT& request) const {
    return SubmitCallable(&DevOpsAgentClient::GetOperatorApp, request);
  }

  /**
   * An Async wrapper for GetOperatorApp that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetOperatorAppRequestT = Model::GetOperatorAppRequest>
  void GetOperatorAppAsync(const GetOperatorAppRequestT& request, const GetOperatorAppResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&DevOpsAgentClient::GetOperatorApp, request, handler, context);
  }

  /**
   * <p>Retrieves a specific recommendation by its ID</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/GetRecommendation">AWS
   * API Reference</a></p>
   */
  virtual Model::GetRecommendationOutcome GetRecommendation(const Model::GetRecommendationRequest& request) const;

  /**
   * A Callable wrapper for GetRecommendation that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetRecommendationRequestT = Model::GetRecommendationRequest>
  Model::GetRecommendationOutcomeCallable GetRecommendationCallable(const GetRecommendationRequestT& request) const {
    return SubmitCallable(&DevOpsAgentClient::GetRecommendation, request);
  }

  /**
   * An Async wrapper for GetRecommendation that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename GetRecommendationRequestT = Model::GetRecommendationRequest>
  void GetRecommendationAsync(const GetRecommendationRequestT& request, const GetRecommendationResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&DevOpsAgentClient::GetRecommendation, request, handler, context);
  }

  /**
   * <p>Retrieves given service by it's unique identifier</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/GetService">AWS
   * API Reference</a></p>
   */
  virtual Model::GetServiceOutcome GetService(const Model::GetServiceRequest& request) const;

  /**
   * A Callable wrapper for GetService that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetServiceRequestT = Model::GetServiceRequest>
  Model::GetServiceOutcomeCallable GetServiceCallable(const GetServiceRequestT& request) const {
    return SubmitCallable(&DevOpsAgentClient::GetService, request);
  }

  /**
   * An Async wrapper for GetService that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetServiceRequestT = Model::GetServiceRequest>
  void GetServiceAsync(const GetServiceRequestT& request, const GetServiceResponseReceivedHandler& handler,
                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&DevOpsAgentClient::GetService, request, handler, context);
  }

  /**
   * <p>Initiate a chat for support case in the specified agent space</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/InitiateChatForCase">AWS
   * API Reference</a></p>
   */
  virtual Model::InitiateChatForCaseOutcome InitiateChatForCase(const Model::InitiateChatForCaseRequest& request) const;

  /**
   * A Callable wrapper for InitiateChatForCase that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename InitiateChatForCaseRequestT = Model::InitiateChatForCaseRequest>
  Model::InitiateChatForCaseOutcomeCallable InitiateChatForCaseCallable(const InitiateChatForCaseRequestT& request) const {
    return SubmitCallable(&DevOpsAgentClient::InitiateChatForCase, request);
  }

  /**
   * An Async wrapper for InitiateChatForCase that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename InitiateChatForCaseRequestT = Model::InitiateChatForCaseRequest>
  void InitiateChatForCaseAsync(const InitiateChatForCaseRequestT& request, const InitiateChatForCaseResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&DevOpsAgentClient::InitiateChatForCase, request, handler, context);
  }

  /**
   * <p>Lists all AgentSpaces with optional pagination.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/ListAgentSpaces">AWS
   * API Reference</a></p>
   */
  virtual Model::ListAgentSpacesOutcome ListAgentSpaces(const Model::ListAgentSpacesRequest& request = {}) const;

  /**
   * A Callable wrapper for ListAgentSpaces that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListAgentSpacesRequestT = Model::ListAgentSpacesRequest>
  Model::ListAgentSpacesOutcomeCallable ListAgentSpacesCallable(const ListAgentSpacesRequestT& request = {}) const {
    return SubmitCallable(&DevOpsAgentClient::ListAgentSpaces, request);
  }

  /**
   * An Async wrapper for ListAgentSpaces that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListAgentSpacesRequestT = Model::ListAgentSpacesRequest>
  void ListAgentSpacesAsync(const ListAgentSpacesResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                            const ListAgentSpacesRequestT& request = {}) const {
    return SubmitAsync(&DevOpsAgentClient::ListAgentSpaces, request, handler, context);
  }

  /**
   * <p>List all associations for given AgentSpace</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/ListAssociations">AWS
   * API Reference</a></p>
   */
  virtual Model::ListAssociationsOutcome ListAssociations(const Model::ListAssociationsRequest& request) const;

  /**
   * A Callable wrapper for ListAssociations that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListAssociationsRequestT = Model::ListAssociationsRequest>
  Model::ListAssociationsOutcomeCallable ListAssociationsCallable(const ListAssociationsRequestT& request) const {
    return SubmitCallable(&DevOpsAgentClient::ListAssociations, request);
  }

  /**
   * An Async wrapper for ListAssociations that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListAssociationsRequestT = Model::ListAssociationsRequest>
  void ListAssociationsAsync(const ListAssociationsRequestT& request, const ListAssociationsResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&DevOpsAgentClient::ListAssociations, request, handler, context);
  }

  /**
   * <p>Lists backlog tasks in the specified agent space with optional filtering and
   * sorting</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/ListBacklogTasks">AWS
   * API Reference</a></p>
   */
  virtual Model::ListBacklogTasksOutcome ListBacklogTasks(const Model::ListBacklogTasksRequest& request) const;

  /**
   * A Callable wrapper for ListBacklogTasks that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListBacklogTasksRequestT = Model::ListBacklogTasksRequest>
  Model::ListBacklogTasksOutcomeCallable ListBacklogTasksCallable(const ListBacklogTasksRequestT& request) const {
    return SubmitCallable(&DevOpsAgentClient::ListBacklogTasks, request);
  }

  /**
   * An Async wrapper for ListBacklogTasks that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListBacklogTasksRequestT = Model::ListBacklogTasksRequest>
  void ListBacklogTasksAsync(const ListBacklogTasksRequestT& request, const ListBacklogTasksResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&DevOpsAgentClient::ListBacklogTasks, request, handler, context);
  }

  /**
   * <p>Retrieves a paginated list of the user's recent chat executions</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/ListChats">AWS
   * API Reference</a></p>
   */
  virtual Model::ListChatsOutcome ListChats(const Model::ListChatsRequest& request) const;

  /**
   * A Callable wrapper for ListChats that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListChatsRequestT = Model::ListChatsRequest>
  Model::ListChatsOutcomeCallable ListChatsCallable(const ListChatsRequestT& request) const {
    return SubmitCallable(&DevOpsAgentClient::ListChats, request);
  }

  /**
   * An Async wrapper for ListChats that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListChatsRequestT = Model::ListChatsRequest>
  void ListChatsAsync(const ListChatsRequestT& request, const ListChatsResponseReceivedHandler& handler,
                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&DevOpsAgentClient::ListChats, request, handler, context);
  }

  /**
   * <p>List executions</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/ListExecutions">AWS
   * API Reference</a></p>
   */
  virtual Model::ListExecutionsOutcome ListExecutions(const Model::ListExecutionsRequest& request) const;

  /**
   * A Callable wrapper for ListExecutions that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListExecutionsRequestT = Model::ListExecutionsRequest>
  Model::ListExecutionsOutcomeCallable ListExecutionsCallable(const ListExecutionsRequestT& request) const {
    return SubmitCallable(&DevOpsAgentClient::ListExecutions, request);
  }

  /**
   * An Async wrapper for ListExecutions that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListExecutionsRequestT = Model::ListExecutionsRequest>
  void ListExecutionsAsync(const ListExecutionsRequestT& request, const ListExecutionsResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&DevOpsAgentClient::ListExecutions, request, handler, context);
  }

  /**
   * <p>Lists goals in the specified agent space with optional
   * filtering</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/ListGoals">AWS
   * API Reference</a></p>
   */
  virtual Model::ListGoalsOutcome ListGoals(const Model::ListGoalsRequest& request) const;

  /**
   * A Callable wrapper for ListGoals that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListGoalsRequestT = Model::ListGoalsRequest>
  Model::ListGoalsOutcomeCallable ListGoalsCallable(const ListGoalsRequestT& request) const {
    return SubmitCallable(&DevOpsAgentClient::ListGoals, request);
  }

  /**
   * An Async wrapper for ListGoals that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListGoalsRequestT = Model::ListGoalsRequest>
  void ListGoalsAsync(const ListGoalsRequestT& request, const ListGoalsResponseReceivedHandler& handler,
                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&DevOpsAgentClient::ListGoals, request, handler, context);
  }

  /**
   * <p>List journal records for a specific execution</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/ListJournalRecords">AWS
   * API Reference</a></p>
   */
  virtual Model::ListJournalRecordsOutcome ListJournalRecords(const Model::ListJournalRecordsRequest& request) const;

  /**
   * A Callable wrapper for ListJournalRecords that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListJournalRecordsRequestT = Model::ListJournalRecordsRequest>
  Model::ListJournalRecordsOutcomeCallable ListJournalRecordsCallable(const ListJournalRecordsRequestT& request) const {
    return SubmitCallable(&DevOpsAgentClient::ListJournalRecords, request);
  }

  /**
   * An Async wrapper for ListJournalRecords that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListJournalRecordsRequestT = Model::ListJournalRecordsRequest>
  void ListJournalRecordsAsync(const ListJournalRecordsRequestT& request, const ListJournalRecordsResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&DevOpsAgentClient::ListJournalRecords, request, handler, context);
  }

  /**
   * <p>List pending messages for a specific execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/ListPendingMessages">AWS
   * API Reference</a></p>
   */
  virtual Model::ListPendingMessagesOutcome ListPendingMessages(const Model::ListPendingMessagesRequest& request) const;

  /**
   * A Callable wrapper for ListPendingMessages that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListPendingMessagesRequestT = Model::ListPendingMessagesRequest>
  Model::ListPendingMessagesOutcomeCallable ListPendingMessagesCallable(const ListPendingMessagesRequestT& request) const {
    return SubmitCallable(&DevOpsAgentClient::ListPendingMessages, request);
  }

  /**
   * An Async wrapper for ListPendingMessages that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListPendingMessagesRequestT = Model::ListPendingMessagesRequest>
  void ListPendingMessagesAsync(const ListPendingMessagesRequestT& request, const ListPendingMessagesResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&DevOpsAgentClient::ListPendingMessages, request, handler, context);
  }

  /**
   * <p>Lists all Private Connections in the caller's account.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/ListPrivateConnections">AWS
   * API Reference</a></p>
   */
  virtual Model::ListPrivateConnectionsOutcome ListPrivateConnections(const Model::ListPrivateConnectionsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListPrivateConnections that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListPrivateConnectionsRequestT = Model::ListPrivateConnectionsRequest>
  Model::ListPrivateConnectionsOutcomeCallable ListPrivateConnectionsCallable(const ListPrivateConnectionsRequestT& request = {}) const {
    return SubmitCallable(&DevOpsAgentClient::ListPrivateConnections, request);
  }

  /**
   * An Async wrapper for ListPrivateConnections that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListPrivateConnectionsRequestT = Model::ListPrivateConnectionsRequest>
  void ListPrivateConnectionsAsync(const ListPrivateConnectionsResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                   const ListPrivateConnectionsRequestT& request = {}) const {
    return SubmitAsync(&DevOpsAgentClient::ListPrivateConnections, request, handler, context);
  }

  /**
   * <p>Lists recommendations for the specified agent space</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/ListRecommendations">AWS
   * API Reference</a></p>
   */
  virtual Model::ListRecommendationsOutcome ListRecommendations(const Model::ListRecommendationsRequest& request) const;

  /**
   * A Callable wrapper for ListRecommendations that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListRecommendationsRequestT = Model::ListRecommendationsRequest>
  Model::ListRecommendationsOutcomeCallable ListRecommendationsCallable(const ListRecommendationsRequestT& request) const {
    return SubmitCallable(&DevOpsAgentClient::ListRecommendations, request);
  }

  /**
   * An Async wrapper for ListRecommendations that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListRecommendationsRequestT = Model::ListRecommendationsRequest>
  void ListRecommendationsAsync(const ListRecommendationsRequestT& request, const ListRecommendationsResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&DevOpsAgentClient::ListRecommendations, request, handler, context);
  }

  /**
   * <p>List a list of registered service on the account level.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/ListServices">AWS
   * API Reference</a></p>
   */
  virtual Model::ListServicesOutcome ListServices(const Model::ListServicesRequest& request = {}) const;

  /**
   * A Callable wrapper for ListServices that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListServicesRequestT = Model::ListServicesRequest>
  Model::ListServicesOutcomeCallable ListServicesCallable(const ListServicesRequestT& request = {}) const {
    return SubmitCallable(&DevOpsAgentClient::ListServices, request);
  }

  /**
   * An Async wrapper for ListServices that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListServicesRequestT = Model::ListServicesRequest>
  void ListServicesAsync(const ListServicesResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                         const ListServicesRequestT& request = {}) const {
    return SubmitAsync(&DevOpsAgentClient::ListServices, request, handler, context);
  }

  /**
   * <p>Lists tags for the specified AWS DevOps Agent resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/ListTagsForResource">AWS
   * API Reference</a></p>
   */
  virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

  /**
   * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const {
    return SubmitCallable(&DevOpsAgentClient::ListTagsForResource, request);
  }

  /**
   * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&DevOpsAgentClient::ListTagsForResource, request, handler, context);
  }

  /**
   * <p>List all webhooks for given Association</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/ListWebhooks">AWS
   * API Reference</a></p>
   */
  virtual Model::ListWebhooksOutcome ListWebhooks(const Model::ListWebhooksRequest& request) const;

  /**
   * A Callable wrapper for ListWebhooks that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListWebhooksRequestT = Model::ListWebhooksRequest>
  Model::ListWebhooksOutcomeCallable ListWebhooksCallable(const ListWebhooksRequestT& request) const {
    return SubmitCallable(&DevOpsAgentClient::ListWebhooks, request);
  }

  /**
   * An Async wrapper for ListWebhooks that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListWebhooksRequestT = Model::ListWebhooksRequest>
  void ListWebhooksAsync(const ListWebhooksRequestT& request, const ListWebhooksResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&DevOpsAgentClient::ListWebhooks, request, handler, context);
  }

  /**
   * <p>This operation registers the specified service</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/RegisterService">AWS
   * API Reference</a></p>
   */
  virtual Model::RegisterServiceOutcome RegisterService(const Model::RegisterServiceRequest& request) const;

  /**
   * A Callable wrapper for RegisterService that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename RegisterServiceRequestT = Model::RegisterServiceRequest>
  Model::RegisterServiceOutcomeCallable RegisterServiceCallable(const RegisterServiceRequestT& request) const {
    return SubmitCallable(&DevOpsAgentClient::RegisterService, request);
  }

  /**
   * An Async wrapper for RegisterService that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename RegisterServiceRequestT = Model::RegisterServiceRequest>
  void RegisterServiceAsync(const RegisterServiceRequestT& request, const RegisterServiceResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&DevOpsAgentClient::RegisterService, request, handler, context);
  }

  /**
   * <p>Sends a chat message and streams the response for the specified agent space
   * execution</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/SendMessage">AWS
   * API Reference</a></p>
   */
  virtual Model::SendMessageOutcome SendMessage(Model::SendMessageRequest& request) const;

  /**
   * A Callable wrapper for SendMessage that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename SendMessageRequestT = Model::SendMessageRequest>
  Model::SendMessageOutcomeCallable SendMessageCallable(SendMessageRequestT& request) const {
    return SubmitCallable(&DevOpsAgentClient::SendMessage, request);
  }

  /**
   * An Async wrapper for SendMessage that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename SendMessageRequestT = Model::SendMessageRequest>
  void SendMessageAsync(SendMessageRequestT& request, const SendMessageResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&DevOpsAgentClient::SendMessage, request, handler, context);
  }

  /**
   * <p>Adds or overwrites tags for the specified AWS DevOps Agent
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/TagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

  /**
   * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const {
    return SubmitCallable(&DevOpsAgentClient::TagResource, request);
  }

  /**
   * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&DevOpsAgentClient::TagResource, request, handler, context);
  }

  /**
   * <p>Removes tags from the specified AWS DevOps Agent resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/UntagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

  /**
   * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const {
    return SubmitCallable(&DevOpsAgentClient::UntagResource, request);
  }

  /**
   * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&DevOpsAgentClient::UntagResource, request, handler, context);
  }

  /**
   * <p>Updates the information of an existing AgentSpace.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/UpdateAgentSpace">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateAgentSpaceOutcome UpdateAgentSpace(const Model::UpdateAgentSpaceRequest& request) const;

  /**
   * A Callable wrapper for UpdateAgentSpace that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateAgentSpaceRequestT = Model::UpdateAgentSpaceRequest>
  Model::UpdateAgentSpaceOutcomeCallable UpdateAgentSpaceCallable(const UpdateAgentSpaceRequestT& request) const {
    return SubmitCallable(&DevOpsAgentClient::UpdateAgentSpace, request);
  }

  /**
   * An Async wrapper for UpdateAgentSpace that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename UpdateAgentSpaceRequestT = Model::UpdateAgentSpaceRequest>
  void UpdateAgentSpaceAsync(const UpdateAgentSpaceRequestT& request, const UpdateAgentSpaceResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&DevOpsAgentClient::UpdateAgentSpace, request, handler, context);
  }

  /**
   * <p>Partially updates the configuration of an existing service association for an
   * AgentSpace. Present fields are fully replaced; absent fields are left unchanged.
   * Returns 200 OK on success.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/UpdateAssociation">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateAssociationOutcome UpdateAssociation(const Model::UpdateAssociationRequest& request) const;

  /**
   * A Callable wrapper for UpdateAssociation that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateAssociationRequestT = Model::UpdateAssociationRequest>
  Model::UpdateAssociationOutcomeCallable UpdateAssociationCallable(const UpdateAssociationRequestT& request) const {
    return SubmitCallable(&DevOpsAgentClient::UpdateAssociation, request);
  }

  /**
   * An Async wrapper for UpdateAssociation that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename UpdateAssociationRequestT = Model::UpdateAssociationRequest>
  void UpdateAssociationAsync(const UpdateAssociationRequestT& request, const UpdateAssociationResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&DevOpsAgentClient::UpdateAssociation, request, handler, context);
  }

  /**
   * <p>Update an existing backlog task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/UpdateBacklogTask">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateBacklogTaskOutcome UpdateBacklogTask(const Model::UpdateBacklogTaskRequest& request) const;

  /**
   * A Callable wrapper for UpdateBacklogTask that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateBacklogTaskRequestT = Model::UpdateBacklogTaskRequest>
  Model::UpdateBacklogTaskOutcomeCallable UpdateBacklogTaskCallable(const UpdateBacklogTaskRequestT& request) const {
    return SubmitCallable(&DevOpsAgentClient::UpdateBacklogTask, request);
  }

  /**
   * An Async wrapper for UpdateBacklogTask that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename UpdateBacklogTaskRequestT = Model::UpdateBacklogTaskRequest>
  void UpdateBacklogTaskAsync(const UpdateBacklogTaskRequestT& request, const UpdateBacklogTaskResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&DevOpsAgentClient::UpdateBacklogTask, request, handler, context);
  }

  /**
   * <p>Update an existing goal</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/UpdateGoal">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateGoalOutcome UpdateGoal(const Model::UpdateGoalRequest& request) const;

  /**
   * A Callable wrapper for UpdateGoal that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UpdateGoalRequestT = Model::UpdateGoalRequest>
  Model::UpdateGoalOutcomeCallable UpdateGoalCallable(const UpdateGoalRequestT& request) const {
    return SubmitCallable(&DevOpsAgentClient::UpdateGoal, request);
  }

  /**
   * An Async wrapper for UpdateGoal that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UpdateGoalRequestT = Model::UpdateGoalRequest>
  void UpdateGoalAsync(const UpdateGoalRequestT& request, const UpdateGoalResponseReceivedHandler& handler,
                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&DevOpsAgentClient::UpdateGoal, request, handler, context);
  }

  /**
   * <p>Update the external Identity Provider configuration for the Operator
   * App</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/UpdateOperatorAppIdpConfig">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateOperatorAppIdpConfigOutcome UpdateOperatorAppIdpConfig(
      const Model::UpdateOperatorAppIdpConfigRequest& request) const;

  /**
   * A Callable wrapper for UpdateOperatorAppIdpConfig that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename UpdateOperatorAppIdpConfigRequestT = Model::UpdateOperatorAppIdpConfigRequest>
  Model::UpdateOperatorAppIdpConfigOutcomeCallable UpdateOperatorAppIdpConfigCallable(
      const UpdateOperatorAppIdpConfigRequestT& request) const {
    return SubmitCallable(&DevOpsAgentClient::UpdateOperatorAppIdpConfig, request);
  }

  /**
   * An Async wrapper for UpdateOperatorAppIdpConfig that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename UpdateOperatorAppIdpConfigRequestT = Model::UpdateOperatorAppIdpConfigRequest>
  void UpdateOperatorAppIdpConfigAsync(const UpdateOperatorAppIdpConfigRequestT& request,
                                       const UpdateOperatorAppIdpConfigResponseReceivedHandler& handler,
                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&DevOpsAgentClient::UpdateOperatorAppIdpConfig, request, handler, context);
  }

  /**
   * <p>Updates the certificate associated with a Private Connection.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/UpdatePrivateConnectionCertificate">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdatePrivateConnectionCertificateOutcome UpdatePrivateConnectionCertificate(
      const Model::UpdatePrivateConnectionCertificateRequest& request) const;

  /**
   * A Callable wrapper for UpdatePrivateConnectionCertificate that returns a future to the operation so that it can be executed in parallel
   * to other requests.
   */
  template <typename UpdatePrivateConnectionCertificateRequestT = Model::UpdatePrivateConnectionCertificateRequest>
  Model::UpdatePrivateConnectionCertificateOutcomeCallable UpdatePrivateConnectionCertificateCallable(
      const UpdatePrivateConnectionCertificateRequestT& request) const {
    return SubmitCallable(&DevOpsAgentClient::UpdatePrivateConnectionCertificate, request);
  }

  /**
   * An Async wrapper for UpdatePrivateConnectionCertificate that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename UpdatePrivateConnectionCertificateRequestT = Model::UpdatePrivateConnectionCertificateRequest>
  void UpdatePrivateConnectionCertificateAsync(const UpdatePrivateConnectionCertificateRequestT& request,
                                               const UpdatePrivateConnectionCertificateResponseReceivedHandler& handler,
                                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&DevOpsAgentClient::UpdatePrivateConnectionCertificate, request, handler, context);
  }

  /**
   * <p>Updates an existing recommendation with new content, status, or
   * metadata</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/UpdateRecommendation">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateRecommendationOutcome UpdateRecommendation(const Model::UpdateRecommendationRequest& request) const;

  /**
   * A Callable wrapper for UpdateRecommendation that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateRecommendationRequestT = Model::UpdateRecommendationRequest>
  Model::UpdateRecommendationOutcomeCallable UpdateRecommendationCallable(const UpdateRecommendationRequestT& request) const {
    return SubmitCallable(&DevOpsAgentClient::UpdateRecommendation, request);
  }

  /**
   * An Async wrapper for UpdateRecommendation that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename UpdateRecommendationRequestT = Model::UpdateRecommendationRequest>
  void UpdateRecommendationAsync(const UpdateRecommendationRequestT& request, const UpdateRecommendationResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&DevOpsAgentClient::UpdateRecommendation, request, handler, context);
  }

  /**
   * <p>Validates an aws association and set status and returns a 204 No Content
   * response on success.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/ValidateAwsAssociations">AWS
   * API Reference</a></p>
   */
  virtual Model::ValidateAwsAssociationsOutcome ValidateAwsAssociations(const Model::ValidateAwsAssociationsRequest& request) const;

  /**
   * A Callable wrapper for ValidateAwsAssociations that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ValidateAwsAssociationsRequestT = Model::ValidateAwsAssociationsRequest>
  Model::ValidateAwsAssociationsOutcomeCallable ValidateAwsAssociationsCallable(const ValidateAwsAssociationsRequestT& request) const {
    return SubmitCallable(&DevOpsAgentClient::ValidateAwsAssociations, request);
  }

  /**
   * An Async wrapper for ValidateAwsAssociations that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ValidateAwsAssociationsRequestT = Model::ValidateAwsAssociationsRequest>
  void ValidateAwsAssociationsAsync(const ValidateAwsAssociationsRequestT& request,
                                    const ValidateAwsAssociationsResponseReceivedHandler& handler,
                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&DevOpsAgentClient::ValidateAwsAssociations, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<DevOpsAgentEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<DevOpsAgentClient>;
  void init(const DevOpsAgentClientConfiguration& clientConfiguration);

  typedef Aws::Utils::Outcome<Aws::AmazonWebServiceResult<RESPONSE>, DevOpsAgentError> InvokeOperationOutcome;

  InvokeOperationOutcome InvokeServiceOperation(const AmazonWebServiceRequest& request,
                                                const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
                                                Aws::Http::HttpMethod httpMethod) const;

  DevOpsAgentClientConfiguration m_clientConfiguration;
  std::shared_ptr<DevOpsAgentEndpointProviderBase> m_endpointProvider;
};

}  // namespace DevOpsAgent
}  // namespace Aws
