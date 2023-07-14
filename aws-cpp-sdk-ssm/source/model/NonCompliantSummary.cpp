/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/NonCompliantSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

NonCompliantSummary::NonCompliantSummary() : 
    m_nonCompliantCount(0),
    m_nonCompliantCountHasBeenSet(false),
    m_severitySummaryHasBeenSet(false)
{
}

NonCompliantSummary::NonCompliantSummary(JsonView jsonValue) : 
    m_nonCompliantCount(0),
    m_nonCompliantCountHasBeenSet(false),
    m_severitySummaryHasBeenSet(false)
{
  *this = jsonValue;
}

NonCompliantSummary& NonCompliantSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NonCompliantCount"))
  {
    m_nonCompliantCount = jsonValue.GetInteger("NonCompliantCount");

    m_nonCompliantCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SeveritySummary"))
  {
    m_severitySummary = jsonValue.GetObject("SeveritySummary");

    m_severitySummaryHasBeenSet = true;
  }

  return *this;
}

JsonValue NonCompliantSummary::Jsonize() const
{
  JsonValue payload;

  if(m_nonCompliantCountHasBeenSet)
  {
   payload.WithInteger("NonCompliantCount", m_nonCompliantCount);

  }

  if(m_severitySummaryHasBeenSet)
  {
   payload.WithObject("SeveritySummary", m_severitySummary.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
