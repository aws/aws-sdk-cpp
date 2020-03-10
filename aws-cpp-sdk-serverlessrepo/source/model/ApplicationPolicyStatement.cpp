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

#include <aws/serverlessrepo/model/ApplicationPolicyStatement.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServerlessApplicationRepository
{
namespace Model
{

ApplicationPolicyStatement::ApplicationPolicyStatement() : 
    m_actionsHasBeenSet(false),
    m_principalOrgIDsHasBeenSet(false),
    m_principalsHasBeenSet(false),
    m_statementIdHasBeenSet(false)
{
}

ApplicationPolicyStatement::ApplicationPolicyStatement(JsonView jsonValue) : 
    m_actionsHasBeenSet(false),
    m_principalOrgIDsHasBeenSet(false),
    m_principalsHasBeenSet(false),
    m_statementIdHasBeenSet(false)
{
  *this = jsonValue;
}

ApplicationPolicyStatement& ApplicationPolicyStatement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("actions"))
  {
    Array<JsonView> actionsJsonList = jsonValue.GetArray("actions");
    for(unsigned actionsIndex = 0; actionsIndex < actionsJsonList.GetLength(); ++actionsIndex)
    {
      m_actions.push_back(actionsJsonList[actionsIndex].AsString());
    }
    m_actionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("principalOrgIDs"))
  {
    Array<JsonView> principalOrgIDsJsonList = jsonValue.GetArray("principalOrgIDs");
    for(unsigned principalOrgIDsIndex = 0; principalOrgIDsIndex < principalOrgIDsJsonList.GetLength(); ++principalOrgIDsIndex)
    {
      m_principalOrgIDs.push_back(principalOrgIDsJsonList[principalOrgIDsIndex].AsString());
    }
    m_principalOrgIDsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("principals"))
  {
    Array<JsonView> principalsJsonList = jsonValue.GetArray("principals");
    for(unsigned principalsIndex = 0; principalsIndex < principalsJsonList.GetLength(); ++principalsIndex)
    {
      m_principals.push_back(principalsJsonList[principalsIndex].AsString());
    }
    m_principalsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statementId"))
  {
    m_statementId = jsonValue.GetString("statementId");

    m_statementIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ApplicationPolicyStatement::Jsonize() const
{
  JsonValue payload;

  if(m_actionsHasBeenSet)
  {
   Array<JsonValue> actionsJsonList(m_actions.size());
   for(unsigned actionsIndex = 0; actionsIndex < actionsJsonList.GetLength(); ++actionsIndex)
   {
     actionsJsonList[actionsIndex].AsString(m_actions[actionsIndex]);
   }
   payload.WithArray("actions", std::move(actionsJsonList));

  }

  if(m_principalOrgIDsHasBeenSet)
  {
   Array<JsonValue> principalOrgIDsJsonList(m_principalOrgIDs.size());
   for(unsigned principalOrgIDsIndex = 0; principalOrgIDsIndex < principalOrgIDsJsonList.GetLength(); ++principalOrgIDsIndex)
   {
     principalOrgIDsJsonList[principalOrgIDsIndex].AsString(m_principalOrgIDs[principalOrgIDsIndex]);
   }
   payload.WithArray("principalOrgIDs", std::move(principalOrgIDsJsonList));

  }

  if(m_principalsHasBeenSet)
  {
   Array<JsonValue> principalsJsonList(m_principals.size());
   for(unsigned principalsIndex = 0; principalsIndex < principalsJsonList.GetLength(); ++principalsIndex)
   {
     principalsJsonList[principalsIndex].AsString(m_principals[principalsIndex]);
   }
   payload.WithArray("principals", std::move(principalsJsonList));

  }

  if(m_statementIdHasBeenSet)
  {
   payload.WithString("statementId", m_statementId);

  }

  return payload;
}

} // namespace Model
} // namespace ServerlessApplicationRepository
} // namespace Aws
