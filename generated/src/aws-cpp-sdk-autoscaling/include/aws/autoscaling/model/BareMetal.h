/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AutoScaling
{
namespace Model
{
  enum class BareMetal
  {
    NOT_SET,
    included,
    excluded,
    required
  };

namespace BareMetalMapper
{
AWS_AUTOSCALING_API BareMetal GetBareMetalForName(const Aws::String& name);

AWS_AUTOSCALING_API Aws::String GetNameForBareMetal(BareMetal value);
} // namespace BareMetalMapper
} // namespace Model
} // namespace AutoScaling
} // namespace Aws
