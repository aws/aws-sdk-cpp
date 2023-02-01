/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/ListCampaignsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTFleetWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListCampaignsResult::ListCampaignsResult()
{
}

ListCampaignsResult::ListCampaignsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListCampaignsResult& ListCampaignsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("campaignSummaries"))
  {
    Aws::Utils::Array<JsonView> campaignSummariesJsonList = jsonValue.GetArray("campaignSummaries");
    for(unsigned campaignSummariesIndex = 0; campaignSummariesIndex < campaignSummariesJsonList.GetLength(); ++campaignSummariesIndex)
    {
      m_campaignSummaries.push_back(campaignSummariesJsonList[campaignSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
