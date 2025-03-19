/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/GetSegmentMembershipResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetSegmentMembershipResult::GetSegmentMembershipResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetSegmentMembershipResult& GetSegmentMembershipResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SegmentDefinitionName"))
  {
    m_segmentDefinitionName = jsonValue.GetString("SegmentDefinitionName");
    m_segmentDefinitionNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Profiles"))
  {
    Aws::Utils::Array<JsonView> profilesJsonList = jsonValue.GetArray("Profiles");
    for(unsigned profilesIndex = 0; profilesIndex < profilesJsonList.GetLength(); ++profilesIndex)
    {
      m_profiles.push_back(profilesJsonList[profilesIndex].AsObject());
    }
    m_profilesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Failures"))
  {
    Aws::Utils::Array<JsonView> failuresJsonList = jsonValue.GetArray("Failures");
    for(unsigned failuresIndex = 0; failuresIndex < failuresJsonList.GetLength(); ++failuresIndex)
    {
      m_failures.push_back(failuresJsonList[failuresIndex].AsObject());
    }
    m_failuresHasBeenSet = true;
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
