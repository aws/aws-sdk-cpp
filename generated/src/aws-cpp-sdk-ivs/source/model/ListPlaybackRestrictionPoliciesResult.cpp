/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs/model/ListPlaybackRestrictionPoliciesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IVS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListPlaybackRestrictionPoliciesResult::ListPlaybackRestrictionPoliciesResult()
{
}

ListPlaybackRestrictionPoliciesResult::ListPlaybackRestrictionPoliciesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListPlaybackRestrictionPoliciesResult& ListPlaybackRestrictionPoliciesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("playbackRestrictionPolicies"))
  {
    Aws::Utils::Array<JsonView> playbackRestrictionPoliciesJsonList = jsonValue.GetArray("playbackRestrictionPolicies");
    for(unsigned playbackRestrictionPoliciesIndex = 0; playbackRestrictionPoliciesIndex < playbackRestrictionPoliciesJsonList.GetLength(); ++playbackRestrictionPoliciesIndex)
    {
      m_playbackRestrictionPolicies.push_back(playbackRestrictionPoliciesJsonList[playbackRestrictionPoliciesIndex].AsObject());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
