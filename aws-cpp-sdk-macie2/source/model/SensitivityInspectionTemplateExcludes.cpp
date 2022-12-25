/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/SensitivityInspectionTemplateExcludes.h>
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

SensitivityInspectionTemplateExcludes::SensitivityInspectionTemplateExcludes() : 
    m_managedDataIdentifierIdsHasBeenSet(false)
{
}

SensitivityInspectionTemplateExcludes::SensitivityInspectionTemplateExcludes(JsonView jsonValue) : 
    m_managedDataIdentifierIdsHasBeenSet(false)
{
  *this = jsonValue;
}

SensitivityInspectionTemplateExcludes& SensitivityInspectionTemplateExcludes::operator =(JsonView jsonValue)
{
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

JsonValue SensitivityInspectionTemplateExcludes::Jsonize() const
{
  JsonValue payload;

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
