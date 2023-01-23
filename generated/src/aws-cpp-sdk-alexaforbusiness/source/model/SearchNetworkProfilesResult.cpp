/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/SearchNetworkProfilesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AlexaForBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SearchNetworkProfilesResult::SearchNetworkProfilesResult() : 
    m_totalCount(0)
{
}

SearchNetworkProfilesResult::SearchNetworkProfilesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_totalCount(0)
{
  *this = result;
}

SearchNetworkProfilesResult& SearchNetworkProfilesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NetworkProfiles"))
  {
    Aws::Utils::Array<JsonView> networkProfilesJsonList = jsonValue.GetArray("NetworkProfiles");
    for(unsigned networkProfilesIndex = 0; networkProfilesIndex < networkProfilesJsonList.GetLength(); ++networkProfilesIndex)
    {
      m_networkProfiles.push_back(networkProfilesJsonList[networkProfilesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("TotalCount"))
  {
    m_totalCount = jsonValue.GetInteger("TotalCount");

  }



  return *this;
}
