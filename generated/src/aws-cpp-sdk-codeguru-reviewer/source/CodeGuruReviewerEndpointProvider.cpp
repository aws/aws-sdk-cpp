/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-reviewer/CodeGuruReviewerEndpointProvider.h>
#include <aws/codeguru-reviewer/internal/CodeGuruReviewerEndpointRules.h>

namespace Aws {
namespace CodeGuruReviewer {
namespace Endpoint {
CodeGuruReviewerEndpointProvider::CodeGuruReviewerEndpointProvider()
    : CodeGuruReviewerDefaultEpProviderBase(Aws::CodeGuruReviewer::CodeGuruReviewerEndpointRules::GetRulesBlob(),
                                            Aws::CodeGuruReviewer::CodeGuruReviewerEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace CodeGuruReviewer
}  // namespace Aws
