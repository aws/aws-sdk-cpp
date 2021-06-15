/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/AggregateConformancePackComplianceCount.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConfigService
{
namespace Model
{

AggregateConformancePackComplianceCount::AggregateConformancePackComplianceCount() : 
    m_compliantConformancePackCount(0),
    m_compliantConformancePackCountHasBeenSet(false),
    m_nonCompliantConformancePackCount(0),
    m_nonCompliantConformancePackCountHasBeenSet(false)
{
}

AggregateConformancePackComplianceCount::AggregateConformancePackComplianceCount(JsonView jsonValue) : 
    m_compliantConformancePackCount(0),
    m_compliantConformancePackCountHasBeenSet(false),
    m_nonCompliantConformancePackCount(0),
    m_nonCompliantConformancePackCountHasBeenSet(false)
{
  *this = jsonValue;
}

AggregateConformancePackComplianceCount& AggregateConformancePackComplianceCount::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CompliantConformancePackCount"))
  {
    m_compliantConformancePackCount = jsonValue.GetInteger("CompliantConformancePackCount");

    m_compliantConformancePackCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NonCompliantConformancePackCount"))
  {
    m_nonCompliantConformancePackCount = jsonValue.GetInteger("NonCompliantConformancePackCount");

    m_nonCompliantConformancePackCountHasBeenSet = true;
  }

  return *this;
}

JsonValue AggregateConformancePackComplianceCount::Jsonize() const
{
  JsonValue payload;

  if(m_compliantConformancePackCountHasBeenSet)
  {
   payload.WithInteger("CompliantConformancePackCount", m_compliantConformancePackCount);

  }

  if(m_nonCompliantConformancePackCountHasBeenSet)
  {
   payload.WithInteger("NonCompliantConformancePackCount", m_nonCompliantConformancePackCount);

  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
