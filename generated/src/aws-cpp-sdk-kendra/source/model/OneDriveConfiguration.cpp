/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/OneDriveConfiguration.h>
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

OneDriveConfiguration::OneDriveConfiguration() : 
    m_tenantDomainHasBeenSet(false),
    m_secretArnHasBeenSet(false),
    m_oneDriveUsersHasBeenSet(false),
    m_inclusionPatternsHasBeenSet(false),
    m_exclusionPatternsHasBeenSet(false),
    m_fieldMappingsHasBeenSet(false),
    m_disableLocalGroups(false),
    m_disableLocalGroupsHasBeenSet(false)
{
}

OneDriveConfiguration::OneDriveConfiguration(JsonView jsonValue) : 
    m_tenantDomainHasBeenSet(false),
    m_secretArnHasBeenSet(false),
    m_oneDriveUsersHasBeenSet(false),
    m_inclusionPatternsHasBeenSet(false),
    m_exclusionPatternsHasBeenSet(false),
    m_fieldMappingsHasBeenSet(false),
    m_disableLocalGroups(false),
    m_disableLocalGroupsHasBeenSet(false)
{
  *this = jsonValue;
}

OneDriveConfiguration& OneDriveConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TenantDomain"))
  {
    m_tenantDomain = jsonValue.GetString("TenantDomain");

    m_tenantDomainHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecretArn"))
  {
    m_secretArn = jsonValue.GetString("SecretArn");

    m_secretArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OneDriveUsers"))
  {
    m_oneDriveUsers = jsonValue.GetObject("OneDriveUsers");

    m_oneDriveUsersHasBeenSet = true;
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

  if(jsonValue.ValueExists("DisableLocalGroups"))
  {
    m_disableLocalGroups = jsonValue.GetBool("DisableLocalGroups");

    m_disableLocalGroupsHasBeenSet = true;
  }

  return *this;
}

JsonValue OneDriveConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_tenantDomainHasBeenSet)
  {
   payload.WithString("TenantDomain", m_tenantDomain);

  }

  if(m_secretArnHasBeenSet)
  {
   payload.WithString("SecretArn", m_secretArn);

  }

  if(m_oneDriveUsersHasBeenSet)
  {
   payload.WithObject("OneDriveUsers", m_oneDriveUsers.Jsonize());

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

  if(m_disableLocalGroupsHasBeenSet)
  {
   payload.WithBool("DisableLocalGroups", m_disableLocalGroups);

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
