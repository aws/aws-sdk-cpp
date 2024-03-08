/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/AudienceModelSummary.h>
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

AudienceModelSummary::AudienceModelSummary() : 
    m_audienceModelArnHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(AudienceModelStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_trainingDatasetArnHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

AudienceModelSummary::AudienceModelSummary(JsonView jsonValue) : 
    m_audienceModelArnHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(AudienceModelStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_trainingDatasetArnHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

AudienceModelSummary& AudienceModelSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("audienceModelArn"))
  {
    m_audienceModelArn = jsonValue.GetString("audienceModelArn");

    m_audienceModelArnHasBeenSet = true;
  }

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
    m_status = AudienceModelStatusMapper::GetAudienceModelStatusForName(jsonValue.GetString("status"));

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

JsonValue AudienceModelSummary::Jsonize() const
{
  JsonValue payload;

  if(m_audienceModelArnHasBeenSet)
  {
   payload.WithString("audienceModelArn", m_audienceModelArn);

  }

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
   payload.WithString("status", AudienceModelStatusMapper::GetNameForAudienceModelStatus(m_status));
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
