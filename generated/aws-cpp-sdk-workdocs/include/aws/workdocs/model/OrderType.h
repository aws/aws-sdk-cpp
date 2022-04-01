/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkDocs
{
namespace Model
{
  enum class OrderType
  {
    NOT_SET,
    ASCENDING,
    DESCENDING
  };

namespace OrderTypeMapper
{
AWS_WORKDOCS_API OrderType GetOrderTypeForName(const Aws::String& name);

AWS_WORKDOCS_API Aws::String GetNameForOrderType(OrderType value);
} // namespace OrderTypeMapper
} // namespace Model
} // namespace WorkDocs
} // namespace Aws
