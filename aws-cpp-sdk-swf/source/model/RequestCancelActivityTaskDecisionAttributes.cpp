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
#include <aws/swf/model/RequestCancelActivityTaskDecisionAttributes.h>
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

RequestCancelActivityTaskDecisionAttributes::RequestCancelActivityTaskDecisionAttributes() : 
    m_activityIdHasBeenSet(false)
{
}

RequestCancelActivityTaskDecisionAttributes::RequestCancelActivityTaskDecisionAttributes(const JsonValue& jsonValue) : 
    m_activityIdHasBeenSet(false)
{
  *this = jsonValue;
}

RequestCancelActivityTaskDecisionAttributes& RequestCancelActivityTaskDecisionAttributes::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("activityId"))
  {
    m_activityId = jsonValue.GetString("activityId");

    m_activityIdHasBeenSet = true;
  }

  return *this;
}

JsonValue RequestCancelActivityTaskDecisionAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_activityIdHasBeenSet)
  {
   payload.WithString("activityId", m_activityId);

  }

  return payload;
}

} // namespace Model
} // namespace SWF
} // namespace Aws