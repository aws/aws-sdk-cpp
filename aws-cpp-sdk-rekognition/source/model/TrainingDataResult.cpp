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

#include <aws/rekognition/model/TrainingDataResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Rekognition
{
namespace Model
{

TrainingDataResult::TrainingDataResult() : 
    m_inputHasBeenSet(false),
    m_outputHasBeenSet(false)
{
}

TrainingDataResult::TrainingDataResult(JsonView jsonValue) : 
    m_inputHasBeenSet(false),
    m_outputHasBeenSet(false)
{
  *this = jsonValue;
}

TrainingDataResult& TrainingDataResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Input"))
  {
    m_input = jsonValue.GetObject("Input");

    m_inputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Output"))
  {
    m_output = jsonValue.GetObject("Output");

    m_outputHasBeenSet = true;
  }

  return *this;
}

JsonValue TrainingDataResult::Jsonize() const
{
  JsonValue payload;

  if(m_inputHasBeenSet)
  {
   payload.WithObject("Input", m_input.Jsonize());

  }

  if(m_outputHasBeenSet)
  {
   payload.WithObject("Output", m_output.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
