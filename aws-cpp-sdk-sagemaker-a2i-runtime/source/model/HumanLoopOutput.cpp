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

#include <aws/sagemaker-a2i-runtime/model/HumanLoopOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AugmentedAIRuntime
{
namespace Model
{

HumanLoopOutput::HumanLoopOutput() : 
    m_outputS3UriHasBeenSet(false)
{
}

HumanLoopOutput::HumanLoopOutput(JsonView jsonValue) : 
    m_outputS3UriHasBeenSet(false)
{
  *this = jsonValue;
}

HumanLoopOutput& HumanLoopOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OutputS3Uri"))
  {
    m_outputS3Uri = jsonValue.GetString("OutputS3Uri");

    m_outputS3UriHasBeenSet = true;
  }

  return *this;
}

JsonValue HumanLoopOutput::Jsonize() const
{
  JsonValue payload;

  if(m_outputS3UriHasBeenSet)
  {
   payload.WithString("OutputS3Uri", m_outputS3Uri);

  }

  return payload;
}

} // namespace Model
} // namespace AugmentedAIRuntime
} // namespace Aws
