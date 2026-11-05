/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lookoutequipment/LookoutEquipmentPaginationBase.h>
#include <aws/lookoutequipment/LookoutEquipmentServiceClientModel.h>
#include <aws/lookoutequipment/LookoutEquipmentWaiter.h>
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>

namespace Aws {
namespace LookoutEquipment {
/**
 * <p>Amazon Lookout for Equipment is a machine learning service that uses advanced
 * analytics to identify anomalies in machines from sensor data for use in
 * predictive maintenance. </p>
 */
class AWS_LOOKOUTEQUIPMENT_API LookoutEquipmentClient : public Aws::Client::AWSJsonClient,
                                                        public Aws::Client::ClientWithAsyncTemplateMethods<LookoutEquipmentClient>,
                                                        public LookoutEquipmentPaginationBase<LookoutEquipmentClient>,
                                                        public LookoutEquipmentWaiter<LookoutEquipmentClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef LookoutEquipmentClientConfiguration ClientConfigurationType;
  typedef LookoutEquipmentEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  LookoutEquipmentClient(const Aws::LookoutEquipment::LookoutEquipmentClientConfiguration& clientConfiguration =
                             Aws::LookoutEquipment::LookoutEquipmentClientConfiguration(),
                         std::shared_ptr<LookoutEquipmentEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  LookoutEquipmentClient(const Aws::Auth::AWSCredentials& credentials,
                         std::shared_ptr<LookoutEquipmentEndpointProviderBase> endpointProvider = nullptr,
                         const Aws::LookoutEquipment::LookoutEquipmentClientConfiguration& clientConfiguration =
                             Aws::LookoutEquipment::LookoutEquipmentClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  LookoutEquipmentClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         std::shared_ptr<LookoutEquipmentEndpointProviderBase> endpointProvider = nullptr,
                         const Aws::LookoutEquipment::LookoutEquipmentClientConfiguration& clientConfiguration =
                             Aws::LookoutEquipment::LookoutEquipmentClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  LookoutEquipmentClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  LookoutEquipmentClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  LookoutEquipmentClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~LookoutEquipmentClient();

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<LookoutEquipmentEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<LookoutEquipmentClient>;
  void init(const LookoutEquipmentClientConfiguration& clientConfiguration);

  typedef Aws::Utils::Outcome<Aws::AmazonWebServiceResult<RESPONSE>, LookoutEquipmentError> InvokeOperationOutcome;

  InvokeOperationOutcome InvokeServiceOperation(const AmazonWebServiceRequest& request, Aws::Http::HttpMethod httpMethod) const;

  LookoutEquipmentClientConfiguration m_clientConfiguration;
  std::shared_ptr<LookoutEquipmentEndpointProviderBase> m_endpointProvider;
};

}  // namespace LookoutEquipment
}  // namespace Aws
