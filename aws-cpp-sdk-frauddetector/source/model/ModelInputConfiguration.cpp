/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    m_format(ModelInputDataFormat::NOT_SET),
    m_formatHasBeenSet(false),
    m_isOpaque(false),
    m_isOpaqueHasBeenSet(false),
    m_jsonInputTemplateHasBeenSet(false),
    m_csvInputTemplateHasBeenSet(false)
{
}

ModelInputConfiguration::ModelInputConfiguration(JsonView jsonValue) : 
    m_format(ModelInputDataFormat::NOT_SET),
    m_formatHasBeenSet(false),
    m_isOpaque(false),
    m_isOpaqueHasBeenSet(false),
    m_jsonInputTemplateHasBeenSet(false),
    m_csvInputTemplateHasBeenSet(false)
{
  *this = jsonValue;
}

ModelInputConfiguration& ModelInputConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("format"))
  {
    m_format = ModelInputDataFormatMapper::GetModelInputDataFormatForName(jsonValue.GetString("format"));

    m_formatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isOpaque"))
  {
    m_isOpaque = jsonValue.GetBool("isOpaque");

    m_isOpaqueHasBeenSet = true;
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

  if(m_formatHasBeenSet)
  {
   payload.WithString("format", ModelInputDataFormatMapper::GetNameForModelInputDataFormat(m_format));
  }

  if(m_isOpaqueHasBeenSet)
  {
   payload.WithBool("isOpaque", m_isOpaque);

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
