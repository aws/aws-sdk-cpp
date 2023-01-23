/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <cstddef>
#include <aws/m2/MainframeModernization_EXPORTS.h>

namespace Aws
{
namespace MainframeModernization
{
class MainframeModernizationEndpointRules
{
public:
    static const size_t RulesBlobStrLen;
    static const size_t RulesBlobSize;

    static const char* GetRulesBlob();
};
} // namespace MainframeModernization
} // namespace Aws
