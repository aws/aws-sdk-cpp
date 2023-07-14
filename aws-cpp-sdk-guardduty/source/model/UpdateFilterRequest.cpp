/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/UpdateFilterRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GuardDuty::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateFilterRequest::UpdateFilterRequest() : 
    m_detectorIdHasBeenSet(false),
    m_filterNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_action(FilterAction::NOT_SET),
    m_actionHasBeenSet(false),
    m_rank(0),
    m_rankHasBeenSet(false),
    m_findingCriteriaHasBeenSet(false)
{
}

Aws::String UpdateFilterRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_actionHasBeenSet)
  {
   payload.WithString("action", FilterActionMapper::GetNameForFilterAction(m_action));
  }

  if(m_rankHasBeenSet)
  {
   payload.WithInteger("rank", m_rank);

  }

  if(m_findingCriteriaHasBeenSet)
  {
   payload.WithObject("findingCriteria", m_findingCriteria.Jsonize());

  }

  return payload.View().WriteReadable();
}




