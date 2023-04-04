/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/FormInputBindingPropertiesValueProperties.h>
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

FormInputBindingPropertiesValueProperties::FormInputBindingPropertiesValueProperties() : 
    m_modelHasBeenSet(false)
{
}

FormInputBindingPropertiesValueProperties::FormInputBindingPropertiesValueProperties(JsonView jsonValue) : 
    m_modelHasBeenSet(false)
{
  *this = jsonValue;
}

FormInputBindingPropertiesValueProperties& FormInputBindingPropertiesValueProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("model"))
  {
    m_model = jsonValue.GetString("model");

    m_modelHasBeenSet = true;
  }

  return *this;
}

JsonValue FormInputBindingPropertiesValueProperties::Jsonize() const
{
  JsonValue payload;

  if(m_modelHasBeenSet)
  {
   payload.WithString("model", m_model);

  }

  return payload;
}

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
