/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/OpenSearchResourceConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

OpenSearchResourceConfig::OpenSearchResourceConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

OpenSearchResourceConfig& OpenSearchResourceConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("kmsKeyArn"))
  {
    m_kmsKeyArn = jsonValue.GetString("kmsKeyArn");
    m_kmsKeyArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dataSourceRoleArn"))
  {
    m_dataSourceRoleArn = jsonValue.GetString("dataSourceRoleArn");
    m_dataSourceRoleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dashboardViewerPrincipals"))
  {
    Aws::Utils::Array<JsonView> dashboardViewerPrincipalsJsonList = jsonValue.GetArray("dashboardViewerPrincipals");
    for(unsigned dashboardViewerPrincipalsIndex = 0; dashboardViewerPrincipalsIndex < dashboardViewerPrincipalsJsonList.GetLength(); ++dashboardViewerPrincipalsIndex)
    {
      m_dashboardViewerPrincipals.push_back(dashboardViewerPrincipalsJsonList[dashboardViewerPrincipalsIndex].AsString());
    }
    m_dashboardViewerPrincipalsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("applicationArn"))
  {
    m_applicationArn = jsonValue.GetString("applicationArn");
    m_applicationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("retentionDays"))
  {
    m_retentionDays = jsonValue.GetInteger("retentionDays");
    m_retentionDaysHasBeenSet = true;
  }
  return *this;
}

JsonValue OpenSearchResourceConfig::Jsonize() const
{
  JsonValue payload;

  if(m_kmsKeyArnHasBeenSet)
  {
   payload.WithString("kmsKeyArn", m_kmsKeyArn);

  }

  if(m_dataSourceRoleArnHasBeenSet)
  {
   payload.WithString("dataSourceRoleArn", m_dataSourceRoleArn);

  }

  if(m_dashboardViewerPrincipalsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dashboardViewerPrincipalsJsonList(m_dashboardViewerPrincipals.size());
   for(unsigned dashboardViewerPrincipalsIndex = 0; dashboardViewerPrincipalsIndex < dashboardViewerPrincipalsJsonList.GetLength(); ++dashboardViewerPrincipalsIndex)
   {
     dashboardViewerPrincipalsJsonList[dashboardViewerPrincipalsIndex].AsString(m_dashboardViewerPrincipals[dashboardViewerPrincipalsIndex]);
   }
   payload.WithArray("dashboardViewerPrincipals", std::move(dashboardViewerPrincipalsJsonList));

  }

  if(m_applicationArnHasBeenSet)
  {
   payload.WithString("applicationArn", m_applicationArn);

  }

  if(m_retentionDaysHasBeenSet)
  {
   payload.WithInteger("retentionDays", m_retentionDays);

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
