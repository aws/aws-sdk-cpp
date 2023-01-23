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
  enum class CustomRoutingProtocol
  {
    NOT_SET,
    TCP,
    UDP
  };

namespace CustomRoutingProtocolMapper
{
AWS_GLOBALACCELERATOR_API CustomRoutingProtocol GetCustomRoutingProtocolForName(const Aws::String& name);

AWS_GLOBALACCELERATOR_API Aws::String GetNameForCustomRoutingProtocol(CustomRoutingProtocol value);
} // namespace CustomRoutingProtocolMapper
} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
