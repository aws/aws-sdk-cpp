/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wisdom/model/FeedbackData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectWisdomService
{
namespace Model
{

FeedbackData::FeedbackData() : 
    m_relevance(Relevance::NOT_SET),
    m_relevanceHasBeenSet(false)
{
}

FeedbackData::FeedbackData(JsonView jsonValue) : 
    m_relevance(Relevance::NOT_SET),
    m_relevanceHasBeenSet(false)
{
  *this = jsonValue;
}

FeedbackData& FeedbackData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("relevance"))
  {
    m_relevance = RelevanceMapper::GetRelevanceForName(jsonValue.GetString("relevance"));

    m_relevanceHasBeenSet = true;
  }

  return *this;
}

JsonValue FeedbackData::Jsonize() const
{
  JsonValue payload;

  if(m_relevanceHasBeenSet)
  {
   payload.WithString("relevance", RelevanceMapper::GetNameForRelevance(m_relevance));
  }

  return payload;
}

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
