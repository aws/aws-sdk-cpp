/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfigdata/AppConfigDataEndpointProvider.h>
#include <aws/appconfigdata/internal/AppConfigDataEndpointRules.h>

namespace Aws {
namespace AppConfigData {
namespace Endpoint {
AppConfigDataEndpointProvider::AppConfigDataEndpointProvider()
    : AppConfigDataDefaultEpProviderBase(Aws::AppConfigData::AppConfigDataEndpointRules::GetRulesBlob(),
                                         Aws::AppConfigData::AppConfigDataEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace AppConfigData
}  // namespace Aws
