/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Outposts
{
namespace Model
{
  enum class PowerFeedDrop
  {
    NOT_SET,
    ABOVE_RACK,
    BELOW_RACK
  };

namespace PowerFeedDropMapper
{
AWS_OUTPOSTS_API PowerFeedDrop GetPowerFeedDropForName(const Aws::String& name);

AWS_OUTPOSTS_API Aws::String GetNameForPowerFeedDrop(PowerFeedDrop value);
} // namespace PowerFeedDropMapper
} // namespace Model
} // namespace Outposts
} // namespace Aws
