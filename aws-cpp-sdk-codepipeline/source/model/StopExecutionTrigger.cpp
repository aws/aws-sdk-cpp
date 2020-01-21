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

#include <aws/codepipeline/model/StopExecutionTrigger.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

StopExecutionTrigger::StopExecutionTrigger() : 
    m_reasonHasBeenSet(false)
{
}

StopExecutionTrigger::StopExecutionTrigger(JsonView jsonValue) : 
    m_reasonHasBeenSet(false)
{
  *this = jsonValue;
}

StopExecutionTrigger& StopExecutionTrigger::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("reason"))
  {
    m_reason = jsonValue.GetString("reason");

    m_reasonHasBeenSet = true;
  }

  return *this;
}

JsonValue StopExecutionTrigger::Jsonize() const
{
  JsonValue payload;

  if(m_reasonHasBeenSet)
  {
   payload.WithString("reason", m_reason);

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
