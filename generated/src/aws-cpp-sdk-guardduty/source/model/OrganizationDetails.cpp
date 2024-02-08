/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/OrganizationDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

OrganizationDetails::OrganizationDetails() : 
    m_updatedAtHasBeenSet(false),
    m_organizationStatisticsHasBeenSet(false)
{
}

OrganizationDetails::OrganizationDetails(JsonView jsonValue) : 
    m_updatedAtHasBeenSet(false),
    m_organizationStatisticsHasBeenSet(false)
{
  *this = jsonValue;
}

OrganizationDetails& OrganizationDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");

    m_updatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("organizationStatistics"))
  {
    m_organizationStatistics = jsonValue.GetObject("organizationStatistics");

    m_organizationStatisticsHasBeenSet = true;
  }

  return *this;
}

JsonValue OrganizationDetails::Jsonize() const
{
  JsonValue payload;

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if(m_organizationStatisticsHasBeenSet)
  {
   payload.WithObject("organizationStatistics", m_organizationStatistics.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
