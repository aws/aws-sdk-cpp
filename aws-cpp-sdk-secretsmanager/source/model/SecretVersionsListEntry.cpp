/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/secretsmanager/model/SecretVersionsListEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecretsManager
{
namespace Model
{

SecretVersionsListEntry::SecretVersionsListEntry() : 
    m_versionIdHasBeenSet(false),
    m_versionStagesHasBeenSet(false),
    m_lastAccessedDateHasBeenSet(false),
    m_createdDateHasBeenSet(false)
{
}

SecretVersionsListEntry::SecretVersionsListEntry(JsonView jsonValue) : 
    m_versionIdHasBeenSet(false),
    m_versionStagesHasBeenSet(false),
    m_lastAccessedDateHasBeenSet(false),
    m_createdDateHasBeenSet(false)
{
  *this = jsonValue;
}

SecretVersionsListEntry& SecretVersionsListEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VersionId"))
  {
    m_versionId = jsonValue.GetString("VersionId");

    m_versionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VersionStages"))
  {
    Array<JsonView> versionStagesJsonList = jsonValue.GetArray("VersionStages");
    for(unsigned versionStagesIndex = 0; versionStagesIndex < versionStagesJsonList.GetLength(); ++versionStagesIndex)
    {
      m_versionStages.push_back(versionStagesJsonList[versionStagesIndex].AsString());
    }
    m_versionStagesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastAccessedDate"))
  {
    m_lastAccessedDate = jsonValue.GetDouble("LastAccessedDate");

    m_lastAccessedDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedDate"))
  {
    m_createdDate = jsonValue.GetDouble("CreatedDate");

    m_createdDateHasBeenSet = true;
  }

  return *this;
}

JsonValue SecretVersionsListEntry::Jsonize() const
{
  JsonValue payload;

  if(m_versionIdHasBeenSet)
  {
   payload.WithString("VersionId", m_versionId);

  }

  if(m_versionStagesHasBeenSet)
  {
   Array<JsonValue> versionStagesJsonList(m_versionStages.size());
   for(unsigned versionStagesIndex = 0; versionStagesIndex < versionStagesJsonList.GetLength(); ++versionStagesIndex)
   {
     versionStagesJsonList[versionStagesIndex].AsString(m_versionStages[versionStagesIndex]);
   }
   payload.WithArray("VersionStages", std::move(versionStagesJsonList));

  }

  if(m_lastAccessedDateHasBeenSet)
  {
   payload.WithDouble("LastAccessedDate", m_lastAccessedDate.SecondsWithMSPrecision());
  }

  if(m_createdDateHasBeenSet)
  {
   payload.WithDouble("CreatedDate", m_createdDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
