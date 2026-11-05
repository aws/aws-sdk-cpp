/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/dynamodb/DynamoDB_EXPORTS.h>

namespace Aws {
namespace DynamoDB {
struct AWS_DYNAMODB_API DynamoDBClientConfiguration : public Aws::Client::GenericClientConfiguration {
  using BaseClientConfigClass = Aws::Client::GenericClientConfiguration;
  static const bool EndpointDiscoverySupported = true;
  static const bool EndpointDiscoveryRequired = false;

  DynamoDBClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration = {});

  /**
   * Create a configuration based on settings in the aws configuration file for the given profile name.
   * The configuration file location can be set via the environment variable AWS_CONFIG_FILE
   * @param profileName the aws profile name.
   * @param shouldDisableIMDS whether or not to disable IMDS calls.
   */
  DynamoDBClientConfiguration(const char* profileName, bool shouldDisableIMDS = false);

  /**
   * Create a configuration with a predefined smart defaults
   * @param useSmartDefaults, required to differentiate c-tors
   * @param defaultMode, default mode to use
   * @param shouldDisableIMDS whether or not to disable IMDS calls.
   */
  DynamoDBClientConfiguration(bool useSmartDefaults, const char* defaultMode = "legacy", bool shouldDisableIMDS = false);

  /**
   * Create a configuration that starts from shared settings (region, timeouts, proxy, retry, ...),
   * then loads this service's options from the environment and profile.
   * Explicit, so a client is never built from the shared configuration implicitly.
   */
  explicit DynamoDBClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig);

  /**
   * Use FIPS endpoint in the endpoint calculation. Please check first that the service supports FIPS in a selected region.
   */
  bool useFIPS = false;

  /**
   * Use dual stack endpoint in the endpoint calculation. It is your responsibility to verify that the service supports ipv6 in the region
   * you select.
   */
  bool useDualStack = false;

  /**
   * The AWS account ID. Used for account-based endpoint routing. An AWS account ID has a format like 111122223333.
   * Account-based endpoint routing provides better request performance for some services.
   *
   * https://docs.aws.amazon.com/sdkref/latest/guide/feature-account-endpoints.html
   */
  Aws::String accountId;

  /**
   * This setting is used to turn off account-based endpoint routing if necessary, and bypass account-based rules.
   * Can be the case sensitive string values "required", "disabled", or "preferred". Defaults to "preferred".
   *
   * https://docs.aws.amazon.com/sdkref/latest/guide/feature-account-endpoints.html
   */
  Aws::String accountIdEndpointMode = "preferred";

  /**
   * Enable endpoint discovery
   * For some services to dynamically set up their endpoints for different requests.
   * By default, service clients will decide if endpoint discovery is enabled or not.
   * If disabled, regional or overridden endpoint will be used instead.
   * If a request requires endpoint discovery, but it was disabled then the request will never succeed.
   * A boolean value is either true of false, use Optional here to have an instance does not contain a value,
   * such that SDK will decide the default behavior as stated before, if no value specified.
   * DynamoDB service client does not require endpoint discovery. The default value for this setting is Disabled.
   */
  Aws::Crt::Optional<bool> enableEndpointDiscovery;

 private:
  void LoadDynamoDBSpecificConfig(const Aws::String& profileName);
};

/**
 * Values of this service's supported options that the client hands to core.
 */
AWS_DYNAMODB_API Aws::Client::ServiceClientOptions GetServiceClientOptions(const DynamoDBClientConfiguration& config);
}  // namespace DynamoDB
}  // namespace Aws