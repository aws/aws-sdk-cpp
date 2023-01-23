/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/detective/model/BatchGetMembershipDatasourcesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Detective::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchGetMembershipDatasourcesResult::BatchGetMembershipDatasourcesResult()
{
}

BatchGetMembershipDatasourcesResult::BatchGetMembershipDatasourcesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchGetMembershipDatasourcesResult& BatchGetMembershipDatasourcesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("MembershipDatasources"))
  {
    Aws::Utils::Array<JsonView> membershipDatasourcesJsonList = jsonValue.GetArray("MembershipDatasources");
    for(unsigned membershipDatasourcesIndex = 0; membershipDatasourcesIndex < membershipDatasourcesJsonList.GetLength(); ++membershipDatasourcesIndex)
    {
      m_membershipDatasources.push_back(membershipDatasourcesJsonList[membershipDatasourcesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("UnprocessedGraphs"))
  {
    Aws::Utils::Array<JsonView> unprocessedGraphsJsonList = jsonValue.GetArray("UnprocessedGraphs");
    for(unsigned unprocessedGraphsIndex = 0; unprocessedGraphsIndex < unprocessedGraphsJsonList.GetLength(); ++unprocessedGraphsIndex)
    {
      m_unprocessedGraphs.push_back(unprocessedGraphsJsonList[unprocessedGraphsIndex].AsObject());
    }
  }



  return *this;
}
