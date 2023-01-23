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
  enum class PortAccessType
  {
    NOT_SET,
    Public,
    Private
  };

namespace PortAccessTypeMapper
{
AWS_LIGHTSAIL_API PortAccessType GetPortAccessTypeForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForPortAccessType(PortAccessType value);
} // namespace PortAccessTypeMapper
} // namespace Model
} // namespace Lightsail
} // namespace Aws
