/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudWatchEvidently
{
namespace Model
{
  enum class EventType
  {
    NOT_SET,
    aws_evidently_evaluation,
    aws_evidently_custom
  };

namespace EventTypeMapper
{
AWS_CLOUDWATCHEVIDENTLY_API EventType GetEventTypeForName(const Aws::String& name);

AWS_CLOUDWATCHEVIDENTLY_API Aws::String GetNameForEventType(EventType value);
} // namespace EventTypeMapper
} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
