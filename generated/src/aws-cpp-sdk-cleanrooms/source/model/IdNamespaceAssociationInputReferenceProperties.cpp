/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/IdNamespaceAssociationInputReferenceProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

IdNamespaceAssociationInputReferenceProperties::IdNamespaceAssociationInputReferenceProperties(JsonView jsonValue)
{
  *this = jsonValue;
}

IdNamespaceAssociationInputReferenceProperties& IdNamespaceAssociationInputReferenceProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("idNamespaceType"))
  {
    m_idNamespaceType = IdNamespaceTypeMapper::GetIdNamespaceTypeForName(jsonValue.GetString("idNamespaceType"));
    m_idNamespaceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("idMappingWorkflowsSupported"))
  {
    Aws::Utils::Array<JsonView> idMappingWorkflowsSupportedJsonList = jsonValue.GetArray("idMappingWorkflowsSupported");
    for(unsigned idMappingWorkflowsSupportedIndex = 0; idMappingWorkflowsSupportedIndex < idMappingWorkflowsSupportedJsonList.GetLength(); ++idMappingWorkflowsSupportedIndex)
    {
      m_idMappingWorkflowsSupported.push_back(idMappingWorkflowsSupportedJsonList[idMappingWorkflowsSupportedIndex].AsObject());
    }
    m_idMappingWorkflowsSupportedHasBeenSet = true;
  }
  return *this;
}

JsonValue IdNamespaceAssociationInputReferenceProperties::Jsonize() const
{
  JsonValue payload;

  if(m_idNamespaceTypeHasBeenSet)
  {
   payload.WithString("idNamespaceType", IdNamespaceTypeMapper::GetNameForIdNamespaceType(m_idNamespaceType));
  }

  if(m_idMappingWorkflowsSupportedHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> idMappingWorkflowsSupportedJsonList(m_idMappingWorkflowsSupported.size());
   for(unsigned idMappingWorkflowsSupportedIndex = 0; idMappingWorkflowsSupportedIndex < idMappingWorkflowsSupportedJsonList.GetLength(); ++idMappingWorkflowsSupportedIndex)
   {
     idMappingWorkflowsSupportedJsonList[idMappingWorkflowsSupportedIndex].AsObject(m_idMappingWorkflowsSupported[idMappingWorkflowsSupportedIndex].View());
   }
   payload.WithArray("idMappingWorkflowsSupported", std::move(idMappingWorkflowsSupportedJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
