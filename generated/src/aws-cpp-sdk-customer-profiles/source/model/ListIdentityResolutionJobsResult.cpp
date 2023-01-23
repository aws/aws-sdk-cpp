/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/ListIdentityResolutionJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListIdentityResolutionJobsResult::ListIdentityResolutionJobsResult()
{
}

ListIdentityResolutionJobsResult::ListIdentityResolutionJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListIdentityResolutionJobsResult& ListIdentityResolutionJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("IdentityResolutionJobsList"))
  {
    Aws::Utils::Array<JsonView> identityResolutionJobsListJsonList = jsonValue.GetArray("IdentityResolutionJobsList");
    for(unsigned identityResolutionJobsListIndex = 0; identityResolutionJobsListIndex < identityResolutionJobsListJsonList.GetLength(); ++identityResolutionJobsListIndex)
    {
      m_identityResolutionJobsList.push_back(identityResolutionJobsListJsonList[identityResolutionJobsListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
