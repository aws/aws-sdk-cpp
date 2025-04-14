/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/model/IdNamespaceSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EntityResolution
{
namespace Model
{

IdNamespaceSummary::IdNamespaceSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

IdNamespaceSummary& IdNamespaceSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("idNamespaceName"))
  {
    m_idNamespaceName = jsonValue.GetString("idNamespaceName");
    m_idNamespaceNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("idNamespaceArn"))
  {
    m_idNamespaceArn = jsonValue.GetString("idNamespaceArn");
    m_idNamespaceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("idMappingWorkflowProperties"))
  {
    Aws::Utils::Array<JsonView> idMappingWorkflowPropertiesJsonList = jsonValue.GetArray("idMappingWorkflowProperties");
    for(unsigned idMappingWorkflowPropertiesIndex = 0; idMappingWorkflowPropertiesIndex < idMappingWorkflowPropertiesJsonList.GetLength(); ++idMappingWorkflowPropertiesIndex)
    {
      m_idMappingWorkflowProperties.push_back(idMappingWorkflowPropertiesJsonList[idMappingWorkflowPropertiesIndex].AsObject());
    }
    m_idMappingWorkflowPropertiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = IdNamespaceTypeMapper::GetIdNamespaceTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue IdNamespaceSummary::Jsonize() const
{
  JsonValue payload;

  if(m_idNamespaceNameHasBeenSet)
  {
   payload.WithString("idNamespaceName", m_idNamespaceName);

  }

  if(m_idNamespaceArnHasBeenSet)
  {
   payload.WithString("idNamespaceArn", m_idNamespaceArn);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_idMappingWorkflowPropertiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> idMappingWorkflowPropertiesJsonList(m_idMappingWorkflowProperties.size());
   for(unsigned idMappingWorkflowPropertiesIndex = 0; idMappingWorkflowPropertiesIndex < idMappingWorkflowPropertiesJsonList.GetLength(); ++idMappingWorkflowPropertiesIndex)
   {
     idMappingWorkflowPropertiesJsonList[idMappingWorkflowPropertiesIndex].AsObject(m_idMappingWorkflowProperties[idMappingWorkflowPropertiesIndex].Jsonize());
   }
   payload.WithArray("idMappingWorkflowProperties", std::move(idMappingWorkflowPropertiesJsonList));

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", IdNamespaceTypeMapper::GetNameForIdNamespaceType(m_type));
  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
