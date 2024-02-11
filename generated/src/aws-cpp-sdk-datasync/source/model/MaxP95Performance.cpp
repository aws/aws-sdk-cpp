/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/MaxP95Performance.h>
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

MaxP95Performance::MaxP95Performance() : 
    m_iopsRead(0.0),
    m_iopsReadHasBeenSet(false),
    m_iopsWrite(0.0),
    m_iopsWriteHasBeenSet(false),
    m_iopsOther(0.0),
    m_iopsOtherHasBeenSet(false),
    m_iopsTotal(0.0),
    m_iopsTotalHasBeenSet(false),
    m_throughputRead(0.0),
    m_throughputReadHasBeenSet(false),
    m_throughputWrite(0.0),
    m_throughputWriteHasBeenSet(false),
    m_throughputOther(0.0),
    m_throughputOtherHasBeenSet(false),
    m_throughputTotal(0.0),
    m_throughputTotalHasBeenSet(false),
    m_latencyRead(0.0),
    m_latencyReadHasBeenSet(false),
    m_latencyWrite(0.0),
    m_latencyWriteHasBeenSet(false),
    m_latencyOther(0.0),
    m_latencyOtherHasBeenSet(false)
{
}

MaxP95Performance::MaxP95Performance(JsonView jsonValue) : 
    m_iopsRead(0.0),
    m_iopsReadHasBeenSet(false),
    m_iopsWrite(0.0),
    m_iopsWriteHasBeenSet(false),
    m_iopsOther(0.0),
    m_iopsOtherHasBeenSet(false),
    m_iopsTotal(0.0),
    m_iopsTotalHasBeenSet(false),
    m_throughputRead(0.0),
    m_throughputReadHasBeenSet(false),
    m_throughputWrite(0.0),
    m_throughputWriteHasBeenSet(false),
    m_throughputOther(0.0),
    m_throughputOtherHasBeenSet(false),
    m_throughputTotal(0.0),
    m_throughputTotalHasBeenSet(false),
    m_latencyRead(0.0),
    m_latencyReadHasBeenSet(false),
    m_latencyWrite(0.0),
    m_latencyWriteHasBeenSet(false),
    m_latencyOther(0.0),
    m_latencyOtherHasBeenSet(false)
{
  *this = jsonValue;
}

MaxP95Performance& MaxP95Performance::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IopsRead"))
  {
    m_iopsRead = jsonValue.GetDouble("IopsRead");

    m_iopsReadHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IopsWrite"))
  {
    m_iopsWrite = jsonValue.GetDouble("IopsWrite");

    m_iopsWriteHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IopsOther"))
  {
    m_iopsOther = jsonValue.GetDouble("IopsOther");

    m_iopsOtherHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IopsTotal"))
  {
    m_iopsTotal = jsonValue.GetDouble("IopsTotal");

    m_iopsTotalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ThroughputRead"))
  {
    m_throughputRead = jsonValue.GetDouble("ThroughputRead");

    m_throughputReadHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ThroughputWrite"))
  {
    m_throughputWrite = jsonValue.GetDouble("ThroughputWrite");

    m_throughputWriteHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ThroughputOther"))
  {
    m_throughputOther = jsonValue.GetDouble("ThroughputOther");

    m_throughputOtherHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ThroughputTotal"))
  {
    m_throughputTotal = jsonValue.GetDouble("ThroughputTotal");

    m_throughputTotalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LatencyRead"))
  {
    m_latencyRead = jsonValue.GetDouble("LatencyRead");

    m_latencyReadHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LatencyWrite"))
  {
    m_latencyWrite = jsonValue.GetDouble("LatencyWrite");

    m_latencyWriteHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LatencyOther"))
  {
    m_latencyOther = jsonValue.GetDouble("LatencyOther");

    m_latencyOtherHasBeenSet = true;
  }

  return *this;
}

JsonValue MaxP95Performance::Jsonize() const
{
  JsonValue payload;

  if(m_iopsReadHasBeenSet)
  {
   payload.WithDouble("IopsRead", m_iopsRead);

  }

  if(m_iopsWriteHasBeenSet)
  {
   payload.WithDouble("IopsWrite", m_iopsWrite);

  }

  if(m_iopsOtherHasBeenSet)
  {
   payload.WithDouble("IopsOther", m_iopsOther);

  }

  if(m_iopsTotalHasBeenSet)
  {
   payload.WithDouble("IopsTotal", m_iopsTotal);

  }

  if(m_throughputReadHasBeenSet)
  {
   payload.WithDouble("ThroughputRead", m_throughputRead);

  }

  if(m_throughputWriteHasBeenSet)
  {
   payload.WithDouble("ThroughputWrite", m_throughputWrite);

  }

  if(m_throughputOtherHasBeenSet)
  {
   payload.WithDouble("ThroughputOther", m_throughputOther);

  }

  if(m_throughputTotalHasBeenSet)
  {
   payload.WithDouble("ThroughputTotal", m_throughputTotal);

  }

  if(m_latencyReadHasBeenSet)
  {
   payload.WithDouble("LatencyRead", m_latencyRead);

  }

  if(m_latencyWriteHasBeenSet)
  {
   payload.WithDouble("LatencyWrite", m_latencyWrite);

  }

  if(m_latencyOtherHasBeenSet)
  {
   payload.WithDouble("LatencyOther", m_latencyOther);

  }

  return payload;
}

} // namespace Model
} // namespace DataSync
} // namespace Aws
