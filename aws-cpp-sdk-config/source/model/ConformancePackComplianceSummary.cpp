/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/ConformancePackComplianceSummary.h>
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

ConformancePackComplianceSummary::ConformancePackComplianceSummary() : 
    m_conformancePackNameHasBeenSet(false),
    m_conformancePackComplianceStatus(ConformancePackComplianceType::NOT_SET),
    m_conformancePackComplianceStatusHasBeenSet(false)
{
}

ConformancePackComplianceSummary::ConformancePackComplianceSummary(JsonView jsonValue) : 
    m_conformancePackNameHasBeenSet(false),
    m_conformancePackComplianceStatus(ConformancePackComplianceType::NOT_SET),
    m_conformancePackComplianceStatusHasBeenSet(false)
{
  *this = jsonValue;
}

ConformancePackComplianceSummary& ConformancePackComplianceSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConformancePackName"))
  {
    m_conformancePackName = jsonValue.GetString("ConformancePackName");

    m_conformancePackNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConformancePackComplianceStatus"))
  {
    m_conformancePackComplianceStatus = ConformancePackComplianceTypeMapper::GetConformancePackComplianceTypeForName(jsonValue.GetString("ConformancePackComplianceStatus"));

    m_conformancePackComplianceStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue ConformancePackComplianceSummary::Jsonize() const
{
  JsonValue payload;

  if(m_conformancePackNameHasBeenSet)
  {
   payload.WithString("ConformancePackName", m_conformancePackName);

  }

  if(m_conformancePackComplianceStatusHasBeenSet)
  {
   payload.WithString("ConformancePackComplianceStatus", ConformancePackComplianceTypeMapper::GetNameForConformancePackComplianceType(m_conformancePackComplianceStatus));
  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
