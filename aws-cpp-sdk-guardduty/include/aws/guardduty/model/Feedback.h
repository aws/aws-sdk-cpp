/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GuardDuty
{
namespace Model
{
  enum class Feedback
  {
    NOT_SET,
    USEFUL,
    NOT_USEFUL
  };

namespace FeedbackMapper
{
AWS_GUARDDUTY_API Feedback GetFeedbackForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForFeedback(Feedback value);
} // namespace FeedbackMapper
} // namespace Model
} // namespace GuardDuty
} // namespace Aws
