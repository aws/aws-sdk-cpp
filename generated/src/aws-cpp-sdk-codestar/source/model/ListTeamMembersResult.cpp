/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codestar/model/ListTeamMembersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeStar::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListTeamMembersResult::ListTeamMembersResult()
{
}

ListTeamMembersResult::ListTeamMembersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListTeamMembersResult& ListTeamMembersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("teamMembers"))
  {
    Aws::Utils::Array<JsonView> teamMembersJsonList = jsonValue.GetArray("teamMembers");
    for(unsigned teamMembersIndex = 0; teamMembersIndex < teamMembersJsonList.GetLength(); ++teamMembersIndex)
    {
      m_teamMembers.push_back(teamMembersJsonList[teamMembersIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
