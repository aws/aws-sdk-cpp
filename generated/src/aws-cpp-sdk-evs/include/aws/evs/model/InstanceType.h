/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evs/EVS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EVS
{
namespace Model
{
  enum class InstanceType
  {
    NOT_SET,
    i4i_metal
  };

namespace InstanceTypeMapper
{
AWS_EVS_API InstanceType GetInstanceTypeForName(const Aws::String& name);

AWS_EVS_API Aws::String GetNameForInstanceType(InstanceType value);
} // namespace InstanceTypeMapper
} // namespace Model
} // namespace EVS
} // namespace Aws
