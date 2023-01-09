/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <cstddef>
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>

namespace Aws
{
namespace LookoutforVision
{
class LookoutforVisionEndpointRules
{
public:
    static const size_t RulesBlobStrLen;
    static const size_t RulesBlobSize;

    static const char* GetRulesBlob();
};
} // namespace LookoutforVision
} // namespace Aws
