/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fis/model/ExperimentTemplateReportConfigurationDataSourcesInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FIS
{
namespace Model
{

ExperimentTemplateReportConfigurationDataSourcesInput::ExperimentTemplateReportConfigurationDataSourcesInput(JsonView jsonValue)
{
  *this = jsonValue;
}

ExperimentTemplateReportConfigurationDataSourcesInput& ExperimentTemplateReportConfigurationDataSourcesInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cloudWatchDashboards"))
  {
    Aws::Utils::Array<JsonView> cloudWatchDashboardsJsonList = jsonValue.GetArray("cloudWatchDashboards");
    for(unsigned cloudWatchDashboardsIndex = 0; cloudWatchDashboardsIndex < cloudWatchDashboardsJsonList.GetLength(); ++cloudWatchDashboardsIndex)
    {
      m_cloudWatchDashboards.push_back(cloudWatchDashboardsJsonList[cloudWatchDashboardsIndex].AsObject());
    }
    m_cloudWatchDashboardsHasBeenSet = true;
  }
  return *this;
}

JsonValue ExperimentTemplateReportConfigurationDataSourcesInput::Jsonize() const
{
  JsonValue payload;

  if(m_cloudWatchDashboardsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> cloudWatchDashboardsJsonList(m_cloudWatchDashboards.size());
   for(unsigned cloudWatchDashboardsIndex = 0; cloudWatchDashboardsIndex < cloudWatchDashboardsJsonList.GetLength(); ++cloudWatchDashboardsIndex)
   {
     cloudWatchDashboardsJsonList[cloudWatchDashboardsIndex].AsObject(m_cloudWatchDashboards[cloudWatchDashboardsIndex].Jsonize());
   }
   payload.WithArray("cloudWatchDashboards", std::move(cloudWatchDashboardsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace FIS
} // namespace Aws
