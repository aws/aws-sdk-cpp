/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_inclusionPatternsHasBeenSet(false),
    m_exclusionPatternsHasBeenSet(false),
    m_documentsMetadataConfigurationHasBeenSet(false),
    m_accessControlListConfigurationHasBeenSet(false)
{
}

S3DataSourceConfiguration::S3DataSourceConfiguration(JsonView jsonValue) : 
    m_bucketNameHasBeenSet(false),
    m_inclusionPrefixesHasBeenSet(false),
    m_inclusionPatternsHasBeenSet(false),
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
    Aws::Utils::Array<JsonView> inclusionPrefixesJsonList = jsonValue.GetArray("InclusionPrefixes");
    for(unsigned inclusionPrefixesIndex = 0; inclusionPrefixesIndex < inclusionPrefixesJsonList.GetLength(); ++inclusionPrefixesIndex)
    {
      m_inclusionPrefixes.push_back(inclusionPrefixesJsonList[inclusionPrefixesIndex].AsString());
    }
    m_inclusionPrefixesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InclusionPatterns"))
  {
    Aws::Utils::Array<JsonView> inclusionPatternsJsonList = jsonValue.GetArray("InclusionPatterns");
    for(unsigned inclusionPatternsIndex = 0; inclusionPatternsIndex < inclusionPatternsJsonList.GetLength(); ++inclusionPatternsIndex)
    {
      m_inclusionPatterns.push_back(inclusionPatternsJsonList[inclusionPatternsIndex].AsString());
    }
    m_inclusionPatternsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExclusionPatterns"))
  {
    Aws::Utils::Array<JsonView> exclusionPatternsJsonList = jsonValue.GetArray("ExclusionPatterns");
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
   Aws::Utils::Array<JsonValue> inclusionPrefixesJsonList(m_inclusionPrefixes.size());
   for(unsigned inclusionPrefixesIndex = 0; inclusionPrefixesIndex < inclusionPrefixesJsonList.GetLength(); ++inclusionPrefixesIndex)
   {
     inclusionPrefixesJsonList[inclusionPrefixesIndex].AsString(m_inclusionPrefixes[inclusionPrefixesIndex]);
   }
   payload.WithArray("InclusionPrefixes", std::move(inclusionPrefixesJsonList));

  }

  if(m_inclusionPatternsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inclusionPatternsJsonList(m_inclusionPatterns.size());
   for(unsigned inclusionPatternsIndex = 0; inclusionPatternsIndex < inclusionPatternsJsonList.GetLength(); ++inclusionPatternsIndex)
   {
     inclusionPatternsJsonList[inclusionPatternsIndex].AsString(m_inclusionPatterns[inclusionPatternsIndex]);
   }
   payload.WithArray("InclusionPatterns", std::move(inclusionPatternsJsonList));

  }

  if(m_exclusionPatternsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> exclusionPatternsJsonList(m_exclusionPatterns.size());
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
