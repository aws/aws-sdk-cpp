/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/CoverageResource.h>
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

CoverageResource::CoverageResource() : 
    m_resourceIdHasBeenSet(false),
    m_detectorIdHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_resourceDetailsHasBeenSet(false),
    m_coverageStatus(CoverageStatus::NOT_SET),
    m_coverageStatusHasBeenSet(false),
    m_issueHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

CoverageResource::CoverageResource(JsonView jsonValue) : 
    m_resourceIdHasBeenSet(false),
    m_detectorIdHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_resourceDetailsHasBeenSet(false),
    m_coverageStatus(CoverageStatus::NOT_SET),
    m_coverageStatusHasBeenSet(false),
    m_issueHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
  *this = jsonValue;
}

CoverageResource& CoverageResource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("resourceId"))
  {
    m_resourceId = jsonValue.GetString("resourceId");

    m_resourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("detectorId"))
  {
    m_detectorId = jsonValue.GetString("detectorId");

    m_detectorIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceDetails"))
  {
    m_resourceDetails = jsonValue.GetObject("resourceDetails");

    m_resourceDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("coverageStatus"))
  {
    m_coverageStatus = CoverageStatusMapper::GetCoverageStatusForName(jsonValue.GetString("coverageStatus"));

    m_coverageStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("issue"))
  {
    m_issue = jsonValue.GetString("issue");

    m_issueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");

    m_updatedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue CoverageResource::Jsonize() const
{
  JsonValue payload;

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("resourceId", m_resourceId);

  }

  if(m_detectorIdHasBeenSet)
  {
   payload.WithString("detectorId", m_detectorId);

  }

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_resourceDetailsHasBeenSet)
  {
   payload.WithObject("resourceDetails", m_resourceDetails.Jsonize());

  }

  if(m_coverageStatusHasBeenSet)
  {
   payload.WithString("coverageStatus", CoverageStatusMapper::GetNameForCoverageStatus(m_coverageStatus));
  }

  if(m_issueHasBeenSet)
  {
   payload.WithString("issue", m_issue);

  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
