/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/ConnectCasesEndpointProvider.h>
#include <aws/connectcases/internal/ConnectCasesEndpointRules.h>

namespace Aws {
namespace ConnectCases {
namespace Endpoint {
ConnectCasesEndpointProvider::ConnectCasesEndpointProvider()
    : ConnectCasesDefaultEpProviderBase(Aws::ConnectCases::ConnectCasesEndpointRules::GetRulesBlob(),
                                        Aws::ConnectCases::ConnectCasesEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace ConnectCases
}  // namespace Aws
