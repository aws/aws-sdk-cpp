/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/ConfigRuleComplianceSummaryFilters.h>
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

ConfigRuleComplianceSummaryFilters::ConfigRuleComplianceSummaryFilters() : 
    m_accountIdHasBeenSet(false),
    m_awsRegionHasBeenSet(false)
{
}

ConfigRuleComplianceSummaryFilters::ConfigRuleComplianceSummaryFilters(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_awsRegionHasBeenSet(false)
{
  *this = jsonValue;
}

ConfigRuleComplianceSummaryFilters& ConfigRuleComplianceSummaryFilters::operator =(JsonView jsonValue)
{
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

JsonValue ConfigRuleComplianceSummaryFilters::Jsonize() const
{
  JsonValue payload;

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
