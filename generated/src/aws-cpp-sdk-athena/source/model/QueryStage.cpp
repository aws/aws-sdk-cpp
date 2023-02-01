/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/QueryStage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Athena
{
namespace Model
{

QueryStage::QueryStage() : 
    m_stageId(0),
    m_stageIdHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_outputBytes(0),
    m_outputBytesHasBeenSet(false),
    m_outputRows(0),
    m_outputRowsHasBeenSet(false),
    m_inputBytes(0),
    m_inputBytesHasBeenSet(false),
    m_inputRows(0),
    m_inputRowsHasBeenSet(false),
    m_executionTime(0),
    m_executionTimeHasBeenSet(false),
    m_queryStagePlanHasBeenSet(false),
    m_subStagesHasBeenSet(false)
{
}

QueryStage::QueryStage(JsonView jsonValue) : 
    m_stageId(0),
    m_stageIdHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_outputBytes(0),
    m_outputBytesHasBeenSet(false),
    m_outputRows(0),
    m_outputRowsHasBeenSet(false),
    m_inputBytes(0),
    m_inputBytesHasBeenSet(false),
    m_inputRows(0),
    m_inputRowsHasBeenSet(false),
    m_executionTime(0),
    m_executionTimeHasBeenSet(false),
    m_queryStagePlanHasBeenSet(false),
    m_subStagesHasBeenSet(false)
{
  *this = jsonValue;
}

QueryStage& QueryStage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StageId"))
  {
    m_stageId = jsonValue.GetInt64("StageId");

    m_stageIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = jsonValue.GetString("State");

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputBytes"))
  {
    m_outputBytes = jsonValue.GetInt64("OutputBytes");

    m_outputBytesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputRows"))
  {
    m_outputRows = jsonValue.GetInt64("OutputRows");

    m_outputRowsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InputBytes"))
  {
    m_inputBytes = jsonValue.GetInt64("InputBytes");

    m_inputBytesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InputRows"))
  {
    m_inputRows = jsonValue.GetInt64("InputRows");

    m_inputRowsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExecutionTime"))
  {
    m_executionTime = jsonValue.GetInt64("ExecutionTime");

    m_executionTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QueryStagePlan"))
  {
    m_queryStagePlan = jsonValue.GetObject("QueryStagePlan");

    m_queryStagePlanHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubStages"))
  {
    Aws::Utils::Array<JsonView> subStagesJsonList = jsonValue.GetArray("SubStages");
    for(unsigned subStagesIndex = 0; subStagesIndex < subStagesJsonList.GetLength(); ++subStagesIndex)
    {
      m_subStages.push_back(subStagesJsonList[subStagesIndex].AsObject());
    }
    m_subStagesHasBeenSet = true;
  }

  return *this;
}

JsonValue QueryStage::Jsonize() const
{
  JsonValue payload;

  if(m_stageIdHasBeenSet)
  {
   payload.WithInt64("StageId", m_stageId);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", m_state);

  }

  if(m_outputBytesHasBeenSet)
  {
   payload.WithInt64("OutputBytes", m_outputBytes);

  }

  if(m_outputRowsHasBeenSet)
  {
   payload.WithInt64("OutputRows", m_outputRows);

  }

  if(m_inputBytesHasBeenSet)
  {
   payload.WithInt64("InputBytes", m_inputBytes);

  }

  if(m_inputRowsHasBeenSet)
  {
   payload.WithInt64("InputRows", m_inputRows);

  }

  if(m_executionTimeHasBeenSet)
  {
   payload.WithInt64("ExecutionTime", m_executionTime);

  }

  if(m_queryStagePlanHasBeenSet)
  {
   payload.WithObject("QueryStagePlan", m_queryStagePlan.Jsonize());

  }

  if(m_subStagesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subStagesJsonList(m_subStages.size());
   for(unsigned subStagesIndex = 0; subStagesIndex < subStagesJsonList.GetLength(); ++subStagesIndex)
   {
     subStagesJsonList[subStagesIndex].AsObject(m_subStages[subStagesIndex].Jsonize());
   }
   payload.WithArray("SubStages", std::move(subStagesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Athena
} // namespace Aws
