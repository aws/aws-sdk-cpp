/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/GetRightsizingRecommendationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CostExplorer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetRightsizingRecommendationResult::GetRightsizingRecommendationResult()
{
}

GetRightsizingRecommendationResult::GetRightsizingRecommendationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetRightsizingRecommendationResult& GetRightsizingRecommendationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Metadata"))
  {
    m_metadata = jsonValue.GetObject("Metadata");

  }

  if(jsonValue.ValueExists("Summary"))
  {
    m_summary = jsonValue.GetObject("Summary");

  }

  if(jsonValue.ValueExists("RightsizingRecommendations"))
  {
    Aws::Utils::Array<JsonView> rightsizingRecommendationsJsonList = jsonValue.GetArray("RightsizingRecommendations");
    for(unsigned rightsizingRecommendationsIndex = 0; rightsizingRecommendationsIndex < rightsizingRecommendationsJsonList.GetLength(); ++rightsizingRecommendationsIndex)
    {
      m_rightsizingRecommendations.push_back(rightsizingRecommendationsJsonList[rightsizingRecommendationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextPageToken"))
  {
    m_nextPageToken = jsonValue.GetString("NextPageToken");

  }

  if(jsonValue.ValueExists("Configuration"))
  {
    m_configuration = jsonValue.GetObject("Configuration");

  }



  return *this;
}
