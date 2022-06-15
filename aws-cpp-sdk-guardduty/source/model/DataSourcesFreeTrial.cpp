/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/DataSourcesFreeTrial.h>
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

DataSourcesFreeTrial::DataSourcesFreeTrial() : 
    m_cloudTrailHasBeenSet(false),
    m_dnsLogsHasBeenSet(false),
    m_flowLogsHasBeenSet(false),
    m_s3LogsHasBeenSet(false),
    m_kubernetesHasBeenSet(false)
{
}

DataSourcesFreeTrial::DataSourcesFreeTrial(JsonView jsonValue) : 
    m_cloudTrailHasBeenSet(false),
    m_dnsLogsHasBeenSet(false),
    m_flowLogsHasBeenSet(false),
    m_s3LogsHasBeenSet(false),
    m_kubernetesHasBeenSet(false)
{
  *this = jsonValue;
}

DataSourcesFreeTrial& DataSourcesFreeTrial::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cloudTrail"))
  {
    m_cloudTrail = jsonValue.GetObject("cloudTrail");

    m_cloudTrailHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dnsLogs"))
  {
    m_dnsLogs = jsonValue.GetObject("dnsLogs");

    m_dnsLogsHasBeenSet = true;
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

  if(jsonValue.ValueExists("kubernetes"))
  {
    m_kubernetes = jsonValue.GetObject("kubernetes");

    m_kubernetesHasBeenSet = true;
  }

  return *this;
}

JsonValue DataSourcesFreeTrial::Jsonize() const
{
  JsonValue payload;

  if(m_cloudTrailHasBeenSet)
  {
   payload.WithObject("cloudTrail", m_cloudTrail.Jsonize());

  }

  if(m_dnsLogsHasBeenSet)
  {
   payload.WithObject("dnsLogs", m_dnsLogs.Jsonize());

  }

  if(m_flowLogsHasBeenSet)
  {
   payload.WithObject("flowLogs", m_flowLogs.Jsonize());

  }

  if(m_s3LogsHasBeenSet)
  {
   payload.WithObject("s3Logs", m_s3Logs.Jsonize());

  }

  if(m_kubernetesHasBeenSet)
  {
   payload.WithObject("kubernetes", m_kubernetes.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
