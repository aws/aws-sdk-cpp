/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsRedshiftClusterDeferredMaintenanceWindow.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsRedshiftClusterDeferredMaintenanceWindow::AwsRedshiftClusterDeferredMaintenanceWindow() : 
    m_deferMaintenanceEndTimeHasBeenSet(false),
    m_deferMaintenanceIdentifierHasBeenSet(false),
    m_deferMaintenanceStartTimeHasBeenSet(false)
{
}

AwsRedshiftClusterDeferredMaintenanceWindow::AwsRedshiftClusterDeferredMaintenanceWindow(JsonView jsonValue) : 
    m_deferMaintenanceEndTimeHasBeenSet(false),
    m_deferMaintenanceIdentifierHasBeenSet(false),
    m_deferMaintenanceStartTimeHasBeenSet(false)
{
  *this = jsonValue;
}

AwsRedshiftClusterDeferredMaintenanceWindow& AwsRedshiftClusterDeferredMaintenanceWindow::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DeferMaintenanceEndTime"))
  {
    m_deferMaintenanceEndTime = jsonValue.GetString("DeferMaintenanceEndTime");

    m_deferMaintenanceEndTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeferMaintenanceIdentifier"))
  {
    m_deferMaintenanceIdentifier = jsonValue.GetString("DeferMaintenanceIdentifier");

    m_deferMaintenanceIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeferMaintenanceStartTime"))
  {
    m_deferMaintenanceStartTime = jsonValue.GetString("DeferMaintenanceStartTime");

    m_deferMaintenanceStartTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsRedshiftClusterDeferredMaintenanceWindow::Jsonize() const
{
  JsonValue payload;

  if(m_deferMaintenanceEndTimeHasBeenSet)
  {
   payload.WithString("DeferMaintenanceEndTime", m_deferMaintenanceEndTime);

  }

  if(m_deferMaintenanceIdentifierHasBeenSet)
  {
   payload.WithString("DeferMaintenanceIdentifier", m_deferMaintenanceIdentifier);

  }

  if(m_deferMaintenanceStartTimeHasBeenSet)
  {
   payload.WithString("DeferMaintenanceStartTime", m_deferMaintenanceStartTime);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
