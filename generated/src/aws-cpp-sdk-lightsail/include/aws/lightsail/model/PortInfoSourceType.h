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
  enum class PortInfoSourceType
  {
    NOT_SET,
    DEFAULT,
    INSTANCE,
    NONE,
    CLOSED
  };

namespace PortInfoSourceTypeMapper
{
AWS_LIGHTSAIL_API PortInfoSourceType GetPortInfoSourceTypeForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForPortInfoSourceType(PortInfoSourceType value);
} // namespace PortInfoSourceTypeMapper
} // namespace Model
} // namespace Lightsail
} // namespace Aws
