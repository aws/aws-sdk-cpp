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

#include <aws/kinesisanalytics/model/InputProcessingConfiguration.h>
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

InputProcessingConfiguration::InputProcessingConfiguration() : 
    m_inputLambdaProcessorHasBeenSet(false)
{
}

InputProcessingConfiguration::InputProcessingConfiguration(const JsonValue& jsonValue) : 
    m_inputLambdaProcessorHasBeenSet(false)
{
  *this = jsonValue;
}

InputProcessingConfiguration& InputProcessingConfiguration::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("InputLambdaProcessor"))
  {
    m_inputLambdaProcessor = jsonValue.GetObject("InputLambdaProcessor");

    m_inputLambdaProcessorHasBeenSet = true;
  }

  return *this;
}

JsonValue InputProcessingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_inputLambdaProcessorHasBeenSet)
  {
   payload.WithObject("InputLambdaProcessor", m_inputLambdaProcessor.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
