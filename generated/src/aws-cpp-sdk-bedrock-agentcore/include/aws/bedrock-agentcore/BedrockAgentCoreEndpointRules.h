/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <cstddef>
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>

namespace Aws
{
namespace BedrockAgentCore
{
class BedrockAgentCoreEndpointRules
{
public:
    static const size_t RulesBlobStrLen;
    static const size_t RulesBlobSize;

    static const char* GetRulesBlob();
};
} // namespace BedrockAgentCore
} // namespace Aws
