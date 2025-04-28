/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/SsmParameterConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

SsmParameterConfiguration::SsmParameterConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

SsmParameterConfiguration& SsmParameterConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("amiAccountId"))
  {
    m_amiAccountId = jsonValue.GetString("amiAccountId");
    m_amiAccountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("parameterName"))
  {
    m_parameterName = jsonValue.GetString("parameterName");
    m_parameterNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dataType"))
  {
    m_dataType = SsmParameterDataTypeMapper::GetSsmParameterDataTypeForName(jsonValue.GetString("dataType"));
    m_dataTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue SsmParameterConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_amiAccountIdHasBeenSet)
  {
   payload.WithString("amiAccountId", m_amiAccountId);

  }

  if(m_parameterNameHasBeenSet)
  {
   payload.WithString("parameterName", m_parameterName);

  }

  if(m_dataTypeHasBeenSet)
  {
   payload.WithString("dataType", SsmParameterDataTypeMapper::GetNameForSsmParameterDataType(m_dataType));
  }

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
