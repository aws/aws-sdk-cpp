/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/GetMemberResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Macie2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetMemberResult::GetMemberResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetMemberResult& GetMemberResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");
    m_accountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("administratorAccountId"))
  {
    m_administratorAccountId = jsonValue.GetString("administratorAccountId");
    m_administratorAccountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("email"))
  {
    m_email = jsonValue.GetString("email");
    m_emailHasBeenSet = true;
  }
  if(jsonValue.ValueExists("invitedAt"))
  {
    m_invitedAt = jsonValue.GetString("invitedAt");
    m_invitedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("masterAccountId"))
  {
    m_masterAccountId = jsonValue.GetString("masterAccountId");
    m_masterAccountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("relationshipStatus"))
  {
    m_relationshipStatus = RelationshipStatusMapper::GetRelationshipStatusForName(jsonValue.GetString("relationshipStatus"));
    m_relationshipStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
