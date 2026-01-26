/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/evidently/CloudWatchEvidentlyServiceClientModel.h>
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>

namespace Aws {
namespace CloudWatchEvidently {
/**
 * <p>You can use Amazon CloudWatch Evidently to safely validate new features by
 * serving them to a specified percentage of your users while you roll out the
 * feature. You can monitor the performance of the new feature to help you decide
 * when to ramp up traffic to your users. This helps you reduce risk and identify
 * unintended consequences before you fully launch the feature.</p> <p>You can also
 * conduct A/B experiments to make feature design decisions based on evidence and
 * data. An experiment can test as many as five variations at once. Evidently
 * collects experiment data and analyzes it using statistical methods. It also
 * provides clear recommendations about which variations perform better. You can
 * test both user-facing features and backend features.</p>
 */
class AWS_CLOUDWATCHEVIDENTLY_API CloudWatchEvidentlyClient
    : public Aws::Client::AWSJsonClient,
      public Aws::Client::ClientWithAsyncTemplateMethods<CloudWatchEvidentlyClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef CloudWatchEvidentlyClientConfiguration ClientConfigurationType;
  typedef CloudWatchEvidentlyEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  CloudWatchEvidentlyClient(const Aws::CloudWatchEvidently::CloudWatchEvidentlyClientConfiguration& clientConfiguration =
                                Aws::CloudWatchEvidently::CloudWatchEvidentlyClientConfiguration(),
                            std::shared_ptr<CloudWatchEvidentlyEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  CloudWatchEvidentlyClient(const Aws::Auth::AWSCredentials& credentials,
                            std::shared_ptr<CloudWatchEvidentlyEndpointProviderBase> endpointProvider = nullptr,
                            const Aws::CloudWatchEvidently::CloudWatchEvidentlyClientConfiguration& clientConfiguration =
                                Aws::CloudWatchEvidently::CloudWatchEvidentlyClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  CloudWatchEvidentlyClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            std::shared_ptr<CloudWatchEvidentlyEndpointProviderBase> endpointProvider = nullptr,
                            const Aws::CloudWatchEvidently::CloudWatchEvidentlyClientConfiguration& clientConfiguration =
                                Aws::CloudWatchEvidently::CloudWatchEvidentlyClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  CloudWatchEvidentlyClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  CloudWatchEvidentlyClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  CloudWatchEvidentlyClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~CloudWatchEvidentlyClient();

  void OverrideEndpoint(const Aws::String& endpoint);
  std::shared_ptr<CloudWatchEvidentlyEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<CloudWatchEvidentlyClient>;
  void init(const CloudWatchEvidentlyClientConfiguration& clientConfiguration);

  CloudWatchEvidentlyClientConfiguration m_clientConfiguration;
  std::shared_ptr<CloudWatchEvidentlyEndpointProviderBase> m_endpointProvider;
};

}  // namespace CloudWatchEvidently
}  // namespace Aws
