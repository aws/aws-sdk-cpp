/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SageMaker
{
namespace Model
{
  enum class ConditionOutcome
  {
    NOT_SET,
    True,
    False
  };

namespace ConditionOutcomeMapper
{
AWS_SAGEMAKER_API ConditionOutcome GetConditionOutcomeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForConditionOutcome(ConditionOutcome value);
} // namespace ConditionOutcomeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
