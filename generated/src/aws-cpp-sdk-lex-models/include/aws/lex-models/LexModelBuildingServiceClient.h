/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lex-models/LexModelBuildingServicePaginationBase.h>
#include <aws/lex-models/LexModelBuildingServiceServiceClientModel.h>
#include <aws/lex-models/LexModelBuildingServiceWaiter.h>
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>

namespace Aws {
namespace LexModelBuildingService {
/**
 * <fullname>Amazon Lex Build-Time Actions</fullname> <p> Amazon Lex is an AWS
 * service for building conversational voice and text interfaces. Use these actions
 * to create, update, and delete conversational bots for new and existing client
 * applications. </p>
 */
class AWS_LEXMODELBUILDINGSERVICE_API LexModelBuildingServiceClient
    : public Aws::Client::AWSJsonClient,
      public Aws::Client::ClientWithAsyncTemplateMethods<LexModelBuildingServiceClient>,
      public LexModelBuildingServicePaginationBase<LexModelBuildingServiceClient>,
      public LexModelBuildingServiceWaiter<LexModelBuildingServiceClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef LexModelBuildingServiceClientConfiguration ClientConfigurationType;
  typedef LexModelBuildingServiceEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  LexModelBuildingServiceClient(const Aws::LexModelBuildingService::LexModelBuildingServiceClientConfiguration& clientConfiguration =
                                    Aws::LexModelBuildingService::LexModelBuildingServiceClientConfiguration(),
                                std::shared_ptr<LexModelBuildingServiceEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  LexModelBuildingServiceClient(const Aws::Auth::AWSCredentials& credentials,
                                std::shared_ptr<LexModelBuildingServiceEndpointProviderBase> endpointProvider = nullptr,
                                const Aws::LexModelBuildingService::LexModelBuildingServiceClientConfiguration& clientConfiguration =
                                    Aws::LexModelBuildingService::LexModelBuildingServiceClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  LexModelBuildingServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                std::shared_ptr<LexModelBuildingServiceEndpointProviderBase> endpointProvider = nullptr,
                                const Aws::LexModelBuildingService::LexModelBuildingServiceClientConfiguration& clientConfiguration =
                                    Aws::LexModelBuildingService::LexModelBuildingServiceClientConfiguration());

  virtual ~LexModelBuildingServiceClient();

  virtual std::shared_ptr<LexModelBuildingServiceEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<LexModelBuildingServiceClient>;
  void init(const LexModelBuildingServiceClientConfiguration& clientConfiguration);

  typedef Aws::Utils::Outcome<Aws::AmazonWebServiceResult<RESPONSE>, LexModelBuildingServiceError> InvokeOperationOutcome;

  InvokeOperationOutcome InvokeServiceOperation(const AmazonWebServiceRequest& request,
                                                const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
                                                Aws::Http::HttpMethod httpMethod) const;

  LexModelBuildingServiceClientConfiguration m_clientConfiguration;
  std::shared_ptr<LexModelBuildingServiceEndpointProviderBase> m_endpointProvider;
};

}  // namespace LexModelBuildingService
}  // namespace Aws
