/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/ConnectorRuntimeSetting.h>
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

ConnectorRuntimeSetting::ConnectorRuntimeSetting() : 
    m_keyHasBeenSet(false),
    m_dataTypeHasBeenSet(false),
    m_isRequired(false),
    m_isRequiredHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_connectorSuppliedValueOptionsHasBeenSet(false)
{
}

ConnectorRuntimeSetting::ConnectorRuntimeSetting(JsonView jsonValue) : 
    m_keyHasBeenSet(false),
    m_dataTypeHasBeenSet(false),
    m_isRequired(false),
    m_isRequiredHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_connectorSuppliedValueOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

ConnectorRuntimeSetting& ConnectorRuntimeSetting::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("key"))
  {
    m_key = jsonValue.GetString("key");

    m_keyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataType"))
  {
    m_dataType = jsonValue.GetString("dataType");

    m_dataTypeHasBeenSet = true;
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

  if(jsonValue.ValueExists("scope"))
  {
    m_scope = jsonValue.GetString("scope");

    m_scopeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("connectorSuppliedValueOptions"))
  {
    Aws::Utils::Array<JsonView> connectorSuppliedValueOptionsJsonList = jsonValue.GetArray("connectorSuppliedValueOptions");
    for(unsigned connectorSuppliedValueOptionsIndex = 0; connectorSuppliedValueOptionsIndex < connectorSuppliedValueOptionsJsonList.GetLength(); ++connectorSuppliedValueOptionsIndex)
    {
      m_connectorSuppliedValueOptions.push_back(connectorSuppliedValueOptionsJsonList[connectorSuppliedValueOptionsIndex].AsString());
    }
    m_connectorSuppliedValueOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue ConnectorRuntimeSetting::Jsonize() const
{
  JsonValue payload;

  if(m_keyHasBeenSet)
  {
   payload.WithString("key", m_key);

  }

  if(m_dataTypeHasBeenSet)
  {
   payload.WithString("dataType", m_dataType);

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

  if(m_scopeHasBeenSet)
  {
   payload.WithString("scope", m_scope);

  }

  if(m_connectorSuppliedValueOptionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> connectorSuppliedValueOptionsJsonList(m_connectorSuppliedValueOptions.size());
   for(unsigned connectorSuppliedValueOptionsIndex = 0; connectorSuppliedValueOptionsIndex < connectorSuppliedValueOptionsJsonList.GetLength(); ++connectorSuppliedValueOptionsIndex)
   {
     connectorSuppliedValueOptionsJsonList[connectorSuppliedValueOptionsIndex].AsString(m_connectorSuppliedValueOptions[connectorSuppliedValueOptionsIndex]);
   }
   payload.WithArray("connectorSuppliedValueOptions", std::move(connectorSuppliedValueOptionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
