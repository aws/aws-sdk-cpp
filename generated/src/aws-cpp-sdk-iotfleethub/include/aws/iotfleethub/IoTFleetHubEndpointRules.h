/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <cstddef>
#include <aws/iotfleethub/IoTFleetHub_EXPORTS.h>

namespace Aws
{
namespace IoTFleetHub
{
class IoTFleetHubEndpointRules
{
public:
    static const size_t RulesBlobStrLen;
    static const size_t RulesBlobSize;

    static const char* GetRulesBlob();
};
} // namespace IoTFleetHub
} // namespace Aws
