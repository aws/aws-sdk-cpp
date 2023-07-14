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
  enum class OpsItemFilterOperator
  {
    NOT_SET,
    Equal,
    Contains,
    GreaterThan,
    LessThan
  };

namespace OpsItemFilterOperatorMapper
{
AWS_SSM_API OpsItemFilterOperator GetOpsItemFilterOperatorForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForOpsItemFilterOperator(OpsItemFilterOperator value);
} // namespace OpsItemFilterOperatorMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
