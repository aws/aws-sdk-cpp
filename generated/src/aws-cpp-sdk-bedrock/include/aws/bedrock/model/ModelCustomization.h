/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Bedrock
{
namespace Model
{
  enum class ModelCustomization
  {
    NOT_SET,
    FINE_TUNING,
    CONTINUED_PRE_TRAINING
  };

namespace ModelCustomizationMapper
{
AWS_BEDROCK_API ModelCustomization GetModelCustomizationForName(const Aws::String& name);

AWS_BEDROCK_API Aws::String GetNameForModelCustomization(ModelCustomization value);
} // namespace ModelCustomizationMapper
} // namespace Model
} // namespace Bedrock
} // namespace Aws
