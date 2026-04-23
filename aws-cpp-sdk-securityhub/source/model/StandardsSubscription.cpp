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

#include <aws/securityhub/model/StandardsSubscription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

StandardsSubscription::StandardsSubscription() : 
    m_standardsSubscriptionArnHasBeenSet(false),
    m_standardsArnHasBeenSet(false),
    m_standardsInputHasBeenSet(false),
    m_standardsStatus(StandardsStatus::NOT_SET),
    m_standardsStatusHasBeenSet(false)
{
}

StandardsSubscription::StandardsSubscription(JsonView jsonValue) : 
    m_standardsSubscriptionArnHasBeenSet(false),
    m_standardsArnHasBeenSet(false),
    m_standardsInputHasBeenSet(false),
    m_standardsStatus(StandardsStatus::NOT_SET),
    m_standardsStatusHasBeenSet(false)
{
  *this = jsonValue;
}

StandardsSubscription& StandardsSubscription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StandardsSubscriptionArn"))
  {
    m_standardsSubscriptionArn = jsonValue.GetString("StandardsSubscriptionArn");

    m_standardsSubscriptionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StandardsArn"))
  {
    m_standardsArn = jsonValue.GetString("StandardsArn");

    m_standardsArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StandardsInput"))
  {
    Aws::Map<Aws::String, JsonView> standardsInputJsonMap = jsonValue.GetObject("StandardsInput").GetAllObjects();
    for(auto& standardsInputItem : standardsInputJsonMap)
    {
      m_standardsInput[standardsInputItem.first] = standardsInputItem.second.AsString();
    }
    m_standardsInputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StandardsStatus"))
  {
    m_standardsStatus = StandardsStatusMapper::GetStandardsStatusForName(jsonValue.GetString("StandardsStatus"));

    m_standardsStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue StandardsSubscription::Jsonize() const
{
  JsonValue payload;

  if(m_standardsSubscriptionArnHasBeenSet)
  {
   payload.WithString("StandardsSubscriptionArn", m_standardsSubscriptionArn);

  }

  if(m_standardsArnHasBeenSet)
  {
   payload.WithString("StandardsArn", m_standardsArn);

  }

  if(m_standardsInputHasBeenSet)
  {
   JsonValue standardsInputJsonMap;
   for(auto& standardsInputItem : m_standardsInput)
   {
     standardsInputJsonMap.WithString(standardsInputItem.first, standardsInputItem.second);
   }
   payload.WithObject("StandardsInput", std::move(standardsInputJsonMap));

  }

  if(m_standardsStatusHasBeenSet)
  {
   payload.WithString("StandardsStatus", StandardsStatusMapper::GetNameForStandardsStatus(m_standardsStatus));
  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
