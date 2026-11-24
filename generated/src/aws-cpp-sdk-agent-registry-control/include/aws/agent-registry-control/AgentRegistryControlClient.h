/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControlPaginationBase.h>
#include <aws/agent-registry-control/AgentRegistryControlServiceClientModel.h>
#include <aws/agent-registry-control/AgentRegistryControlWaiter.h>
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

namespace Aws {
namespace AgentRegistryControl {
/**
 * <p>Amazon Web Services Agent Registry is a managed catalog for publishing and
 * discovering resources such as MCP servers, agents, and agent skills. Agent
 * Registry Control is its control-plane API: use it to create and manage
 * registries and the records they contain, configure discovery and authorization,
 * govern record approval and curation workflows, and manage automatic detection of
 * resources. Data-plane search and MCP invocation operations are provided by the
 * companion Agent Registry API.</p>
 */
class AWS_AGENTREGISTRYCONTROL_API AgentRegistryControlClient
    : public Aws::Client::AWSJsonClient,
      public Aws::Client::ClientWithAsyncTemplateMethods<AgentRegistryControlClient>,
      public AgentRegistryControlPaginationBase<AgentRegistryControlClient>,
      public AgentRegistryControlWaiter<AgentRegistryControlClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef AgentRegistryControlClientConfiguration ClientConfigurationType;
  typedef AgentRegistryControlEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  AgentRegistryControlClient(const Aws::AgentRegistryControl::AgentRegistryControlClientConfiguration& clientConfiguration =
                                 Aws::AgentRegistryControl::AgentRegistryControlClientConfiguration(),
                             std::shared_ptr<AgentRegistryControlEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  AgentRegistryControlClient(const Aws::Auth::AWSCredentials& credentials,
                             std::shared_ptr<AgentRegistryControlEndpointProviderBase> endpointProvider = nullptr,
                             const Aws::AgentRegistryControl::AgentRegistryControlClientConfiguration& clientConfiguration =
                                 Aws::AgentRegistryControl::AgentRegistryControlClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  AgentRegistryControlClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             std::shared_ptr<AgentRegistryControlEndpointProviderBase> endpointProvider = nullptr,
                             const Aws::AgentRegistryControl::AgentRegistryControlClientConfiguration& clientConfiguration =
                                 Aws::AgentRegistryControl::AgentRegistryControlClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  AgentRegistryControlClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  AgentRegistryControlClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  AgentRegistryControlClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~AgentRegistryControlClient();

  /**
   * <p>Associate a registry record with a publisher and assign the record a public
   * identifier under the publisher's domain. The registry record must be APPROVED
   * and the publisher must be ACTIVE. A registry record can have only one publisher
   * association. The new association starts in PENDING_APPROVAL until a curator
   * approves or rejects it. A ConflictException (HTTP 409) means the publisher is
   * not ACTIVE yet, the registry record already has an association, or another
   * registry record already holds the public identifier. To retry safely, repeat the
   * request with the same clientToken; a retry returns the original association. If
   * the publisher has reached its association quota, the request fails with
   * ServiceQuotaExceededException (HTTP 402). Remove an unused association or
   * request a quota increase.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/AssociatePublisher">AWS
   * API Reference</a></p>
   */
  virtual Model::AssociatePublisherOutcome AssociatePublisher(const Model::AssociatePublisherRequest& request) const;

  /**
   * A Callable wrapper for AssociatePublisher that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename AssociatePublisherRequestT = Model::AssociatePublisherRequest>
  Model::AssociatePublisherOutcomeCallable AssociatePublisherCallable(const AssociatePublisherRequestT& request) const {
    return SubmitCallable(&AgentRegistryControlClient::AssociatePublisher, request);
  }

  /**
   * An Async wrapper for AssociatePublisher that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename AssociatePublisherRequestT = Model::AssociatePublisherRequest>
  void AssociatePublisherAsync(const AssociatePublisherRequestT& request, const AssociatePublisherResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&AgentRegistryControlClient::AssociatePublisher, request, handler, context);
  }

  /**
   * <p>Create a publisher for a domain you control. The publisher starts in
   * ACTION_REQUIRED, and the response includes a domainChallenge. To verify the
   * domain, create a DNS TXT record with the challenge's recordName and recordValue.
   * When the registry finds the record, the publisher becomes ACTIVE and you can
   * associate registry records with it. Your account can have one publisher per
   * domain. Creating a second publisher for the same domain fails with
   * ConflictException unless the request repeats the original clientToken, which
   * returns the existing publisher. The request also fails with ConflictException
   * when another account has already verified the domain. If your account has
   * reached its Publisher quota, the request fails with
   * ServiceQuotaExceededException (HTTP 402). Delete an unused Publisher or request
   * a quota increase.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/CreatePublisher">AWS
   * API Reference</a></p>
   */
  virtual Model::CreatePublisherOutcome CreatePublisher(const Model::CreatePublisherRequest& request) const;

  /**
   * A Callable wrapper for CreatePublisher that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename CreatePublisherRequestT = Model::CreatePublisherRequest>
  Model::CreatePublisherOutcomeCallable CreatePublisherCallable(const CreatePublisherRequestT& request) const {
    return SubmitCallable(&AgentRegistryControlClient::CreatePublisher, request);
  }

  /**
   * An Async wrapper for CreatePublisher that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreatePublisherRequestT = Model::CreatePublisherRequest>
  void CreatePublisherAsync(const CreatePublisherRequestT& request, const CreatePublisherResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&AgentRegistryControlClient::CreatePublisher, request, handler, context);
  }

  /**
   * <p>Creates a new registry, a catalog that organizes registry records and defines
   * their discovery authorization and record approval behavior. Creation is
   * asynchronous: the registry begins in the CREATING status and becomes usable once
   * it reaches READY.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/CreateRegistry">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateRegistryOutcome CreateRegistry(const Model::CreateRegistryRequest& request) const;

  /**
   * A Callable wrapper for CreateRegistry that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename CreateRegistryRequestT = Model::CreateRegistryRequest>
  Model::CreateRegistryOutcomeCallable CreateRegistryCallable(const CreateRegistryRequestT& request) const {
    return SubmitCallable(&AgentRegistryControlClient::CreateRegistry, request);
  }

  /**
   * An Async wrapper for CreateRegistry that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreateRegistryRequestT = Model::CreateRegistryRequest>
  void CreateRegistryAsync(const CreateRegistryRequestT& request, const CreateRegistryResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&AgentRegistryControlClient::CreateRegistry, request, handler, context);
  }

  /**
   * <p>Creates a registry record within a registry. A registry record describes a
   * discoverable resource, such as an MCP server, an agent, an agent skill, or a
   * custom resource. For an agent skill, you can upload a skill package in
   * <code>artifact</code>, or synchronize the skill from an Amazon S3 or GitHub
   * source. Creation is asynchronous: the operation returns the record with the
   * <code>CREATING</code> status while the registry processes it. If a GitHub user
   * must first authorize access to the source, the operation returns the record with
   * the <code>CREATE_PENDING_AUTH</code> status instead.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/CreateRegistryRecord">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateRegistryRecordOutcome CreateRegistryRecord(const Model::CreateRegistryRecordRequest& request) const;

  /**
   * A Callable wrapper for CreateRegistryRecord that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateRegistryRecordRequestT = Model::CreateRegistryRecordRequest>
  Model::CreateRegistryRecordOutcomeCallable CreateRegistryRecordCallable(const CreateRegistryRecordRequestT& request) const {
    return SubmitCallable(&AgentRegistryControlClient::CreateRegistryRecord, request);
  }

  /**
   * An Async wrapper for CreateRegistryRecord that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename CreateRegistryRecordRequestT = Model::CreateRegistryRecordRequest>
  void CreateRegistryRecordAsync(const CreateRegistryRecordRequestT& request, const CreateRegistryRecordResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&AgentRegistryControlClient::CreateRegistryRecord, request, handler, context);
  }

  /**
   * <p>Delete a publisher. A successful call returns an empty response. You can't
   * delete a publisher that has registry record associations; disassociate every
   * registry record from it first. The request fails with ConflictException while
   * the publisher has associations or another delete is in progress. Association
   * removals can take a few seconds to be reflected, so a delete that follows a
   * disassociation can briefly fail with ConflictException; retry after a short
   * wait. If the publisher ARN names your account and the publisher doesn't exist,
   * the request fails with ResourceNotFoundException.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/DeletePublisher">AWS
   * API Reference</a></p>
   */
  virtual Model::DeletePublisherOutcome DeletePublisher(const Model::DeletePublisherRequest& request) const;

  /**
   * A Callable wrapper for DeletePublisher that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DeletePublisherRequestT = Model::DeletePublisherRequest>
  Model::DeletePublisherOutcomeCallable DeletePublisherCallable(const DeletePublisherRequestT& request) const {
    return SubmitCallable(&AgentRegistryControlClient::DeletePublisher, request);
  }

  /**
   * An Async wrapper for DeletePublisher that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DeletePublisherRequestT = Model::DeletePublisherRequest>
  void DeletePublisherAsync(const DeletePublisherRequestT& request, const DeletePublisherResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&AgentRegistryControlClient::DeletePublisher, request, handler, context);
  }

  /**
   * <p>Deletes a registry. Deletion is asynchronous: the registry transitions to the
   * DELETING status and is removed along with its registry records.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/DeleteRegistry">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteRegistryOutcome DeleteRegistry(const Model::DeleteRegistryRequest& request) const;

  /**
   * A Callable wrapper for DeleteRegistry that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DeleteRegistryRequestT = Model::DeleteRegistryRequest>
  Model::DeleteRegistryOutcomeCallable DeleteRegistryCallable(const DeleteRegistryRequestT& request) const {
    return SubmitCallable(&AgentRegistryControlClient::DeleteRegistry, request);
  }

  /**
   * An Async wrapper for DeleteRegistry that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DeleteRegistryRequestT = Model::DeleteRegistryRequest>
  void DeleteRegistryAsync(const DeleteRegistryRequestT& request, const DeleteRegistryResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&AgentRegistryControlClient::DeleteRegistry, request, handler, context);
  }

  /**
   * <p>Deletes a registry record</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/DeleteRegistryRecord">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteRegistryRecordOutcome DeleteRegistryRecord(const Model::DeleteRegistryRecordRequest& request) const;

  /**
   * A Callable wrapper for DeleteRegistryRecord that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteRegistryRecordRequestT = Model::DeleteRegistryRecordRequest>
  Model::DeleteRegistryRecordOutcomeCallable DeleteRegistryRecordCallable(const DeleteRegistryRecordRequestT& request) const {
    return SubmitCallable(&AgentRegistryControlClient::DeleteRegistryRecord, request);
  }

  /**
   * An Async wrapper for DeleteRegistryRecord that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DeleteRegistryRecordRequestT = Model::DeleteRegistryRecordRequest>
  void DeleteRegistryRecordAsync(const DeleteRegistryRecordRequestT& request, const DeleteRegistryRecordResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&AgentRegistryControlClient::DeleteRegistryRecord, request, handler, context);
  }

  /**
   * <p>Remove a registry record's publisher association and release its public
   * identifier. A successful call returns an empty response. Disassociating a
   * registry record that has no association succeeds. If another account created the
   * association, the request fails with AccessDeniedException.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/DisassociatePublisher">AWS
   * API Reference</a></p>
   */
  virtual Model::DisassociatePublisherOutcome DisassociatePublisher(const Model::DisassociatePublisherRequest& request) const;

  /**
   * A Callable wrapper for DisassociatePublisher that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DisassociatePublisherRequestT = Model::DisassociatePublisherRequest>
  Model::DisassociatePublisherOutcomeCallable DisassociatePublisherCallable(const DisassociatePublisherRequestT& request) const {
    return SubmitCallable(&AgentRegistryControlClient::DisassociatePublisher, request);
  }

  /**
   * An Async wrapper for DisassociatePublisher that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DisassociatePublisherRequestT = Model::DisassociatePublisherRequest>
  void DisassociatePublisherAsync(const DisassociatePublisherRequestT& request, const DisassociatePublisherResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&AgentRegistryControlClient::DisassociatePublisher, request, handler, context);
  }

  /**
   * <p>Get a publisher, including its verification status and the DNS challenge for
   * its domain. If the publisher ARN names your account and the publisher doesn't
   * exist, the request fails with ResourceNotFoundException.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/GetPublisher">AWS
   * API Reference</a></p>
   */
  virtual Model::GetPublisherOutcome GetPublisher(const Model::GetPublisherRequest& request) const;

  /**
   * A Callable wrapper for GetPublisher that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetPublisherRequestT = Model::GetPublisherRequest>
  Model::GetPublisherOutcomeCallable GetPublisherCallable(const GetPublisherRequestT& request) const {
    return SubmitCallable(&AgentRegistryControlClient::GetPublisher, request);
  }

  /**
   * An Async wrapper for GetPublisher that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetPublisherRequestT = Model::GetPublisherRequest>
  void GetPublisherAsync(const GetPublisherRequestT& request, const GetPublisherResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&AgentRegistryControlClient::GetPublisher, request, handler, context);
  }

  /**
   * <p>Gets a registry by identifier (ARN or ID)</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/GetRegistry">AWS
   * API Reference</a></p>
   */
  virtual Model::GetRegistryOutcome GetRegistry(const Model::GetRegistryRequest& request) const;

  /**
   * A Callable wrapper for GetRegistry that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetRegistryRequestT = Model::GetRegistryRequest>
  Model::GetRegistryOutcomeCallable GetRegistryCallable(const GetRegistryRequestT& request) const {
    return SubmitCallable(&AgentRegistryControlClient::GetRegistry, request);
  }

  /**
   * An Async wrapper for GetRegistry that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetRegistryRequestT = Model::GetRegistryRequest>
  void GetRegistryAsync(const GetRegistryRequestT& request, const GetRegistryResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&AgentRegistryControlClient::GetRegistry, request, handler, context);
  }

  /**
   * <p>Retrieves the details of a registry record. The response describes the
   * record's latest revision, including a revision that isn't approved yet. For a
   * skill record, the operation also returns the skill package in
   * <code>artifact</code> and the source that the registry last synchronized the
   * skill from in <code>synchronizedSource</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/GetRegistryRecord">AWS
   * API Reference</a></p>
   */
  virtual Model::GetRegistryRecordOutcome GetRegistryRecord(const Model::GetRegistryRecordRequest& request) const;

  /**
   * A Callable wrapper for GetRegistryRecord that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetRegistryRecordRequestT = Model::GetRegistryRecordRequest>
  Model::GetRegistryRecordOutcomeCallable GetRegistryRecordCallable(const GetRegistryRecordRequestT& request) const {
    return SubmitCallable(&AgentRegistryControlClient::GetRegistryRecord, request);
  }

  /**
   * An Async wrapper for GetRegistryRecord that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename GetRegistryRecordRequestT = Model::GetRegistryRecordRequest>
  void GetRegistryRecordAsync(const GetRegistryRecordRequestT& request, const GetRegistryRecordResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&AgentRegistryControlClient::GetRegistryRecord, request, handler, context);
  }

  /**
   * <p>List the registry record associations your account created. Pass publisherArn
   * to list only the associations for that publisher; omit it to list associations
   * across all publishers. Results are eventually consistent, so an association you
   * just created or removed can take a few seconds to appear in or disappear from
   * the list.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/ListPublisherAssociations">AWS
   * API Reference</a></p>
   */
  virtual Model::ListPublisherAssociationsOutcome ListPublisherAssociations(
      const Model::ListPublisherAssociationsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListPublisherAssociations that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListPublisherAssociationsRequestT = Model::ListPublisherAssociationsRequest>
  Model::ListPublisherAssociationsOutcomeCallable ListPublisherAssociationsCallable(
      const ListPublisherAssociationsRequestT& request = {}) const {
    return SubmitCallable(&AgentRegistryControlClient::ListPublisherAssociations, request);
  }

  /**
   * An Async wrapper for ListPublisherAssociations that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListPublisherAssociationsRequestT = Model::ListPublisherAssociationsRequest>
  void ListPublisherAssociationsAsync(const ListPublisherAssociationsResponseReceivedHandler& handler,
                                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                      const ListPublisherAssociationsRequestT& request = {}) const {
    return SubmitAsync(&AgentRegistryControlClient::ListPublisherAssociations, request, handler, context);
  }

  /**
   * <p>List the publishers your account owns, followed by the ACTIVE publishers
   * shared with your account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/ListPublishers">AWS
   * API Reference</a></p>
   */
  virtual Model::ListPublishersOutcome ListPublishers(const Model::ListPublishersRequest& request = {}) const;

  /**
   * A Callable wrapper for ListPublishers that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListPublishersRequestT = Model::ListPublishersRequest>
  Model::ListPublishersOutcomeCallable ListPublishersCallable(const ListPublishersRequestT& request = {}) const {
    return SubmitCallable(&AgentRegistryControlClient::ListPublishers, request);
  }

  /**
   * An Async wrapper for ListPublishers that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListPublishersRequestT = Model::ListPublishersRequest>
  void ListPublishersAsync(const ListPublishersResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                           const ListPublishersRequestT& request = {}) const {
    return SubmitAsync(&AgentRegistryControlClient::ListPublishers, request, handler, context);
  }

  /**
   * <p>Lists the registries in the caller's account and Region, with optional
   * filtering by status and discovery authorizer type</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/ListRegistries">AWS
   * API Reference</a></p>
   */
  virtual Model::ListRegistriesOutcome ListRegistries(const Model::ListRegistriesRequest& request = {}) const;

  /**
   * A Callable wrapper for ListRegistries that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListRegistriesRequestT = Model::ListRegistriesRequest>
  Model::ListRegistriesOutcomeCallable ListRegistriesCallable(const ListRegistriesRequestT& request = {}) const {
    return SubmitCallable(&AgentRegistryControlClient::ListRegistries, request);
  }

  /**
   * An Async wrapper for ListRegistries that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListRegistriesRequestT = Model::ListRegistriesRequest>
  void ListRegistriesAsync(const ListRegistriesResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                           const ListRegistriesRequestT& request = {}) const {
    return SubmitAsync(&AgentRegistryControlClient::ListRegistries, request, handler, context);
  }

  /**
   * <p>Lists the registry records within a registry, with optional filtering by
   * name, status, and record type</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/ListRegistryRecords">AWS
   * API Reference</a></p>
   */
  virtual Model::ListRegistryRecordsOutcome ListRegistryRecords(const Model::ListRegistryRecordsRequest& request) const;

  /**
   * A Callable wrapper for ListRegistryRecords that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListRegistryRecordsRequestT = Model::ListRegistryRecordsRequest>
  Model::ListRegistryRecordsOutcomeCallable ListRegistryRecordsCallable(const ListRegistryRecordsRequestT& request) const {
    return SubmitCallable(&AgentRegistryControlClient::ListRegistryRecords, request);
  }

  /**
   * An Async wrapper for ListRegistryRecords that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListRegistryRecordsRequestT = Model::ListRegistryRecordsRequest>
  void ListRegistryRecordsAsync(const ListRegistryRecordsRequestT& request, const ListRegistryRecordsResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&AgentRegistryControlClient::ListRegistryRecords, request, handler, context);
  }

  /**
   * <p>Lists the tags associated with the specified Amazon Web Services Agent
   * Registry resource. Returns the current tag key-value pairs on the
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/ListTagsForResource">AWS
   * API Reference</a></p>
   */
  virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

  /**
   * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const {
    return SubmitCallable(&AgentRegistryControlClient::ListTagsForResource, request);
  }

  /**
   * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&AgentRegistryControlClient::ListTagsForResource, request, handler, context);
  }

  /**
   * <p>Submits a DRAFT registry record for approval, moving it into the registry's
   * approval workflow. Depending on the registry's approval configuration, the
   * record is either auto-approved or set to PENDING_APPROVAL for a curator to
   * approve or reject.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/SubmitRegistryRecordForApproval">AWS
   * API Reference</a></p>
   */
  virtual Model::SubmitRegistryRecordForApprovalOutcome SubmitRegistryRecordForApproval(
      const Model::SubmitRegistryRecordForApprovalRequest& request) const;

  /**
   * A Callable wrapper for SubmitRegistryRecordForApproval that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename SubmitRegistryRecordForApprovalRequestT = Model::SubmitRegistryRecordForApprovalRequest>
  Model::SubmitRegistryRecordForApprovalOutcomeCallable SubmitRegistryRecordForApprovalCallable(
      const SubmitRegistryRecordForApprovalRequestT& request) const {
    return SubmitCallable(&AgentRegistryControlClient::SubmitRegistryRecordForApproval, request);
  }

  /**
   * An Async wrapper for SubmitRegistryRecordForApproval that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename SubmitRegistryRecordForApprovalRequestT = Model::SubmitRegistryRecordForApprovalRequest>
  void SubmitRegistryRecordForApprovalAsync(const SubmitRegistryRecordForApprovalRequestT& request,
                                            const SubmitRegistryRecordForApprovalResponseReceivedHandler& handler,
                                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&AgentRegistryControlClient::SubmitRegistryRecordForApproval, request, handler, context);
  }

  /**
   * <p>Adds or overwrites one or more tags for the specified Amazon Web Services
   * Agent Registry resource. Tags are key-value pairs that you can use to categorize
   * and manage Amazon Web Services resources. If a tag with the same key already
   * exists on the resource, the service replaces its value with the value you
   * specify.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/TagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

  /**
   * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const {
    return SubmitCallable(&AgentRegistryControlClient::TagResource, request);
  }

  /**
   * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&AgentRegistryControlClient::TagResource, request, handler, context);
  }

  /**
   * <p>Removes one or more tags from the specified Amazon Web Services Agent
   * Registry resource. The operation removes only the tags whose keys you supply;
   * other tags on the resource remain unchanged.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/UntagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

  /**
   * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const {
    return SubmitCallable(&AgentRegistryControlClient::UntagResource, request);
  }

  /**
   * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&AgentRegistryControlClient::UntagResource, request, handler, context);
  }

  /**
   * <p>Record the curator's decision (APPROVED or REJECTED) on a registry record's
   * publisher association. A successful call returns an empty response. Repeating
   * the decision the association already holds changes nothing; the same
   * approvalStatus with a different approvalStatusReason updates the reason. If the
   * caller has no publisher association for the registry record, the request fails
   * with AccessDeniedException. A ConflictException (HTTP 409) means the association
   * is not in a state that accepts the decision (e.g. not
   * PENDING_APPROVAL/APPROVED/REJECTED) or it changed while the request was being
   * applied; read it again before deciding whether to resubmit.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/UpdatePublisherAssociationApprovalStatus">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdatePublisherAssociationApprovalStatusOutcome UpdatePublisherAssociationApprovalStatus(
      const Model::UpdatePublisherAssociationApprovalStatusRequest& request) const;

  /**
   * A Callable wrapper for UpdatePublisherAssociationApprovalStatus that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename UpdatePublisherAssociationApprovalStatusRequestT = Model::UpdatePublisherAssociationApprovalStatusRequest>
  Model::UpdatePublisherAssociationApprovalStatusOutcomeCallable UpdatePublisherAssociationApprovalStatusCallable(
      const UpdatePublisherAssociationApprovalStatusRequestT& request) const {
    return SubmitCallable(&AgentRegistryControlClient::UpdatePublisherAssociationApprovalStatus, request);
  }

  /**
   * An Async wrapper for UpdatePublisherAssociationApprovalStatus that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename UpdatePublisherAssociationApprovalStatusRequestT = Model::UpdatePublisherAssociationApprovalStatusRequest>
  void UpdatePublisherAssociationApprovalStatusAsync(
      const UpdatePublisherAssociationApprovalStatusRequestT& request,
      const UpdatePublisherAssociationApprovalStatusResponseReceivedHandler& handler,
      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&AgentRegistryControlClient::UpdatePublisherAssociationApprovalStatus, request, handler, context);
  }

  /**
   * <p>Updates an existing registry. This operation uses PATCH semantics: specify
   * only the fields you want to change, and omit the rest to leave them unchanged.
   * Updates are applied asynchronously and the registry transitions to the UPDATING
   * status while they are processed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/UpdateRegistry">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateRegistryOutcome UpdateRegistry(const Model::UpdateRegistryRequest& request) const;

  /**
   * A Callable wrapper for UpdateRegistry that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UpdateRegistryRequestT = Model::UpdateRegistryRequest>
  Model::UpdateRegistryOutcomeCallable UpdateRegistryCallable(const UpdateRegistryRequestT& request) const {
    return SubmitCallable(&AgentRegistryControlClient::UpdateRegistry, request);
  }

  /**
   * An Async wrapper for UpdateRegistry that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UpdateRegistryRequestT = Model::UpdateRegistryRequest>
  void UpdateRegistryAsync(const UpdateRegistryRequestT& request, const UpdateRegistryResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&AgentRegistryControlClient::UpdateRegistry, request, handler, context);
  }

  /**
   * <p>Updates a registry record. The update is asynchronous: the operation returns
   * the record with the <code>UPDATING</code> status while the registry processes
   * it. If a GitHub user must first authorize access to the record's skill source,
   * the operation returns the record with the <code>UPDATE_PENDING_AUTH</code>
   * status instead. Fields that use update wrappers follow PATCH semantics: omit the
   * field to leave it unchanged.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/UpdateRegistryRecord">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateRegistryRecordOutcome UpdateRegistryRecord(const Model::UpdateRegistryRecordRequest& request) const;

  /**
   * A Callable wrapper for UpdateRegistryRecord that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateRegistryRecordRequestT = Model::UpdateRegistryRecordRequest>
  Model::UpdateRegistryRecordOutcomeCallable UpdateRegistryRecordCallable(const UpdateRegistryRecordRequestT& request) const {
    return SubmitCallable(&AgentRegistryControlClient::UpdateRegistryRecord, request);
  }

  /**
   * An Async wrapper for UpdateRegistryRecord that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename UpdateRegistryRecordRequestT = Model::UpdateRegistryRecordRequest>
  void UpdateRegistryRecordAsync(const UpdateRegistryRecordRequestT& request, const UpdateRegistryRecordResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&AgentRegistryControlClient::UpdateRegistryRecord, request, handler, context);
  }

  /**
   * <p>Updates the status of a registry record as part of the registry's curation
   * workflow, for example to approve or reject a record that is pending approval, or
   * to deprecate an approved record so that it is no longer
   * discoverable</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/UpdateRegistryRecordStatus">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateRegistryRecordStatusOutcome UpdateRegistryRecordStatus(
      const Model::UpdateRegistryRecordStatusRequest& request) const;

  /**
   * A Callable wrapper for UpdateRegistryRecordStatus that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename UpdateRegistryRecordStatusRequestT = Model::UpdateRegistryRecordStatusRequest>
  Model::UpdateRegistryRecordStatusOutcomeCallable UpdateRegistryRecordStatusCallable(
      const UpdateRegistryRecordStatusRequestT& request) const {
    return SubmitCallable(&AgentRegistryControlClient::UpdateRegistryRecordStatus, request);
  }

  /**
   * An Async wrapper for UpdateRegistryRecordStatus that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename UpdateRegistryRecordStatusRequestT = Model::UpdateRegistryRecordStatusRequest>
  void UpdateRegistryRecordStatusAsync(const UpdateRegistryRecordStatusRequestT& request,
                                       const UpdateRegistryRecordStatusResponseReceivedHandler& handler,
                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&AgentRegistryControlClient::UpdateRegistryRecordStatus, request, handler, context);
  }

  /**
   * <p>Restart domain verification for a publisher in FAILED or SUSPENDED. The
   * publisher returns to ACTION_REQUIRED with a new domainChallenge, which the
   * response includes. Update the DNS TXT record with the new recordValue; the
   * previous value no longer verifies the domain. The request fails with
   * ConflictException when the publisher is ACTIVE, verification is already in
   * progress (ACTION_REQUIRED), or the publisher is being deleted.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/ValidatePublisher">AWS
   * API Reference</a></p>
   */
  virtual Model::ValidatePublisherOutcome ValidatePublisher(const Model::ValidatePublisherRequest& request) const;

  /**
   * A Callable wrapper for ValidatePublisher that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ValidatePublisherRequestT = Model::ValidatePublisherRequest>
  Model::ValidatePublisherOutcomeCallable ValidatePublisherCallable(const ValidatePublisherRequestT& request) const {
    return SubmitCallable(&AgentRegistryControlClient::ValidatePublisher, request);
  }

  /**
   * An Async wrapper for ValidatePublisher that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ValidatePublisherRequestT = Model::ValidatePublisherRequest>
  void ValidatePublisherAsync(const ValidatePublisherRequestT& request, const ValidatePublisherResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&AgentRegistryControlClient::ValidatePublisher, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<AgentRegistryControlEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<AgentRegistryControlClient>;
  void init(const AgentRegistryControlClientConfiguration& clientConfiguration);

  typedef Aws::Utils::Outcome<Aws::AmazonWebServiceResult<RESPONSE>, AgentRegistryControlError> InvokeOperationOutcome;

  InvokeOperationOutcome InvokeServiceOperation(const AmazonWebServiceRequest& request,
                                                const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
                                                Aws::Http::HttpMethod httpMethod) const;

  AgentRegistryControlClientConfiguration m_clientConfiguration;
  std::shared_ptr<AgentRegistryControlEndpointProviderBase> m_endpointProvider;
};

}  // namespace AgentRegistryControl
}  // namespace Aws
