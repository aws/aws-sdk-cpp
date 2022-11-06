/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhuborchestrator/model/WorkflowStepSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MigrationHubOrchestrator
{
namespace Model
{

WorkflowStepSummary::WorkflowStepSummary() : 
    m_stepIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_stepActionType(StepActionType::NOT_SET),
    m_stepActionTypeHasBeenSet(false),
    m_owner(Owner::NOT_SET),
    m_ownerHasBeenSet(false),
    m_previousHasBeenSet(false),
    m_nextHasBeenSet(false),
    m_status(StepStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_noOfSrvCompleted(0),
    m_noOfSrvCompletedHasBeenSet(false),
    m_noOfSrvFailed(0),
    m_noOfSrvFailedHasBeenSet(false),
    m_totalNoOfSrv(0),
    m_totalNoOfSrvHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_scriptLocationHasBeenSet(false)
{
}

WorkflowStepSummary::WorkflowStepSummary(JsonView jsonValue) : 
    m_stepIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_stepActionType(StepActionType::NOT_SET),
    m_stepActionTypeHasBeenSet(false),
    m_owner(Owner::NOT_SET),
    m_ownerHasBeenSet(false),
    m_previousHasBeenSet(false),
    m_nextHasBeenSet(false),
    m_status(StepStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_noOfSrvCompleted(0),
    m_noOfSrvCompletedHasBeenSet(false),
    m_noOfSrvFailed(0),
    m_noOfSrvFailedHasBeenSet(false),
    m_totalNoOfSrv(0),
    m_totalNoOfSrvHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_scriptLocationHasBeenSet(false)
{
  *this = jsonValue;
}

WorkflowStepSummary& WorkflowStepSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("stepId"))
  {
    m_stepId = jsonValue.GetString("stepId");

    m_stepIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stepActionType"))
  {
    m_stepActionType = StepActionTypeMapper::GetStepActionTypeForName(jsonValue.GetString("stepActionType"));

    m_stepActionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("owner"))
  {
    m_owner = OwnerMapper::GetOwnerForName(jsonValue.GetString("owner"));

    m_ownerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("previous"))
  {
    Aws::Utils::Array<JsonView> previousJsonList = jsonValue.GetArray("previous");
    for(unsigned previousIndex = 0; previousIndex < previousJsonList.GetLength(); ++previousIndex)
    {
      m_previous.push_back(previousJsonList[previousIndex].AsString());
    }
    m_previousHasBeenSet = true;
  }

  if(jsonValue.ValueExists("next"))
  {
    Aws::Utils::Array<JsonView> nextJsonList = jsonValue.GetArray("next");
    for(unsigned nextIndex = 0; nextIndex < nextJsonList.GetLength(); ++nextIndex)
    {
      m_next.push_back(nextJsonList[nextIndex].AsString());
    }
    m_nextHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = StepStatusMapper::GetStepStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusMessage"))
  {
    m_statusMessage = jsonValue.GetString("statusMessage");

    m_statusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("noOfSrvCompleted"))
  {
    m_noOfSrvCompleted = jsonValue.GetInteger("noOfSrvCompleted");

    m_noOfSrvCompletedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("noOfSrvFailed"))
  {
    m_noOfSrvFailed = jsonValue.GetInteger("noOfSrvFailed");

    m_noOfSrvFailedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("totalNoOfSrv"))
  {
    m_totalNoOfSrv = jsonValue.GetInteger("totalNoOfSrv");

    m_totalNoOfSrvHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scriptLocation"))
  {
    m_scriptLocation = jsonValue.GetString("scriptLocation");

    m_scriptLocationHasBeenSet = true;
  }

  return *this;
}

JsonValue WorkflowStepSummary::Jsonize() const
{
  JsonValue payload;

  if(m_stepIdHasBeenSet)
  {
   payload.WithString("stepId", m_stepId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_stepActionTypeHasBeenSet)
  {
   payload.WithString("stepActionType", StepActionTypeMapper::GetNameForStepActionType(m_stepActionType));
  }

  if(m_ownerHasBeenSet)
  {
   payload.WithString("owner", OwnerMapper::GetNameForOwner(m_owner));
  }

  if(m_previousHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> previousJsonList(m_previous.size());
   for(unsigned previousIndex = 0; previousIndex < previousJsonList.GetLength(); ++previousIndex)
   {
     previousJsonList[previousIndex].AsString(m_previous[previousIndex]);
   }
   payload.WithArray("previous", std::move(previousJsonList));

  }

  if(m_nextHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> nextJsonList(m_next.size());
   for(unsigned nextIndex = 0; nextIndex < nextJsonList.GetLength(); ++nextIndex)
   {
     nextJsonList[nextIndex].AsString(m_next[nextIndex]);
   }
   payload.WithArray("next", std::move(nextJsonList));

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", StepStatusMapper::GetNameForStepStatus(m_status));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("statusMessage", m_statusMessage);

  }

  if(m_noOfSrvCompletedHasBeenSet)
  {
   payload.WithInteger("noOfSrvCompleted", m_noOfSrvCompleted);

  }

  if(m_noOfSrvFailedHasBeenSet)
  {
   payload.WithInteger("noOfSrvFailed", m_noOfSrvFailed);

  }

  if(m_totalNoOfSrvHasBeenSet)
  {
   payload.WithInteger("totalNoOfSrv", m_totalNoOfSrv);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_scriptLocationHasBeenSet)
  {
   payload.WithString("scriptLocation", m_scriptLocation);

  }

  return payload;
}

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
