/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fis/model/ExperimentReportConfigurationCloudWatchDashboard.h>
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

ExperimentReportConfigurationCloudWatchDashboard::ExperimentReportConfigurationCloudWatchDashboard(JsonView jsonValue)
{
  *this = jsonValue;
}

ExperimentReportConfigurationCloudWatchDashboard& ExperimentReportConfigurationCloudWatchDashboard::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dashboardIdentifier"))
  {
    m_dashboardIdentifier = jsonValue.GetString("dashboardIdentifier");
    m_dashboardIdentifierHasBeenSet = true;
  }
  return *this;
}

JsonValue ExperimentReportConfigurationCloudWatchDashboard::Jsonize() const
{
  JsonValue payload;

  if(m_dashboardIdentifierHasBeenSet)
  {
   payload.WithString("dashboardIdentifier", m_dashboardIdentifier);

  }

  return payload;
}

} // namespace Model
} // namespace FIS
} // namespace Aws
