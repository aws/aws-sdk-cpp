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

#include <aws/codepipeline/model/ActionContext.h>
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

ActionContext::ActionContext() : 
    m_nameHasBeenSet(false),
    m_actionExecutionIdHasBeenSet(false)
{
}

ActionContext::ActionContext(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_actionExecutionIdHasBeenSet(false)
{
  *this = jsonValue;
}

ActionContext& ActionContext::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("actionExecutionId"))
  {
    m_actionExecutionId = jsonValue.GetString("actionExecutionId");

    m_actionExecutionIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ActionContext::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_actionExecutionIdHasBeenSet)
  {
   payload.WithString("actionExecutionId", m_actionExecutionId);

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
