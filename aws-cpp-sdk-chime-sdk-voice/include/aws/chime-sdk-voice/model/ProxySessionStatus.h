/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ChimeSDKVoice
{
namespace Model
{
  enum class ProxySessionStatus
  {
    NOT_SET,
    Open,
    InProgress,
    Closed
  };

namespace ProxySessionStatusMapper
{
AWS_CHIMESDKVOICE_API ProxySessionStatus GetProxySessionStatusForName(const Aws::String& name);

AWS_CHIMESDKVOICE_API Aws::String GetNameForProxySessionStatus(ProxySessionStatus value);
} // namespace ProxySessionStatusMapper
} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
