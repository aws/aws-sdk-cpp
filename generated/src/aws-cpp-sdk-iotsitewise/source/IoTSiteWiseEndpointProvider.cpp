/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/IoTSiteWiseEndpointProvider.h>
#include <aws/iotsitewise/internal/IoTSiteWiseEndpointRules.h>

namespace Aws {
namespace IoTSiteWise {
namespace Endpoint {
IoTSiteWiseEndpointProvider::IoTSiteWiseEndpointProvider()
    : IoTSiteWiseDefaultEpProviderBase(Aws::IoTSiteWise::IoTSiteWiseEndpointRules::GetRulesBlob(),
                                       Aws::IoTSiteWise::IoTSiteWiseEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace IoTSiteWise
}  // namespace Aws
