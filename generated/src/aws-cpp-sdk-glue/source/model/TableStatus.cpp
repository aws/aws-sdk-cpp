/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/TableStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/StatusDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

TableStatus::TableStatus(JsonView jsonValue)
{
  *this = jsonValue;
}

TableStatus& TableStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RequestedBy"))
  {
    m_requestedBy = jsonValue.GetString("RequestedBy");
    m_requestedByHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UpdatedBy"))
  {
    m_updatedBy = jsonValue.GetString("UpdatedBy");
    m_updatedByHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RequestTime"))
  {
    m_requestTime = jsonValue.GetDouble("RequestTime");
    m_requestTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UpdateTime"))
  {
    m_updateTime = jsonValue.GetDouble("UpdateTime");
    m_updateTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Action"))
  {
    m_action = ResourceActionMapper::GetResourceActionForName(jsonValue.GetString("Action"));
    m_actionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("State"))
  {
    m_state = ResourceStateMapper::GetResourceStateForName(jsonValue.GetString("State"));
    m_stateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Error"))
  {
    m_error = jsonValue.GetObject("Error");
    m_errorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Details"))
  {
    m_details = Aws::MakeShared<StatusDetails>("TableStatus", jsonValue.GetObject("Details"));
    m_detailsHasBeenSet = true;
  }
  return *this;
}

JsonValue TableStatus::Jsonize() const
{
  JsonValue payload;

  if(m_requestedByHasBeenSet)
  {
   payload.WithString("RequestedBy", m_requestedBy);

  }

  if(m_updatedByHasBeenSet)
  {
   payload.WithString("UpdatedBy", m_updatedBy);

  }

  if(m_requestTimeHasBeenSet)
  {
   payload.WithDouble("RequestTime", m_requestTime.SecondsWithMSPrecision());
  }

  if(m_updateTimeHasBeenSet)
  {
   payload.WithDouble("UpdateTime", m_updateTime.SecondsWithMSPrecision());
  }

  if(m_actionHasBeenSet)
  {
   payload.WithString("Action", ResourceActionMapper::GetNameForResourceAction(m_action));
  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", ResourceStateMapper::GetNameForResourceState(m_state));
  }

  if(m_errorHasBeenSet)
  {
   payload.WithObject("Error", m_error.Jsonize());

  }

  if(m_detailsHasBeenSet)
  {
   payload.WithObject("Details", m_details->Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
