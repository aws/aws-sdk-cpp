/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/lex/model/SentimentResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexRuntimeService
{
namespace Model
{

SentimentResponse::SentimentResponse() : 
    m_sentimentLabelHasBeenSet(false),
    m_sentimentScoreHasBeenSet(false)
{
}

SentimentResponse::SentimentResponse(JsonView jsonValue) : 
    m_sentimentLabelHasBeenSet(false),
    m_sentimentScoreHasBeenSet(false)
{
  *this = jsonValue;
}

SentimentResponse& SentimentResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sentimentLabel"))
  {
    m_sentimentLabel = jsonValue.GetString("sentimentLabel");

    m_sentimentLabelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sentimentScore"))
  {
    m_sentimentScore = jsonValue.GetString("sentimentScore");

    m_sentimentScoreHasBeenSet = true;
  }

  return *this;
}

JsonValue SentimentResponse::Jsonize() const
{
  JsonValue payload;

  if(m_sentimentLabelHasBeenSet)
  {
   payload.WithString("sentimentLabel", m_sentimentLabel);

  }

  if(m_sentimentScoreHasBeenSet)
  {
   payload.WithString("sentimentScore", m_sentimentScore);

  }

  return payload;
}

} // namespace Model
} // namespace LexRuntimeService
} // namespace Aws
