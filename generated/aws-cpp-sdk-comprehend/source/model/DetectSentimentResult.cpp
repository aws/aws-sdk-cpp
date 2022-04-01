/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/DetectSentimentResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Comprehend::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DetectSentimentResult::DetectSentimentResult() : 
    m_sentiment(SentimentType::NOT_SET)
{
}

DetectSentimentResult::DetectSentimentResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_sentiment(SentimentType::NOT_SET)
{
  *this = result;
}

DetectSentimentResult& DetectSentimentResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Sentiment"))
  {
    m_sentiment = SentimentTypeMapper::GetSentimentTypeForName(jsonValue.GetString("Sentiment"));

  }

  if(jsonValue.ValueExists("SentimentScore"))
  {
    m_sentimentScore = jsonValue.GetObject("SentimentScore");

  }



  return *this;
}
