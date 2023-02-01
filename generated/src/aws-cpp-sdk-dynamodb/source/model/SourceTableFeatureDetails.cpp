/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/SourceTableFeatureDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

SourceTableFeatureDetails::SourceTableFeatureDetails() : 
    m_localSecondaryIndexesHasBeenSet(false),
    m_globalSecondaryIndexesHasBeenSet(false),
    m_streamDescriptionHasBeenSet(false),
    m_timeToLiveDescriptionHasBeenSet(false),
    m_sSEDescriptionHasBeenSet(false)
{
}

SourceTableFeatureDetails::SourceTableFeatureDetails(JsonView jsonValue) : 
    m_localSecondaryIndexesHasBeenSet(false),
    m_globalSecondaryIndexesHasBeenSet(false),
    m_streamDescriptionHasBeenSet(false),
    m_timeToLiveDescriptionHasBeenSet(false),
    m_sSEDescriptionHasBeenSet(false)
{
  *this = jsonValue;
}

SourceTableFeatureDetails& SourceTableFeatureDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LocalSecondaryIndexes"))
  {
    Aws::Utils::Array<JsonView> localSecondaryIndexesJsonList = jsonValue.GetArray("LocalSecondaryIndexes");
    for(unsigned localSecondaryIndexesIndex = 0; localSecondaryIndexesIndex < localSecondaryIndexesJsonList.GetLength(); ++localSecondaryIndexesIndex)
    {
      m_localSecondaryIndexes.push_back(localSecondaryIndexesJsonList[localSecondaryIndexesIndex].AsObject());
    }
    m_localSecondaryIndexesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GlobalSecondaryIndexes"))
  {
    Aws::Utils::Array<JsonView> globalSecondaryIndexesJsonList = jsonValue.GetArray("GlobalSecondaryIndexes");
    for(unsigned globalSecondaryIndexesIndex = 0; globalSecondaryIndexesIndex < globalSecondaryIndexesJsonList.GetLength(); ++globalSecondaryIndexesIndex)
    {
      m_globalSecondaryIndexes.push_back(globalSecondaryIndexesJsonList[globalSecondaryIndexesIndex].AsObject());
    }
    m_globalSecondaryIndexesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StreamDescription"))
  {
    m_streamDescription = jsonValue.GetObject("StreamDescription");

    m_streamDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TimeToLiveDescription"))
  {
    m_timeToLiveDescription = jsonValue.GetObject("TimeToLiveDescription");

    m_timeToLiveDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SSEDescription"))
  {
    m_sSEDescription = jsonValue.GetObject("SSEDescription");

    m_sSEDescriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue SourceTableFeatureDetails::Jsonize() const
{
  JsonValue payload;

  if(m_localSecondaryIndexesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> localSecondaryIndexesJsonList(m_localSecondaryIndexes.size());
   for(unsigned localSecondaryIndexesIndex = 0; localSecondaryIndexesIndex < localSecondaryIndexesJsonList.GetLength(); ++localSecondaryIndexesIndex)
   {
     localSecondaryIndexesJsonList[localSecondaryIndexesIndex].AsObject(m_localSecondaryIndexes[localSecondaryIndexesIndex].Jsonize());
   }
   payload.WithArray("LocalSecondaryIndexes", std::move(localSecondaryIndexesJsonList));

  }

  if(m_globalSecondaryIndexesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> globalSecondaryIndexesJsonList(m_globalSecondaryIndexes.size());
   for(unsigned globalSecondaryIndexesIndex = 0; globalSecondaryIndexesIndex < globalSecondaryIndexesJsonList.GetLength(); ++globalSecondaryIndexesIndex)
   {
     globalSecondaryIndexesJsonList[globalSecondaryIndexesIndex].AsObject(m_globalSecondaryIndexes[globalSecondaryIndexesIndex].Jsonize());
   }
   payload.WithArray("GlobalSecondaryIndexes", std::move(globalSecondaryIndexesJsonList));

  }

  if(m_streamDescriptionHasBeenSet)
  {
   payload.WithObject("StreamDescription", m_streamDescription.Jsonize());

  }

  if(m_timeToLiveDescriptionHasBeenSet)
  {
   payload.WithObject("TimeToLiveDescription", m_timeToLiveDescription.Jsonize());

  }

  if(m_sSEDescriptionHasBeenSet)
  {
   payload.WithObject("SSEDescription", m_sSEDescription.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
