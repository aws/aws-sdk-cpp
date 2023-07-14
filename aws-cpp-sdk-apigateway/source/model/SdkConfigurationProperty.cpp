/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/SdkConfigurationProperty.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace APIGateway
{
namespace Model
{

SdkConfigurationProperty::SdkConfigurationProperty() : 
    m_nameHasBeenSet(false),
    m_friendlyNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_required(false),
    m_requiredHasBeenSet(false),
    m_defaultValueHasBeenSet(false)
{
}

SdkConfigurationProperty::SdkConfigurationProperty(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_friendlyNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_required(false),
    m_requiredHasBeenSet(false),
    m_defaultValueHasBeenSet(false)
{
  *this = jsonValue;
}

SdkConfigurationProperty& SdkConfigurationProperty::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("friendlyName"))
  {
    m_friendlyName = jsonValue.GetString("friendlyName");

    m_friendlyNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("required"))
  {
    m_required = jsonValue.GetBool("required");

    m_requiredHasBeenSet = true;
  }

  if(jsonValue.ValueExists("defaultValue"))
  {
    m_defaultValue = jsonValue.GetString("defaultValue");

    m_defaultValueHasBeenSet = true;
  }

  return *this;
}

JsonValue SdkConfigurationProperty::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_friendlyNameHasBeenSet)
  {
   payload.WithString("friendlyName", m_friendlyName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_requiredHasBeenSet)
  {
   payload.WithBool("required", m_required);

  }

  if(m_defaultValueHasBeenSet)
  {
   payload.WithString("defaultValue", m_defaultValue);

  }

  return payload;
}

} // namespace Model
} // namespace APIGateway
} // namespace Aws
