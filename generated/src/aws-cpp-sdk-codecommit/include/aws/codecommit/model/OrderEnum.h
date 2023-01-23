/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeCommit
{
namespace Model
{
  enum class OrderEnum
  {
    NOT_SET,
    ascending,
    descending
  };

namespace OrderEnumMapper
{
AWS_CODECOMMIT_API OrderEnum GetOrderEnumForName(const Aws::String& name);

AWS_CODECOMMIT_API Aws::String GetNameForOrderEnum(OrderEnum value);
} // namespace OrderEnumMapper
} // namespace Model
} // namespace CodeCommit
} // namespace Aws
