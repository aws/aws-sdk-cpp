/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/SensitivityInspectionTemplateIncludes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie2
{
namespace Model
{

SensitivityInspectionTemplateIncludes::SensitivityInspectionTemplateIncludes() : 
    m_allowListIdsHasBeenSet(false),
    m_customDataIdentifierIdsHasBeenSet(false),
    m_managedDataIdentifierIdsHasBeenSet(false)
{
}

SensitivityInspectionTemplateIncludes::SensitivityInspectionTemplateIncludes(JsonView jsonValue) : 
    m_allowListIdsHasBeenSet(false),
    m_customDataIdentifierIdsHasBeenSet(false),
    m_managedDataIdentifierIdsHasBeenSet(false)
{
  *this = jsonValue;
}

SensitivityInspectionTemplateIncludes& SensitivityInspectionTemplateIncludes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("allowListIds"))
  {
    Aws::Utils::Array<JsonView> allowListIdsJsonList = jsonValue.GetArray("allowListIds");
    for(unsigned allowListIdsIndex = 0; allowListIdsIndex < allowListIdsJsonList.GetLength(); ++allowListIdsIndex)
    {
      m_allowListIds.push_back(allowListIdsJsonList[allowListIdsIndex].AsString());
    }
    m_allowListIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("customDataIdentifierIds"))
  {
    Aws::Utils::Array<JsonView> customDataIdentifierIdsJsonList = jsonValue.GetArray("customDataIdentifierIds");
    for(unsigned customDataIdentifierIdsIndex = 0; customDataIdentifierIdsIndex < customDataIdentifierIdsJsonList.GetLength(); ++customDataIdentifierIdsIndex)
    {
      m_customDataIdentifierIds.push_back(customDataIdentifierIdsJsonList[customDataIdentifierIdsIndex].AsString());
    }
    m_customDataIdentifierIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("managedDataIdentifierIds"))
  {
    Aws::Utils::Array<JsonView> managedDataIdentifierIdsJsonList = jsonValue.GetArray("managedDataIdentifierIds");
    for(unsigned managedDataIdentifierIdsIndex = 0; managedDataIdentifierIdsIndex < managedDataIdentifierIdsJsonList.GetLength(); ++managedDataIdentifierIdsIndex)
    {
      m_managedDataIdentifierIds.push_back(managedDataIdentifierIdsJsonList[managedDataIdentifierIdsIndex].AsString());
    }
    m_managedDataIdentifierIdsHasBeenSet = true;
  }

  return *this;
}

JsonValue SensitivityInspectionTemplateIncludes::Jsonize() const
{
  JsonValue payload;

  if(m_allowListIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allowListIdsJsonList(m_allowListIds.size());
   for(unsigned allowListIdsIndex = 0; allowListIdsIndex < allowListIdsJsonList.GetLength(); ++allowListIdsIndex)
   {
     allowListIdsJsonList[allowListIdsIndex].AsString(m_allowListIds[allowListIdsIndex]);
   }
   payload.WithArray("allowListIds", std::move(allowListIdsJsonList));

  }

  if(m_customDataIdentifierIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> customDataIdentifierIdsJsonList(m_customDataIdentifierIds.size());
   for(unsigned customDataIdentifierIdsIndex = 0; customDataIdentifierIdsIndex < customDataIdentifierIdsJsonList.GetLength(); ++customDataIdentifierIdsIndex)
   {
     customDataIdentifierIdsJsonList[customDataIdentifierIdsIndex].AsString(m_customDataIdentifierIds[customDataIdentifierIdsIndex]);
   }
   payload.WithArray("customDataIdentifierIds", std::move(customDataIdentifierIdsJsonList));

  }

  if(m_managedDataIdentifierIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> managedDataIdentifierIdsJsonList(m_managedDataIdentifierIds.size());
   for(unsigned managedDataIdentifierIdsIndex = 0; managedDataIdentifierIdsIndex < managedDataIdentifierIdsJsonList.GetLength(); ++managedDataIdentifierIdsIndex)
   {
     managedDataIdentifierIdsJsonList[managedDataIdentifierIdsIndex].AsString(m_managedDataIdentifierIds[managedDataIdentifierIdsIndex]);
   }
   payload.WithArray("managedDataIdentifierIds", std::move(managedDataIdentifierIdsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
