/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{
  enum class EventSeverity
  {
    NOT_SET,
    TRACE,
    DEBUG_,
    INFO,
    WARN,
    ERROR_,
    FATAL
  };

namespace EventSeverityMapper
{
AWS_ELASTICBEANSTALK_API EventSeverity GetEventSeverityForName(const Aws::String& name);

AWS_ELASTICBEANSTALK_API Aws::String GetNameForEventSeverity(EventSeverity value);
} // namespace EventSeverityMapper
} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
