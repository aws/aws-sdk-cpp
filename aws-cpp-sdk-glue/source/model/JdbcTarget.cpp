/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/JdbcTarget.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

JdbcTarget::JdbcTarget() : 
    m_connectionNameHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_exclusionsHasBeenSet(false),
    m_enableAdditionalMetadataHasBeenSet(false)
{
}

JdbcTarget::JdbcTarget(JsonView jsonValue) : 
    m_connectionNameHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_exclusionsHasBeenSet(false),
    m_enableAdditionalMetadataHasBeenSet(false)
{
  *this = jsonValue;
}

JdbcTarget& JdbcTarget::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConnectionName"))
  {
    m_connectionName = jsonValue.GetString("ConnectionName");

    m_connectionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Path"))
  {
    m_path = jsonValue.GetString("Path");

    m_pathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Exclusions"))
  {
    Aws::Utils::Array<JsonView> exclusionsJsonList = jsonValue.GetArray("Exclusions");
    for(unsigned exclusionsIndex = 0; exclusionsIndex < exclusionsJsonList.GetLength(); ++exclusionsIndex)
    {
      m_exclusions.push_back(exclusionsJsonList[exclusionsIndex].AsString());
    }
    m_exclusionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnableAdditionalMetadata"))
  {
    Aws::Utils::Array<JsonView> enableAdditionalMetadataJsonList = jsonValue.GetArray("EnableAdditionalMetadata");
    for(unsigned enableAdditionalMetadataIndex = 0; enableAdditionalMetadataIndex < enableAdditionalMetadataJsonList.GetLength(); ++enableAdditionalMetadataIndex)
    {
      m_enableAdditionalMetadata.push_back(JdbcMetadataEntryMapper::GetJdbcMetadataEntryForName(enableAdditionalMetadataJsonList[enableAdditionalMetadataIndex].AsString()));
    }
    m_enableAdditionalMetadataHasBeenSet = true;
  }

  return *this;
}

JsonValue JdbcTarget::Jsonize() const
{
  JsonValue payload;

  if(m_connectionNameHasBeenSet)
  {
   payload.WithString("ConnectionName", m_connectionName);

  }

  if(m_pathHasBeenSet)
  {
   payload.WithString("Path", m_path);

  }

  if(m_exclusionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> exclusionsJsonList(m_exclusions.size());
   for(unsigned exclusionsIndex = 0; exclusionsIndex < exclusionsJsonList.GetLength(); ++exclusionsIndex)
   {
     exclusionsJsonList[exclusionsIndex].AsString(m_exclusions[exclusionsIndex]);
   }
   payload.WithArray("Exclusions", std::move(exclusionsJsonList));

  }

  if(m_enableAdditionalMetadataHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> enableAdditionalMetadataJsonList(m_enableAdditionalMetadata.size());
   for(unsigned enableAdditionalMetadataIndex = 0; enableAdditionalMetadataIndex < enableAdditionalMetadataJsonList.GetLength(); ++enableAdditionalMetadataIndex)
   {
     enableAdditionalMetadataJsonList[enableAdditionalMetadataIndex].AsString(JdbcMetadataEntryMapper::GetNameForJdbcMetadataEntry(m_enableAdditionalMetadata[enableAdditionalMetadataIndex]));
   }
   payload.WithArray("EnableAdditionalMetadata", std::move(enableAdditionalMetadataJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
