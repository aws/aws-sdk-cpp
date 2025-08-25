/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-security/model/ScanSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeGuruSecurity
{
namespace Model
{

ScanSummary::ScanSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

ScanSummary& ScanSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("scanState"))
  {
    m_scanState = ScanStateMapper::GetScanStateForName(jsonValue.GetString("scanState"));
    m_scanStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("scanName"))
  {
    m_scanName = jsonValue.GetString("scanName");
    m_scanNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("runId"))
  {
    m_runId = jsonValue.GetString("runId");
    m_runIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("scanNameArn"))
  {
    m_scanNameArn = jsonValue.GetString("scanNameArn");
    m_scanNameArnHasBeenSet = true;
  }
  return *this;
}

JsonValue ScanSummary::Jsonize() const
{
  JsonValue payload;

  if(m_scanStateHasBeenSet)
  {
   payload.WithString("scanState", ScanStateMapper::GetNameForScanState(m_scanState));
  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if(m_scanNameHasBeenSet)
  {
   payload.WithString("scanName", m_scanName);

  }

  if(m_runIdHasBeenSet)
  {
   payload.WithString("runId", m_runId);

  }

  if(m_scanNameArnHasBeenSet)
  {
   payload.WithString("scanNameArn", m_scanNameArn);

  }

  return payload;
}

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
