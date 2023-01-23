/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GameLift
{
namespace Model
{
  enum class IpProtocol
  {
    NOT_SET,
    TCP,
    UDP
  };

namespace IpProtocolMapper
{
AWS_GAMELIFT_API IpProtocol GetIpProtocolForName(const Aws::String& name);

AWS_GAMELIFT_API Aws::String GetNameForIpProtocol(IpProtocol value);
} // namespace IpProtocolMapper
} // namespace Model
} // namespace GameLift
} // namespace Aws
