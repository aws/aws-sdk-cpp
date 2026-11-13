/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/bcm-dashboards/BCMDashboards_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>

namespace Aws {
namespace BCMDashboards {
struct AWS_BCMDASHBOARDS_API BCMDashboardsClientConfiguration : public Aws::Client::GenericClientConfiguration {
  using BaseClientConfigClass = Aws::Client::GenericClientConfiguration;

  BCMDashboardsClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration = {});

  /**
   * Create a configuration based on settings in the aws configuration file for the given profile name.
   * The configuration file location can be set via the environment variable AWS_CONFIG_FILE
   * @param profileName the aws profile name.
   * @param shouldDisableIMDS whether or not to disable IMDS calls.
   */
  BCMDashboardsClientConfiguration(const char* profileName, bool shouldDisableIMDS = false);

  /**
   * Create a configuration with a predefined smart defaults
   * @param useSmartDefaults, required to differentiate c-tors
   * @param defaultMode, default mode to use
   * @param shouldDisableIMDS whether or not to disable IMDS calls.
   */
  BCMDashboardsClientConfiguration(bool useSmartDefaults, const char* defaultMode = "legacy", bool shouldDisableIMDS = false);

  /**
   * Create a configuration that starts from shared settings (region, timeouts, proxy, retry, ...),
   * then loads this service's options from the environment and profile.
   * Explicit, so a client is never built from the shared configuration implicitly.
   */
  explicit BCMDashboardsClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig);

  /**
   * Use FIPS endpoint in the endpoint calculation. Please check first that the service supports FIPS in a selected region.
   */
  bool useFIPS = false;

 private:
  void LoadBCMDashboardsSpecificConfig(const Aws::String& profileName);
};

/**
 * Values of this service's supported options that the client hands to core.
 */
AWS_BCMDASHBOARDS_API Aws::Client::ServiceClientOptions GetServiceClientOptions(const BCMDashboardsClientConfiguration& config);
}  // namespace BCMDashboards
}  // namespace Aws