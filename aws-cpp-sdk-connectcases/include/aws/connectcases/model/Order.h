/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConnectCases
{
namespace Model
{
  enum class Order
  {
    NOT_SET,
    Asc,
    Desc
  };

namespace OrderMapper
{
AWS_CONNECTCASES_API Order GetOrderForName(const Aws::String& name);

AWS_CONNECTCASES_API Aws::String GetNameForOrder(Order value);
} // namespace OrderMapper
} // namespace Model
} // namespace ConnectCases
} // namespace Aws
