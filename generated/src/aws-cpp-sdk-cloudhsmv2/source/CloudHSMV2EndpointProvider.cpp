/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudhsmv2/CloudHSMV2EndpointProvider.h>
#include <aws/cloudhsmv2/internal/CloudHSMV2EndpointRules.h>

namespace Aws {
namespace CloudHSMV2 {
namespace Endpoint {
CloudHSMV2EndpointProvider::CloudHSMV2EndpointProvider()
    : CloudHSMV2DefaultEpProviderBase(Aws::CloudHSMV2::CloudHSMV2EndpointRules::GetRulesBlob(),
                                      Aws::CloudHSMV2::CloudHSMV2EndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace CloudHSMV2
}  // namespace Aws
