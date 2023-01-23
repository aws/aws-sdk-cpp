/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutvision/model/DatasetImageStats.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LookoutforVision
{
namespace Model
{

DatasetImageStats::DatasetImageStats() : 
    m_total(0),
    m_totalHasBeenSet(false),
    m_labeled(0),
    m_labeledHasBeenSet(false),
    m_normal(0),
    m_normalHasBeenSet(false),
    m_anomaly(0),
    m_anomalyHasBeenSet(false)
{
}

DatasetImageStats::DatasetImageStats(JsonView jsonValue) : 
    m_total(0),
    m_totalHasBeenSet(false),
    m_labeled(0),
    m_labeledHasBeenSet(false),
    m_normal(0),
    m_normalHasBeenSet(false),
    m_anomaly(0),
    m_anomalyHasBeenSet(false)
{
  *this = jsonValue;
}

DatasetImageStats& DatasetImageStats::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Total"))
  {
    m_total = jsonValue.GetInteger("Total");

    m_totalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Labeled"))
  {
    m_labeled = jsonValue.GetInteger("Labeled");

    m_labeledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Normal"))
  {
    m_normal = jsonValue.GetInteger("Normal");

    m_normalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Anomaly"))
  {
    m_anomaly = jsonValue.GetInteger("Anomaly");

    m_anomalyHasBeenSet = true;
  }

  return *this;
}

JsonValue DatasetImageStats::Jsonize() const
{
  JsonValue payload;

  if(m_totalHasBeenSet)
  {
   payload.WithInteger("Total", m_total);

  }

  if(m_labeledHasBeenSet)
  {
   payload.WithInteger("Labeled", m_labeled);

  }

  if(m_normalHasBeenSet)
  {
   payload.WithInteger("Normal", m_normal);

  }

  if(m_anomalyHasBeenSet)
  {
   payload.WithInteger("Anomaly", m_anomaly);

  }

  return payload;
}

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
