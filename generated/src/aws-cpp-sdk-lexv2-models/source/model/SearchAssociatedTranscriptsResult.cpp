/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/SearchAssociatedTranscriptsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LexModelsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SearchAssociatedTranscriptsResult::SearchAssociatedTranscriptsResult() : 
    m_nextIndex(0),
    m_totalResults(0)
{
}

SearchAssociatedTranscriptsResult::SearchAssociatedTranscriptsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_nextIndex(0),
    m_totalResults(0)
{
  *this = result;
}

SearchAssociatedTranscriptsResult& SearchAssociatedTranscriptsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("botId"))
  {
    m_botId = jsonValue.GetString("botId");

  }

  if(jsonValue.ValueExists("botVersion"))
  {
    m_botVersion = jsonValue.GetString("botVersion");

  }

  if(jsonValue.ValueExists("localeId"))
  {
    m_localeId = jsonValue.GetString("localeId");

  }

  if(jsonValue.ValueExists("botRecommendationId"))
  {
    m_botRecommendationId = jsonValue.GetString("botRecommendationId");

  }

  if(jsonValue.ValueExists("nextIndex"))
  {
    m_nextIndex = jsonValue.GetInteger("nextIndex");

  }

  if(jsonValue.ValueExists("associatedTranscripts"))
  {
    Aws::Utils::Array<JsonView> associatedTranscriptsJsonList = jsonValue.GetArray("associatedTranscripts");
    for(unsigned associatedTranscriptsIndex = 0; associatedTranscriptsIndex < associatedTranscriptsJsonList.GetLength(); ++associatedTranscriptsIndex)
    {
      m_associatedTranscripts.push_back(associatedTranscriptsJsonList[associatedTranscriptsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("totalResults"))
  {
    m_totalResults = jsonValue.GetInteger("totalResults");

  }



  return *this;
}
