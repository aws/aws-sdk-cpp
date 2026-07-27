/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-security/CodeGuruSecurityEndpointProvider.h>
#include <aws/codeguru-security/internal/CodeGuruSecurityEndpointRules.h>

namespace Aws {
namespace CodeGuruSecurity {
namespace Endpoint {
CodeGuruSecurityEndpointProvider::CodeGuruSecurityEndpointProvider()
    : CodeGuruSecurityDefaultEpProviderBase(Aws::CodeGuruSecurity::CodeGuruSecurityEndpointRules::GetRulesBlob(),
                                            Aws::CodeGuruSecurity::CodeGuruSecurityEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace CodeGuruSecurity
}  // namespace Aws
