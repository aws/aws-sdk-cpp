/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SMS
{
namespace Model
{
  enum class AppValidationStrategy
  {
    NOT_SET,
    SSM
  };

namespace AppValidationStrategyMapper
{
AWS_SMS_API AppValidationStrategy GetAppValidationStrategyForName(const Aws::String& name);

AWS_SMS_API Aws::String GetNameForAppValidationStrategy(AppValidationStrategy value);
} // namespace AppValidationStrategyMapper
} // namespace Model
} // namespace SMS
} // namespace Aws
