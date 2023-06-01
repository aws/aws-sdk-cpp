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
  enum class Operator
  {
    NOT_SET,
    EQUAL_TO,
    GREATER_THAN,
    LESS_THAN,
    NOT_EQUAL_TO
  };

namespace OperatorMapper
{
AWS_CUSTOMERPROFILES_API Operator GetOperatorForName(const Aws::String& name);

AWS_CUSTOMERPROFILES_API Aws::String GetNameForOperator(Operator value);
} // namespace OperatorMapper
} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
