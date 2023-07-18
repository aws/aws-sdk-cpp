/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/ConnectorEntityField.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Appflow
{
namespace Model
{

ConnectorEntityField::ConnectorEntityField() : 
    m_identifierHasBeenSet(false),
    m_parentIdentifierHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_isPrimaryKey(false),
    m_isPrimaryKeyHasBeenSet(false),
    m_defaultValueHasBeenSet(false),
    m_isDeprecated(false),
    m_isDeprecatedHasBeenSet(false),
    m_supportedFieldTypeDetailsHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_sourcePropertiesHasBeenSet(false),
    m_destinationPropertiesHasBeenSet(false),
    m_customPropertiesHasBeenSet(false)
{
}

ConnectorEntityField::ConnectorEntityField(JsonView jsonValue) : 
    m_identifierHasBeenSet(false),
    m_parentIdentifierHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_isPrimaryKey(false),
    m_isPrimaryKeyHasBeenSet(false),
    m_defaultValueHasBeenSet(false),
    m_isDeprecated(false),
    m_isDeprecatedHasBeenSet(false),
    m_supportedFieldTypeDetailsHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_sourcePropertiesHasBeenSet(false),
    m_destinationPropertiesHasBeenSet(false),
    m_customPropertiesHasBeenSet(false)
{
  *this = jsonValue;
}

ConnectorEntityField& ConnectorEntityField::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("identifier"))
  {
    m_identifier = jsonValue.GetString("identifier");

    m_identifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parentIdentifier"))
  {
    m_parentIdentifier = jsonValue.GetString("parentIdentifier");

    m_parentIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("label"))
  {
    m_label = jsonValue.GetString("label");

    m_labelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isPrimaryKey"))
  {
    m_isPrimaryKey = jsonValue.GetBool("isPrimaryKey");

    m_isPrimaryKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("defaultValue"))
  {
    m_defaultValue = jsonValue.GetString("defaultValue");

    m_defaultValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isDeprecated"))
  {
    m_isDeprecated = jsonValue.GetBool("isDeprecated");

    m_isDeprecatedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("supportedFieldTypeDetails"))
  {
    m_supportedFieldTypeDetails = jsonValue.GetObject("supportedFieldTypeDetails");

    m_supportedFieldTypeDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceProperties"))
  {
    m_sourceProperties = jsonValue.GetObject("sourceProperties");

    m_sourcePropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destinationProperties"))
  {
    m_destinationProperties = jsonValue.GetObject("destinationProperties");

    m_destinationPropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("customProperties"))
  {
    Aws::Map<Aws::String, JsonView> customPropertiesJsonMap = jsonValue.GetObject("customProperties").GetAllObjects();
    for(auto& customPropertiesItem : customPropertiesJsonMap)
    {
      m_customProperties[customPropertiesItem.first] = customPropertiesItem.second.AsString();
    }
    m_customPropertiesHasBeenSet = true;
  }

  return *this;
}

JsonValue ConnectorEntityField::Jsonize() const
{
  JsonValue payload;

  if(m_identifierHasBeenSet)
  {
   payload.WithString("identifier", m_identifier);

  }

  if(m_parentIdentifierHasBeenSet)
  {
   payload.WithString("parentIdentifier", m_parentIdentifier);

  }

  if(m_labelHasBeenSet)
  {
   payload.WithString("label", m_label);

  }

  if(m_isPrimaryKeyHasBeenSet)
  {
   payload.WithBool("isPrimaryKey", m_isPrimaryKey);

  }

  if(m_defaultValueHasBeenSet)
  {
   payload.WithString("defaultValue", m_defaultValue);

  }

  if(m_isDeprecatedHasBeenSet)
  {
   payload.WithBool("isDeprecated", m_isDeprecated);

  }

  if(m_supportedFieldTypeDetailsHasBeenSet)
  {
   payload.WithObject("supportedFieldTypeDetails", m_supportedFieldTypeDetails.Jsonize());

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_sourcePropertiesHasBeenSet)
  {
   payload.WithObject("sourceProperties", m_sourceProperties.Jsonize());

  }

  if(m_destinationPropertiesHasBeenSet)
  {
   payload.WithObject("destinationProperties", m_destinationProperties.Jsonize());

  }

  if(m_customPropertiesHasBeenSet)
  {
   JsonValue customPropertiesJsonMap;
   for(auto& customPropertiesItem : m_customProperties)
   {
     customPropertiesJsonMap.WithString(customPropertiesItem.first, customPropertiesItem.second);
   }
   payload.WithObject("customProperties", std::move(customPropertiesJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
