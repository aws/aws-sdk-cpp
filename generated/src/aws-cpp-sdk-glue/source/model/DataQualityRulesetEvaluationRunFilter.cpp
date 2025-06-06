﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/DataQualityRulesetEvaluationRunFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

DataQualityRulesetEvaluationRunFilter::DataQualityRulesetEvaluationRunFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

DataQualityRulesetEvaluationRunFilter& DataQualityRulesetEvaluationRunFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataSource"))
  {
    m_dataSource = jsonValue.GetObject("DataSource");
    m_dataSourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StartedBefore"))
  {
    m_startedBefore = jsonValue.GetDouble("StartedBefore");
    m_startedBeforeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StartedAfter"))
  {
    m_startedAfter = jsonValue.GetDouble("StartedAfter");
    m_startedAfterHasBeenSet = true;
  }
  return *this;
}

JsonValue DataQualityRulesetEvaluationRunFilter::Jsonize() const
{
  JsonValue payload;

  if(m_dataSourceHasBeenSet)
  {
   payload.WithObject("DataSource", m_dataSource.Jsonize());

  }

  if(m_startedBeforeHasBeenSet)
  {
   payload.WithDouble("StartedBefore", m_startedBefore.SecondsWithMSPrecision());
  }

  if(m_startedAfterHasBeenSet)
  {
   payload.WithDouble("StartedAfter", m_startedAfter.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
