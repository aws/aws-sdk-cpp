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

#include <aws/kinesisanalytics/model/InputProcessingConfigurationUpdate.h>
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

InputProcessingConfigurationUpdate::InputProcessingConfigurationUpdate() : 
    m_inputLambdaProcessorUpdateHasBeenSet(false)
{
}

InputProcessingConfigurationUpdate::InputProcessingConfigurationUpdate(const JsonValue& jsonValue) : 
    m_inputLambdaProcessorUpdateHasBeenSet(false)
{
  *this = jsonValue;
}

InputProcessingConfigurationUpdate& InputProcessingConfigurationUpdate::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("InputLambdaProcessorUpdate"))
  {
    m_inputLambdaProcessorUpdate = jsonValue.GetObject("InputLambdaProcessorUpdate");

    m_inputLambdaProcessorUpdateHasBeenSet = true;
  }

  return *this;
}

JsonValue InputProcessingConfigurationUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_inputLambdaProcessorUpdateHasBeenSet)
  {
   payload.WithObject("InputLambdaProcessorUpdate", m_inputLambdaProcessorUpdate.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
