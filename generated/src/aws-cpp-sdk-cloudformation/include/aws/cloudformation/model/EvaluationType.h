/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{
  enum class EvaluationType
  {
    NOT_SET,
    Static,
    Dynamic
  };

namespace EvaluationTypeMapper
{
AWS_CLOUDFORMATION_API EvaluationType GetEvaluationTypeForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForEvaluationType(EvaluationType value);
} // namespace EvaluationTypeMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws
