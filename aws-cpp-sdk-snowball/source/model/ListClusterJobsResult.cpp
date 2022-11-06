/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/model/ListClusterJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Snowball::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListClusterJobsResult::ListClusterJobsResult()
{
}

ListClusterJobsResult::ListClusterJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListClusterJobsResult& ListClusterJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("JobListEntries"))
  {
    Aws::Utils::Array<JsonView> jobListEntriesJsonList = jsonValue.GetArray("JobListEntries");
    for(unsigned jobListEntriesIndex = 0; jobListEntriesIndex < jobListEntriesJsonList.GetLength(); ++jobListEntriesIndex)
    {
      m_jobListEntries.push_back(jobListEntriesJsonList[jobListEntriesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
