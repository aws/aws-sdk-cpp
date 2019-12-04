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

#include <aws/sagemaker/model/ProcessingInput.h>
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

ProcessingInput::ProcessingInput() : 
    m_inputNameHasBeenSet(false),
    m_s3InputHasBeenSet(false)
{
}

ProcessingInput::ProcessingInput(JsonView jsonValue) : 
    m_inputNameHasBeenSet(false),
    m_s3InputHasBeenSet(false)
{
  *this = jsonValue;
}

ProcessingInput& ProcessingInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InputName"))
  {
    m_inputName = jsonValue.GetString("InputName");

    m_inputNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3Input"))
  {
    m_s3Input = jsonValue.GetObject("S3Input");

    m_s3InputHasBeenSet = true;
  }

  return *this;
}

JsonValue ProcessingInput::Jsonize() const
{
  JsonValue payload;

  if(m_inputNameHasBeenSet)
  {
   payload.WithString("InputName", m_inputName);

  }

  if(m_s3InputHasBeenSet)
  {
   payload.WithObject("S3Input", m_s3Input.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
