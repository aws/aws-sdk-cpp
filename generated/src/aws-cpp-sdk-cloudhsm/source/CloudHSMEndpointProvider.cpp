/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudhsm/CloudHSMEndpointProvider.h>
#include <aws/cloudhsm/internal/CloudHSMEndpointRules.h>

namespace Aws {
namespace CloudHSM {
namespace Endpoint {
CloudHSMEndpointProvider::CloudHSMEndpointProvider()
    : CloudHSMDefaultEpProviderBase(Aws::CloudHSM::CloudHSMEndpointRules::GetRulesBlob(),
                                    Aws::CloudHSM::CloudHSMEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace CloudHSM
}  // namespace Aws
