/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-containers/model/TemplateParameterConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMRContainers
{
namespace Model
{

TemplateParameterConfiguration::TemplateParameterConfiguration() : 
    m_type(TemplateParameterDataType::NOT_SET),
    m_typeHasBeenSet(false),
    m_defaultValueHasBeenSet(false)
{
}

TemplateParameterConfiguration::TemplateParameterConfiguration(JsonView jsonValue) : 
    m_type(TemplateParameterDataType::NOT_SET),
    m_typeHasBeenSet(false),
    m_defaultValueHasBeenSet(false)
{
  *this = jsonValue;
}

TemplateParameterConfiguration& TemplateParameterConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = TemplateParameterDataTypeMapper::GetTemplateParameterDataTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("defaultValue"))
  {
    m_defaultValue = jsonValue.GetString("defaultValue");

    m_defaultValueHasBeenSet = true;
  }

  return *this;
}

JsonValue TemplateParameterConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", TemplateParameterDataTypeMapper::GetNameForTemplateParameterDataType(m_type));
  }

  if(m_defaultValueHasBeenSet)
  {
   payload.WithString("defaultValue", m_defaultValue);

  }

  return payload;
}

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
