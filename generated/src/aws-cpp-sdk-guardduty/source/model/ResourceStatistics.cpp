/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/ResourceStatistics.h>
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

ResourceStatistics::ResourceStatistics(JsonView jsonValue)
{
  *this = jsonValue;
}

ResourceStatistics& ResourceStatistics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");
    m_accountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastGeneratedAt"))
  {
    m_lastGeneratedAt = jsonValue.GetDouble("lastGeneratedAt");
    m_lastGeneratedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resourceId"))
  {
    m_resourceId = jsonValue.GetString("resourceId");
    m_resourceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resourceType"))
  {
    m_resourceType = jsonValue.GetString("resourceType");
    m_resourceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("totalFindings"))
  {
    m_totalFindings = jsonValue.GetInteger("totalFindings");
    m_totalFindingsHasBeenSet = true;
  }
  return *this;
}

JsonValue ResourceStatistics::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_lastGeneratedAtHasBeenSet)
  {
   payload.WithDouble("lastGeneratedAt", m_lastGeneratedAt.SecondsWithMSPrecision());
  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("resourceId", m_resourceId);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("resourceType", m_resourceType);

  }

  if(m_totalFindingsHasBeenSet)
  {
   payload.WithInteger("totalFindings", m_totalFindings);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
