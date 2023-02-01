/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <cstddef>
#include <aws/kinesis-video-media/KinesisVideoMedia_EXPORTS.h>

namespace Aws
{
namespace KinesisVideoMedia
{
class KinesisVideoMediaEndpointRules
{
public:
    static const size_t RulesBlobStrLen;
    static const size_t RulesBlobSize;

    static const char* GetRulesBlob();
};
} // namespace KinesisVideoMedia
} // namespace Aws
