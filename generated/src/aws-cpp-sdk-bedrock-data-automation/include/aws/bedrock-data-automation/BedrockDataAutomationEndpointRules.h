/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <cstddef>
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>

namespace Aws
{
namespace BedrockDataAutomation
{
class BedrockDataAutomationEndpointRules
{
public:
    static const size_t RulesBlobStrLen;
    static const size_t RulesBlobSize;

    static const char* GetRulesBlob();
};
} // namespace BedrockDataAutomation
} // namespace Aws
