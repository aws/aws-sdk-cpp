/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GameLiftStreams
{
namespace Model
{
  enum class Protocol
  {
    NOT_SET,
    WebRTC
  };

namespace ProtocolMapper
{
AWS_GAMELIFTSTREAMS_API Protocol GetProtocolForName(const Aws::String& name);

AWS_GAMELIFTSTREAMS_API Aws::String GetNameForProtocol(Protocol value);
} // namespace ProtocolMapper
} // namespace Model
} // namespace GameLiftStreams
} // namespace Aws
