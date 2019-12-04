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

#include <aws/sagemaker/model/ProcessingOutput.h>
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

ProcessingOutput::ProcessingOutput() : 
    m_outputNameHasBeenSet(false),
    m_s3OutputHasBeenSet(false)
{
}

ProcessingOutput::ProcessingOutput(JsonView jsonValue) : 
    m_outputNameHasBeenSet(false),
    m_s3OutputHasBeenSet(false)
{
  *this = jsonValue;
}

ProcessingOutput& ProcessingOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OutputName"))
  {
    m_outputName = jsonValue.GetString("OutputName");

    m_outputNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3Output"))
  {
    m_s3Output = jsonValue.GetObject("S3Output");

    m_s3OutputHasBeenSet = true;
  }

  return *this;
}

JsonValue ProcessingOutput::Jsonize() const
{
  JsonValue payload;

  if(m_outputNameHasBeenSet)
  {
   payload.WithString("OutputName", m_outputName);

  }

  if(m_s3OutputHasBeenSet)
  {
   payload.WithObject("S3Output", m_s3Output.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
