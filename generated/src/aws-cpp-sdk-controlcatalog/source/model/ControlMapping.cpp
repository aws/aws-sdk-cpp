/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controlcatalog/model/ControlMapping.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ControlCatalog
{
namespace Model
{

ControlMapping::ControlMapping(JsonView jsonValue)
{
  *this = jsonValue;
}

ControlMapping& ControlMapping::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ControlArn"))
  {
    m_controlArn = jsonValue.GetString("ControlArn");
    m_controlArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MappingType"))
  {
    m_mappingType = MappingTypeMapper::GetMappingTypeForName(jsonValue.GetString("MappingType"));
    m_mappingTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Mapping"))
  {
    m_mapping = jsonValue.GetObject("Mapping");
    m_mappingHasBeenSet = true;
  }
  return *this;
}

JsonValue ControlMapping::Jsonize() const
{
  JsonValue payload;

  if(m_controlArnHasBeenSet)
  {
   payload.WithString("ControlArn", m_controlArn);

  }

  if(m_mappingTypeHasBeenSet)
  {
   payload.WithString("MappingType", MappingTypeMapper::GetNameForMappingType(m_mappingType));
  }

  if(m_mappingHasBeenSet)
  {
   payload.WithObject("Mapping", m_mapping.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ControlCatalog
} // namespace Aws
