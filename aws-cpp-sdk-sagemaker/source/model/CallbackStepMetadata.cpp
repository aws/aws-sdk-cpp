/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CallbackStepMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

CallbackStepMetadata::CallbackStepMetadata() : 
    m_callbackTokenHasBeenSet(false),
    m_sqsQueueUrlHasBeenSet(false),
    m_outputParametersHasBeenSet(false)
{
}

CallbackStepMetadata::CallbackStepMetadata(JsonView jsonValue) : 
    m_callbackTokenHasBeenSet(false),
    m_sqsQueueUrlHasBeenSet(false),
    m_outputParametersHasBeenSet(false)
{
  *this = jsonValue;
}

CallbackStepMetadata& CallbackStepMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CallbackToken"))
  {
    m_callbackToken = jsonValue.GetString("CallbackToken");

    m_callbackTokenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SqsQueueUrl"))
  {
    m_sqsQueueUrl = jsonValue.GetString("SqsQueueUrl");

    m_sqsQueueUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputParameters"))
  {
    Aws::Utils::Array<JsonView> outputParametersJsonList = jsonValue.GetArray("OutputParameters");
    for(unsigned outputParametersIndex = 0; outputParametersIndex < outputParametersJsonList.GetLength(); ++outputParametersIndex)
    {
      m_outputParameters.push_back(outputParametersJsonList[outputParametersIndex].AsObject());
    }
    m_outputParametersHasBeenSet = true;
  }

  return *this;
}

JsonValue CallbackStepMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_callbackTokenHasBeenSet)
  {
   payload.WithString("CallbackToken", m_callbackToken);

  }

  if(m_sqsQueueUrlHasBeenSet)
  {
   payload.WithString("SqsQueueUrl", m_sqsQueueUrl);

  }

  if(m_outputParametersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> outputParametersJsonList(m_outputParameters.size());
   for(unsigned outputParametersIndex = 0; outputParametersIndex < outputParametersJsonList.GetLength(); ++outputParametersIndex)
   {
     outputParametersJsonList[outputParametersIndex].AsObject(m_outputParameters[outputParametersIndex].Jsonize());
   }
   payload.WithArray("OutputParameters", std::move(outputParametersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
