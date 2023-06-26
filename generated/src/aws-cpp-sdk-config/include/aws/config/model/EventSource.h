/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConfigService
{
namespace Model
{
  enum class EventSource
  {
    NOT_SET,
    aws_config
  };

namespace EventSourceMapper
{
AWS_CONFIGSERVICE_API EventSource GetEventSourceForName(const Aws::String& name);

AWS_CONFIGSERVICE_API Aws::String GetNameForEventSource(EventSource value);
} // namespace EventSourceMapper
} // namespace Model
} // namespace ConfigService
} // namespace Aws
