/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/ComponentBindingPropertiesValueProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AmplifyUIBuilder
{
namespace Model
{

ComponentBindingPropertiesValueProperties::ComponentBindingPropertiesValueProperties() : 
    m_bucketHasBeenSet(false),
    m_defaultValueHasBeenSet(false),
    m_fieldHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_predicatesHasBeenSet(false),
    m_slotNameHasBeenSet(false),
    m_userAttributeHasBeenSet(false)
{
}

ComponentBindingPropertiesValueProperties::ComponentBindingPropertiesValueProperties(JsonView jsonValue) : 
    m_bucketHasBeenSet(false),
    m_defaultValueHasBeenSet(false),
    m_fieldHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_predicatesHasBeenSet(false),
    m_slotNameHasBeenSet(false),
    m_userAttributeHasBeenSet(false)
{
  *this = jsonValue;
}

ComponentBindingPropertiesValueProperties& ComponentBindingPropertiesValueProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bucket"))
  {
    m_bucket = jsonValue.GetString("bucket");

    m_bucketHasBeenSet = true;
  }

  if(jsonValue.ValueExists("defaultValue"))
  {
    m_defaultValue = jsonValue.GetString("defaultValue");

    m_defaultValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("field"))
  {
    m_field = jsonValue.GetString("field");

    m_fieldHasBeenSet = true;
  }

  if(jsonValue.ValueExists("key"))
  {
    m_key = jsonValue.GetString("key");

    m_keyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("model"))
  {
    m_model = jsonValue.GetString("model");

    m_modelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("predicates"))
  {
    Aws::Utils::Array<JsonView> predicatesJsonList = jsonValue.GetArray("predicates");
    for(unsigned predicatesIndex = 0; predicatesIndex < predicatesJsonList.GetLength(); ++predicatesIndex)
    {
      m_predicates.push_back(predicatesJsonList[predicatesIndex].AsObject());
    }
    m_predicatesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("slotName"))
  {
    m_slotName = jsonValue.GetString("slotName");

    m_slotNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userAttribute"))
  {
    m_userAttribute = jsonValue.GetString("userAttribute");

    m_userAttributeHasBeenSet = true;
  }

  return *this;
}

JsonValue ComponentBindingPropertiesValueProperties::Jsonize() const
{
  JsonValue payload;

  if(m_bucketHasBeenSet)
  {
   payload.WithString("bucket", m_bucket);

  }

  if(m_defaultValueHasBeenSet)
  {
   payload.WithString("defaultValue", m_defaultValue);

  }

  if(m_fieldHasBeenSet)
  {
   payload.WithString("field", m_field);

  }

  if(m_keyHasBeenSet)
  {
   payload.WithString("key", m_key);

  }

  if(m_modelHasBeenSet)
  {
   payload.WithString("model", m_model);

  }

  if(m_predicatesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> predicatesJsonList(m_predicates.size());
   for(unsigned predicatesIndex = 0; predicatesIndex < predicatesJsonList.GetLength(); ++predicatesIndex)
   {
     predicatesJsonList[predicatesIndex].AsObject(m_predicates[predicatesIndex].Jsonize());
   }
   payload.WithArray("predicates", std::move(predicatesJsonList));

  }

  if(m_slotNameHasBeenSet)
  {
   payload.WithString("slotName", m_slotName);

  }

  if(m_userAttributeHasBeenSet)
  {
   payload.WithString("userAttribute", m_userAttribute);

  }

  return payload;
}

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
