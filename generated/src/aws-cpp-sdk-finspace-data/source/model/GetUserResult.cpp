/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace-data/model/GetUserResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::FinSpaceData::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetUserResult::GetUserResult() : 
    m_status(UserStatus::NOT_SET),
    m_type(UserType::NOT_SET),
    m_apiAccess(ApiAccess::NOT_SET),
    m_createTime(0),
    m_lastEnabledTime(0),
    m_lastDisabledTime(0),
    m_lastModifiedTime(0),
    m_lastLoginTime(0)
{
}

GetUserResult::GetUserResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(UserStatus::NOT_SET),
    m_type(UserType::NOT_SET),
    m_apiAccess(ApiAccess::NOT_SET),
    m_createTime(0),
    m_lastEnabledTime(0),
    m_lastDisabledTime(0),
    m_lastModifiedTime(0),
    m_lastLoginTime(0)
{
  *this = result;
}

GetUserResult& GetUserResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("userId"))
  {
    m_userId = jsonValue.GetString("userId");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = UserStatusMapper::GetUserStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("firstName"))
  {
    m_firstName = jsonValue.GetString("firstName");

  }

  if(jsonValue.ValueExists("lastName"))
  {
    m_lastName = jsonValue.GetString("lastName");

  }

  if(jsonValue.ValueExists("emailAddress"))
  {
    m_emailAddress = jsonValue.GetString("emailAddress");

  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = UserTypeMapper::GetUserTypeForName(jsonValue.GetString("type"));

  }

  if(jsonValue.ValueExists("apiAccess"))
  {
    m_apiAccess = ApiAccessMapper::GetApiAccessForName(jsonValue.GetString("apiAccess"));

  }

  if(jsonValue.ValueExists("apiAccessPrincipalArn"))
  {
    m_apiAccessPrincipalArn = jsonValue.GetString("apiAccessPrincipalArn");

  }

  if(jsonValue.ValueExists("createTime"))
  {
    m_createTime = jsonValue.GetInt64("createTime");

  }

  if(jsonValue.ValueExists("lastEnabledTime"))
  {
    m_lastEnabledTime = jsonValue.GetInt64("lastEnabledTime");

  }

  if(jsonValue.ValueExists("lastDisabledTime"))
  {
    m_lastDisabledTime = jsonValue.GetInt64("lastDisabledTime");

  }

  if(jsonValue.ValueExists("lastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetInt64("lastModifiedTime");

  }

  if(jsonValue.ValueExists("lastLoginTime"))
  {
    m_lastLoginTime = jsonValue.GetInt64("lastLoginTime");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
