/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_cUSTOMHasBeenSet(false),
    m_conditionalSplitHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_eMAILHasBeenSet(false),
    m_holdoutHasBeenSet(false),
    m_multiConditionHasBeenSet(false),
    m_pUSHHasBeenSet(false),
    m_randomSplitHasBeenSet(false),
    m_sMSHasBeenSet(false),
    m_waitHasBeenSet(false)
{
}

Activity::Activity(JsonView jsonValue) : 
    m_cUSTOMHasBeenSet(false),
    m_conditionalSplitHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_eMAILHasBeenSet(false),
    m_holdoutHasBeenSet(false),
    m_multiConditionHasBeenSet(false),
    m_pUSHHasBeenSet(false),
    m_randomSplitHasBeenSet(false),
    m_sMSHasBeenSet(false),
    m_waitHasBeenSet(false)
{
  *this = jsonValue;
}

Activity& Activity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CUSTOM"))
  {
    m_cUSTOM = jsonValue.GetObject("CUSTOM");

    m_cUSTOMHasBeenSet = true;
  }

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

  if(jsonValue.ValueExists("PUSH"))
  {
    m_pUSH = jsonValue.GetObject("PUSH");

    m_pUSHHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RandomSplit"))
  {
    m_randomSplit = jsonValue.GetObject("RandomSplit");

    m_randomSplitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SMS"))
  {
    m_sMS = jsonValue.GetObject("SMS");

    m_sMSHasBeenSet = true;
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

  if(m_cUSTOMHasBeenSet)
  {
   payload.WithObject("CUSTOM", m_cUSTOM.Jsonize());

  }

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

  if(m_pUSHHasBeenSet)
  {
   payload.WithObject("PUSH", m_pUSH.Jsonize());

  }

  if(m_randomSplitHasBeenSet)
  {
   payload.WithObject("RandomSplit", m_randomSplit.Jsonize());

  }

  if(m_sMSHasBeenSet)
  {
   payload.WithObject("SMS", m_sMS.Jsonize());

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
