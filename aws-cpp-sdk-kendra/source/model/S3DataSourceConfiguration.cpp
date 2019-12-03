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

#include <aws/kendra/model/S3DataSourceConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

S3DataSourceConfiguration::S3DataSourceConfiguration() : 
    m_bucketNameHasBeenSet(false),
    m_inclusionPrefixesHasBeenSet(false),
    m_exclusionPatternsHasBeenSet(false),
    m_documentsMetadataConfigurationHasBeenSet(false),
    m_accessControlListConfigurationHasBeenSet(false)
{
}

S3DataSourceConfiguration::S3DataSourceConfiguration(JsonView jsonValue) : 
    m_bucketNameHasBeenSet(false),
    m_inclusionPrefixesHasBeenSet(false),
    m_exclusionPatternsHasBeenSet(false),
    m_documentsMetadataConfigurationHasBeenSet(false),
    m_accessControlListConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

S3DataSourceConfiguration& S3DataSourceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BucketName"))
  {
    m_bucketName = jsonValue.GetString("BucketName");

    m_bucketNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InclusionPrefixes"))
  {
    Array<JsonView> inclusionPrefixesJsonList = jsonValue.GetArray("InclusionPrefixes");
    for(unsigned inclusionPrefixesIndex = 0; inclusionPrefixesIndex < inclusionPrefixesJsonList.GetLength(); ++inclusionPrefixesIndex)
    {
      m_inclusionPrefixes.push_back(inclusionPrefixesJsonList[inclusionPrefixesIndex].AsString());
    }
    m_inclusionPrefixesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExclusionPatterns"))
  {
    Array<JsonView> exclusionPatternsJsonList = jsonValue.GetArray("ExclusionPatterns");
    for(unsigned exclusionPatternsIndex = 0; exclusionPatternsIndex < exclusionPatternsJsonList.GetLength(); ++exclusionPatternsIndex)
    {
      m_exclusionPatterns.push_back(exclusionPatternsJsonList[exclusionPatternsIndex].AsString());
    }
    m_exclusionPatternsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DocumentsMetadataConfiguration"))
  {
    m_documentsMetadataConfiguration = jsonValue.GetObject("DocumentsMetadataConfiguration");

    m_documentsMetadataConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccessControlListConfiguration"))
  {
    m_accessControlListConfiguration = jsonValue.GetObject("AccessControlListConfiguration");

    m_accessControlListConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue S3DataSourceConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_bucketNameHasBeenSet)
  {
   payload.WithString("BucketName", m_bucketName);

  }

  if(m_inclusionPrefixesHasBeenSet)
  {
   Array<JsonValue> inclusionPrefixesJsonList(m_inclusionPrefixes.size());
   for(unsigned inclusionPrefixesIndex = 0; inclusionPrefixesIndex < inclusionPrefixesJsonList.GetLength(); ++inclusionPrefixesIndex)
   {
     inclusionPrefixesJsonList[inclusionPrefixesIndex].AsString(m_inclusionPrefixes[inclusionPrefixesIndex]);
   }
   payload.WithArray("InclusionPrefixes", std::move(inclusionPrefixesJsonList));

  }

  if(m_exclusionPatternsHasBeenSet)
  {
   Array<JsonValue> exclusionPatternsJsonList(m_exclusionPatterns.size());
   for(unsigned exclusionPatternsIndex = 0; exclusionPatternsIndex < exclusionPatternsJsonList.GetLength(); ++exclusionPatternsIndex)
   {
     exclusionPatternsJsonList[exclusionPatternsIndex].AsString(m_exclusionPatterns[exclusionPatternsIndex]);
   }
   payload.WithArray("ExclusionPatterns", std::move(exclusionPatternsJsonList));

  }

  if(m_documentsMetadataConfigurationHasBeenSet)
  {
   payload.WithObject("DocumentsMetadataConfiguration", m_documentsMetadataConfiguration.Jsonize());

  }

  if(m_accessControlListConfigurationHasBeenSet)
  {
   payload.WithObject("AccessControlListConfiguration", m_accessControlListConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
