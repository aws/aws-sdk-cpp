/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/IdNamespaceAssociationInputReferencePropertiesSummary.h>
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

IdNamespaceAssociationInputReferencePropertiesSummary::IdNamespaceAssociationInputReferencePropertiesSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

IdNamespaceAssociationInputReferencePropertiesSummary& IdNamespaceAssociationInputReferencePropertiesSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("idNamespaceType"))
  {
    m_idNamespaceType = IdNamespaceTypeMapper::GetIdNamespaceTypeForName(jsonValue.GetString("idNamespaceType"));
    m_idNamespaceTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue IdNamespaceAssociationInputReferencePropertiesSummary::Jsonize() const
{
  JsonValue payload;

  if(m_idNamespaceTypeHasBeenSet)
  {
   payload.WithString("idNamespaceType", IdNamespaceTypeMapper::GetNameForIdNamespaceType(m_idNamespaceType));
  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
