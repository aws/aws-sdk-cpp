/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda-microvms/LambdaMicrovmsPaginationBase.h>
#include <aws/lambda-microvms/LambdaMicrovmsServiceClientModel.h>
#include <aws/lambda-microvms/LambdaMicrovmsWaiter.h>
#include <aws/lambda-microvms/LambdaMicrovms_EXPORTS.h>

namespace Aws {
namespace LambdaMicrovms {
/**
 * <p>Provides APIs to create, manage, and operate AWS Lambda MicroVMs and their
 * associated MicroVM Image environments.</p>
 */
class AWS_LAMBDAMICROVMS_API LambdaMicrovmsClient : public Aws::Client::AWSJsonClient,
                                                    public Aws::Client::ClientWithAsyncTemplateMethods<LambdaMicrovmsClient>,
                                                    public LambdaMicrovmsPaginationBase<LambdaMicrovmsClient>,
                                                    public LambdaMicrovmsWaiter<LambdaMicrovmsClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef LambdaMicrovmsClientConfiguration ClientConfigurationType;
  typedef LambdaMicrovmsEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  LambdaMicrovmsClient(const Aws::LambdaMicrovms::LambdaMicrovmsClientConfiguration& clientConfiguration =
                           Aws::LambdaMicrovms::LambdaMicrovmsClientConfiguration(),
                       std::shared_ptr<LambdaMicrovmsEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  LambdaMicrovmsClient(const Aws::Auth::AWSCredentials& credentials,
                       std::shared_ptr<LambdaMicrovmsEndpointProviderBase> endpointProvider = nullptr,
                       const Aws::LambdaMicrovms::LambdaMicrovmsClientConfiguration& clientConfiguration =
                           Aws::LambdaMicrovms::LambdaMicrovmsClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  LambdaMicrovmsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       std::shared_ptr<LambdaMicrovmsEndpointProviderBase> endpointProvider = nullptr,
                       const Aws::LambdaMicrovms::LambdaMicrovmsClientConfiguration& clientConfiguration =
                           Aws::LambdaMicrovms::LambdaMicrovmsClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  LambdaMicrovmsClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  LambdaMicrovmsClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  LambdaMicrovmsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~LambdaMicrovmsClient();

  /**
   * <p>Creates an authentication token for accessing a running MicroVM. The token
   * grants access to the specified ports on the MicroVM endpoint.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-microvms-2025-09-09/CreateMicrovmAuthToken">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateMicrovmAuthTokenOutcome CreateMicrovmAuthToken(const Model::CreateMicrovmAuthTokenRequest& request) const;

  /**
   * A Callable wrapper for CreateMicrovmAuthToken that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateMicrovmAuthTokenRequestT = Model::CreateMicrovmAuthTokenRequest>
  Model::CreateMicrovmAuthTokenOutcomeCallable CreateMicrovmAuthTokenCallable(const CreateMicrovmAuthTokenRequestT& request) const {
    return SubmitCallable(&LambdaMicrovmsClient::CreateMicrovmAuthToken, request);
  }

  /**
   * An Async wrapper for CreateMicrovmAuthToken that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename CreateMicrovmAuthTokenRequestT = Model::CreateMicrovmAuthTokenRequest>
  void CreateMicrovmAuthTokenAsync(const CreateMicrovmAuthTokenRequestT& request,
                                   const CreateMicrovmAuthTokenResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&LambdaMicrovmsClient::CreateMicrovmAuthToken, request, handler, context);
  }

  /**
   * <p>Creates a MicroVM image from the specified code artifact and base image. The
   * build is asynchronous — the image transitions from CREATING to CREATED on
   * success, or CREATE_FAILED on failure. Use GetMicrovmImage to poll for
   * completion.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-microvms-2025-09-09/CreateMicrovmImage">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateMicrovmImageOutcome CreateMicrovmImage(const Model::CreateMicrovmImageRequest& request) const;

  /**
   * A Callable wrapper for CreateMicrovmImage that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateMicrovmImageRequestT = Model::CreateMicrovmImageRequest>
  Model::CreateMicrovmImageOutcomeCallable CreateMicrovmImageCallable(const CreateMicrovmImageRequestT& request) const {
    return SubmitCallable(&LambdaMicrovmsClient::CreateMicrovmImage, request);
  }

  /**
   * An Async wrapper for CreateMicrovmImage that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CreateMicrovmImageRequestT = Model::CreateMicrovmImageRequest>
  void CreateMicrovmImageAsync(const CreateMicrovmImageRequestT& request, const CreateMicrovmImageResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&LambdaMicrovmsClient::CreateMicrovmImage, request, handler, context);
  }

  /**
   * <p>Creates a shell authentication token for interactive shell access to a
   * running MicroVM. The MicroVM must have been run with the SHELL_INGRESS network
   * connector attached.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-microvms-2025-09-09/CreateMicrovmShellAuthToken">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateMicrovmShellAuthTokenOutcome CreateMicrovmShellAuthToken(
      const Model::CreateMicrovmShellAuthTokenRequest& request) const;

  /**
   * A Callable wrapper for CreateMicrovmShellAuthToken that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename CreateMicrovmShellAuthTokenRequestT = Model::CreateMicrovmShellAuthTokenRequest>
  Model::CreateMicrovmShellAuthTokenOutcomeCallable CreateMicrovmShellAuthTokenCallable(
      const CreateMicrovmShellAuthTokenRequestT& request) const {
    return SubmitCallable(&LambdaMicrovmsClient::CreateMicrovmShellAuthToken, request);
  }

  /**
   * An Async wrapper for CreateMicrovmShellAuthToken that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename CreateMicrovmShellAuthTokenRequestT = Model::CreateMicrovmShellAuthTokenRequest>
  void CreateMicrovmShellAuthTokenAsync(const CreateMicrovmShellAuthTokenRequestT& request,
                                        const CreateMicrovmShellAuthTokenResponseReceivedHandler& handler,
                                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&LambdaMicrovmsClient::CreateMicrovmShellAuthToken, request, handler, context);
  }

  /**
   * <p>Deletes a MicroVM image. This operation is idempotent; deleting an image that
   * has already been deleted succeeds without error.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-microvms-2025-09-09/DeleteMicrovmImage">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteMicrovmImageOutcome DeleteMicrovmImage(const Model::DeleteMicrovmImageRequest& request) const;

  /**
   * A Callable wrapper for DeleteMicrovmImage that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteMicrovmImageRequestT = Model::DeleteMicrovmImageRequest>
  Model::DeleteMicrovmImageOutcomeCallable DeleteMicrovmImageCallable(const DeleteMicrovmImageRequestT& request) const {
    return SubmitCallable(&LambdaMicrovmsClient::DeleteMicrovmImage, request);
  }

  /**
   * An Async wrapper for DeleteMicrovmImage that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DeleteMicrovmImageRequestT = Model::DeleteMicrovmImageRequest>
  void DeleteMicrovmImageAsync(const DeleteMicrovmImageRequestT& request, const DeleteMicrovmImageResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&LambdaMicrovmsClient::DeleteMicrovmImage, request, handler, context);
  }

  /**
   * <p>Deletes a specific version of a MicroVM image. This operation is idempotent;
   * deleting a version that has already been deleted succeeds without
   * error.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-microvms-2025-09-09/DeleteMicrovmImageVersion">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteMicrovmImageVersionOutcome DeleteMicrovmImageVersion(const Model::DeleteMicrovmImageVersionRequest& request) const;

  /**
   * A Callable wrapper for DeleteMicrovmImageVersion that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteMicrovmImageVersionRequestT = Model::DeleteMicrovmImageVersionRequest>
  Model::DeleteMicrovmImageVersionOutcomeCallable DeleteMicrovmImageVersionCallable(
      const DeleteMicrovmImageVersionRequestT& request) const {
    return SubmitCallable(&LambdaMicrovmsClient::DeleteMicrovmImageVersion, request);
  }

  /**
   * An Async wrapper for DeleteMicrovmImageVersion that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DeleteMicrovmImageVersionRequestT = Model::DeleteMicrovmImageVersionRequest>
  void DeleteMicrovmImageVersionAsync(const DeleteMicrovmImageVersionRequestT& request,
                                      const DeleteMicrovmImageVersionResponseReceivedHandler& handler,
                                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&LambdaMicrovmsClient::DeleteMicrovmImageVersion, request, handler, context);
  }

  /**
   * <p>Retrieves the details of a specific MicroVM, including its state, endpoint,
   * image information, and configuration. The state field is eventually consistent —
   * determine readiness by connecting to the endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-microvms-2025-09-09/GetMicrovm">AWS
   * API Reference</a></p>
   */
  virtual Model::GetMicrovmOutcome GetMicrovm(const Model::GetMicrovmRequest& request) const;

  /**
   * A Callable wrapper for GetMicrovm that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetMicrovmRequestT = Model::GetMicrovmRequest>
  Model::GetMicrovmOutcomeCallable GetMicrovmCallable(const GetMicrovmRequestT& request) const {
    return SubmitCallable(&LambdaMicrovmsClient::GetMicrovm, request);
  }

  /**
   * An Async wrapper for GetMicrovm that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetMicrovmRequestT = Model::GetMicrovmRequest>
  void GetMicrovmAsync(const GetMicrovmRequestT& request, const GetMicrovmResponseReceivedHandler& handler,
                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&LambdaMicrovmsClient::GetMicrovm, request, handler, context);
  }

  /**
   * <p>Retrieves the details of a MicroVM image, including its state, versions, and
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-microvms-2025-09-09/GetMicrovmImage">AWS
   * API Reference</a></p>
   */
  virtual Model::GetMicrovmImageOutcome GetMicrovmImage(const Model::GetMicrovmImageRequest& request) const;

  /**
   * A Callable wrapper for GetMicrovmImage that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetMicrovmImageRequestT = Model::GetMicrovmImageRequest>
  Model::GetMicrovmImageOutcomeCallable GetMicrovmImageCallable(const GetMicrovmImageRequestT& request) const {
    return SubmitCallable(&LambdaMicrovmsClient::GetMicrovmImage, request);
  }

  /**
   * An Async wrapper for GetMicrovmImage that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetMicrovmImageRequestT = Model::GetMicrovmImageRequest>
  void GetMicrovmImageAsync(const GetMicrovmImageRequestT& request, const GetMicrovmImageResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&LambdaMicrovmsClient::GetMicrovmImage, request, handler, context);
  }

  /**
   * <p>Retrieves the details of a specific MicroVM image build, including its state,
   * target architecture, and snapshot information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-microvms-2025-09-09/GetMicrovmImageBuild">AWS
   * API Reference</a></p>
   */
  virtual Model::GetMicrovmImageBuildOutcome GetMicrovmImageBuild(const Model::GetMicrovmImageBuildRequest& request) const;

  /**
   * A Callable wrapper for GetMicrovmImageBuild that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetMicrovmImageBuildRequestT = Model::GetMicrovmImageBuildRequest>
  Model::GetMicrovmImageBuildOutcomeCallable GetMicrovmImageBuildCallable(const GetMicrovmImageBuildRequestT& request) const {
    return SubmitCallable(&LambdaMicrovmsClient::GetMicrovmImageBuild, request);
  }

  /**
   * An Async wrapper for GetMicrovmImageBuild that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetMicrovmImageBuildRequestT = Model::GetMicrovmImageBuildRequest>
  void GetMicrovmImageBuildAsync(const GetMicrovmImageBuildRequestT& request, const GetMicrovmImageBuildResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&LambdaMicrovmsClient::GetMicrovmImageBuild, request, handler, context);
  }

  /**
   * <p>Retrieves the details of a specific version of a MicroVM image, including its
   * configuration, state, and build information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-microvms-2025-09-09/GetMicrovmImageVersion">AWS
   * API Reference</a></p>
   */
  virtual Model::GetMicrovmImageVersionOutcome GetMicrovmImageVersion(const Model::GetMicrovmImageVersionRequest& request) const;

  /**
   * A Callable wrapper for GetMicrovmImageVersion that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetMicrovmImageVersionRequestT = Model::GetMicrovmImageVersionRequest>
  Model::GetMicrovmImageVersionOutcomeCallable GetMicrovmImageVersionCallable(const GetMicrovmImageVersionRequestT& request) const {
    return SubmitCallable(&LambdaMicrovmsClient::GetMicrovmImageVersion, request);
  }

  /**
   * An Async wrapper for GetMicrovmImageVersion that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetMicrovmImageVersionRequestT = Model::GetMicrovmImageVersionRequest>
  void GetMicrovmImageVersionAsync(const GetMicrovmImageVersionRequestT& request,
                                   const GetMicrovmImageVersionResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&LambdaMicrovmsClient::GetMicrovmImageVersion, request, handler, context);
  }

  /**
   * <p>Lists versions of a managed MicroVM image. We recommend using pagination to
   * ensure that the operation returns quickly and successfully.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-microvms-2025-09-09/ListManagedMicrovmImageVersions">AWS
   * API Reference</a></p>
   */
  virtual Model::ListManagedMicrovmImageVersionsOutcome ListManagedMicrovmImageVersions(
      const Model::ListManagedMicrovmImageVersionsRequest& request) const;

  /**
   * A Callable wrapper for ListManagedMicrovmImageVersions that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename ListManagedMicrovmImageVersionsRequestT = Model::ListManagedMicrovmImageVersionsRequest>
  Model::ListManagedMicrovmImageVersionsOutcomeCallable ListManagedMicrovmImageVersionsCallable(
      const ListManagedMicrovmImageVersionsRequestT& request) const {
    return SubmitCallable(&LambdaMicrovmsClient::ListManagedMicrovmImageVersions, request);
  }

  /**
   * An Async wrapper for ListManagedMicrovmImageVersions that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename ListManagedMicrovmImageVersionsRequestT = Model::ListManagedMicrovmImageVersionsRequest>
  void ListManagedMicrovmImageVersionsAsync(const ListManagedMicrovmImageVersionsRequestT& request,
                                            const ListManagedMicrovmImageVersionsResponseReceivedHandler& handler,
                                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&LambdaMicrovmsClient::ListManagedMicrovmImageVersions, request, handler, context);
  }

  /**
   * <p>Lists AWS managed MicroVM images available for use as base images. We
   * recommend using pagination to ensure that the operation returns quickly and
   * successfully.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-microvms-2025-09-09/ListManagedMicrovmImages">AWS
   * API Reference</a></p>
   */
  virtual Model::ListManagedMicrovmImagesOutcome ListManagedMicrovmImages(const Model::ListManagedMicrovmImagesRequest& request = {}) const;

  /**
   * A Callable wrapper for ListManagedMicrovmImages that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListManagedMicrovmImagesRequestT = Model::ListManagedMicrovmImagesRequest>
  Model::ListManagedMicrovmImagesOutcomeCallable ListManagedMicrovmImagesCallable(
      const ListManagedMicrovmImagesRequestT& request = {}) const {
    return SubmitCallable(&LambdaMicrovmsClient::ListManagedMicrovmImages, request);
  }

  /**
   * An Async wrapper for ListManagedMicrovmImages that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListManagedMicrovmImagesRequestT = Model::ListManagedMicrovmImagesRequest>
  void ListManagedMicrovmImagesAsync(const ListManagedMicrovmImagesResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                     const ListManagedMicrovmImagesRequestT& request = {}) const {
    return SubmitAsync(&LambdaMicrovmsClient::ListManagedMicrovmImages, request, handler, context);
  }

  /**
   * <p>Lists builds for a MicroVM image version with optional filtering by
   * architecture and chipset. We recommend using pagination to ensure that the
   * operation returns quickly and successfully.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-microvms-2025-09-09/ListMicrovmImageBuilds">AWS
   * API Reference</a></p>
   */
  virtual Model::ListMicrovmImageBuildsOutcome ListMicrovmImageBuilds(const Model::ListMicrovmImageBuildsRequest& request) const;

  /**
   * A Callable wrapper for ListMicrovmImageBuilds that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListMicrovmImageBuildsRequestT = Model::ListMicrovmImageBuildsRequest>
  Model::ListMicrovmImageBuildsOutcomeCallable ListMicrovmImageBuildsCallable(const ListMicrovmImageBuildsRequestT& request) const {
    return SubmitCallable(&LambdaMicrovmsClient::ListMicrovmImageBuilds, request);
  }

  /**
   * An Async wrapper for ListMicrovmImageBuilds that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListMicrovmImageBuildsRequestT = Model::ListMicrovmImageBuildsRequest>
  void ListMicrovmImageBuildsAsync(const ListMicrovmImageBuildsRequestT& request,
                                   const ListMicrovmImageBuildsResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&LambdaMicrovmsClient::ListMicrovmImageBuilds, request, handler, context);
  }

  /**
   * <p>Lists versions of a MicroVM image. We recommend using pagination to ensure
   * that the operation returns quickly and successfully.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-microvms-2025-09-09/ListMicrovmImageVersions">AWS
   * API Reference</a></p>
   */
  virtual Model::ListMicrovmImageVersionsOutcome ListMicrovmImageVersions(const Model::ListMicrovmImageVersionsRequest& request) const;

  /**
   * A Callable wrapper for ListMicrovmImageVersions that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListMicrovmImageVersionsRequestT = Model::ListMicrovmImageVersionsRequest>
  Model::ListMicrovmImageVersionsOutcomeCallable ListMicrovmImageVersionsCallable(const ListMicrovmImageVersionsRequestT& request) const {
    return SubmitCallable(&LambdaMicrovmsClient::ListMicrovmImageVersions, request);
  }

  /**
   * An Async wrapper for ListMicrovmImageVersions that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListMicrovmImageVersionsRequestT = Model::ListMicrovmImageVersionsRequest>
  void ListMicrovmImageVersionsAsync(const ListMicrovmImageVersionsRequestT& request,
                                     const ListMicrovmImageVersionsResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&LambdaMicrovmsClient::ListMicrovmImageVersions, request, handler, context);
  }

  /**
   * <p>Lists MicroVM images in the account with optional name filtering. We
   * recommend using pagination to ensure that the operation returns quickly and
   * successfully.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-microvms-2025-09-09/ListMicrovmImages">AWS
   * API Reference</a></p>
   */
  virtual Model::ListMicrovmImagesOutcome ListMicrovmImages(const Model::ListMicrovmImagesRequest& request = {}) const;

  /**
   * A Callable wrapper for ListMicrovmImages that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListMicrovmImagesRequestT = Model::ListMicrovmImagesRequest>
  Model::ListMicrovmImagesOutcomeCallable ListMicrovmImagesCallable(const ListMicrovmImagesRequestT& request = {}) const {
    return SubmitCallable(&LambdaMicrovmsClient::ListMicrovmImages, request);
  }

  /**
   * An Async wrapper for ListMicrovmImages that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListMicrovmImagesRequestT = Model::ListMicrovmImagesRequest>
  void ListMicrovmImagesAsync(const ListMicrovmImagesResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                              const ListMicrovmImagesRequestT& request = {}) const {
    return SubmitAsync(&LambdaMicrovmsClient::ListMicrovmImages, request, handler, context);
  }

  /**
   * <p>Lists MicroVMs in the account with optional filtering by image and version.
   * We recommend using pagination to ensure that the operation returns quickly and
   * successfully.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-microvms-2025-09-09/ListMicrovms">AWS
   * API Reference</a></p>
   */
  virtual Model::ListMicrovmsOutcome ListMicrovms(const Model::ListMicrovmsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListMicrovms that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListMicrovmsRequestT = Model::ListMicrovmsRequest>
  Model::ListMicrovmsOutcomeCallable ListMicrovmsCallable(const ListMicrovmsRequestT& request = {}) const {
    return SubmitCallable(&LambdaMicrovmsClient::ListMicrovms, request);
  }

  /**
   * An Async wrapper for ListMicrovms that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListMicrovmsRequestT = Model::ListMicrovmsRequest>
  void ListMicrovmsAsync(const ListMicrovmsResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                         const ListMicrovmsRequestT& request = {}) const {
    return SubmitAsync(&LambdaMicrovmsClient::ListMicrovms, request, handler, context);
  }

  /**
   * <p>Lists the tags associated with a Lambda MicroVM resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-microvms-2025-09-09/ListTags">AWS
   * API Reference</a></p>
   */
  virtual Model::ListTagsOutcome ListTags(const Model::ListTagsRequest& request) const;

  /**
   * A Callable wrapper for ListTags that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListTagsRequestT = Model::ListTagsRequest>
  Model::ListTagsOutcomeCallable ListTagsCallable(const ListTagsRequestT& request) const {
    return SubmitCallable(&LambdaMicrovmsClient::ListTags, request);
  }

  /**
   * An Async wrapper for ListTags that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListTagsRequestT = Model::ListTagsRequest>
  void ListTagsAsync(const ListTagsRequestT& request, const ListTagsResponseReceivedHandler& handler,
                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&LambdaMicrovmsClient::ListTags, request, handler, context);
  }

  /**
   * <p>Resumes a suspended MicroVM, restoring it to RUNNING state with all state
   * intact. The MicroVM must be in SUSPENDED state.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-microvms-2025-09-09/ResumeMicrovm">AWS
   * API Reference</a></p>
   */
  virtual Model::ResumeMicrovmOutcome ResumeMicrovm(const Model::ResumeMicrovmRequest& request) const;

  /**
   * A Callable wrapper for ResumeMicrovm that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ResumeMicrovmRequestT = Model::ResumeMicrovmRequest>
  Model::ResumeMicrovmOutcomeCallable ResumeMicrovmCallable(const ResumeMicrovmRequestT& request) const {
    return SubmitCallable(&LambdaMicrovmsClient::ResumeMicrovm, request);
  }

  /**
   * An Async wrapper for ResumeMicrovm that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ResumeMicrovmRequestT = Model::ResumeMicrovmRequest>
  void ResumeMicrovmAsync(const ResumeMicrovmRequestT& request, const ResumeMicrovmResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&LambdaMicrovmsClient::ResumeMicrovm, request, handler, context);
  }

  /**
   * <p>Runs a new MicroVM from the specified image. The MicroVM starts in PENDING
   * state and transitions to RUNNING once provisioning completes. To connect,
   * generate an authentication token using CreateMicrovmAuthToken.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-microvms-2025-09-09/RunMicrovm">AWS
   * API Reference</a></p>
   */
  virtual Model::RunMicrovmOutcome RunMicrovm(const Model::RunMicrovmRequest& request) const;

  /**
   * A Callable wrapper for RunMicrovm that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename RunMicrovmRequestT = Model::RunMicrovmRequest>
  Model::RunMicrovmOutcomeCallable RunMicrovmCallable(const RunMicrovmRequestT& request) const {
    return SubmitCallable(&LambdaMicrovmsClient::RunMicrovm, request);
  }

  /**
   * An Async wrapper for RunMicrovm that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename RunMicrovmRequestT = Model::RunMicrovmRequest>
  void RunMicrovmAsync(const RunMicrovmRequestT& request, const RunMicrovmResponseReceivedHandler& handler,
                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&LambdaMicrovmsClient::RunMicrovm, request, handler, context);
  }

  /**
   * <p>Suspends a running MicroVM, preserving its full memory and disk state. The
   * MicroVM transitions through SUSPENDING to SUSPENDED. To restore, call
   * ResumeMicrovm or send traffic to the endpoint if autoResumeEnabled is
   * true.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-microvms-2025-09-09/SuspendMicrovm">AWS
   * API Reference</a></p>
   */
  virtual Model::SuspendMicrovmOutcome SuspendMicrovm(const Model::SuspendMicrovmRequest& request) const;

  /**
   * A Callable wrapper for SuspendMicrovm that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename SuspendMicrovmRequestT = Model::SuspendMicrovmRequest>
  Model::SuspendMicrovmOutcomeCallable SuspendMicrovmCallable(const SuspendMicrovmRequestT& request) const {
    return SubmitCallable(&LambdaMicrovmsClient::SuspendMicrovm, request);
  }

  /**
   * An Async wrapper for SuspendMicrovm that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename SuspendMicrovmRequestT = Model::SuspendMicrovmRequest>
  void SuspendMicrovmAsync(const SuspendMicrovmRequestT& request, const SuspendMicrovmResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&LambdaMicrovmsClient::SuspendMicrovm, request, handler, context);
  }

  /**
   * <p>Adds tags to a Lambda MicroVM resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-microvms-2025-09-09/TagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

  /**
   * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const {
    return SubmitCallable(&LambdaMicrovmsClient::TagResource, request);
  }

  /**
   * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&LambdaMicrovmsClient::TagResource, request, handler, context);
  }

  /**
   * <p>Terminates a MicroVM. This operation is idempotent; terminating a MicroVM
   * that has already been terminated succeeds without error.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-microvms-2025-09-09/TerminateMicrovm">AWS
   * API Reference</a></p>
   */
  virtual Model::TerminateMicrovmOutcome TerminateMicrovm(const Model::TerminateMicrovmRequest& request) const;

  /**
   * A Callable wrapper for TerminateMicrovm that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename TerminateMicrovmRequestT = Model::TerminateMicrovmRequest>
  Model::TerminateMicrovmOutcomeCallable TerminateMicrovmCallable(const TerminateMicrovmRequestT& request) const {
    return SubmitCallable(&LambdaMicrovmsClient::TerminateMicrovm, request);
  }

  /**
   * An Async wrapper for TerminateMicrovm that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename TerminateMicrovmRequestT = Model::TerminateMicrovmRequest>
  void TerminateMicrovmAsync(const TerminateMicrovmRequestT& request, const TerminateMicrovmResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&LambdaMicrovmsClient::TerminateMicrovm, request, handler, context);
  }

  /**
   * <p>Removes tags from a Lambda MicroVM resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-microvms-2025-09-09/UntagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

  /**
   * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const {
    return SubmitCallable(&LambdaMicrovmsClient::UntagResource, request);
  }

  /**
   * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&LambdaMicrovmsClient::UntagResource, request, handler, context);
  }

  /**
   * <p>Updates the configuration of a MicroVM image and triggers a new version
   * build. This operation uses PUT semantics — all required fields (codeArtifact,
   * baseImageArn, buildRoleArn) must be provided with every request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-microvms-2025-09-09/UpdateMicrovmImage">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateMicrovmImageOutcome UpdateMicrovmImage(const Model::UpdateMicrovmImageRequest& request) const;

  /**
   * A Callable wrapper for UpdateMicrovmImage that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateMicrovmImageRequestT = Model::UpdateMicrovmImageRequest>
  Model::UpdateMicrovmImageOutcomeCallable UpdateMicrovmImageCallable(const UpdateMicrovmImageRequestT& request) const {
    return SubmitCallable(&LambdaMicrovmsClient::UpdateMicrovmImage, request);
  }

  /**
   * An Async wrapper for UpdateMicrovmImage that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename UpdateMicrovmImageRequestT = Model::UpdateMicrovmImageRequest>
  void UpdateMicrovmImageAsync(const UpdateMicrovmImageRequestT& request, const UpdateMicrovmImageResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&LambdaMicrovmsClient::UpdateMicrovmImage, request, handler, context);
  }

  /**
   * <p>Updates the status of a specific MicroVM image version.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-microvms-2025-09-09/UpdateMicrovmImageVersion">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateMicrovmImageVersionOutcome UpdateMicrovmImageVersion(const Model::UpdateMicrovmImageVersionRequest& request) const;

  /**
   * A Callable wrapper for UpdateMicrovmImageVersion that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateMicrovmImageVersionRequestT = Model::UpdateMicrovmImageVersionRequest>
  Model::UpdateMicrovmImageVersionOutcomeCallable UpdateMicrovmImageVersionCallable(
      const UpdateMicrovmImageVersionRequestT& request) const {
    return SubmitCallable(&LambdaMicrovmsClient::UpdateMicrovmImageVersion, request);
  }

  /**
   * An Async wrapper for UpdateMicrovmImageVersion that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename UpdateMicrovmImageVersionRequestT = Model::UpdateMicrovmImageVersionRequest>
  void UpdateMicrovmImageVersionAsync(const UpdateMicrovmImageVersionRequestT& request,
                                      const UpdateMicrovmImageVersionResponseReceivedHandler& handler,
                                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&LambdaMicrovmsClient::UpdateMicrovmImageVersion, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<LambdaMicrovmsEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<LambdaMicrovmsClient>;
  void init(const LambdaMicrovmsClientConfiguration& clientConfiguration);

  typedef Aws::Utils::Outcome<Aws::AmazonWebServiceResult<RESPONSE>, LambdaMicrovmsError> InvokeOperationOutcome;

  InvokeOperationOutcome InvokeServiceOperation(const AmazonWebServiceRequest& request,
                                                const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
                                                Aws::Http::HttpMethod httpMethod) const;

  LambdaMicrovmsClientConfiguration m_clientConfiguration;
  std::shared_ptr<LambdaMicrovmsEndpointProviderBase> m_endpointProvider;
};

}  // namespace LambdaMicrovms
}  // namespace Aws
