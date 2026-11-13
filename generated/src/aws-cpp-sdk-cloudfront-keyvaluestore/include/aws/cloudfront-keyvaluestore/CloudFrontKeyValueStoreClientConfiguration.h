/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/cloudfront-keyvaluestore/CloudFrontKeyValueStore_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>

namespace Aws {
namespace CloudFrontKeyValueStore {
struct AWS_CLOUDFRONTKEYVALUESTORE_API CloudFrontKeyValueStoreClientConfiguration : public Aws::Client::GenericClientConfiguration {
  using BaseClientConfigClass = Aws::Client::GenericClientConfiguration;

  CloudFrontKeyValueStoreClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration = {});

  /**
   * Create a configuration based on settings in the aws configuration file for the given profile name.
   * The configuration file location can be set via the environment variable AWS_CONFIG_FILE
   * @param profileName the aws profile name.
   * @param shouldDisableIMDS whether or not to disable IMDS calls.
   */
  CloudFrontKeyValueStoreClientConfiguration(const char* profileName, bool shouldDisableIMDS = false);

  /**
   * Create a configuration with a predefined smart defaults
   * @param useSmartDefaults, required to differentiate c-tors
   * @param defaultMode, default mode to use
   * @param shouldDisableIMDS whether or not to disable IMDS calls.
   */
  CloudFrontKeyValueStoreClientConfiguration(bool useSmartDefaults, const char* defaultMode = "legacy", bool shouldDisableIMDS = false);

  /**
   * Create a configuration that starts from shared settings (region, timeouts, proxy, retry, ...),
   * then loads this service's options from the environment and profile.
   * Explicit, so a client is never built from the shared configuration implicitly.
   */
  explicit CloudFrontKeyValueStoreClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig);

  /**
   * Use FIPS endpoint in the endpoint calculation. Please check first that the service supports FIPS in a selected region.
   */
  bool useFIPS = false;

  /**
   * List of AWS regions for SigV4a multi-region signing.
   */
  Aws::Vector<Aws::String> sigV4aSigningRegionSet;

 private:
  void LoadCloudFrontKeyValueStoreSpecificConfig(const Aws::String& profileName);
};

/**
 * Values of this service's supported options that the client hands to core.
 */
AWS_CLOUDFRONTKEYVALUESTORE_API Aws::Client::ServiceClientOptions GetServiceClientOptions(
    const CloudFrontKeyValueStoreClientConfiguration& config);
}  // namespace CloudFrontKeyValueStore
}  // namespace Aws