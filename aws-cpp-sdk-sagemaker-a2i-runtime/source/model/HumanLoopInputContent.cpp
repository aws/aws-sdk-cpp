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

#include <aws/sagemaker-a2i-runtime/model/HumanLoopInputContent.h>
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

HumanLoopInputContent::HumanLoopInputContent() : 
    m_inputContentHasBeenSet(false)
{
}

HumanLoopInputContent::HumanLoopInputContent(JsonView jsonValue) : 
    m_inputContentHasBeenSet(false)
{
  *this = jsonValue;
}

HumanLoopInputContent& HumanLoopInputContent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InputContent"))
  {
    m_inputContent = jsonValue.GetString("InputContent");

    m_inputContentHasBeenSet = true;
  }

  return *this;
}

JsonValue HumanLoopInputContent::Jsonize() const
{
  JsonValue payload;

  if(m_inputContentHasBeenSet)
  {
   payload.WithString("InputContent", m_inputContent);

  }

  return payload;
}

} // namespace Model
} // namespace AugmentedAIRuntime
} // namespace Aws
