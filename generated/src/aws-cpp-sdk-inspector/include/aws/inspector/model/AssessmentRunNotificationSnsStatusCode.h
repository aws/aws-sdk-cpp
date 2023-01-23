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
  enum class AssessmentRunNotificationSnsStatusCode
  {
    NOT_SET,
    SUCCESS,
    TOPIC_DOES_NOT_EXIST,
    ACCESS_DENIED,
    INTERNAL_ERROR
  };

namespace AssessmentRunNotificationSnsStatusCodeMapper
{
AWS_INSPECTOR_API AssessmentRunNotificationSnsStatusCode GetAssessmentRunNotificationSnsStatusCodeForName(const Aws::String& name);

AWS_INSPECTOR_API Aws::String GetNameForAssessmentRunNotificationSnsStatusCode(AssessmentRunNotificationSnsStatusCode value);
} // namespace AssessmentRunNotificationSnsStatusCodeMapper
} // namespace Model
} // namespace Inspector
} // namespace Aws
