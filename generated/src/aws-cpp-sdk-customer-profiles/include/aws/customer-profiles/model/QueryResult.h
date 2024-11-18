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
  enum class QueryResult
  {
    NOT_SET,
    PRESENT,
    ABSENT
  };

namespace QueryResultMapper
{
AWS_CUSTOMERPROFILES_API QueryResult GetQueryResultForName(const Aws::String& name);

AWS_CUSTOMERPROFILES_API Aws::String GetNameForQueryResult(QueryResult value);
} // namespace QueryResultMapper
} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
