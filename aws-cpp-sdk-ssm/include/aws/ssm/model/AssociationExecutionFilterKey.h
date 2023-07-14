/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSM
{
namespace Model
{
  enum class AssociationExecutionFilterKey
  {
    NOT_SET,
    ExecutionId,
    Status,
    CreatedTime
  };

namespace AssociationExecutionFilterKeyMapper
{
AWS_SSM_API AssociationExecutionFilterKey GetAssociationExecutionFilterKeyForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForAssociationExecutionFilterKey(AssociationExecutionFilterKey value);
} // namespace AssociationExecutionFilterKeyMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
