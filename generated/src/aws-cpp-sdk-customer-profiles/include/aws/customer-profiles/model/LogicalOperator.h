/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{
  enum class LogicalOperator
  {
    NOT_SET,
    AND,
    OR
  };

namespace LogicalOperatorMapper
{
AWS_CUSTOMERPROFILES_API LogicalOperator GetLogicalOperatorForName(const Aws::String& name);

AWS_CUSTOMERPROFILES_API Aws::String GetNameForLogicalOperator(LogicalOperator value);
} // namespace LogicalOperatorMapper
} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
