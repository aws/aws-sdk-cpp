/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/macie2/model/GetMemberResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Macie2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetMemberResult::GetMemberResult() : 
    m_relationshipStatus(RelationshipStatus::NOT_SET)
{
}

GetMemberResult::GetMemberResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_relationshipStatus(RelationshipStatus::NOT_SET)
{
  *this = result;
}

GetMemberResult& GetMemberResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");

  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("email"))
  {
    m_email = jsonValue.GetString("email");

  }

  if(jsonValue.ValueExists("invitedAt"))
  {
    m_invitedAt = jsonValue.GetString("invitedAt");

  }

  if(jsonValue.ValueExists("masterAccountId"))
  {
    m_masterAccountId = jsonValue.GetString("masterAccountId");

  }

  if(jsonValue.ValueExists("relationshipStatus"))
  {
    m_relationshipStatus = RelationshipStatusMapper::GetRelationshipStatusForName(jsonValue.GetString("relationshipStatus"));

  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");

  }



  return *this;
}
