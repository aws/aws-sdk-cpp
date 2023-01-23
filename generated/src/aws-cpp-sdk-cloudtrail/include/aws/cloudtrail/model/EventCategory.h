/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudTrail
{
namespace Model
{
  enum class EventCategory
  {
    NOT_SET,
    insight
  };

namespace EventCategoryMapper
{
AWS_CLOUDTRAIL_API EventCategory GetEventCategoryForName(const Aws::String& name);

AWS_CLOUDTRAIL_API Aws::String GetNameForEventCategory(EventCategory value);
} // namespace EventCategoryMapper
} // namespace Model
} // namespace CloudTrail
} // namespace Aws
