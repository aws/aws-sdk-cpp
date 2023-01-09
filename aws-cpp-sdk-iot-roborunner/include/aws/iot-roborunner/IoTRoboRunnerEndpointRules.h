/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <cstddef>
#include <aws/iot-roborunner/IoTRoboRunner_EXPORTS.h>

namespace Aws
{
namespace IoTRoboRunner
{
class IoTRoboRunnerEndpointRules
{
public:
    static const size_t RulesBlobStrLen;
    static const size_t RulesBlobSize;

    static const char* GetRulesBlob();
};
} // namespace IoTRoboRunner
} // namespace Aws
