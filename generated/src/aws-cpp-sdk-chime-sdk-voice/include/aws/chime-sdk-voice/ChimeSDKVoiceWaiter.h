/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoiceClient.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace ChimeSDKVoice {

template <typename DerivedClient = ChimeSDKVoiceClient>
class ChimeSDKVoiceWaiter {
 public:
};
}  // namespace ChimeSDKVoice
}  // namespace Aws
