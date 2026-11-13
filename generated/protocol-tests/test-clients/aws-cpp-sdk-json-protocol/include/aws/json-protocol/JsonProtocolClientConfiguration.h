/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/json-protocol/JsonProtocol_EXPORTS.h>

namespace Aws {
namespace JsonProtocol {
struct AWS_JSONPROTOCOL_API JsonProtocolClientConfiguration : public Aws::Client::GenericClientConfiguration {
  using BaseClientConfigClass = Aws::Client::GenericClientConfiguration;

  JsonProtocolClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration = {});

  /**
   * Create a configuration based on settings in the aws configuration file for the given profile name.
   * The configuration file location can be set via the environment variable AWS_CONFIG_FILE
   * @param profileName the aws profile name.
   * @param shouldDisableIMDS whether or not to disable IMDS calls.
   */
  JsonProtocolClientConfiguration(const char* profileName, bool shouldDisableIMDS = false);

  /**
   * Create a configuration with a predefined smart defaults
   * @param useSmartDefaults, required to differentiate c-tors
   * @param defaultMode, default mode to use
   * @param shouldDisableIMDS whether or not to disable IMDS calls.
   */
  JsonProtocolClientConfiguration(bool useSmartDefaults, const char* defaultMode = "legacy", bool shouldDisableIMDS = false);

  /**
   * Create a configuration that starts from shared settings (region, timeouts, proxy, retry, ...),
   * then loads this service's options from the environment and profile.
   * Explicit, so a client is never built from the shared configuration implicitly.
   */
  explicit JsonProtocolClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig);

  /**
   * Enable host prefix injection.
   * For services whose endpoint is injectable. e.g. servicediscovery, you can modify the http host's prefix so as to add "data-" prefix for
   * DiscoverInstances request. Default to true, enabled. You can disable it for testing purpose.
   */
  bool enableHostPrefixInjection = true;

  /**
   * Request compression configuration
   * To use this feature, the service needs to provide the support, and the compression
   * algorithms needs to be available at SDK build time.
   */
  Aws::Client::RequestCompressionConfig requestCompressionConfig;

 private:
  void LoadJsonProtocolSpecificConfig(const Aws::String& profileName);
};

/**
 * Values of this service's supported options that the client hands to core.
 */
AWS_JSONPROTOCOL_API Aws::Client::ServiceClientOptions GetServiceClientOptions(const JsonProtocolClientConfiguration& config);
}  // namespace JsonProtocol
}  // namespace Aws