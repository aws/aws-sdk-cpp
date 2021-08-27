/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/DataSourceConfigurationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

DataSourceConfigurationsResult::DataSourceConfigurationsResult() : 
    m_cloudTrailHasBeenSet(false),
    m_dNSLogsHasBeenSet(false),
    m_flowLogsHasBeenSet(false),
    m_s3LogsHasBeenSet(false)
{
}

DataSourceConfigurationsResult::DataSourceConfigurationsResult(JsonView jsonValue) : 
    m_cloudTrailHasBeenSet(false),
    m_dNSLogsHasBeenSet(false),
    m_flowLogsHasBeenSet(false),
    m_s3LogsHasBeenSet(false)
{
  *this = jsonValue;
}

DataSourceConfigurationsResult& DataSourceConfigurationsResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cloudTrail"))
  {
    m_cloudTrail = jsonValue.GetObject("cloudTrail");

    m_cloudTrailHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dnsLogs"))
  {
    m_dNSLogs = jsonValue.GetObject("dnsLogs");

    m_dNSLogsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("flowLogs"))
  {
    m_flowLogs = jsonValue.GetObject("flowLogs");

    m_flowLogsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3Logs"))
  {
    m_s3Logs = jsonValue.GetObject("s3Logs");

    m_s3LogsHasBeenSet = true;
  }

  return *this;
}

JsonValue DataSourceConfigurationsResult::Jsonize() const
{
  JsonValue payload;

  if(m_cloudTrailHasBeenSet)
  {
   payload.WithObject("cloudTrail", m_cloudTrail.Jsonize());

  }

  if(m_dNSLogsHasBeenSet)
  {
   payload.WithObject("dnsLogs", m_dNSLogs.Jsonize());

  }

  if(m_flowLogsHasBeenSet)
  {
   payload.WithObject("flowLogs", m_flowLogs.Jsonize());

  }

  if(m_s3LogsHasBeenSet)
  {
   payload.WithObject("s3Logs", m_s3Logs.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
