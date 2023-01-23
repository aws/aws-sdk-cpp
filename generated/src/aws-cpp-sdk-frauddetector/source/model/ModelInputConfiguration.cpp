/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/ModelInputConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

ModelInputConfiguration::ModelInputConfiguration() : 
    m_eventTypeNameHasBeenSet(false),
    m_format(ModelInputDataFormat::NOT_SET),
    m_formatHasBeenSet(false),
    m_useEventVariables(false),
    m_useEventVariablesHasBeenSet(false),
    m_jsonInputTemplateHasBeenSet(false),
    m_csvInputTemplateHasBeenSet(false)
{
}

ModelInputConfiguration::ModelInputConfiguration(JsonView jsonValue) : 
    m_eventTypeNameHasBeenSet(false),
    m_format(ModelInputDataFormat::NOT_SET),
    m_formatHasBeenSet(false),
    m_useEventVariables(false),
    m_useEventVariablesHasBeenSet(false),
    m_jsonInputTemplateHasBeenSet(false),
    m_csvInputTemplateHasBeenSet(false)
{
  *this = jsonValue;
}

ModelInputConfiguration& ModelInputConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("eventTypeName"))
  {
    m_eventTypeName = jsonValue.GetString("eventTypeName");

    m_eventTypeNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("format"))
  {
    m_format = ModelInputDataFormatMapper::GetModelInputDataFormatForName(jsonValue.GetString("format"));

    m_formatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("useEventVariables"))
  {
    m_useEventVariables = jsonValue.GetBool("useEventVariables");

    m_useEventVariablesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("jsonInputTemplate"))
  {
    m_jsonInputTemplate = jsonValue.GetString("jsonInputTemplate");

    m_jsonInputTemplateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("csvInputTemplate"))
  {
    m_csvInputTemplate = jsonValue.GetString("csvInputTemplate");

    m_csvInputTemplateHasBeenSet = true;
  }

  return *this;
}

JsonValue ModelInputConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_eventTypeNameHasBeenSet)
  {
   payload.WithString("eventTypeName", m_eventTypeName);

  }

  if(m_formatHasBeenSet)
  {
   payload.WithString("format", ModelInputDataFormatMapper::GetNameForModelInputDataFormat(m_format));
  }

  if(m_useEventVariablesHasBeenSet)
  {
   payload.WithBool("useEventVariables", m_useEventVariables);

  }

  if(m_jsonInputTemplateHasBeenSet)
  {
   payload.WithString("jsonInputTemplate", m_jsonInputTemplate);

  }

  if(m_csvInputTemplateHasBeenSet)
  {
   payload.WithString("csvInputTemplate", m_csvInputTemplate);

  }

  return payload;
}

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
