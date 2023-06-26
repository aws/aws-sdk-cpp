/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/InputProcessingConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisAnalyticsV2
{
namespace Model
{

InputProcessingConfiguration::InputProcessingConfiguration() : 
    m_inputLambdaProcessorHasBeenSet(false)
{
}

InputProcessingConfiguration::InputProcessingConfiguration(JsonView jsonValue) : 
    m_inputLambdaProcessorHasBeenSet(false)
{
  *this = jsonValue;
}

InputProcessingConfiguration& InputProcessingConfiguration::operator =(JsonView jsonValue)
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
} // namespace KinesisAnalyticsV2
} // namespace Aws
