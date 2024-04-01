/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace deadline
{
namespace Model
{
  enum class AcceleratorType
  {
    NOT_SET,
    gpu
  };

namespace AcceleratorTypeMapper
{
AWS_DEADLINE_API AcceleratorType GetAcceleratorTypeForName(const Aws::String& name);

AWS_DEADLINE_API Aws::String GetNameForAcceleratorType(AcceleratorType value);
} // namespace AcceleratorTypeMapper
} // namespace Model
} // namespace deadline
} // namespace Aws
