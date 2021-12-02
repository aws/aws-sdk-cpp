/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/PerformanceInsightsReferenceData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{

PerformanceInsightsReferenceData::PerformanceInsightsReferenceData() : 
    m_nameHasBeenSet(false),
    m_comparisonValuesHasBeenSet(false)
{
}

PerformanceInsightsReferenceData::PerformanceInsightsReferenceData(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_comparisonValuesHasBeenSet(false)
{
  *this = jsonValue;
}

PerformanceInsightsReferenceData& PerformanceInsightsReferenceData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ComparisonValues"))
  {
    m_comparisonValues = jsonValue.GetObject("ComparisonValues");

    m_comparisonValuesHasBeenSet = true;
  }

  return *this;
}

JsonValue PerformanceInsightsReferenceData::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_comparisonValuesHasBeenSet)
  {
   payload.WithObject("ComparisonValues", m_comparisonValues.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
