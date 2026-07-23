/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/CodeCommitEndpointProvider.h>
#include <aws/codecommit/internal/CodeCommitEndpointRules.h>

namespace Aws {
namespace CodeCommit {
namespace Endpoint {
CodeCommitEndpointProvider::CodeCommitEndpointProvider()
    : CodeCommitDefaultEpProviderBase(Aws::CodeCommit::CodeCommitEndpointRules::GetRulesBlob(),
                                      Aws::CodeCommit::CodeCommitEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace CodeCommit
}  // namespace Aws
