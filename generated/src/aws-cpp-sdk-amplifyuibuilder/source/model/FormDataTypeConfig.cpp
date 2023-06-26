/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/FormDataTypeConfig.h>
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

FormDataTypeConfig::FormDataTypeConfig() : 
    m_dataSourceType(FormDataSourceType::NOT_SET),
    m_dataSourceTypeHasBeenSet(false),
    m_dataTypeNameHasBeenSet(false)
{
}

FormDataTypeConfig::FormDataTypeConfig(JsonView jsonValue) : 
    m_dataSourceType(FormDataSourceType::NOT_SET),
    m_dataSourceTypeHasBeenSet(false),
    m_dataTypeNameHasBeenSet(false)
{
  *this = jsonValue;
}

FormDataTypeConfig& FormDataTypeConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dataSourceType"))
  {
    m_dataSourceType = FormDataSourceTypeMapper::GetFormDataSourceTypeForName(jsonValue.GetString("dataSourceType"));

    m_dataSourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataTypeName"))
  {
    m_dataTypeName = jsonValue.GetString("dataTypeName");

    m_dataTypeNameHasBeenSet = true;
  }

  return *this;
}

JsonValue FormDataTypeConfig::Jsonize() const
{
  JsonValue payload;

  if(m_dataSourceTypeHasBeenSet)
  {
   payload.WithString("dataSourceType", FormDataSourceTypeMapper::GetNameForFormDataSourceType(m_dataSourceType));
  }

  if(m_dataTypeNameHasBeenSet)
  {
   payload.WithString("dataTypeName", m_dataTypeName);

  }

  return payload;
}

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
