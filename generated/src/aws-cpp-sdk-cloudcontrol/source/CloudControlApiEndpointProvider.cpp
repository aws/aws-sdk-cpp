/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudcontrol/CloudControlApiEndpointProvider.h>
#include <aws/cloudcontrol/internal/CloudControlApiEndpointRules.h>

namespace Aws {
namespace CloudControlApi {
namespace Endpoint {
CloudControlApiEndpointProvider::CloudControlApiEndpointProvider()
    : CloudControlApiDefaultEpProviderBase(Aws::CloudControlApi::CloudControlApiEndpointRules::GetRulesBlob(),
                                           Aws::CloudControlApi::CloudControlApiEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace CloudControlApi
}  // namespace Aws
