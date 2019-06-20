/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/health/Health_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Health
{
namespace Model
{
  enum class EventTypeCategory
  {
    NOT_SET,
    issue,
    accountNotification,
    scheduledChange,
    investigation
  };

namespace EventTypeCategoryMapper
{
AWS_HEALTH_API EventTypeCategory GetEventTypeCategoryForName(const Aws::String& name);

AWS_HEALTH_API Aws::String GetNameForEventTypeCategory(EventTypeCategory value);
} // namespace EventTypeCategoryMapper
} // namespace Model
} // namespace Health
} // namespace Aws
