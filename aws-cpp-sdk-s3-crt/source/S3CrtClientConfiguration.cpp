/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3-crt/S3CrtClientConfiguration.h>

namespace Aws
{
namespace S3Crt
{

static const char US_EAST_1_REGIONAL_ENDPOINT_ENV_VAR[] = "AWS_S3_US_EAST_1_REGIONAL_ENDPOINT";
static const char US_EAST_1_REGIONAL_ENDPOINT_CONFIG_VAR[] = "s3_us_east_1_regional_endpoint";
static const char S3_DISABLE_MULTIREGION_ACCESS_POINTS_ENV_VAR[] = "AWS_S3_DISABLE_MULTIREGION_ACCESS_POINTS";
static const char S3_DISABLE_MULTIREGION_ACCESS_POINTS_CONFIG_VAR[] = "s3_disable_multiregion_access_points";
static const char S3_USE_ARN_REGION_ENVIRONMENT_VARIABLE[] = "AWS_S3_USE_ARN_REGION";
static const char S3_USE_ARN_REGION_CONFIG_FILE_OPTION[] = "s3_use_arn_region";

void S3CrtClientConfiguration::LoadS3CrtSpecificConfig(const Aws::String& inputProfileName)
{
  if (Aws::S3Crt::US_EAST_1_REGIONAL_ENDPOINT_OPTION::NOT_SET == this->useUSEast1RegionalEndPointOption)
  {
    const Aws::String& useUSEastOption =
        BaseClientConfigClass::LoadConfigFromEnvOrProfile(US_EAST_1_REGIONAL_ENDPOINT_ENV_VAR,
                                                          inputProfileName,
                                                          US_EAST_1_REGIONAL_ENDPOINT_CONFIG_VAR,
                                                          {"legacy", "regional"},
                                                          "regional");
    if (useUSEastOption == "legacy") {
      this->useUSEast1RegionalEndPointOption = Aws::S3Crt::US_EAST_1_REGIONAL_ENDPOINT_OPTION::LEGACY;
    } else {
      this->useUSEast1RegionalEndPointOption = Aws::S3Crt::US_EAST_1_REGIONAL_ENDPOINT_OPTION::REGIONAL;
    }
  }

  Aws::String s3DisableMultiRegionAccessPoints = ClientConfiguration::LoadConfigFromEnvOrProfile(S3_DISABLE_MULTIREGION_ACCESS_POINTS_ENV_VAR,
                                                                                        inputProfileName,
                                                                                        S3_DISABLE_MULTIREGION_ACCESS_POINTS_CONFIG_VAR,
                                                                                        {"true", "false"},
                                                                                        "false");
  if (s3DisableMultiRegionAccessPoints == "true")
  {
    disableMultiRegionAccessPoints = true;
  }
  Aws::String useArnRegionCfg = ClientConfiguration::LoadConfigFromEnvOrProfile(S3_USE_ARN_REGION_ENVIRONMENT_VARIABLE,
                                                                               inputProfileName,
                                                                               S3_USE_ARN_REGION_CONFIG_FILE_OPTION,
                                                                               {"true", "false"},
                                                                               "false");
  if (useArnRegionCfg == "true")
  {
    useArnRegion = true;
  }
}

S3CrtClientConfiguration::S3CrtClientConfiguration()
: BaseClientConfigClass()
{
  LoadS3CrtSpecificConfig(this->profileName);
}

S3CrtClientConfiguration::S3CrtClientConfiguration(const char* inputProfileName)
: BaseClientConfigClass(inputProfileName)
{
  LoadS3CrtSpecificConfig(Aws::String(inputProfileName));
}

S3CrtClientConfiguration::S3CrtClientConfiguration(bool useSmartDefaults, const char* defaultMode)
: BaseClientConfigClass(useSmartDefaults, defaultMode)
{
  LoadS3CrtSpecificConfig(this->profileName);
}

S3CrtClientConfiguration::S3CrtClientConfiguration(const Client::ClientConfiguration& config,
                               Client::AWSAuthV4Signer::PayloadSigningPolicy iPayloadSigningPolicy,
                               bool iUseVirtualAddressing,
                               US_EAST_1_REGIONAL_ENDPOINT_OPTION iUseUSEast1RegionalEndPointOption)
  : BaseClientConfigClass(config),
    useVirtualAddressing(iUseVirtualAddressing),
    useUSEast1RegionalEndPointOption(iUseUSEast1RegionalEndPointOption),
    payloadSigningPolicy(iPayloadSigningPolicy)
{
  LoadS3CrtSpecificConfig(this->profileName);
}


} // namespace S3Crt
} // namespace Aws
