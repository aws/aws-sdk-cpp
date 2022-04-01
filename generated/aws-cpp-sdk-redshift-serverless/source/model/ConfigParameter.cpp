/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/model/ConfigParameter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RedshiftServerless
{
namespace Model
{

ConfigParameter::ConfigParameter() : 
    m_parameterKeyHasBeenSet(false),
    m_parameterValueHasBeenSet(false)
{
}

ConfigParameter::ConfigParameter(JsonView jsonValue) : 
    m_parameterKeyHasBeenSet(false),
    m_parameterValueHasBeenSet(false)
{
  *this = jsonValue;
}

ConfigParameter& ConfigParameter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("parameterKey"))
  {
    m_parameterKey = jsonValue.GetString("parameterKey");

    m_parameterKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parameterValue"))
  {
    m_parameterValue = jsonValue.GetString("parameterValue");

    m_parameterValueHasBeenSet = true;
  }

  return *this;
}

JsonValue ConfigParameter::Jsonize() const
{
  JsonValue payload;

  if(m_parameterKeyHasBeenSet)
  {
   payload.WithString("parameterKey", m_parameterKey);

  }

  if(m_parameterValueHasBeenSet)
  {
   payload.WithString("parameterValue", m_parameterValue);

  }

  return payload;
}

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
