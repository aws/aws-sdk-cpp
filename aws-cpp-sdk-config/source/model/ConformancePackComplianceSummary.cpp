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
