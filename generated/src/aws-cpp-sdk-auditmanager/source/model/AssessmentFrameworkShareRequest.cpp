/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/AssessmentFrameworkShareRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AuditManager
{
namespace Model
{

AssessmentFrameworkShareRequest::AssessmentFrameworkShareRequest() : 
    m_idHasBeenSet(false),
    m_frameworkIdHasBeenSet(false),
    m_frameworkNameHasBeenSet(false),
    m_frameworkDescriptionHasBeenSet(false),
    m_status(ShareRequestStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_sourceAccountHasBeenSet(false),
    m_destinationAccountHasBeenSet(false),
    m_destinationRegionHasBeenSet(false),
    m_expirationTimeHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdatedHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_standardControlsCount(0),
    m_standardControlsCountHasBeenSet(false),
    m_customControlsCount(0),
    m_customControlsCountHasBeenSet(false),
    m_complianceTypeHasBeenSet(false)
{
}

AssessmentFrameworkShareRequest::AssessmentFrameworkShareRequest(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_frameworkIdHasBeenSet(false),
    m_frameworkNameHasBeenSet(false),
    m_frameworkDescriptionHasBeenSet(false),
    m_status(ShareRequestStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_sourceAccountHasBeenSet(false),
    m_destinationAccountHasBeenSet(false),
    m_destinationRegionHasBeenSet(false),
    m_expirationTimeHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdatedHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_standardControlsCount(0),
    m_standardControlsCountHasBeenSet(false),
    m_customControlsCount(0),
    m_customControlsCountHasBeenSet(false),
    m_complianceTypeHasBeenSet(false)
{
  *this = jsonValue;
}

AssessmentFrameworkShareRequest& AssessmentFrameworkShareRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("frameworkId"))
  {
    m_frameworkId = jsonValue.GetString("frameworkId");

    m_frameworkIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("frameworkName"))
  {
    m_frameworkName = jsonValue.GetString("frameworkName");

    m_frameworkNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("frameworkDescription"))
  {
    m_frameworkDescription = jsonValue.GetString("frameworkDescription");

    m_frameworkDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ShareRequestStatusMapper::GetShareRequestStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceAccount"))
  {
    m_sourceAccount = jsonValue.GetString("sourceAccount");

    m_sourceAccountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destinationAccount"))
  {
    m_destinationAccount = jsonValue.GetString("destinationAccount");

    m_destinationAccountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destinationRegion"))
  {
    m_destinationRegion = jsonValue.GetString("destinationRegion");

    m_destinationRegionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("expirationTime"))
  {
    m_expirationTime = jsonValue.GetDouble("expirationTime");

    m_expirationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetDouble("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdated"))
  {
    m_lastUpdated = jsonValue.GetDouble("lastUpdated");

    m_lastUpdatedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("comment"))
  {
    m_comment = jsonValue.GetString("comment");

    m_commentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("standardControlsCount"))
  {
    m_standardControlsCount = jsonValue.GetInteger("standardControlsCount");

    m_standardControlsCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("customControlsCount"))
  {
    m_customControlsCount = jsonValue.GetInteger("customControlsCount");

    m_customControlsCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("complianceType"))
  {
    m_complianceType = jsonValue.GetString("complianceType");

    m_complianceTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue AssessmentFrameworkShareRequest::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_frameworkIdHasBeenSet)
  {
   payload.WithString("frameworkId", m_frameworkId);

  }

  if(m_frameworkNameHasBeenSet)
  {
   payload.WithString("frameworkName", m_frameworkName);

  }

  if(m_frameworkDescriptionHasBeenSet)
  {
   payload.WithString("frameworkDescription", m_frameworkDescription);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ShareRequestStatusMapper::GetNameForShareRequestStatus(m_status));
  }

  if(m_sourceAccountHasBeenSet)
  {
   payload.WithString("sourceAccount", m_sourceAccount);

  }

  if(m_destinationAccountHasBeenSet)
  {
   payload.WithString("destinationAccount", m_destinationAccount);

  }

  if(m_destinationRegionHasBeenSet)
  {
   payload.WithString("destinationRegion", m_destinationRegion);

  }

  if(m_expirationTimeHasBeenSet)
  {
   payload.WithDouble("expirationTime", m_expirationTime.SecondsWithMSPrecision());
  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("creationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedHasBeenSet)
  {
   payload.WithDouble("lastUpdated", m_lastUpdated.SecondsWithMSPrecision());
  }

  if(m_commentHasBeenSet)
  {
   payload.WithString("comment", m_comment);

  }

  if(m_standardControlsCountHasBeenSet)
  {
   payload.WithInteger("standardControlsCount", m_standardControlsCount);

  }

  if(m_customControlsCountHasBeenSet)
  {
   payload.WithInteger("customControlsCount", m_customControlsCount);

  }

  if(m_complianceTypeHasBeenSet)
  {
   payload.WithString("complianceType", m_complianceType);

  }

  return payload;
}

} // namespace Model
} // namespace AuditManager
} // namespace Aws
