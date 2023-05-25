/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <cstddef>
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>

namespace Aws
{
namespace LexModelsV2
{
class LexModelsV2EndpointRules
{
public:
    static const size_t RulesBlobStrLen;
    static const size_t RulesBlobSize;

    static const char* GetRulesBlob();
};
} // namespace LexModelsV2
} // namespace Aws
