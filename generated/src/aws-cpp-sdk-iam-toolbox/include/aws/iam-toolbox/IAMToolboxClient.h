/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iam-toolbox/IAMToolboxPaginationBase.h>
#include <aws/iam-toolbox/IAMToolboxServiceClientModel.h>
#include <aws/iam-toolbox/IAMToolboxWaiter.h>
#include <aws/iam-toolbox/IAMToolbox_EXPORTS.h>

namespace Aws {
namespace IAMToolbox {
/**
 * <p>Contains APIs to work with AWS Identity and Access Management (IAM).</p>
 */
class AWS_IAMTOOLBOX_API IAMToolboxClient : public Aws::Client::AWSJsonClient,
                                            public Aws::Client::ClientWithAsyncTemplateMethods<IAMToolboxClient>,
                                            public IAMToolboxPaginationBase<IAMToolboxClient>,
                                            public IAMToolboxWaiter<IAMToolboxClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef IAMToolboxClientConfiguration ClientConfigurationType;
  typedef IAMToolboxEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  IAMToolboxClient(
      const Aws::IAMToolbox::IAMToolboxClientConfiguration& clientConfiguration = Aws::IAMToolbox::IAMToolboxClientConfiguration(),
      std::shared_ptr<IAMToolboxEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  IAMToolboxClient(
      const Aws::Auth::AWSCredentials& credentials, std::shared_ptr<IAMToolboxEndpointProviderBase> endpointProvider = nullptr,
      const Aws::IAMToolbox::IAMToolboxClientConfiguration& clientConfiguration = Aws::IAMToolbox::IAMToolboxClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  IAMToolboxClient(
      const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
      std::shared_ptr<IAMToolboxEndpointProviderBase> endpointProvider = nullptr,
      const Aws::IAMToolbox::IAMToolboxClientConfiguration& clientConfiguration = Aws::IAMToolbox::IAMToolboxClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  IAMToolboxClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  IAMToolboxClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  IAMToolboxClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                   const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~IAMToolboxClient();

  /**
   * <p>Retrieves the authorization details for a specific access denied request. The
   * details include the request context, the evaluations performed, and the policies
   * that were evaluated.</p> <p>Use this operation to understand why a request was
   * denied. Supported services include an authorization ID in the access denied
   * error message. Pass that ID to this operation to retrieve the details.</p>
   * <p>Authorization details are available for at least 24 hours after the
   * denial.</p> <p>To use this operation, you must have the
   * <code>iam:GetRequestAuthorizationDetails</code> permission.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-toolbox-2018-05-10/GetRequestAuthorizationDetails">AWS
   * API Reference</a></p>
   */
  virtual Model::GetRequestAuthorizationDetailsOutcome GetRequestAuthorizationDetails(
      const Model::GetRequestAuthorizationDetailsRequest& request) const;

  /**
   * A Callable wrapper for GetRequestAuthorizationDetails that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename GetRequestAuthorizationDetailsRequestT = Model::GetRequestAuthorizationDetailsRequest>
  Model::GetRequestAuthorizationDetailsOutcomeCallable GetRequestAuthorizationDetailsCallable(
      const GetRequestAuthorizationDetailsRequestT& request) const {
    return SubmitCallable(&IAMToolboxClient::GetRequestAuthorizationDetails, request);
  }

  /**
   * An Async wrapper for GetRequestAuthorizationDetails that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename GetRequestAuthorizationDetailsRequestT = Model::GetRequestAuthorizationDetailsRequest>
  void GetRequestAuthorizationDetailsAsync(const GetRequestAuthorizationDetailsRequestT& request,
                                           const GetRequestAuthorizationDetailsResponseReceivedHandler& handler,
                                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IAMToolboxClient::GetRequestAuthorizationDetails, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<IAMToolboxEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<IAMToolboxClient>;
  void init(const IAMToolboxClientConfiguration& clientConfiguration);

  typedef Aws::Utils::Outcome<Aws::AmazonWebServiceResult<RESPONSE>, IAMToolboxError> InvokeOperationOutcome;

  InvokeOperationOutcome InvokeServiceOperation(const AmazonWebServiceRequest& request,
                                                const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
                                                Aws::Http::HttpMethod httpMethod) const;

  IAMToolboxClientConfiguration m_clientConfiguration;
  std::shared_ptr<IAMToolboxEndpointProviderBase> m_endpointProvider;
};

}  // namespace IAMToolbox
}  // namespace Aws
