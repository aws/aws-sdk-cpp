/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SES
{
namespace Model
{
  enum class BehaviorOnMXFailure
  {
    NOT_SET,
    UseDefaultValue,
    RejectMessage
  };

namespace BehaviorOnMXFailureMapper
{
AWS_SES_API BehaviorOnMXFailure GetBehaviorOnMXFailureForName(const Aws::String& name);

AWS_SES_API Aws::String GetNameForBehaviorOnMXFailure(BehaviorOnMXFailure value);
} // namespace BehaviorOnMXFailureMapper
} // namespace Model
} // namespace SES
} // namespace Aws
