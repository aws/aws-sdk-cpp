/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-meetings/ChimeSDKMeetingsClient.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace ChimeSDKMeetings {

template <typename DerivedClient = ChimeSDKMeetingsClient>
class ChimeSDKMeetingsWaiter {
 public:
};
}  // namespace ChimeSDKMeetings
}  // namespace Aws
