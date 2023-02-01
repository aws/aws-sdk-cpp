/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <cstddef>
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>

namespace Aws
{
namespace KinesisAnalyticsV2
{
class KinesisAnalyticsV2EndpointRules
{
public:
    static const size_t RulesBlobStrLen;
    static const size_t RulesBlobSize;

    static const char* GetRulesBlob();
};
} // namespace KinesisAnalyticsV2
} // namespace Aws
