/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/RemediationParameterValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConfigService
{
namespace Model
{

RemediationParameterValue::RemediationParameterValue() : 
    m_resourceValueHasBeenSet(false),
    m_staticValueHasBeenSet(false)
{
}

RemediationParameterValue::RemediationParameterValue(JsonView jsonValue) : 
    m_resourceValueHasBeenSet(false),
    m_staticValueHasBeenSet(false)
{
  *this = jsonValue;
}

RemediationParameterValue& RemediationParameterValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResourceValue"))
  {
    m_resourceValue = jsonValue.GetObject("ResourceValue");

    m_resourceValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StaticValue"))
  {
    m_staticValue = jsonValue.GetObject("StaticValue");

    m_staticValueHasBeenSet = true;
  }

  return *this;
}

JsonValue RemediationParameterValue::Jsonize() const
{
  JsonValue payload;

  if(m_resourceValueHasBeenSet)
  {
   payload.WithObject("ResourceValue", m_resourceValue.Jsonize());

  }

  if(m_staticValueHasBeenSet)
  {
   payload.WithObject("StaticValue", m_staticValue.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
