/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/AuthParameter.h>
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

AuthParameter::AuthParameter() : 
    m_keyHasBeenSet(false),
    m_isRequired(false),
    m_isRequiredHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_isSensitiveField(false),
    m_isSensitiveFieldHasBeenSet(false),
    m_connectorSuppliedValuesHasBeenSet(false)
{
}

AuthParameter::AuthParameter(JsonView jsonValue) : 
    m_keyHasBeenSet(false),
    m_isRequired(false),
    m_isRequiredHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_isSensitiveField(false),
    m_isSensitiveFieldHasBeenSet(false),
    m_connectorSuppliedValuesHasBeenSet(false)
{
  *this = jsonValue;
}

AuthParameter& AuthParameter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("key"))
  {
    m_key = jsonValue.GetString("key");

    m_keyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isRequired"))
  {
    m_isRequired = jsonValue.GetBool("isRequired");

    m_isRequiredHasBeenSet = true;
  }

  if(jsonValue.ValueExists("label"))
  {
    m_label = jsonValue.GetString("label");

    m_labelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isSensitiveField"))
  {
    m_isSensitiveField = jsonValue.GetBool("isSensitiveField");

    m_isSensitiveFieldHasBeenSet = true;
  }

  if(jsonValue.ValueExists("connectorSuppliedValues"))
  {
    Aws::Utils::Array<JsonView> connectorSuppliedValuesJsonList = jsonValue.GetArray("connectorSuppliedValues");
    for(unsigned connectorSuppliedValuesIndex = 0; connectorSuppliedValuesIndex < connectorSuppliedValuesJsonList.GetLength(); ++connectorSuppliedValuesIndex)
    {
      m_connectorSuppliedValues.push_back(connectorSuppliedValuesJsonList[connectorSuppliedValuesIndex].AsString());
    }
    m_connectorSuppliedValuesHasBeenSet = true;
  }

  return *this;
}

JsonValue AuthParameter::Jsonize() const
{
  JsonValue payload;

  if(m_keyHasBeenSet)
  {
   payload.WithString("key", m_key);

  }

  if(m_isRequiredHasBeenSet)
  {
   payload.WithBool("isRequired", m_isRequired);

  }

  if(m_labelHasBeenSet)
  {
   payload.WithString("label", m_label);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_isSensitiveFieldHasBeenSet)
  {
   payload.WithBool("isSensitiveField", m_isSensitiveField);

  }

  if(m_connectorSuppliedValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> connectorSuppliedValuesJsonList(m_connectorSuppliedValues.size());
   for(unsigned connectorSuppliedValuesIndex = 0; connectorSuppliedValuesIndex < connectorSuppliedValuesJsonList.GetLength(); ++connectorSuppliedValuesIndex)
   {
     connectorSuppliedValuesJsonList[connectorSuppliedValuesIndex].AsString(m_connectorSuppliedValues[connectorSuppliedValuesIndex]);
   }
   payload.WithArray("connectorSuppliedValues", std::move(connectorSuppliedValuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
