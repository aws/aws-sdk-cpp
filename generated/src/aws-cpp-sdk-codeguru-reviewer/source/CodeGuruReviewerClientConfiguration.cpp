/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-reviewer/CodeGuruReviewerClientConfiguration.h>

namespace Aws {
namespace CodeGuruReviewer {

void CodeGuruReviewerClientConfiguration::LoadCodeGuruReviewerSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

CodeGuruReviewerClientConfiguration::CodeGuruReviewerClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadCodeGuruReviewerSpecificConfig(this->profileName);
}

CodeGuruReviewerClientConfiguration::CodeGuruReviewerClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadCodeGuruReviewerSpecificConfig(Aws::String(inputProfileName));
}

CodeGuruReviewerClientConfiguration::CodeGuruReviewerClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                         bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadCodeGuruReviewerSpecificConfig(this->profileName);
}

CodeGuruReviewerClientConfiguration::CodeGuruReviewerClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadCodeGuruReviewerSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const CodeGuruReviewerClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace CodeGuruReviewer
}  // namespace Aws
