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
  enum class AcceleratorName
  {
    NOT_SET,
    t4,
    a10g,
    l4,
    l40s
  };

namespace AcceleratorNameMapper
{
AWS_DEADLINE_API AcceleratorName GetAcceleratorNameForName(const Aws::String& name);

AWS_DEADLINE_API Aws::String GetNameForAcceleratorName(AcceleratorName value);
} // namespace AcceleratorNameMapper
} // namespace Model
} // namespace deadline
} // namespace Aws
