/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{
  enum class AppAssessmentScheduleType
  {
    NOT_SET,
    Disabled,
    Daily
  };

namespace AppAssessmentScheduleTypeMapper
{
AWS_RESILIENCEHUB_API AppAssessmentScheduleType GetAppAssessmentScheduleTypeForName(const Aws::String& name);

AWS_RESILIENCEHUB_API Aws::String GetNameForAppAssessmentScheduleType(AppAssessmentScheduleType value);
} // namespace AppAssessmentScheduleTypeMapper
} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
