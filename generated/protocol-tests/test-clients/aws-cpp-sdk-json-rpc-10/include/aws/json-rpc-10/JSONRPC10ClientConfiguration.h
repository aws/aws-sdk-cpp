/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/json-rpc-10/JSONRPC10_EXPORTS.h>

namespace Aws {
namespace JSONRPC10 {
struct AWS_JSONRPC10_API JSONRPC10ClientConfiguration : public Aws::Client::GenericClientConfiguration {
  using BaseClientConfigClass = Aws::Client::GenericClientConfiguration;

  JSONRPC10ClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration = {});

  /**
   * Create a configuration based on settings in the aws configuration file for the given profile name.
   * The configuration file location can be set via the environment variable AWS_CONFIG_FILE
   * @param profileName the aws profile name.
   * @param shouldDisableIMDS whether or not to disable IMDS calls.
   */
  JSONRPC10ClientConfiguration(const char* profileName, bool shouldDisableIMDS = false);

  /**
   * Create a configuration with a predefined smart defaults
   * @param useSmartDefaults, required to differentiate c-tors
   * @param defaultMode, default mode to use
   * @param shouldDisableIMDS whether or not to disable IMDS calls.
   */
  JSONRPC10ClientConfiguration(bool useSmartDefaults, const char* defaultMode = "legacy", bool shouldDisableIMDS = false);

  /**
   * Create a configuration that starts from shared settings (region, timeouts, proxy, retry, ...),
   * then loads this service's options from the environment and profile.
   * Explicit, so a client is never built from the shared configuration implicitly.
   */
  explicit JSONRPC10ClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig);

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
  void LoadJSONRPC10SpecificConfig(const Aws::String& profileName);
};

/**
 * Values of this service's supported options that the client hands to core.
 */
AWS_JSONRPC10_API Aws::Client::ServiceClientOptions GetServiceClientOptions(const JSONRPC10ClientConfiguration& config);
}  // namespace JSONRPC10
}  // namespace Aws