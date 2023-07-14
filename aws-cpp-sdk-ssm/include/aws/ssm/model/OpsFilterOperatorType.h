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
  enum class OpsFilterOperatorType
  {
    NOT_SET,
    Equal,
    NotEqual,
    BeginWith,
    LessThan,
    GreaterThan,
    Exists
  };

namespace OpsFilterOperatorTypeMapper
{
AWS_SSM_API OpsFilterOperatorType GetOpsFilterOperatorTypeForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForOpsFilterOperatorType(OpsFilterOperatorType value);
} // namespace OpsFilterOperatorTypeMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
