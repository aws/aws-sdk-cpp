/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/AudienceExportJobSummary.h>
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

AudienceExportJobSummary::AudienceExportJobSummary() : 
    m_audienceGenerationJobArnHasBeenSet(false),
    m_audienceSizeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_outputLocationHasBeenSet(false),
    m_status(AudienceExportJobStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusDetailsHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

AudienceExportJobSummary::AudienceExportJobSummary(JsonView jsonValue) : 
    m_audienceGenerationJobArnHasBeenSet(false),
    m_audienceSizeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_outputLocationHasBeenSet(false),
    m_status(AudienceExportJobStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusDetailsHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

AudienceExportJobSummary& AudienceExportJobSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("audienceGenerationJobArn"))
  {
    m_audienceGenerationJobArn = jsonValue.GetString("audienceGenerationJobArn");

    m_audienceGenerationJobArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("audienceSize"))
  {
    m_audienceSize = jsonValue.GetObject("audienceSize");

    m_audienceSizeHasBeenSet = true;
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

  if(jsonValue.ValueExists("outputLocation"))
  {
    m_outputLocation = jsonValue.GetString("outputLocation");

    m_outputLocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = AudienceExportJobStatusMapper::GetAudienceExportJobStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusDetails"))
  {
    m_statusDetails = jsonValue.GetObject("statusDetails");

    m_statusDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updateTime"))
  {
    m_updateTime = jsonValue.GetString("updateTime");

    m_updateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue AudienceExportJobSummary::Jsonize() const
{
  JsonValue payload;

  if(m_audienceGenerationJobArnHasBeenSet)
  {
   payload.WithString("audienceGenerationJobArn", m_audienceGenerationJobArn);

  }

  if(m_audienceSizeHasBeenSet)
  {
   payload.WithObject("audienceSize", m_audienceSize.Jsonize());

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

  if(m_outputLocationHasBeenSet)
  {
   payload.WithString("outputLocation", m_outputLocation);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", AudienceExportJobStatusMapper::GetNameForAudienceExportJobStatus(m_status));
  }

  if(m_statusDetailsHasBeenSet)
  {
   payload.WithObject("statusDetails", m_statusDetails.Jsonize());

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
