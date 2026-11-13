/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-reviewer/CodeGuruReviewerEndpointProvider.h>
#include <aws/codeguru-reviewer/internal/CodeGuruReviewerEndpointRules.h>

namespace Aws {
#ifndef AWS_CODEGURUREVIEWER_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<CodeGuruReviewer::Endpoint::CodeGuruReviewerClientConfiguration,
                                                   CodeGuruReviewer::Endpoint::CodeGuruReviewerBuiltInParameters,
                                                   CodeGuruReviewer::Endpoint::CodeGuruReviewerClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<CodeGuruReviewer::Endpoint::CodeGuruReviewerClientConfiguration,
                                                  CodeGuruReviewer::Endpoint::CodeGuruReviewerBuiltInParameters,
                                                  CodeGuruReviewer::Endpoint::CodeGuruReviewerClientContextParameters>;
}  // namespace Endpoint
#endif

namespace CodeGuruReviewer {
namespace Endpoint {
CodeGuruReviewerEndpointProvider::CodeGuruReviewerEndpointProvider()
    : CodeGuruReviewerDefaultEpProviderBase(Aws::CodeGuruReviewer::CodeGuruReviewerEndpointRules::GetRulesBlob(),
                                            Aws::CodeGuruReviewer::CodeGuruReviewerEndpointRules::RulesBlobSize) {}

void CodeGuruReviewerBuiltInParameters::SetFromClientConfiguration(const CodeGuruReviewerClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const CodeGuruReviewerClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void CodeGuruReviewerBuiltInParameters::SetFromClientConfiguration(const CodeGuruReviewerClientConfiguration& config,
                                                                   const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const CodeGuruReviewerClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void CodeGuruReviewerBuiltInParameters::SetServiceSpecificParameters(const CodeGuruReviewerClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace CodeGuruReviewer
}  // namespace Aws
