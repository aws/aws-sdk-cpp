/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cur/CostandUsageReportServiceClientConfiguration.h>

namespace Aws {
namespace CostandUsageReportService {

void CostandUsageReportServiceClientConfiguration::LoadCostandUsageReportServiceSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::ClientConfiguration::LoadConfigFromEnvOrProfile("AWS_USE_FIPS_ENDPOINT", this->profileName, "use_fips_endpoint",
                                                                         {"true", "false"}, "false") == "true";
  useDualStack = Aws::Client::ClientConfiguration::LoadConfigFromEnvOrProfile(
                     "AWS_USE_DUALSTACK_ENDPOINT", this->profileName, "use_dualstack_endpoint", {"true", "false"}, "false") == "true";
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

CostandUsageReportServiceClientConfiguration::CostandUsageReportServiceClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadCostandUsageReportServiceSpecificConfig(this->profileName);
}

CostandUsageReportServiceClientConfiguration::CostandUsageReportServiceClientConfiguration(const char* inputProfileName,
                                                                                           bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadCostandUsageReportServiceSpecificConfig(Aws::String(inputProfileName));
}

CostandUsageReportServiceClientConfiguration::CostandUsageReportServiceClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                                           bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadCostandUsageReportServiceSpecificConfig(this->profileName);
}

CostandUsageReportServiceClientConfiguration::CostandUsageReportServiceClientConfiguration(
    const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadCostandUsageReportServiceSpecificConfig(this->profileName);
}

}  // namespace CostandUsageReportService
}  // namespace Aws
