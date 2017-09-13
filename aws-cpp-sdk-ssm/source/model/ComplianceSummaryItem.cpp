/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/ssm/model/ComplianceSummaryItem.h>
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

ComplianceSummaryItem::ComplianceSummaryItem() : 
    m_complianceTypeHasBeenSet(false),
    m_compliantSummaryHasBeenSet(false),
    m_nonCompliantSummaryHasBeenSet(false)
{
}

ComplianceSummaryItem::ComplianceSummaryItem(const JsonValue& jsonValue) : 
    m_complianceTypeHasBeenSet(false),
    m_compliantSummaryHasBeenSet(false),
    m_nonCompliantSummaryHasBeenSet(false)
{
  *this = jsonValue;
}

ComplianceSummaryItem& ComplianceSummaryItem::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("ComplianceType"))
  {
    m_complianceType = jsonValue.GetString("ComplianceType");

    m_complianceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompliantSummary"))
  {
    m_compliantSummary = jsonValue.GetObject("CompliantSummary");

    m_compliantSummaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NonCompliantSummary"))
  {
    m_nonCompliantSummary = jsonValue.GetObject("NonCompliantSummary");

    m_nonCompliantSummaryHasBeenSet = true;
  }

  return *this;
}

JsonValue ComplianceSummaryItem::Jsonize() const
{
  JsonValue payload;

  if(m_complianceTypeHasBeenSet)
  {
   payload.WithString("ComplianceType", m_complianceType);

  }

  if(m_compliantSummaryHasBeenSet)
  {
   payload.WithObject("CompliantSummary", m_compliantSummary.Jsonize());

  }

  if(m_nonCompliantSummaryHasBeenSet)
  {
   payload.WithObject("NonCompliantSummary", m_nonCompliantSummary.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
