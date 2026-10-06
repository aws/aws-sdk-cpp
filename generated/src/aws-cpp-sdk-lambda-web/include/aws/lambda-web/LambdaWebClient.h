/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda-web/LambdaWebPaginationBase.h>
#include <aws/lambda-web/LambdaWebServiceClientModel.h>
#include <aws/lambda-web/LambdaWebWaiter.h>
#include <aws/lambda-web/LambdaWeb_EXPORTS.h>

namespace Aws {
namespace LambdaWeb {
/**
 * <p> <p>The AWS Lambda Web Functions APIs (<code>LambdaWeb</code>
 * namespace) are experimental and for internal AWS use only. They are not yet
 * available to external customers.</p> </p>
 */
class AWS_LAMBDAWEB_API LambdaWebClient : public Aws::Client::AWSJsonClient,
                                          public Aws::Client::ClientWithAsyncTemplateMethods<LambdaWebClient>,
                                          public LambdaWebPaginationBase<LambdaWebClient>,
                                          public LambdaWebWaiter<LambdaWebClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef LambdaWebClientConfiguration ClientConfigurationType;
  typedef LambdaWebEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  LambdaWebClient(const Aws::LambdaWeb::LambdaWebClientConfiguration& clientConfiguration = Aws::LambdaWeb::LambdaWebClientConfiguration(),
                  std::shared_ptr<LambdaWebEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  LambdaWebClient(const Aws::Auth::AWSCredentials& credentials, std::shared_ptr<LambdaWebEndpointProviderBase> endpointProvider = nullptr,
                  const Aws::LambdaWeb::LambdaWebClientConfiguration& clientConfiguration = Aws::LambdaWeb::LambdaWebClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  LambdaWebClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  std::shared_ptr<LambdaWebEndpointProviderBase> endpointProvider = nullptr,
                  const Aws::LambdaWeb::LambdaWebClientConfiguration& clientConfiguration = Aws::LambdaWeb::LambdaWebClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  LambdaWebClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  LambdaWebClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  LambdaWebClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~LambdaWebClient();

  /**
   * <p>Retrieves details about your AWS Lambda Web Functions account settings for
   * the current AWS Region, including the quotas that apply to web functions and
   * your current usage.</p>  <p>This API is experimental and for internal AWS
   * use only. It is not yet available to external customers.</p> <p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-web-2025-03-07/GetWebAccountSettings">AWS
   * API Reference</a></p>
   */
  virtual Model::GetWebAccountSettingsOutcome GetWebAccountSettings(const Model::GetWebAccountSettingsRequest& request = {}) const;

  /**
   * A Callable wrapper for GetWebAccountSettings that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetWebAccountSettingsRequestT = Model::GetWebAccountSettingsRequest>
  Model::GetWebAccountSettingsOutcomeCallable GetWebAccountSettingsCallable(const GetWebAccountSettingsRequestT& request = {}) const {
    return SubmitCallable(&LambdaWebClient::GetWebAccountSettings, request);
  }

  /**
   * An Async wrapper for GetWebAccountSettings that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetWebAccountSettingsRequestT = Model::GetWebAccountSettingsRequest>
  void GetWebAccountSettingsAsync(const GetWebAccountSettingsResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                  const GetWebAccountSettingsRequestT& request = {}) const {
    return SubmitAsync(&LambdaWebClient::GetWebAccountSettings, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<LambdaWebEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<LambdaWebClient>;
  void init(const LambdaWebClientConfiguration& clientConfiguration);

  typedef Aws::Utils::Outcome<Aws::AmazonWebServiceResult<RESPONSE>, LambdaWebError> InvokeOperationOutcome;

  InvokeOperationOutcome InvokeServiceOperation(const AmazonWebServiceRequest& request,
                                                const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
                                                Aws::Http::HttpMethod httpMethod) const;

  LambdaWebClientConfiguration m_clientConfiguration;
  std::shared_ptr<LambdaWebEndpointProviderBase> m_endpointProvider;
};

}  // namespace LambdaWeb
}  // namespace Aws
