/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-incidents/model/UpdateReplicationSetAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSMIncidents
{
namespace Model
{

UpdateReplicationSetAction::UpdateReplicationSetAction() : 
    m_addRegionActionHasBeenSet(false),
    m_deleteRegionActionHasBeenSet(false)
{
}

UpdateReplicationSetAction::UpdateReplicationSetAction(JsonView jsonValue) : 
    m_addRegionActionHasBeenSet(false),
    m_deleteRegionActionHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateReplicationSetAction& UpdateReplicationSetAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("addRegionAction"))
  {
    m_addRegionAction = jsonValue.GetObject("addRegionAction");

    m_addRegionActionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deleteRegionAction"))
  {
    m_deleteRegionAction = jsonValue.GetObject("deleteRegionAction");

    m_deleteRegionActionHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateReplicationSetAction::Jsonize() const
{
  JsonValue payload;

  if(m_addRegionActionHasBeenSet)
  {
   payload.WithObject("addRegionAction", m_addRegionAction.Jsonize());

  }

  if(m_deleteRegionActionHasBeenSet)
  {
   payload.WithObject("deleteRegionAction", m_deleteRegionAction.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
