/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeGuruProfiler
{
namespace Model
{
  enum class EventPublisher
  {
    NOT_SET,
    AnomalyDetection
  };

namespace EventPublisherMapper
{
AWS_CODEGURUPROFILER_API EventPublisher GetEventPublisherForName(const Aws::String& name);

AWS_CODEGURUPROFILER_API Aws::String GetNameForEventPublisher(EventPublisher value);
} // namespace EventPublisherMapper
} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
