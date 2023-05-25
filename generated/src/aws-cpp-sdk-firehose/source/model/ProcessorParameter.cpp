/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/ProcessorParameter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Firehose
{
namespace Model
{

ProcessorParameter::ProcessorParameter() : 
    m_parameterName(ProcessorParameterName::NOT_SET),
    m_parameterNameHasBeenSet(false),
    m_parameterValueHasBeenSet(false)
{
}

ProcessorParameter::ProcessorParameter(JsonView jsonValue) : 
    m_parameterName(ProcessorParameterName::NOT_SET),
    m_parameterNameHasBeenSet(false),
    m_parameterValueHasBeenSet(false)
{
  *this = jsonValue;
}

ProcessorParameter& ProcessorParameter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ParameterName"))
  {
    m_parameterName = ProcessorParameterNameMapper::GetProcessorParameterNameForName(jsonValue.GetString("ParameterName"));

    m_parameterNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParameterValue"))
  {
    m_parameterValue = jsonValue.GetString("ParameterValue");

    m_parameterValueHasBeenSet = true;
  }

  return *this;
}

JsonValue ProcessorParameter::Jsonize() const
{
  JsonValue payload;

  if(m_parameterNameHasBeenSet)
  {
   payload.WithString("ParameterName", ProcessorParameterNameMapper::GetNameForProcessorParameterName(m_parameterName));
  }

  if(m_parameterValueHasBeenSet)
  {
   payload.WithString("ParameterValue", m_parameterValue);

  }

  return payload;
}

} // namespace Model
} // namespace Firehose
} // namespace Aws
