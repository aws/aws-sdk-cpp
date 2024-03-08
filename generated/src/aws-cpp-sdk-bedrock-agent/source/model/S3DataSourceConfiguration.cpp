/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/S3DataSourceConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

S3DataSourceConfiguration::S3DataSourceConfiguration() : 
    m_bucketArnHasBeenSet(false),
    m_inclusionPrefixesHasBeenSet(false)
{
}

S3DataSourceConfiguration::S3DataSourceConfiguration(JsonView jsonValue) : 
    m_bucketArnHasBeenSet(false),
    m_inclusionPrefixesHasBeenSet(false)
{
  *this = jsonValue;
}

S3DataSourceConfiguration& S3DataSourceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bucketArn"))
  {
    m_bucketArn = jsonValue.GetString("bucketArn");

    m_bucketArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inclusionPrefixes"))
  {
    Aws::Utils::Array<JsonView> inclusionPrefixesJsonList = jsonValue.GetArray("inclusionPrefixes");
    for(unsigned inclusionPrefixesIndex = 0; inclusionPrefixesIndex < inclusionPrefixesJsonList.GetLength(); ++inclusionPrefixesIndex)
    {
      m_inclusionPrefixes.push_back(inclusionPrefixesJsonList[inclusionPrefixesIndex].AsString());
    }
    m_inclusionPrefixesHasBeenSet = true;
  }

  return *this;
}

JsonValue S3DataSourceConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_bucketArnHasBeenSet)
  {
   payload.WithString("bucketArn", m_bucketArn);

  }

  if(m_inclusionPrefixesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inclusionPrefixesJsonList(m_inclusionPrefixes.size());
   for(unsigned inclusionPrefixesIndex = 0; inclusionPrefixesIndex < inclusionPrefixesJsonList.GetLength(); ++inclusionPrefixesIndex)
   {
     inclusionPrefixesJsonList[inclusionPrefixesIndex].AsString(m_inclusionPrefixes[inclusionPrefixesIndex]);
   }
   payload.WithArray("inclusionPrefixes", std::move(inclusionPrefixesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
