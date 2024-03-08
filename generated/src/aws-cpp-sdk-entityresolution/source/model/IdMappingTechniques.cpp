/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/model/IdMappingTechniques.h>
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

IdMappingTechniques::IdMappingTechniques() : 
    m_idMappingType(IdMappingType::NOT_SET),
    m_idMappingTypeHasBeenSet(false),
    m_providerPropertiesHasBeenSet(false)
{
}

IdMappingTechniques::IdMappingTechniques(JsonView jsonValue) : 
    m_idMappingType(IdMappingType::NOT_SET),
    m_idMappingTypeHasBeenSet(false),
    m_providerPropertiesHasBeenSet(false)
{
  *this = jsonValue;
}

IdMappingTechniques& IdMappingTechniques::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("idMappingType"))
  {
    m_idMappingType = IdMappingTypeMapper::GetIdMappingTypeForName(jsonValue.GetString("idMappingType"));

    m_idMappingTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("providerProperties"))
  {
    m_providerProperties = jsonValue.GetObject("providerProperties");

    m_providerPropertiesHasBeenSet = true;
  }

  return *this;
}

JsonValue IdMappingTechniques::Jsonize() const
{
  JsonValue payload;

  if(m_idMappingTypeHasBeenSet)
  {
   payload.WithString("idMappingType", IdMappingTypeMapper::GetNameForIdMappingType(m_idMappingType));
  }

  if(m_providerPropertiesHasBeenSet)
  {
   payload.WithObject("providerProperties", m_providerProperties.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
