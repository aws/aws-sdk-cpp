/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/query-compatible-rpcv2-protocol/QueryCompatibleRpcV2Protocol_EXPORTS.h>

namespace Aws {
namespace QueryCompatibleRpcV2Protocol {
struct AWS_QUERYCOMPATIBLERPCV2PROTOCOL_API QueryCompatibleRpcV2ProtocolClientConfiguration
    : public Aws::Client::GenericClientConfiguration {
  using BaseClientConfigClass = Aws::Client::GenericClientConfiguration;

  QueryCompatibleRpcV2ProtocolClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration = {});

  /**
   * Create a configuration based on settings in the aws configuration file for the given profile name.
   * The configuration file location can be set via the environment variable AWS_CONFIG_FILE
   * @param profileName the aws profile name.
   * @param shouldDisableIMDS whether or not to disable IMDS calls.
   */
  QueryCompatibleRpcV2ProtocolClientConfiguration(const char* profileName, bool shouldDisableIMDS = false);

  /**
   * Create a configuration with a predefined smart defaults
   * @param useSmartDefaults, required to differentiate c-tors
   * @param defaultMode, default mode to use
   * @param shouldDisableIMDS whether or not to disable IMDS calls.
   */
  QueryCompatibleRpcV2ProtocolClientConfiguration(bool useSmartDefaults, const char* defaultMode = "legacy",
                                                  bool shouldDisableIMDS = false);

  /**
   * Create a configuration that starts from shared settings (region, timeouts, proxy, retry, ...),
   * then loads this service's options from the environment and profile.
   * Explicit, so a client is never built from the shared configuration implicitly.
   */
  explicit QueryCompatibleRpcV2ProtocolClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig);

 private:
  void LoadQueryCompatibleRpcV2ProtocolSpecificConfig(const Aws::String& profileName);
};

/**
 * Values of this service's supported options that the client hands to core.
 */
AWS_QUERYCOMPATIBLERPCV2PROTOCOL_API Aws::Client::ServiceClientOptions GetServiceClientOptions(
    const QueryCompatibleRpcV2ProtocolClientConfiguration& config);
}  // namespace QueryCompatibleRpcV2Protocol
}  // namespace Aws