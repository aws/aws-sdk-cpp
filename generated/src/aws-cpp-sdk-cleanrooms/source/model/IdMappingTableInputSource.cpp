/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/IdMappingTableInputSource.h>
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

IdMappingTableInputSource::IdMappingTableInputSource(JsonView jsonValue)
{
  *this = jsonValue;
}

IdMappingTableInputSource& IdMappingTableInputSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("idNamespaceAssociationId"))
  {
    m_idNamespaceAssociationId = jsonValue.GetString("idNamespaceAssociationId");
    m_idNamespaceAssociationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = IdNamespaceTypeMapper::GetIdNamespaceTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue IdMappingTableInputSource::Jsonize() const
{
  JsonValue payload;

  if(m_idNamespaceAssociationIdHasBeenSet)
  {
   payload.WithString("idNamespaceAssociationId", m_idNamespaceAssociationId);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", IdNamespaceTypeMapper::GetNameForIdNamespaceType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
