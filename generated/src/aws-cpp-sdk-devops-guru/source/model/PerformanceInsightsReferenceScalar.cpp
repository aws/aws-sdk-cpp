/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/PerformanceInsightsReferenceScalar.h>
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

PerformanceInsightsReferenceScalar::PerformanceInsightsReferenceScalar() : 
    m_value(0.0),
    m_valueHasBeenSet(false)
{
}

PerformanceInsightsReferenceScalar::PerformanceInsightsReferenceScalar(JsonView jsonValue) : 
    m_value(0.0),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

PerformanceInsightsReferenceScalar& PerformanceInsightsReferenceScalar::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetDouble("Value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue PerformanceInsightsReferenceScalar::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithDouble("Value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
