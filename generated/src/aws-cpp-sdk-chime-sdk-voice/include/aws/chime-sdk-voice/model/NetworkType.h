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
  enum class NetworkType
  {
    NOT_SET,
    IPV4_ONLY,
    DUAL_STACK
  };

namespace NetworkTypeMapper
{
AWS_CHIMESDKVOICE_API NetworkType GetNetworkTypeForName(const Aws::String& name);

AWS_CHIMESDKVOICE_API Aws::String GetNameForNetworkType(NetworkType value);
} // namespace NetworkTypeMapper
} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
