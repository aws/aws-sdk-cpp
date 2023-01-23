/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/PossibleRemediationAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FMS
{
namespace Model
{

PossibleRemediationAction::PossibleRemediationAction() : 
    m_descriptionHasBeenSet(false),
    m_orderedRemediationActionsHasBeenSet(false),
    m_isDefaultAction(false),
    m_isDefaultActionHasBeenSet(false)
{
}

PossibleRemediationAction::PossibleRemediationAction(JsonView jsonValue) : 
    m_descriptionHasBeenSet(false),
    m_orderedRemediationActionsHasBeenSet(false),
    m_isDefaultAction(false),
    m_isDefaultActionHasBeenSet(false)
{
  *this = jsonValue;
}

PossibleRemediationAction& PossibleRemediationAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OrderedRemediationActions"))
  {
    Aws::Utils::Array<JsonView> orderedRemediationActionsJsonList = jsonValue.GetArray("OrderedRemediationActions");
    for(unsigned orderedRemediationActionsIndex = 0; orderedRemediationActionsIndex < orderedRemediationActionsJsonList.GetLength(); ++orderedRemediationActionsIndex)
    {
      m_orderedRemediationActions.push_back(orderedRemediationActionsJsonList[orderedRemediationActionsIndex].AsObject());
    }
    m_orderedRemediationActionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IsDefaultAction"))
  {
    m_isDefaultAction = jsonValue.GetBool("IsDefaultAction");

    m_isDefaultActionHasBeenSet = true;
  }

  return *this;
}

JsonValue PossibleRemediationAction::Jsonize() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_orderedRemediationActionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> orderedRemediationActionsJsonList(m_orderedRemediationActions.size());
   for(unsigned orderedRemediationActionsIndex = 0; orderedRemediationActionsIndex < orderedRemediationActionsJsonList.GetLength(); ++orderedRemediationActionsIndex)
   {
     orderedRemediationActionsJsonList[orderedRemediationActionsIndex].AsObject(m_orderedRemediationActions[orderedRemediationActionsIndex].Jsonize());
   }
   payload.WithArray("OrderedRemediationActions", std::move(orderedRemediationActionsJsonList));

  }

  if(m_isDefaultActionHasBeenSet)
  {
   payload.WithBool("IsDefaultAction", m_isDefaultAction);

  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
