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

#include <aws/workmail/model/DescribeUserResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WorkMail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeUserResult::DescribeUserResult() : 
    m_state(EntityState::NOT_SET),
    m_userRole(UserRole::NOT_SET)
{
}

DescribeUserResult::DescribeUserResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_state(EntityState::NOT_SET),
    m_userRole(UserRole::NOT_SET)
{
  *this = result;
}

DescribeUserResult& DescribeUserResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("UserId"))
  {
    m_userId = jsonValue.GetString("UserId");

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("Email"))
  {
    m_email = jsonValue.GetString("Email");

  }

  if(jsonValue.ValueExists("DisplayName"))
  {
    m_displayName = jsonValue.GetString("DisplayName");

  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = EntityStateMapper::GetEntityStateForName(jsonValue.GetString("State"));

  }

  if(jsonValue.ValueExists("UserRole"))
  {
    m_userRole = UserRoleMapper::GetUserRoleForName(jsonValue.GetString("UserRole"));

  }

  if(jsonValue.ValueExists("EnabledDate"))
  {
    m_enabledDate = jsonValue.GetDouble("EnabledDate");

  }

  if(jsonValue.ValueExists("DisabledDate"))
  {
    m_disabledDate = jsonValue.GetDouble("DisabledDate");

  }



  return *this;
}
