/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/UpdateUserProfileResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateUserProfileResult::UpdateUserProfileResult() : 
    m_status(UserProfileStatus::NOT_SET),
    m_type(UserProfileType::NOT_SET)
{
}

UpdateUserProfileResult::UpdateUserProfileResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(UserProfileStatus::NOT_SET),
    m_type(UserProfileType::NOT_SET)
{
  *this = result;
}

UpdateUserProfileResult& UpdateUserProfileResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("details"))
  {
    m_details = jsonValue.GetObject("details");

  }

  if(jsonValue.ValueExists("domainId"))
  {
    m_domainId = jsonValue.GetString("domainId");

  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = UserProfileStatusMapper::GetUserProfileStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = UserProfileTypeMapper::GetUserProfileTypeForName(jsonValue.GetString("type"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
