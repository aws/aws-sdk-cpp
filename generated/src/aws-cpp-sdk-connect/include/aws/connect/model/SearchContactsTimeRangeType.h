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
  enum class SearchContactsTimeRangeType
  {
    NOT_SET,
    INITIATION_TIMESTAMP,
    SCHEDULED_TIMESTAMP,
    CONNECTED_TO_AGENT_TIMESTAMP,
    DISCONNECT_TIMESTAMP
  };

namespace SearchContactsTimeRangeTypeMapper
{
AWS_CONNECT_API SearchContactsTimeRangeType GetSearchContactsTimeRangeTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForSearchContactsTimeRangeType(SearchContactsTimeRangeType value);
} // namespace SearchContactsTimeRangeTypeMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
