/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/ContinuumPaginationBase.h>
#include <aws/continuum/ContinuumServiceClientModel.h>
#include <aws/continuum/ContinuumWaiter.h>
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

namespace Aws {
namespace Continuum {
/**
 * <p>AWS Continuum finds, validates, prioritizes, and remediates code
 * vulnerabilities across the source repositories and AWS resources in your
 * environments.</p>
 */
class AWS_CONTINUUM_API ContinuumClient : public Aws::Client::AWSJsonClient,
                                          public Aws::Client::ClientWithAsyncTemplateMethods<ContinuumClient>,
                                          public ContinuumPaginationBase<ContinuumClient>,
                                          public ContinuumWaiter<ContinuumClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef ContinuumClientConfiguration ClientConfigurationType;
  typedef ContinuumEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  ContinuumClient(const Aws::Continuum::ContinuumClientConfiguration& clientConfiguration = Aws::Continuum::ContinuumClientConfiguration(),
                  std::shared_ptr<ContinuumEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  ContinuumClient(const Aws::Auth::AWSCredentials& credentials, std::shared_ptr<ContinuumEndpointProviderBase> endpointProvider = nullptr,
                  const Aws::Continuum::ContinuumClientConfiguration& clientConfiguration = Aws::Continuum::ContinuumClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  ContinuumClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  std::shared_ptr<ContinuumEndpointProviderBase> endpointProvider = nullptr,
                  const Aws::Continuum::ContinuumClientConfiguration& clientConfiguration = Aws::Continuum::ContinuumClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  ContinuumClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  ContinuumClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  ContinuumClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~ContinuumClient();

  /**
   * <p>Associates one Collector with this Environment and configures the customer
   * role Continuum uses to authorize access to associated Collector data. The caller
   * must have permission on the Environment and permission to pass the role.
   * Continuum assumes the supplied role and calls
   * GetCollectorDataAccessAuthorization on the requested Collector; only a
   * successful authorization response permits the association. The caller does not
   * need Collector data-access permission. The Environment retains its other
   * Collector associations. Calling again with an existing association is safe and
   * does not create a duplicate.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/AssociateCollector">AWS
   * API Reference</a></p>
   */
  virtual Model::AssociateCollectorOutcome AssociateCollector(const Model::AssociateCollectorRequest& request) const;

  /**
   * A Callable wrapper for AssociateCollector that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename AssociateCollectorRequestT = Model::AssociateCollectorRequest>
  Model::AssociateCollectorOutcomeCallable AssociateCollectorCallable(const AssociateCollectorRequestT& request) const {
    return SubmitCallable(&ContinuumClient::AssociateCollector, request);
  }

  /**
   * An Async wrapper for AssociateCollector that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename AssociateCollectorRequestT = Model::AssociateCollectorRequest>
  void AssociateCollectorAsync(const AssociateCollectorRequestT& request, const AssociateCollectorResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ContinuumClient::AssociateCollector, request, handler, context);
  }

  /**
   * <p>Ingests a customer-supplied security finding into an environment. Continuum
   * validates the document synchronously against the required overlay fields for the
   * declared format; invalid documents are rejected with a ValidationException. The
   * maximum accepted document size is 256 KB. The environment must have a source
   * configured, and the finding must identify a code location so Continuum can tie
   * it to a repository in the environment's build. Continuum assigns a findingId and
   * stores the verbatim document. When no successful build yet contains the
   * finding's repository, the finding stays SUBMITTED until the next successful
   * build; if that build does not contain it either, the finding is DISCARDED with
   * discardReason SOURCE_REPO_NOT_FOUND.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/CreateCodeFinding">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateCodeFindingOutcome CreateCodeFinding(const Model::CreateCodeFindingRequest& request) const;

  /**
   * A Callable wrapper for CreateCodeFinding that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateCodeFindingRequestT = Model::CreateCodeFindingRequest>
  Model::CreateCodeFindingOutcomeCallable CreateCodeFindingCallable(const CreateCodeFindingRequestT& request) const {
    return SubmitCallable(&ContinuumClient::CreateCodeFinding, request);
  }

  /**
   * An Async wrapper for CreateCodeFinding that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CreateCodeFindingRequestT = Model::CreateCodeFindingRequest>
  void CreateCodeFindingAsync(const CreateCodeFindingRequestT& request, const CreateCodeFindingResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ContinuumClient::CreateCodeFinding, request, handler, context);
  }

  /**
   * <p>Creates an explicit scan request for one environment. CP creates durable work
   * before any queue delivery occurs.</p> <p>Retrying a request that succeeded, with
   * the same clientToken on the same environment, returns the original scan instead
   * of starting another one. Token handling is not yet atomic: requests with the
   * same token that run at the same time, or a retry after a request that failed
   * partway through, can leave an additional scan, which may end in the FAILED state
   * with a message that it was superseded. Deleting the environment makes its tokens
   * unusable; a later request with one of them returns
   * ResourceNotFoundException.</p> <p>Each environment can have a limited number of
   * scans in progress at the same time. Once that limit is enforced, a request that
   * would exceed it returns ServiceQuotaExceededException; wait for a scan to finish
   * (ListCodeScans shows each scan's status), then retry.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/CreateCodeScan">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateCodeScanOutcome CreateCodeScan(const Model::CreateCodeScanRequest& request) const;

  /**
   * A Callable wrapper for CreateCodeScan that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename CreateCodeScanRequestT = Model::CreateCodeScanRequest>
  Model::CreateCodeScanOutcomeCallable CreateCodeScanCallable(const CreateCodeScanRequestT& request) const {
    return SubmitCallable(&ContinuumClient::CreateCodeScan, request);
  }

  /**
   * An Async wrapper for CreateCodeScan that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreateCodeScanRequestT = Model::CreateCodeScanRequest>
  void CreateCodeScanAsync(const CreateCodeScanRequestT& request, const CreateCodeScanResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ContinuumClient::CreateCodeScan, request, handler, context);
  }

  /**
   * <p>Creates the Collector for the caller's account. Provisions an AWS Config
   * service-linked recorder using the caller's federated access session and begins
   * recording infrastructure changes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/CreateCollector">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateCollectorOutcome CreateCollector(const Model::CreateCollectorRequest& request = {}) const;

  /**
   * A Callable wrapper for CreateCollector that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename CreateCollectorRequestT = Model::CreateCollectorRequest>
  Model::CreateCollectorOutcomeCallable CreateCollectorCallable(const CreateCollectorRequestT& request = {}) const {
    return SubmitCallable(&ContinuumClient::CreateCollector, request);
  }

  /**
   * An Async wrapper for CreateCollector that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreateCollectorRequestT = Model::CreateCollectorRequest>
  void CreateCollectorAsync(const CreateCollectorResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                            const CreateCollectorRequestT& request = {}) const {
    return SubmitAsync(&ContinuumClient::CreateCollector, request, handler, context);
  }

  /**
   * <p>Creates an environment and starts its validation and any requested
   * provisioning. Storage provisioning and dependency checks may continue after the
   * initial 201 response; use GetEnvironment to observe completion.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/CreateEnvironment">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateEnvironmentOutcome CreateEnvironment(const Model::CreateEnvironmentRequest& request) const;

  /**
   * A Callable wrapper for CreateEnvironment that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateEnvironmentRequestT = Model::CreateEnvironmentRequest>
  Model::CreateEnvironmentOutcomeCallable CreateEnvironmentCallable(const CreateEnvironmentRequestT& request) const {
    return SubmitCallable(&ContinuumClient::CreateEnvironment, request);
  }

  /**
   * An Async wrapper for CreateEnvironment that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CreateEnvironmentRequestT = Model::CreateEnvironmentRequest>
  void CreateEnvironmentAsync(const CreateEnvironmentRequestT& request, const CreateEnvironmentResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ContinuumClient::CreateEnvironment, request, handler, context);
  }

  /**
   * <p>Creates a new integration with an external source provider. Repeating an
   * identical request with the same clientToken returns the original integrationId,
   * integrationArn, and createdAt. Token records are retained for eight hours after
   * success or terminal failure, including after the integration is deleted;
   * replaying a deleted integration's token does not recreate it. An identical
   * request with a retained terminal failure returns the recorded error.</p>
   * <p>Reusing a token with different parameters returns ValidationException. A
   * fresh token starts a new create attempt; if the name is already owned by another
   * integration, ConflictException includes that integration's identifier. An
   * attempt still in progress may return ThrottlingException with retryAfterSeconds
   * set to 1; retry with the same token and identical parameters.</p> <p>GitHub
   * authorization codes are single use. Retry an unresolved attempt with its
   * original token and unchanged parameters first. If the service reports a terminal
   * failure, an expired attempt, or a successful token exchange whose integration
   * could not be saved, restart GitHub authorization with a fresh token and
   * authorization code. The service does not checkpoint provider results for
   * recovery by another request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/CreateIntegration">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateIntegrationOutcome CreateIntegration(const Model::CreateIntegrationRequest& request) const;

  /**
   * A Callable wrapper for CreateIntegration that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateIntegrationRequestT = Model::CreateIntegrationRequest>
  Model::CreateIntegrationOutcomeCallable CreateIntegrationCallable(const CreateIntegrationRequestT& request) const {
    return SubmitCallable(&ContinuumClient::CreateIntegration, request);
  }

  /**
   * An Async wrapper for CreateIntegration that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CreateIntegrationRequestT = Model::CreateIntegrationRequest>
  void CreateIntegrationAsync(const CreateIntegrationRequestT& request, const CreateIntegrationResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ContinuumClient::CreateIntegration, request, handler, context);
  }

  /**
   * <p>Deletes the Collector for the caller's account. The Collector first enters
   * PENDING_DELETION, then the service removes its schedule, AWS Config
   * service-linked recorder, versioned S3 bucket, KMS key, and persisted
   * record.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/DeleteCollector">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteCollectorOutcome DeleteCollector(const Model::DeleteCollectorRequest& request) const;

  /**
   * A Callable wrapper for DeleteCollector that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DeleteCollectorRequestT = Model::DeleteCollectorRequest>
  Model::DeleteCollectorOutcomeCallable DeleteCollectorCallable(const DeleteCollectorRequestT& request) const {
    return SubmitCallable(&ContinuumClient::DeleteCollector, request);
  }

  /**
   * An Async wrapper for DeleteCollector that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DeleteCollectorRequestT = Model::DeleteCollectorRequest>
  void DeleteCollectorAsync(const DeleteCollectorRequestT& request, const DeleteCollectorResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ContinuumClient::DeleteCollector, request, handler, context);
  }

  /**
   * <p>Deletes an environment and its associated resources.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/DeleteEnvironment">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteEnvironmentOutcome DeleteEnvironment(const Model::DeleteEnvironmentRequest& request) const;

  /**
   * A Callable wrapper for DeleteEnvironment that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteEnvironmentRequestT = Model::DeleteEnvironmentRequest>
  Model::DeleteEnvironmentOutcomeCallable DeleteEnvironmentCallable(const DeleteEnvironmentRequestT& request) const {
    return SubmitCallable(&ContinuumClient::DeleteEnvironment, request);
  }

  /**
   * An Async wrapper for DeleteEnvironment that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DeleteEnvironmentRequestT = Model::DeleteEnvironmentRequest>
  void DeleteEnvironmentAsync(const DeleteEnvironmentRequestT& request, const DeleteEnvironmentResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ContinuumClient::DeleteEnvironment, request, handler, context);
  }

  /**
   * <p>Deletes an integration and releases its name and account quota. Its retained
   * CreateIntegration token receipt can still replay the original result without
   * recreating the integration. Shared provider registrations are retained: deleting
   * one integration does not remove provider access used by another integration. A
   * fresh GitHub CreateIntegration attempt requires a fresh OAuth authorization code
   * and a new clientToken.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/DeleteIntegration">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteIntegrationOutcome DeleteIntegration(const Model::DeleteIntegrationRequest& request) const;

  /**
   * A Callable wrapper for DeleteIntegration that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteIntegrationRequestT = Model::DeleteIntegrationRequest>
  Model::DeleteIntegrationOutcomeCallable DeleteIntegrationCallable(const DeleteIntegrationRequestT& request) const {
    return SubmitCallable(&ContinuumClient::DeleteIntegration, request);
  }

  /**
   * An Async wrapper for DeleteIntegration that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DeleteIntegrationRequestT = Model::DeleteIntegrationRequest>
  void DeleteIntegrationAsync(const DeleteIntegrationRequestT& request, const DeleteIntegrationResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ContinuumClient::DeleteIntegration, request, handler, context);
  }

  /**
   * <p>Removes one Collector association from this Environment, preserving its other
   * associations. The stored Collector data-access role is cleared when no Collector
   * associations remain. The Environment owner must have permission to disassociate.
   * A current Collector access grant is not required, and the Collector does not
   * need to remain active or present, so stale or revoked associations can be
   * cleaned up.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/DisassociateCollector">AWS
   * API Reference</a></p>
   */
  virtual Model::DisassociateCollectorOutcome DisassociateCollector(const Model::DisassociateCollectorRequest& request) const;

  /**
   * A Callable wrapper for DisassociateCollector that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DisassociateCollectorRequestT = Model::DisassociateCollectorRequest>
  Model::DisassociateCollectorOutcomeCallable DisassociateCollectorCallable(const DisassociateCollectorRequestT& request) const {
    return SubmitCallable(&ContinuumClient::DisassociateCollector, request);
  }

  /**
   * An Async wrapper for DisassociateCollector that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DisassociateCollectorRequestT = Model::DisassociateCollectorRequest>
  void DisassociateCollectorAsync(const DisassociateCollectorRequestT& request, const DisassociateCollectorResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ContinuumClient::DisassociateCollector, request, handler, context);
  }

  /**
   * <p>Retrieves the current state and details of a finding.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/GetCodeFinding">AWS
   * API Reference</a></p>
   */
  virtual Model::GetCodeFindingOutcome GetCodeFinding(const Model::GetCodeFindingRequest& request) const;

  /**
   * A Callable wrapper for GetCodeFinding that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetCodeFindingRequestT = Model::GetCodeFindingRequest>
  Model::GetCodeFindingOutcomeCallable GetCodeFindingCallable(const GetCodeFindingRequestT& request) const {
    return SubmitCallable(&ContinuumClient::GetCodeFinding, request);
  }

  /**
   * An Async wrapper for GetCodeFinding that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetCodeFindingRequestT = Model::GetCodeFindingRequest>
  void GetCodeFindingAsync(const GetCodeFindingRequestT& request, const GetCodeFindingResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ContinuumClient::GetCodeFinding, request, handler, context);
  }

  /**
   * <p>Retrieves the current state and details of an issue.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/GetCodeIssue">AWS
   * API Reference</a></p>
   */
  virtual Model::GetCodeIssueOutcome GetCodeIssue(const Model::GetCodeIssueRequest& request) const;

  /**
   * A Callable wrapper for GetCodeIssue that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetCodeIssueRequestT = Model::GetCodeIssueRequest>
  Model::GetCodeIssueOutcomeCallable GetCodeIssueCallable(const GetCodeIssueRequestT& request) const {
    return SubmitCallable(&ContinuumClient::GetCodeIssue, request);
  }

  /**
   * An Async wrapper for GetCodeIssue that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetCodeIssueRequestT = Model::GetCodeIssueRequest>
  void GetCodeIssueAsync(const GetCodeIssueRequestT& request, const GetCodeIssueResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ContinuumClient::GetCodeIssue, request, handler, context);
  }

  /**
   * <p>Retrieves one immutable artifact attached to an issue, including its
   * content.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/GetCodeIssueArtifact">AWS
   * API Reference</a></p>
   */
  virtual Model::GetCodeIssueArtifactOutcome GetCodeIssueArtifact(const Model::GetCodeIssueArtifactRequest& request) const;

  /**
   * A Callable wrapper for GetCodeIssueArtifact that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetCodeIssueArtifactRequestT = Model::GetCodeIssueArtifactRequest>
  Model::GetCodeIssueArtifactOutcomeCallable GetCodeIssueArtifactCallable(const GetCodeIssueArtifactRequestT& request) const {
    return SubmitCallable(&ContinuumClient::GetCodeIssueArtifact, request);
  }

  /**
   * An Async wrapper for GetCodeIssueArtifact that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetCodeIssueArtifactRequestT = Model::GetCodeIssueArtifactRequest>
  void GetCodeIssueArtifactAsync(const GetCodeIssueArtifactRequestT& request, const GetCodeIssueArtifactResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ContinuumClient::GetCodeIssueArtifact, request, handler, context);
  }

  /**
   * <p>Retrieves one customer-visible environment scan.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/GetCodeScan">AWS
   * API Reference</a></p>
   */
  virtual Model::GetCodeScanOutcome GetCodeScan(const Model::GetCodeScanRequest& request) const;

  /**
   * A Callable wrapper for GetCodeScan that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetCodeScanRequestT = Model::GetCodeScanRequest>
  Model::GetCodeScanOutcomeCallable GetCodeScanCallable(const GetCodeScanRequestT& request) const {
    return SubmitCallable(&ContinuumClient::GetCodeScan, request);
  }

  /**
   * An Async wrapper for GetCodeScan that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetCodeScanRequestT = Model::GetCodeScanRequest>
  void GetCodeScanAsync(const GetCodeScanRequestT& request, const GetCodeScanResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ContinuumClient::GetCodeScan, request, handler, context);
  }

  /**
   * <p>Retrieves the current state of the Collector for the caller's
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/GetCollector">AWS
   * API Reference</a></p>
   */
  virtual Model::GetCollectorOutcome GetCollector(const Model::GetCollectorRequest& request) const;

  /**
   * A Callable wrapper for GetCollector that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetCollectorRequestT = Model::GetCollectorRequest>
  Model::GetCollectorOutcomeCallable GetCollectorCallable(const GetCollectorRequestT& request) const {
    return SubmitCallable(&ContinuumClient::GetCollector, request);
  }

  /**
   * An Async wrapper for GetCollector that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetCollectorRequestT = Model::GetCollectorRequest>
  void GetCollectorAsync(const GetCollectorRequestT& request, const GetCollectorResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ContinuumClient::GetCollector, request, handler, context);
  }

  /**
   * <p>Authorizes an Environment's access to a Collector's data. Continuum calls
   * this operation with the Environment's Collector data-access role before it reads
   * the Collector's inventory, so grant
   * continuum:GetCollectorDataAccessAuthorization to that role and, for a Collector
   * in another account, in the Collector's resource policy. The operation evaluates
   * the action against the exact Collector ARN and the Collector's current resource
   * policy using IAM and the caller's authenticated request context, with
   * environmentArn as the continuum:EnvironmentArn condition key. A successful
   * request returns HTTP 200 with no response members. If access is not granted, the
   * operation returns AccessDeniedException without disclosing Collector existence,
   * ownership, or the policy layer that denied access. The service does not
   * reinterpret the policy using only an account ID.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/GetCollectorDataAccessAuthorization">AWS
   * API Reference</a></p>
   */
  virtual Model::GetCollectorDataAccessAuthorizationOutcome GetCollectorDataAccessAuthorization(
      const Model::GetCollectorDataAccessAuthorizationRequest& request) const;

  /**
   * A Callable wrapper for GetCollectorDataAccessAuthorization that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename GetCollectorDataAccessAuthorizationRequestT = Model::GetCollectorDataAccessAuthorizationRequest>
  Model::GetCollectorDataAccessAuthorizationOutcomeCallable GetCollectorDataAccessAuthorizationCallable(
      const GetCollectorDataAccessAuthorizationRequestT& request) const {
    return SubmitCallable(&ContinuumClient::GetCollectorDataAccessAuthorization, request);
  }

  /**
   * An Async wrapper for GetCollectorDataAccessAuthorization that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename GetCollectorDataAccessAuthorizationRequestT = Model::GetCollectorDataAccessAuthorizationRequest>
  void GetCollectorDataAccessAuthorizationAsync(const GetCollectorDataAccessAuthorizationRequestT& request,
                                                const GetCollectorDataAccessAuthorizationResponseReceivedHandler& handler,
                                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ContinuumClient::GetCollectorDataAccessAuthorization, request, handler, context);
  }

  /**
   * <p>Retrieves the current state and configuration of an
   * environment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/GetEnvironment">AWS
   * API Reference</a></p>
   */
  virtual Model::GetEnvironmentOutcome GetEnvironment(const Model::GetEnvironmentRequest& request) const;

  /**
   * A Callable wrapper for GetEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetEnvironmentRequestT = Model::GetEnvironmentRequest>
  Model::GetEnvironmentOutcomeCallable GetEnvironmentCallable(const GetEnvironmentRequestT& request) const {
    return SubmitCallable(&ContinuumClient::GetEnvironment, request);
  }

  /**
   * An Async wrapper for GetEnvironment that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetEnvironmentRequestT = Model::GetEnvironmentRequest>
  void GetEnvironmentAsync(const GetEnvironmentRequestT& request, const GetEnvironmentResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ContinuumClient::GetEnvironment, request, handler, context);
  }

  /**
   * <p>Retrieves information about an integration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/GetIntegration">AWS
   * API Reference</a></p>
   */
  virtual Model::GetIntegrationOutcome GetIntegration(const Model::GetIntegrationRequest& request) const;

  /**
   * A Callable wrapper for GetIntegration that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetIntegrationRequestT = Model::GetIntegrationRequest>
  Model::GetIntegrationOutcomeCallable GetIntegrationCallable(const GetIntegrationRequestT& request) const {
    return SubmitCallable(&ContinuumClient::GetIntegration, request);
  }

  /**
   * An Async wrapper for GetIntegration that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetIntegrationRequestT = Model::GetIntegrationRequest>
  void GetIntegrationAsync(const GetIntegrationRequestT& request, const GetIntegrationResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ContinuumClient::GetIntegration, request, handler, context);
  }

  /**
   * <p>Retrieves the resource policy attached to a Continuum resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/GetResourcePolicy">AWS
   * API Reference</a></p>
   */
  virtual Model::GetResourcePolicyOutcome GetResourcePolicy(const Model::GetResourcePolicyRequest& request) const;

  /**
   * A Callable wrapper for GetResourcePolicy that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetResourcePolicyRequestT = Model::GetResourcePolicyRequest>
  Model::GetResourcePolicyOutcomeCallable GetResourcePolicyCallable(const GetResourcePolicyRequestT& request) const {
    return SubmitCallable(&ContinuumClient::GetResourcePolicy, request);
  }

  /**
   * An Async wrapper for GetResourcePolicy that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename GetResourcePolicyRequestT = Model::GetResourcePolicyRequest>
  void GetResourcePolicyAsync(const GetResourcePolicyRequestT& request, const GetResourcePolicyResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ContinuumClient::GetResourcePolicy, request, handler, context);
  }

  /**
   * <p>Lists the Collectors currently associated with one Environment in ascending
   * collectorId order. Each entry carries the Collector ARN, so a listed association
   * can be passed straight to DisassociateCollector, including when the Collector
   * belongs to another account. An association recorded before Continuum persisted
   * the ARN is omitted from the response, because without the ARN it cannot be acted
   * on.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/ListAssociatedCollectors">AWS
   * API Reference</a></p>
   */
  virtual Model::ListAssociatedCollectorsOutcome ListAssociatedCollectors(const Model::ListAssociatedCollectorsRequest& request) const;

  /**
   * A Callable wrapper for ListAssociatedCollectors that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListAssociatedCollectorsRequestT = Model::ListAssociatedCollectorsRequest>
  Model::ListAssociatedCollectorsOutcomeCallable ListAssociatedCollectorsCallable(const ListAssociatedCollectorsRequestT& request) const {
    return SubmitCallable(&ContinuumClient::ListAssociatedCollectors, request);
  }

  /**
   * An Async wrapper for ListAssociatedCollectors that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListAssociatedCollectorsRequestT = Model::ListAssociatedCollectorsRequest>
  void ListAssociatedCollectorsAsync(const ListAssociatedCollectorsRequestT& request,
                                     const ListAssociatedCollectorsResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ContinuumClient::ListAssociatedCollectors, request, handler, context);
  }

  /**
   * <p>Lists the Environments currently associated with one Collector in
   * lexicographically ascending environmentArn order. The ARN identifies each
   * Environment across accounts within the Collector's Region.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/ListAssociatedEnvironments">AWS
   * API Reference</a></p>
   */
  virtual Model::ListAssociatedEnvironmentsOutcome ListAssociatedEnvironments(
      const Model::ListAssociatedEnvironmentsRequest& request) const;

  /**
   * A Callable wrapper for ListAssociatedEnvironments that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename ListAssociatedEnvironmentsRequestT = Model::ListAssociatedEnvironmentsRequest>
  Model::ListAssociatedEnvironmentsOutcomeCallable ListAssociatedEnvironmentsCallable(
      const ListAssociatedEnvironmentsRequestT& request) const {
    return SubmitCallable(&ContinuumClient::ListAssociatedEnvironments, request);
  }

  /**
   * An Async wrapper for ListAssociatedEnvironments that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListAssociatedEnvironmentsRequestT = Model::ListAssociatedEnvironmentsRequest>
  void ListAssociatedEnvironmentsAsync(const ListAssociatedEnvironmentsRequestT& request,
                                       const ListAssociatedEnvironmentsResponseReceivedHandler& handler,
                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ContinuumClient::ListAssociatedEnvironments, request, handler, context);
  }

  /**
   * <p>Lists the findings in an environment in descending findingId
   * order.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/ListCodeFindings">AWS
   * API Reference</a></p>
   */
  virtual Model::ListCodeFindingsOutcome ListCodeFindings(const Model::ListCodeFindingsRequest& request) const;

  /**
   * A Callable wrapper for ListCodeFindings that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListCodeFindingsRequestT = Model::ListCodeFindingsRequest>
  Model::ListCodeFindingsOutcomeCallable ListCodeFindingsCallable(const ListCodeFindingsRequestT& request) const {
    return SubmitCallable(&ContinuumClient::ListCodeFindings, request);
  }

  /**
   * An Async wrapper for ListCodeFindings that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListCodeFindingsRequestT = Model::ListCodeFindingsRequest>
  void ListCodeFindingsAsync(const ListCodeFindingsRequestT& request, const ListCodeFindingsResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ContinuumClient::ListCodeFindings, request, handler, context);
  }

  /**
   * <p>Lists the artifacts attached to an issue in descending artifactId order.
   * Content is returned by GetCodeIssueArtifact.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/ListCodeIssueArtifacts">AWS
   * API Reference</a></p>
   */
  virtual Model::ListCodeIssueArtifactsOutcome ListCodeIssueArtifacts(const Model::ListCodeIssueArtifactsRequest& request) const;

  /**
   * A Callable wrapper for ListCodeIssueArtifacts that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListCodeIssueArtifactsRequestT = Model::ListCodeIssueArtifactsRequest>
  Model::ListCodeIssueArtifactsOutcomeCallable ListCodeIssueArtifactsCallable(const ListCodeIssueArtifactsRequestT& request) const {
    return SubmitCallable(&ContinuumClient::ListCodeIssueArtifacts, request);
  }

  /**
   * An Async wrapper for ListCodeIssueArtifacts that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListCodeIssueArtifactsRequestT = Model::ListCodeIssueArtifactsRequest>
  void ListCodeIssueArtifactsAsync(const ListCodeIssueArtifactsRequestT& request,
                                   const ListCodeIssueArtifactsResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ContinuumClient::ListCodeIssueArtifacts, request, handler, context);
  }

  /**
   * <p>Lists the issues in an environment in descending issueId order.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/ListCodeIssues">AWS
   * API Reference</a></p>
   */
  virtual Model::ListCodeIssuesOutcome ListCodeIssues(const Model::ListCodeIssuesRequest& request) const;

  /**
   * A Callable wrapper for ListCodeIssues that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListCodeIssuesRequestT = Model::ListCodeIssuesRequest>
  Model::ListCodeIssuesOutcomeCallable ListCodeIssuesCallable(const ListCodeIssuesRequestT& request) const {
    return SubmitCallable(&ContinuumClient::ListCodeIssues, request);
  }

  /**
   * An Async wrapper for ListCodeIssues that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListCodeIssuesRequestT = Model::ListCodeIssuesRequest>
  void ListCodeIssuesAsync(const ListCodeIssuesRequestT& request, const ListCodeIssuesResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ContinuumClient::ListCodeIssues, request, handler, context);
  }

  /**
   * <p>Lists customer-visible scans for one environment in descending scanRunId
   * order.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/ListCodeScans">AWS
   * API Reference</a></p>
   */
  virtual Model::ListCodeScansOutcome ListCodeScans(const Model::ListCodeScansRequest& request) const;

  /**
   * A Callable wrapper for ListCodeScans that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListCodeScansRequestT = Model::ListCodeScansRequest>
  Model::ListCodeScansOutcomeCallable ListCodeScansCallable(const ListCodeScansRequestT& request) const {
    return SubmitCallable(&ContinuumClient::ListCodeScans, request);
  }

  /**
   * An Async wrapper for ListCodeScans that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListCodeScansRequestT = Model::ListCodeScansRequest>
  void ListCodeScansAsync(const ListCodeScansRequestT& request, const ListCodeScansResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ContinuumClient::ListCodeScans, request, handler, context);
  }

  /**
   * <p>Lists the Collectors owned by the authenticated caller's account, including a
   * Collector whose deletion is in progress. A Collector that is still being created
   * is omitted. The account-scoped Collector quota currently permits at most one
   * result, so no result ordering applies.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/ListCollectors">AWS
   * API Reference</a></p>
   */
  virtual Model::ListCollectorsOutcome ListCollectors(const Model::ListCollectorsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListCollectors that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListCollectorsRequestT = Model::ListCollectorsRequest>
  Model::ListCollectorsOutcomeCallable ListCollectorsCallable(const ListCollectorsRequestT& request = {}) const {
    return SubmitCallable(&ContinuumClient::ListCollectors, request);
  }

  /**
   * An Async wrapper for ListCollectors that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListCollectorsRequestT = Model::ListCollectorsRequest>
  void ListCollectorsAsync(const ListCollectorsResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                           const ListCollectorsRequestT& request = {}) const {
    return SubmitAsync(&ContinuumClient::ListCollectors, request, handler, context);
  }

  /**
   * <p>Lists all environments in your account in descending environmentId order.
   * This complete-inventory operation intentionally has no response filters; see the
   * input documentation for the API standards justification.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/ListEnvironments">AWS
   * API Reference</a></p>
   */
  virtual Model::ListEnvironmentsOutcome ListEnvironments(const Model::ListEnvironmentsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListEnvironments that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListEnvironmentsRequestT = Model::ListEnvironmentsRequest>
  Model::ListEnvironmentsOutcomeCallable ListEnvironmentsCallable(const ListEnvironmentsRequestT& request = {}) const {
    return SubmitCallable(&ContinuumClient::ListEnvironments, request);
  }

  /**
   * An Async wrapper for ListEnvironments that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListEnvironmentsRequestT = Model::ListEnvironmentsRequest>
  void ListEnvironmentsAsync(const ListEnvironmentsResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                             const ListEnvironmentsRequestT& request = {}) const {
    return SubmitAsync(&ContinuumClient::ListEnvironments, request, handler, context);
  }

  /**
   * <p>Lists the integrations in your account in descending integrationId
   * order.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/ListIntegrations">AWS
   * API Reference</a></p>
   */
  virtual Model::ListIntegrationsOutcome ListIntegrations(const Model::ListIntegrationsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListIntegrations that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListIntegrationsRequestT = Model::ListIntegrationsRequest>
  Model::ListIntegrationsOutcomeCallable ListIntegrationsCallable(const ListIntegrationsRequestT& request = {}) const {
    return SubmitCallable(&ContinuumClient::ListIntegrations, request);
  }

  /**
   * An Async wrapper for ListIntegrations that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListIntegrationsRequestT = Model::ListIntegrationsRequest>
  void ListIntegrationsAsync(const ListIntegrationsResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                             const ListIntegrationsRequestT& request = {}) const {
    return SubmitAsync(&ContinuumClient::ListIntegrations, request, handler, context);
  }

  /**
   * <p>Creates or replaces the resource policy attached to a Continuum
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/PutResourcePolicy">AWS
   * API Reference</a></p>
   */
  virtual Model::PutResourcePolicyOutcome PutResourcePolicy(const Model::PutResourcePolicyRequest& request) const;

  /**
   * A Callable wrapper for PutResourcePolicy that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename PutResourcePolicyRequestT = Model::PutResourcePolicyRequest>
  Model::PutResourcePolicyOutcomeCallable PutResourcePolicyCallable(const PutResourcePolicyRequestT& request) const {
    return SubmitCallable(&ContinuumClient::PutResourcePolicy, request);
  }

  /**
   * An Async wrapper for PutResourcePolicy that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename PutResourcePolicyRequestT = Model::PutResourcePolicyRequest>
  void PutResourcePolicyAsync(const PutResourcePolicyRequestT& request, const PutResourcePolicyResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ContinuumClient::PutResourcePolicy, request, handler, context);
  }

  /**
   * <p>Starts an OAuth authorization for a new integration and returns the values
   * the caller sends to the provider's authorization endpoint. The authorization
   * belongs to the calling AWS account, can be redeemed once by CreateIntegration
   * from that same account, and expires after ten minutes.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/StartIntegrationAuthorization">AWS
   * API Reference</a></p>
   */
  virtual Model::StartIntegrationAuthorizationOutcome StartIntegrationAuthorization(
      const Model::StartIntegrationAuthorizationRequest& request) const;

  /**
   * A Callable wrapper for StartIntegrationAuthorization that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename StartIntegrationAuthorizationRequestT = Model::StartIntegrationAuthorizationRequest>
  Model::StartIntegrationAuthorizationOutcomeCallable StartIntegrationAuthorizationCallable(
      const StartIntegrationAuthorizationRequestT& request) const {
    return SubmitCallable(&ContinuumClient::StartIntegrationAuthorization, request);
  }

  /**
   * An Async wrapper for StartIntegrationAuthorization that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename StartIntegrationAuthorizationRequestT = Model::StartIntegrationAuthorizationRequest>
  void StartIntegrationAuthorizationAsync(const StartIntegrationAuthorizationRequestT& request,
                                          const StartIntegrationAuthorizationResponseReceivedHandler& handler,
                                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ContinuumClient::StartIntegrationAuthorization, request, handler, context);
  }

  /**
   * <p>Updates the customer-controlled mutable properties of a Collector. Only the
   * name and Kubernetes cluster IAM role can be changed.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/UpdateCollector">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateCollectorOutcome UpdateCollector(const Model::UpdateCollectorRequest& request) const;

  /**
   * A Callable wrapper for UpdateCollector that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UpdateCollectorRequestT = Model::UpdateCollectorRequest>
  Model::UpdateCollectorOutcomeCallable UpdateCollectorCallable(const UpdateCollectorRequestT& request) const {
    return SubmitCallable(&ContinuumClient::UpdateCollector, request);
  }

  /**
   * An Async wrapper for UpdateCollector that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UpdateCollectorRequestT = Model::UpdateCollectorRequest>
  void UpdateCollectorAsync(const UpdateCollectorRequestT& request, const UpdateCollectorResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ContinuumClient::UpdateCollector, request, handler, context);
  }

  /**
   * <p>Updates the customer-controlled mutable properties of an environment. Only
   * the name, the environment's S3 integration source and repository selections, its
   * scan frequency, its network policy, and its patch creation policy can be
   * changed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/UpdateEnvironment">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateEnvironmentOutcome UpdateEnvironment(const Model::UpdateEnvironmentRequest& request) const;

  /**
   * A Callable wrapper for UpdateEnvironment that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateEnvironmentRequestT = Model::UpdateEnvironmentRequest>
  Model::UpdateEnvironmentOutcomeCallable UpdateEnvironmentCallable(const UpdateEnvironmentRequestT& request) const {
    return SubmitCallable(&ContinuumClient::UpdateEnvironment, request);
  }

  /**
   * An Async wrapper for UpdateEnvironment that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename UpdateEnvironmentRequestT = Model::UpdateEnvironmentRequest>
  void UpdateEnvironmentAsync(const UpdateEnvironmentRequestT& request, const UpdateEnvironmentResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ContinuumClient::UpdateEnvironment, request, handler, context);
  }

  /**
   * <p>Rotates the credentials used by an Amazon S3 integration. Only S3
   * integrations can be updated; GitHub integrations cannot be modified. The
   * integration's name, provider type, and bucket remain fixed.</p> <p>The caller
   * must have iam:PassRole permission for the supplied role, including when only the
   * external ID changes. Continuum verifies that the role can be assumed with the
   * requested external ID and can access the existing bucket before saving both
   * credentials atomically. Omitting externalId preserves its current value.
   * Repeating both current credentials leaves updatedAt unchanged, but still
   * requires authorization and access validation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/UpdateIntegration">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateIntegrationOutcome UpdateIntegration(const Model::UpdateIntegrationRequest& request) const;

  /**
   * A Callable wrapper for UpdateIntegration that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateIntegrationRequestT = Model::UpdateIntegrationRequest>
  Model::UpdateIntegrationOutcomeCallable UpdateIntegrationCallable(const UpdateIntegrationRequestT& request) const {
    return SubmitCallable(&ContinuumClient::UpdateIntegration, request);
  }

  /**
   * An Async wrapper for UpdateIntegration that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename UpdateIntegrationRequestT = Model::UpdateIntegrationRequest>
  void UpdateIntegrationAsync(const UpdateIntegrationRequestT& request, const UpdateIntegrationResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ContinuumClient::UpdateIntegration, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<ContinuumEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<ContinuumClient>;
  void init(const ContinuumClientConfiguration& clientConfiguration);

  typedef Aws::Utils::Outcome<Aws::AmazonWebServiceResult<RESPONSE>, ContinuumError> InvokeOperationOutcome;

  InvokeOperationOutcome InvokeServiceOperation(const AmazonWebServiceRequest& request,
                                                const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
                                                Aws::Http::HttpMethod httpMethod) const;

  ContinuumClientConfiguration m_clientConfiguration;
  std::shared_ptr<ContinuumEndpointProviderBase> m_endpointProvider;
};

}  // namespace Continuum
}  // namespace Aws
