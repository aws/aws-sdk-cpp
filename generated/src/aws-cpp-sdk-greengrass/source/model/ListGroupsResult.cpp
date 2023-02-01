/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/ListGroupsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Greengrass::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListGroupsResult::ListGroupsResult()
{
}

ListGroupsResult::ListGroupsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListGroupsResult& ListGroupsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Groups"))
  {
    Aws::Utils::Array<JsonView> groupsJsonList = jsonValue.GetArray("Groups");
    for(unsigned groupsIndex = 0; groupsIndex < groupsJsonList.GetLength(); ++groupsIndex)
    {
      m_groups.push_back(groupsJsonList[groupsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
