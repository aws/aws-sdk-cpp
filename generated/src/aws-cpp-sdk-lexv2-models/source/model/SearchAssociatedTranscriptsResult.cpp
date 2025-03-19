/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/SearchAssociatedTranscriptsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LexModelsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SearchAssociatedTranscriptsResult::SearchAssociatedTranscriptsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

SearchAssociatedTranscriptsResult& SearchAssociatedTranscriptsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("botId"))
  {
    m_botId = jsonValue.GetString("botId");
    m_botIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("botVersion"))
  {
    m_botVersion = jsonValue.GetString("botVersion");
    m_botVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("localeId"))
  {
    m_localeId = jsonValue.GetString("localeId");
    m_localeIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("botRecommendationId"))
  {
    m_botRecommendationId = jsonValue.GetString("botRecommendationId");
    m_botRecommendationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nextIndex"))
  {
    m_nextIndex = jsonValue.GetInteger("nextIndex");
    m_nextIndexHasBeenSet = true;
  }
  if(jsonValue.ValueExists("associatedTranscripts"))
  {
    Aws::Utils::Array<JsonView> associatedTranscriptsJsonList = jsonValue.GetArray("associatedTranscripts");
    for(unsigned associatedTranscriptsIndex = 0; associatedTranscriptsIndex < associatedTranscriptsJsonList.GetLength(); ++associatedTranscriptsIndex)
    {
      m_associatedTranscripts.push_back(associatedTranscriptsJsonList[associatedTranscriptsIndex].AsObject());
    }
    m_associatedTranscriptsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("totalResults"))
  {
    m_totalResults = jsonValue.GetInteger("totalResults");
    m_totalResultsHasBeenSet = true;
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
