/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/CvssScoreAdjustment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

CvssScoreAdjustment::CvssScoreAdjustment() : 
    m_metricHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
}

CvssScoreAdjustment::CvssScoreAdjustment(JsonView jsonValue) : 
    m_metricHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
  *this = jsonValue;
}

CvssScoreAdjustment& CvssScoreAdjustment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("metric"))
  {
    m_metric = jsonValue.GetString("metric");

    m_metricHasBeenSet = true;
  }

  if(jsonValue.ValueExists("reason"))
  {
    m_reason = jsonValue.GetString("reason");

    m_reasonHasBeenSet = true;
  }

  return *this;
}

JsonValue CvssScoreAdjustment::Jsonize() const
{
  JsonValue payload;

  if(m_metricHasBeenSet)
  {
   payload.WithString("metric", m_metric);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("reason", m_reason);

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
