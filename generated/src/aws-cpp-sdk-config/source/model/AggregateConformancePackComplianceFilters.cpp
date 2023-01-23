/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/AggregateConformancePackComplianceFilters.h>
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

AggregateConformancePackComplianceFilters::AggregateConformancePackComplianceFilters() : 
    m_conformancePackNameHasBeenSet(false),
    m_complianceType(ConformancePackComplianceType::NOT_SET),
    m_complianceTypeHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_awsRegionHasBeenSet(false)
{
}

AggregateConformancePackComplianceFilters::AggregateConformancePackComplianceFilters(JsonView jsonValue) : 
    m_conformancePackNameHasBeenSet(false),
    m_complianceType(ConformancePackComplianceType::NOT_SET),
    m_complianceTypeHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_awsRegionHasBeenSet(false)
{
  *this = jsonValue;
}

AggregateConformancePackComplianceFilters& AggregateConformancePackComplianceFilters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConformancePackName"))
  {
    m_conformancePackName = jsonValue.GetString("ConformancePackName");

    m_conformancePackNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ComplianceType"))
  {
    m_complianceType = ConformancePackComplianceTypeMapper::GetConformancePackComplianceTypeForName(jsonValue.GetString("ComplianceType"));

    m_complianceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsRegion"))
  {
    m_awsRegion = jsonValue.GetString("AwsRegion");

    m_awsRegionHasBeenSet = true;
  }

  return *this;
}

JsonValue AggregateConformancePackComplianceFilters::Jsonize() const
{
  JsonValue payload;

  if(m_conformancePackNameHasBeenSet)
  {
   payload.WithString("ConformancePackName", m_conformancePackName);

  }

  if(m_complianceTypeHasBeenSet)
  {
   payload.WithString("ComplianceType", ConformancePackComplianceTypeMapper::GetNameForConformancePackComplianceType(m_complianceType));
  }

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_awsRegionHasBeenSet)
  {
   payload.WithString("AwsRegion", m_awsRegion);

  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
