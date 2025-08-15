/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amp/model/WorkspaceConfigurationDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PrometheusService
{
namespace Model
{

WorkspaceConfigurationDescription::WorkspaceConfigurationDescription(JsonView jsonValue)
{
  *this = jsonValue;
}

WorkspaceConfigurationDescription& WorkspaceConfigurationDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetObject("status");
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("limitsPerLabelSet"))
  {
    Aws::Utils::Array<JsonView> limitsPerLabelSetJsonList = jsonValue.GetArray("limitsPerLabelSet");
    for(unsigned limitsPerLabelSetIndex = 0; limitsPerLabelSetIndex < limitsPerLabelSetJsonList.GetLength(); ++limitsPerLabelSetIndex)
    {
      m_limitsPerLabelSet.push_back(limitsPerLabelSetJsonList[limitsPerLabelSetIndex].AsObject());
    }
    m_limitsPerLabelSetHasBeenSet = true;
  }
  if(jsonValue.ValueExists("retentionPeriodInDays"))
  {
    m_retentionPeriodInDays = jsonValue.GetInteger("retentionPeriodInDays");
    m_retentionPeriodInDaysHasBeenSet = true;
  }
  return *this;
}

JsonValue WorkspaceConfigurationDescription::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithObject("status", m_status.Jsonize());

  }

  if(m_limitsPerLabelSetHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> limitsPerLabelSetJsonList(m_limitsPerLabelSet.size());
   for(unsigned limitsPerLabelSetIndex = 0; limitsPerLabelSetIndex < limitsPerLabelSetJsonList.GetLength(); ++limitsPerLabelSetIndex)
   {
     limitsPerLabelSetJsonList[limitsPerLabelSetIndex].AsObject(m_limitsPerLabelSet[limitsPerLabelSetIndex].Jsonize());
   }
   payload.WithArray("limitsPerLabelSet", std::move(limitsPerLabelSetJsonList));

  }

  if(m_retentionPeriodInDaysHasBeenSet)
  {
   payload.WithInteger("retentionPeriodInDays", m_retentionPeriodInDays);

  }

  return payload;
}

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
