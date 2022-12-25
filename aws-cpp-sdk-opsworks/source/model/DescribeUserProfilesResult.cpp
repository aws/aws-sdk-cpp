/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/DescribeUserProfilesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::OpsWorks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeUserProfilesResult::DescribeUserProfilesResult()
{
}

DescribeUserProfilesResult::DescribeUserProfilesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeUserProfilesResult& DescribeUserProfilesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("UserProfiles"))
  {
    Aws::Utils::Array<JsonView> userProfilesJsonList = jsonValue.GetArray("UserProfiles");
    for(unsigned userProfilesIndex = 0; userProfilesIndex < userProfilesJsonList.GetLength(); ++userProfilesIndex)
    {
      m_userProfiles.push_back(userProfilesJsonList[userProfilesIndex].AsObject());
    }
  }



  return *this;
}
