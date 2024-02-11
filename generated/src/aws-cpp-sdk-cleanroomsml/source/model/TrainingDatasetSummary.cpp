/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/TrainingDatasetSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRoomsML
{
namespace Model
{

TrainingDatasetSummary::TrainingDatasetSummary() : 
    m_createTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(TrainingDatasetStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_trainingDatasetArnHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

TrainingDatasetSummary::TrainingDatasetSummary(JsonView jsonValue) : 
    m_createTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(TrainingDatasetStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_trainingDatasetArnHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

TrainingDatasetSummary& TrainingDatasetSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("createTime"))
  {
    m_createTime = jsonValue.GetString("createTime");

    m_createTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = TrainingDatasetStatusMapper::GetTrainingDatasetStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("trainingDatasetArn"))
  {
    m_trainingDatasetArn = jsonValue.GetString("trainingDatasetArn");

    m_trainingDatasetArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updateTime"))
  {
    m_updateTime = jsonValue.GetString("updateTime");

    m_updateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue TrainingDatasetSummary::Jsonize() const
{
  JsonValue payload;

  if(m_createTimeHasBeenSet)
  {
   payload.WithString("createTime", m_createTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", TrainingDatasetStatusMapper::GetNameForTrainingDatasetStatus(m_status));
  }

  if(m_trainingDatasetArnHasBeenSet)
  {
   payload.WithString("trainingDatasetArn", m_trainingDatasetArn);

  }

  if(m_updateTimeHasBeenSet)
  {
   payload.WithString("updateTime", m_updateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
