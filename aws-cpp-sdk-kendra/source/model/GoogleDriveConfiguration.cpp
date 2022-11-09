/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/GoogleDriveConfiguration.h>
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

GoogleDriveConfiguration::GoogleDriveConfiguration() : 
    m_secretArnHasBeenSet(false),
    m_inclusionPatternsHasBeenSet(false),
    m_exclusionPatternsHasBeenSet(false),
    m_fieldMappingsHasBeenSet(false),
    m_excludeMimeTypesHasBeenSet(false),
    m_excludeUserAccountsHasBeenSet(false),
    m_excludeSharedDrivesHasBeenSet(false)
{
}

GoogleDriveConfiguration::GoogleDriveConfiguration(JsonView jsonValue) : 
    m_secretArnHasBeenSet(false),
    m_inclusionPatternsHasBeenSet(false),
    m_exclusionPatternsHasBeenSet(false),
    m_fieldMappingsHasBeenSet(false),
    m_excludeMimeTypesHasBeenSet(false),
    m_excludeUserAccountsHasBeenSet(false),
    m_excludeSharedDrivesHasBeenSet(false)
{
  *this = jsonValue;
}

GoogleDriveConfiguration& GoogleDriveConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SecretArn"))
  {
    m_secretArn = jsonValue.GetString("SecretArn");

    m_secretArnHasBeenSet = true;
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

  if(jsonValue.ValueExists("FieldMappings"))
  {
    Aws::Utils::Array<JsonView> fieldMappingsJsonList = jsonValue.GetArray("FieldMappings");
    for(unsigned fieldMappingsIndex = 0; fieldMappingsIndex < fieldMappingsJsonList.GetLength(); ++fieldMappingsIndex)
    {
      m_fieldMappings.push_back(fieldMappingsJsonList[fieldMappingsIndex].AsObject());
    }
    m_fieldMappingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExcludeMimeTypes"))
  {
    Aws::Utils::Array<JsonView> excludeMimeTypesJsonList = jsonValue.GetArray("ExcludeMimeTypes");
    for(unsigned excludeMimeTypesIndex = 0; excludeMimeTypesIndex < excludeMimeTypesJsonList.GetLength(); ++excludeMimeTypesIndex)
    {
      m_excludeMimeTypes.push_back(excludeMimeTypesJsonList[excludeMimeTypesIndex].AsString());
    }
    m_excludeMimeTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExcludeUserAccounts"))
  {
    Aws::Utils::Array<JsonView> excludeUserAccountsJsonList = jsonValue.GetArray("ExcludeUserAccounts");
    for(unsigned excludeUserAccountsIndex = 0; excludeUserAccountsIndex < excludeUserAccountsJsonList.GetLength(); ++excludeUserAccountsIndex)
    {
      m_excludeUserAccounts.push_back(excludeUserAccountsJsonList[excludeUserAccountsIndex].AsString());
    }
    m_excludeUserAccountsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExcludeSharedDrives"))
  {
    Aws::Utils::Array<JsonView> excludeSharedDrivesJsonList = jsonValue.GetArray("ExcludeSharedDrives");
    for(unsigned excludeSharedDrivesIndex = 0; excludeSharedDrivesIndex < excludeSharedDrivesJsonList.GetLength(); ++excludeSharedDrivesIndex)
    {
      m_excludeSharedDrives.push_back(excludeSharedDrivesJsonList[excludeSharedDrivesIndex].AsString());
    }
    m_excludeSharedDrivesHasBeenSet = true;
  }

  return *this;
}

JsonValue GoogleDriveConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_secretArnHasBeenSet)
  {
   payload.WithString("SecretArn", m_secretArn);

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

  if(m_fieldMappingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> fieldMappingsJsonList(m_fieldMappings.size());
   for(unsigned fieldMappingsIndex = 0; fieldMappingsIndex < fieldMappingsJsonList.GetLength(); ++fieldMappingsIndex)
   {
     fieldMappingsJsonList[fieldMappingsIndex].AsObject(m_fieldMappings[fieldMappingsIndex].Jsonize());
   }
   payload.WithArray("FieldMappings", std::move(fieldMappingsJsonList));

  }

  if(m_excludeMimeTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> excludeMimeTypesJsonList(m_excludeMimeTypes.size());
   for(unsigned excludeMimeTypesIndex = 0; excludeMimeTypesIndex < excludeMimeTypesJsonList.GetLength(); ++excludeMimeTypesIndex)
   {
     excludeMimeTypesJsonList[excludeMimeTypesIndex].AsString(m_excludeMimeTypes[excludeMimeTypesIndex]);
   }
   payload.WithArray("ExcludeMimeTypes", std::move(excludeMimeTypesJsonList));

  }

  if(m_excludeUserAccountsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> excludeUserAccountsJsonList(m_excludeUserAccounts.size());
   for(unsigned excludeUserAccountsIndex = 0; excludeUserAccountsIndex < excludeUserAccountsJsonList.GetLength(); ++excludeUserAccountsIndex)
   {
     excludeUserAccountsJsonList[excludeUserAccountsIndex].AsString(m_excludeUserAccounts[excludeUserAccountsIndex]);
   }
   payload.WithArray("ExcludeUserAccounts", std::move(excludeUserAccountsJsonList));

  }

  if(m_excludeSharedDrivesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> excludeSharedDrivesJsonList(m_excludeSharedDrives.size());
   for(unsigned excludeSharedDrivesIndex = 0; excludeSharedDrivesIndex < excludeSharedDrivesJsonList.GetLength(); ++excludeSharedDrivesIndex)
   {
     excludeSharedDrivesJsonList[excludeSharedDrivesIndex].AsString(m_excludeSharedDrives[excludeSharedDrivesIndex]);
   }
   payload.WithArray("ExcludeSharedDrives", std::move(excludeSharedDrivesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
