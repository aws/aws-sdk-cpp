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

#include <aws/kinesisanalytics/model/InputProcessingConfigurationDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisAnalytics
{
namespace Model
{

InputProcessingConfigurationDescription::InputProcessingConfigurationDescription() : 
    m_inputLambdaProcessorDescriptionHasBeenSet(false)
{
}

InputProcessingConfigurationDescription::InputProcessingConfigurationDescription(const JsonValue& jsonValue) : 
    m_inputLambdaProcessorDescriptionHasBeenSet(false)
{
  *this = jsonValue;
}

InputProcessingConfigurationDescription& InputProcessingConfigurationDescription::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("InputLambdaProcessorDescription"))
  {
    m_inputLambdaProcessorDescription = jsonValue.GetObject("InputLambdaProcessorDescription");

    m_inputLambdaProcessorDescriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue InputProcessingConfigurationDescription::Jsonize() const
{
  JsonValue payload;

  if(m_inputLambdaProcessorDescriptionHasBeenSet)
  {
   payload.WithObject("InputLambdaProcessorDescription", m_inputLambdaProcessorDescription.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
