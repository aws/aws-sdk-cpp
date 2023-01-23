/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <cstddef>
#include <aws/kinesis-video-webrtc-storage/KinesisVideoWebRTCStorage_EXPORTS.h>

namespace Aws
{
namespace KinesisVideoWebRTCStorage
{
class KinesisVideoWebRTCStorageEndpointRules
{
public:
    static const size_t RulesBlobStrLen;
    static const size_t RulesBlobSize;

    static const char* GetRulesBlob();
};
} // namespace KinesisVideoWebRTCStorage
} // namespace Aws
