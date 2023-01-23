/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Inspector
{
namespace Model
{
  enum class InspectorEvent
  {
    NOT_SET,
    ASSESSMENT_RUN_STARTED,
    ASSESSMENT_RUN_COMPLETED,
    ASSESSMENT_RUN_STATE_CHANGED,
    FINDING_REPORTED,
    OTHER
  };

namespace InspectorEventMapper
{
AWS_INSPECTOR_API InspectorEvent GetInspectorEventForName(const Aws::String& name);

AWS_INSPECTOR_API Aws::String GetNameForInspectorEvent(InspectorEvent value);
} // namespace InspectorEventMapper
} // namespace Model
} // namespace Inspector
} // namespace Aws
