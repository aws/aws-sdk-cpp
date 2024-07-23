/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/model/IdNamespaceIdMappingWorkflowProperties.h>
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

IdNamespaceIdMappingWorkflowProperties::IdNamespaceIdMappingWorkflowProperties() : 
    m_idMappingType(IdMappingType::NOT_SET),
    m_idMappingTypeHasBeenSet(false),
    m_providerPropertiesHasBeenSet(false),
    m_ruleBasedPropertiesHasBeenSet(false)
{
}

IdNamespaceIdMappingWorkflowProperties::IdNamespaceIdMappingWorkflowProperties(JsonView jsonValue)
  : IdNamespaceIdMappingWorkflowProperties()
{
  *this = jsonValue;
}

IdNamespaceIdMappingWorkflowProperties& IdNamespaceIdMappingWorkflowProperties::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("ruleBasedProperties"))
  {
    m_ruleBasedProperties = jsonValue.GetObject("ruleBasedProperties");

    m_ruleBasedPropertiesHasBeenSet = true;
  }

  return *this;
}

JsonValue IdNamespaceIdMappingWorkflowProperties::Jsonize() const
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

  if(m_ruleBasedPropertiesHasBeenSet)
  {
   payload.WithObject("ruleBasedProperties", m_ruleBasedProperties.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
