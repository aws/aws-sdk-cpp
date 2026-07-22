/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/DevOpsGuruEndpointProvider.h>
#include <aws/devops-guru/internal/DevOpsGuruEndpointRules.h>

namespace Aws {
namespace DevOpsGuru {
namespace Endpoint {
DevOpsGuruEndpointProvider::DevOpsGuruEndpointProvider()
    : DevOpsGuruDefaultEpProviderBase(Aws::DevOpsGuru::DevOpsGuruEndpointRules::GetRulesBlob(),
                                      Aws::DevOpsGuru::DevOpsGuruEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace DevOpsGuru
}  // namespace Aws
