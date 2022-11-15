/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/TargetedSentimentEntity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Comprehend
{
namespace Model
{

TargetedSentimentEntity::TargetedSentimentEntity() : 
    m_descriptiveMentionIndexHasBeenSet(false),
    m_mentionsHasBeenSet(false)
{
}

TargetedSentimentEntity::TargetedSentimentEntity(JsonView jsonValue) : 
    m_descriptiveMentionIndexHasBeenSet(false),
    m_mentionsHasBeenSet(false)
{
  *this = jsonValue;
}

TargetedSentimentEntity& TargetedSentimentEntity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DescriptiveMentionIndex"))
  {
    Aws::Utils::Array<JsonView> descriptiveMentionIndexJsonList = jsonValue.GetArray("DescriptiveMentionIndex");
    for(unsigned descriptiveMentionIndexIndex = 0; descriptiveMentionIndexIndex < descriptiveMentionIndexJsonList.GetLength(); ++descriptiveMentionIndexIndex)
    {
      m_descriptiveMentionIndex.push_back(descriptiveMentionIndexJsonList[descriptiveMentionIndexIndex].AsInteger());
    }
    m_descriptiveMentionIndexHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Mentions"))
  {
    Aws::Utils::Array<JsonView> mentionsJsonList = jsonValue.GetArray("Mentions");
    for(unsigned mentionsIndex = 0; mentionsIndex < mentionsJsonList.GetLength(); ++mentionsIndex)
    {
      m_mentions.push_back(mentionsJsonList[mentionsIndex].AsObject());
    }
    m_mentionsHasBeenSet = true;
  }

  return *this;
}

JsonValue TargetedSentimentEntity::Jsonize() const
{
  JsonValue payload;

  if(m_descriptiveMentionIndexHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> descriptiveMentionIndexJsonList(m_descriptiveMentionIndex.size());
   for(unsigned descriptiveMentionIndexIndex = 0; descriptiveMentionIndexIndex < descriptiveMentionIndexJsonList.GetLength(); ++descriptiveMentionIndexIndex)
   {
     descriptiveMentionIndexJsonList[descriptiveMentionIndexIndex].AsInteger(m_descriptiveMentionIndex[descriptiveMentionIndexIndex]);
   }
   payload.WithArray("DescriptiveMentionIndex", std::move(descriptiveMentionIndexJsonList));

  }

  if(m_mentionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> mentionsJsonList(m_mentions.size());
   for(unsigned mentionsIndex = 0; mentionsIndex < mentionsJsonList.GetLength(); ++mentionsIndex)
   {
     mentionsJsonList[mentionsIndex].AsObject(m_mentions[mentionsIndex].Jsonize());
   }
   payload.WithArray("Mentions", std::move(mentionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Comprehend
} // namespace Aws
