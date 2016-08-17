/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/swf/model/CompleteWorkflowExecutionDecisionAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SWF
{
namespace Model
{

CompleteWorkflowExecutionDecisionAttributes::CompleteWorkflowExecutionDecisionAttributes() : 
    m_resultHasBeenSet(false)
{
}

CompleteWorkflowExecutionDecisionAttributes::CompleteWorkflowExecutionDecisionAttributes(const JsonValue& jsonValue) : 
    m_resultHasBeenSet(false)
{
  *this = jsonValue;
}

CompleteWorkflowExecutionDecisionAttributes& CompleteWorkflowExecutionDecisionAttributes::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("result"))
  {
    m_result = jsonValue.GetString("result");

    m_resultHasBeenSet = true;
  }

  return *this;
}

JsonValue CompleteWorkflowExecutionDecisionAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_resultHasBeenSet)
  {
   payload.WithString("result", m_result);

  }

  return payload;
}

} // namespace Model
} // namespace SWF
} // namespace Aws