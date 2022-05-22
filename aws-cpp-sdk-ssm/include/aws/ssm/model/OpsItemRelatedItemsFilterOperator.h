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
  enum class OpsItemRelatedItemsFilterOperator
  {
    NOT_SET,
    Equal
  };

namespace OpsItemRelatedItemsFilterOperatorMapper
{
AWS_SSM_API OpsItemRelatedItemsFilterOperator GetOpsItemRelatedItemsFilterOperatorForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForOpsItemRelatedItemsFilterOperator(OpsItemRelatedItemsFilterOperator value);
} // namespace OpsItemRelatedItemsFilterOperatorMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
