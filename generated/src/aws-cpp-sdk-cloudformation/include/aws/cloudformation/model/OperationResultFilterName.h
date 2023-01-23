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
  enum class OperationResultFilterName
  {
    NOT_SET,
    OPERATION_RESULT_STATUS
  };

namespace OperationResultFilterNameMapper
{
AWS_CLOUDFORMATION_API OperationResultFilterName GetOperationResultFilterNameForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForOperationResultFilterName(OperationResultFilterName value);
} // namespace OperationResultFilterNameMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws
