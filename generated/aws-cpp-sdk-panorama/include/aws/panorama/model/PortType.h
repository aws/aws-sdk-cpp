/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Panorama
{
namespace Model
{
  enum class PortType
  {
    NOT_SET,
    BOOLEAN,
    STRING,
    INT32,
    FLOAT32,
    MEDIA
  };

namespace PortTypeMapper
{
AWS_PANORAMA_API PortType GetPortTypeForName(const Aws::String& name);

AWS_PANORAMA_API Aws::String GetNameForPortType(PortType value);
} // namespace PortTypeMapper
} // namespace Model
} // namespace Panorama
} // namespace Aws
