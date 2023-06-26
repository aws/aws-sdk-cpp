/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/P95Metrics.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataSync
{
namespace Model
{

P95Metrics::P95Metrics() : 
    m_iOPSHasBeenSet(false),
    m_throughputHasBeenSet(false),
    m_latencyHasBeenSet(false)
{
}

P95Metrics::P95Metrics(JsonView jsonValue) : 
    m_iOPSHasBeenSet(false),
    m_throughputHasBeenSet(false),
    m_latencyHasBeenSet(false)
{
  *this = jsonValue;
}

P95Metrics& P95Metrics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IOPS"))
  {
    m_iOPS = jsonValue.GetObject("IOPS");

    m_iOPSHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Throughput"))
  {
    m_throughput = jsonValue.GetObject("Throughput");

    m_throughputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Latency"))
  {
    m_latency = jsonValue.GetObject("Latency");

    m_latencyHasBeenSet = true;
  }

  return *this;
}

JsonValue P95Metrics::Jsonize() const
{
  JsonValue payload;

  if(m_iOPSHasBeenSet)
  {
   payload.WithObject("IOPS", m_iOPS.Jsonize());

  }

  if(m_throughputHasBeenSet)
  {
   payload.WithObject("Throughput", m_throughput.Jsonize());

  }

  if(m_latencyHasBeenSet)
  {
   payload.WithObject("Latency", m_latency.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DataSync
} // namespace Aws
