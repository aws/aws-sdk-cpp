/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

InputProcessingConfigurationDescription::InputProcessingConfigurationDescription(JsonView jsonValue) : 
    m_inputLambdaProcessorDescriptionHasBeenSet(false)
{
  *this = jsonValue;
}

InputProcessingConfigurationDescription& InputProcessingConfigurationDescription::operator =(JsonView jsonValue)
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
