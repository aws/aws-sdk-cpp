/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/AudienceGenerationJobSummary.h>
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

AudienceGenerationJobSummary::AudienceGenerationJobSummary() : 
    m_audienceGenerationJobArnHasBeenSet(false),
    m_collaborationIdHasBeenSet(false),
    m_configuredAudienceModelArnHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_startedByHasBeenSet(false),
    m_status(AudienceGenerationJobStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

AudienceGenerationJobSummary::AudienceGenerationJobSummary(JsonView jsonValue) : 
    m_audienceGenerationJobArnHasBeenSet(false),
    m_collaborationIdHasBeenSet(false),
    m_configuredAudienceModelArnHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_startedByHasBeenSet(false),
    m_status(AudienceGenerationJobStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

AudienceGenerationJobSummary& AudienceGenerationJobSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("audienceGenerationJobArn"))
  {
    m_audienceGenerationJobArn = jsonValue.GetString("audienceGenerationJobArn");

    m_audienceGenerationJobArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("collaborationId"))
  {
    m_collaborationId = jsonValue.GetString("collaborationId");

    m_collaborationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("configuredAudienceModelArn"))
  {
    m_configuredAudienceModelArn = jsonValue.GetString("configuredAudienceModelArn");

    m_configuredAudienceModelArnHasBeenSet = true;
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

  if(jsonValue.ValueExists("startedBy"))
  {
    m_startedBy = jsonValue.GetString("startedBy");

    m_startedByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = AudienceGenerationJobStatusMapper::GetAudienceGenerationJobStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updateTime"))
  {
    m_updateTime = jsonValue.GetString("updateTime");

    m_updateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue AudienceGenerationJobSummary::Jsonize() const
{
  JsonValue payload;

  if(m_audienceGenerationJobArnHasBeenSet)
  {
   payload.WithString("audienceGenerationJobArn", m_audienceGenerationJobArn);

  }

  if(m_collaborationIdHasBeenSet)
  {
   payload.WithString("collaborationId", m_collaborationId);

  }

  if(m_configuredAudienceModelArnHasBeenSet)
  {
   payload.WithString("configuredAudienceModelArn", m_configuredAudienceModelArn);

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

  if(m_startedByHasBeenSet)
  {
   payload.WithString("startedBy", m_startedBy);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", AudienceGenerationJobStatusMapper::GetNameForAudienceGenerationJobStatus(m_status));
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
