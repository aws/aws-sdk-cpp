/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <cstddef>
#include <aws/iot1click-devices/IoT1ClickDevicesService_EXPORTS.h>

namespace Aws
{
namespace IoT1ClickDevicesService
{
class IoT1ClickDevicesServiceEndpointRules
{
public:
    static const size_t RulesBlobStrLen;
    static const size_t RulesBlobSize;

    static const char* GetRulesBlob();
};
} // namespace IoT1ClickDevicesService
} // namespace Aws
