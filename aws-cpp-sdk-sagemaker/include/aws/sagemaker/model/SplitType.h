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
  enum class SplitType
  {
    NOT_SET,
    None,
    Line,
    RecordIO,
    TFRecord
  };

namespace SplitTypeMapper
{
AWS_SAGEMAKER_API SplitType GetSplitTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForSplitType(SplitType value);
} // namespace SplitTypeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
