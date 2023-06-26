/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GlobalAccelerator
{
namespace Model
{
  enum class Protocol
  {
    NOT_SET,
    TCP,
    UDP
  };

namespace ProtocolMapper
{
AWS_GLOBALACCELERATOR_API Protocol GetProtocolForName(const Aws::String& name);

AWS_GLOBALACCELERATOR_API Aws::String GetNameForProtocol(Protocol value);
} // namespace ProtocolMapper
} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
