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
  enum class OriginationRouteProtocol
  {
    NOT_SET,
    TCP,
    UDP
  };

namespace OriginationRouteProtocolMapper
{
AWS_CHIMESDKVOICE_API OriginationRouteProtocol GetOriginationRouteProtocolForName(const Aws::String& name);

AWS_CHIMESDKVOICE_API Aws::String GetNameForOriginationRouteProtocol(OriginationRouteProtocol value);
} // namespace OriginationRouteProtocolMapper
} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
