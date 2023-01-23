/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/DescribeRefreshSchemasStatusResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeRefreshSchemasStatusResult::DescribeRefreshSchemasStatusResult()
{
}

DescribeRefreshSchemasStatusResult::DescribeRefreshSchemasStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeRefreshSchemasStatusResult& DescribeRefreshSchemasStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("RefreshSchemasStatus"))
  {
    m_refreshSchemasStatus = jsonValue.GetObject("RefreshSchemasStatus");

  }



  return *this;
}
