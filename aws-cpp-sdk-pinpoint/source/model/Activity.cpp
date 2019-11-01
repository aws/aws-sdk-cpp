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

#include <aws/pinpoint/model/Activity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

Activity::Activity() : 
    m_conditionalSplitHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_eMAILHasBeenSet(false),
    m_holdoutHasBeenSet(false),
    m_multiConditionHasBeenSet(false),
    m_randomSplitHasBeenSet(false),
    m_waitHasBeenSet(false)
{
}

Activity::Activity(JsonView jsonValue) : 
    m_conditionalSplitHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_eMAILHasBeenSet(false),
    m_holdoutHasBeenSet(false),
    m_multiConditionHasBeenSet(false),
    m_randomSplitHasBeenSet(false),
    m_waitHasBeenSet(false)
{
  *this = jsonValue;
}

Activity& Activity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConditionalSplit"))
  {
    m_conditionalSplit = jsonValue.GetObject("ConditionalSplit");

    m_conditionalSplitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EMAIL"))
  {
    m_eMAIL = jsonValue.GetObject("EMAIL");

    m_eMAILHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Holdout"))
  {
    m_holdout = jsonValue.GetObject("Holdout");

    m_holdoutHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MultiCondition"))
  {
    m_multiCondition = jsonValue.GetObject("MultiCondition");

    m_multiConditionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RandomSplit"))
  {
    m_randomSplit = jsonValue.GetObject("RandomSplit");

    m_randomSplitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Wait"))
  {
    m_wait = jsonValue.GetObject("Wait");

    m_waitHasBeenSet = true;
  }

  return *this;
}

JsonValue Activity::Jsonize() const
{
  JsonValue payload;

  if(m_conditionalSplitHasBeenSet)
  {
   payload.WithObject("ConditionalSplit", m_conditionalSplit.Jsonize());

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_eMAILHasBeenSet)
  {
   payload.WithObject("EMAIL", m_eMAIL.Jsonize());

  }

  if(m_holdoutHasBeenSet)
  {
   payload.WithObject("Holdout", m_holdout.Jsonize());

  }

  if(m_multiConditionHasBeenSet)
  {
   payload.WithObject("MultiCondition", m_multiCondition.Jsonize());

  }

  if(m_randomSplitHasBeenSet)
  {
   payload.WithObject("RandomSplit", m_randomSplit.Jsonize());

  }

  if(m_waitHasBeenSet)
  {
   payload.WithObject("Wait", m_wait.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
