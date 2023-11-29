/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/ConfiguredAudienceModelSummary.h>
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

ConfiguredAudienceModelSummary::ConfiguredAudienceModelSummary() : 
    m_audienceModelArnHasBeenSet(false),
    m_configuredAudienceModelArnHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_outputConfigHasBeenSet(false),
    m_status(ConfiguredAudienceModelStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

ConfiguredAudienceModelSummary::ConfiguredAudienceModelSummary(JsonView jsonValue) : 
    m_audienceModelArnHasBeenSet(false),
    m_configuredAudienceModelArnHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_outputConfigHasBeenSet(false),
    m_status(ConfiguredAudienceModelStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ConfiguredAudienceModelSummary& ConfiguredAudienceModelSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("audienceModelArn"))
  {
    m_audienceModelArn = jsonValue.GetString("audienceModelArn");

    m_audienceModelArnHasBeenSet = true;
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

  if(jsonValue.ValueExists("outputConfig"))
  {
    m_outputConfig = jsonValue.GetObject("outputConfig");

    m_outputConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ConfiguredAudienceModelStatusMapper::GetConfiguredAudienceModelStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updateTime"))
  {
    m_updateTime = jsonValue.GetString("updateTime");

    m_updateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue ConfiguredAudienceModelSummary::Jsonize() const
{
  JsonValue payload;

  if(m_audienceModelArnHasBeenSet)
  {
   payload.WithString("audienceModelArn", m_audienceModelArn);

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

  if(m_outputConfigHasBeenSet)
  {
   payload.WithObject("outputConfig", m_outputConfig.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ConfiguredAudienceModelStatusMapper::GetNameForConfiguredAudienceModelStatus(m_status));
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
