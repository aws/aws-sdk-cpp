/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Connect
{
namespace Model
{
  enum class SearchContactsTimeRangeConditionType
  {
    NOT_SET,
    NOT_EXISTS
  };

namespace SearchContactsTimeRangeConditionTypeMapper
{
AWS_CONNECT_API SearchContactsTimeRangeConditionType GetSearchContactsTimeRangeConditionTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForSearchContactsTimeRangeConditionType(SearchContactsTimeRangeConditionType value);
} // namespace SearchContactsTimeRangeConditionTypeMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
