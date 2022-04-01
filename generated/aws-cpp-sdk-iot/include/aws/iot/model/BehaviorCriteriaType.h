/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoT
{
namespace Model
{
  enum class BehaviorCriteriaType
  {
    NOT_SET,
    STATIC_,
    STATISTICAL,
    MACHINE_LEARNING
  };

namespace BehaviorCriteriaTypeMapper
{
AWS_IOT_API BehaviorCriteriaType GetBehaviorCriteriaTypeForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForBehaviorCriteriaType(BehaviorCriteriaType value);
} // namespace BehaviorCriteriaTypeMapper
} // namespace Model
} // namespace IoT
} // namespace Aws
