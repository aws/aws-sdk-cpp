/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTTwinMaker
{
namespace Model
{
  enum class InterpolationType
  {
    NOT_SET,
    LINEAR
  };

namespace InterpolationTypeMapper
{
AWS_IOTTWINMAKER_API InterpolationType GetInterpolationTypeForName(const Aws::String& name);

AWS_IOTTWINMAKER_API Aws::String GetNameForInterpolationType(InterpolationType value);
} // namespace InterpolationTypeMapper
} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
