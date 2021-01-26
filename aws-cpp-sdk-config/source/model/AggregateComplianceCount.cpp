/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/AggregateComplianceCount.h>
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

AggregateComplianceCount::AggregateComplianceCount() : 
    m_groupNameHasBeenSet(false),
    m_complianceSummaryHasBeenSet(false)
{
}

AggregateComplianceCount::AggregateComplianceCount(JsonView jsonValue) : 
    m_groupNameHasBeenSet(false),
    m_complianceSummaryHasBeenSet(false)
{
  *this = jsonValue;
}

AggregateComplianceCount& AggregateComplianceCount::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GroupName"))
  {
    m_groupName = jsonValue.GetString("GroupName");

    m_groupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ComplianceSummary"))
  {
    m_complianceSummary = jsonValue.GetObject("ComplianceSummary");

    m_complianceSummaryHasBeenSet = true;
  }

  return *this;
}

JsonValue AggregateComplianceCount::Jsonize() const
{
  JsonValue payload;

  if(m_groupNameHasBeenSet)
  {
   payload.WithString("GroupName", m_groupName);

  }

  if(m_complianceSummaryHasBeenSet)
  {
   payload.WithObject("ComplianceSummary", m_complianceSummary.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
