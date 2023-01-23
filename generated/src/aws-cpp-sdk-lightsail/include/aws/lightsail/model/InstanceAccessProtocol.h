/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Lightsail
{
namespace Model
{
  enum class InstanceAccessProtocol
  {
    NOT_SET,
    ssh,
    rdp
  };

namespace InstanceAccessProtocolMapper
{
AWS_LIGHTSAIL_API InstanceAccessProtocol GetInstanceAccessProtocolForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForInstanceAccessProtocol(InstanceAccessProtocol value);
} // namespace InstanceAccessProtocolMapper
} // namespace Model
} // namespace Lightsail
} // namespace Aws
