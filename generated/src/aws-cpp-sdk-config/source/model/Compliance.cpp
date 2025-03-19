/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/Compliance.h>
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

Compliance::Compliance(JsonView jsonValue)
{
  *this = jsonValue;
}

Compliance& Compliance::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ComplianceType"))
  {
    m_complianceType = ComplianceTypeMapper::GetComplianceTypeForName(jsonValue.GetString("ComplianceType"));
    m_complianceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ComplianceContributorCount"))
  {
    m_complianceContributorCount = jsonValue.GetObject("ComplianceContributorCount");
    m_complianceContributorCountHasBeenSet = true;
  }
  return *this;
}

JsonValue Compliance::Jsonize() const
{
  JsonValue payload;

  if(m_complianceTypeHasBeenSet)
  {
   payload.WithString("ComplianceType", ComplianceTypeMapper::GetNameForComplianceType(m_complianceType));
  }

  if(m_complianceContributorCountHasBeenSet)
  {
   payload.WithObject("ComplianceContributorCount", m_complianceContributorCount.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
