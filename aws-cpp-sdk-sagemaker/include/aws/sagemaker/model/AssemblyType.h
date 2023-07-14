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
  enum class AssemblyType
  {
    NOT_SET,
    None,
    Line
  };

namespace AssemblyTypeMapper
{
AWS_SAGEMAKER_API AssemblyType GetAssemblyTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForAssemblyType(AssemblyType value);
} // namespace AssemblyTypeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
