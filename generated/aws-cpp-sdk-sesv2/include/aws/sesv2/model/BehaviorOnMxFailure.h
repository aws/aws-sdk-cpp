/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SESV2
{
namespace Model
{
  enum class BehaviorOnMxFailure
  {
    NOT_SET,
    USE_DEFAULT_VALUE,
    REJECT_MESSAGE
  };

namespace BehaviorOnMxFailureMapper
{
AWS_SESV2_API BehaviorOnMxFailure GetBehaviorOnMxFailureForName(const Aws::String& name);

AWS_SESV2_API Aws::String GetNameForBehaviorOnMxFailure(BehaviorOnMxFailure value);
} // namespace BehaviorOnMxFailureMapper
} // namespace Model
} // namespace SESV2
} // namespace Aws
