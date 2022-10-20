/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/AssessmentMetadata.h>
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

AssessmentMetadata::AssessmentMetadata() : 
    m_nameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_complianceTypeHasBeenSet(false),
    m_status(AssessmentStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_assessmentReportsDestinationHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_rolesHasBeenSet(false),
    m_delegationsHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdatedHasBeenSet(false)
{
}

AssessmentMetadata::AssessmentMetadata(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_complianceTypeHasBeenSet(false),
    m_status(AssessmentStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_assessmentReportsDestinationHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_rolesHasBeenSet(false),
    m_delegationsHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdatedHasBeenSet(false)
{
  *this = jsonValue;
}

AssessmentMetadata& AssessmentMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("complianceType"))
  {
    m_complianceType = jsonValue.GetString("complianceType");

    m_complianceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = AssessmentStatusMapper::GetAssessmentStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("assessmentReportsDestination"))
  {
    m_assessmentReportsDestination = jsonValue.GetObject("assessmentReportsDestination");

    m_assessmentReportsDestinationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scope"))
  {
    m_scope = jsonValue.GetObject("scope");

    m_scopeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roles"))
  {
    Aws::Utils::Array<JsonView> rolesJsonList = jsonValue.GetArray("roles");
    for(unsigned rolesIndex = 0; rolesIndex < rolesJsonList.GetLength(); ++rolesIndex)
    {
      m_roles.push_back(rolesJsonList[rolesIndex].AsObject());
    }
    m_rolesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("delegations"))
  {
    Aws::Utils::Array<JsonView> delegationsJsonList = jsonValue.GetArray("delegations");
    for(unsigned delegationsIndex = 0; delegationsIndex < delegationsJsonList.GetLength(); ++delegationsIndex)
    {
      m_delegations.push_back(delegationsJsonList[delegationsIndex].AsObject());
    }
    m_delegationsHasBeenSet = true;
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

  return *this;
}

JsonValue AssessmentMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_complianceTypeHasBeenSet)
  {
   payload.WithString("complianceType", m_complianceType);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", AssessmentStatusMapper::GetNameForAssessmentStatus(m_status));
  }

  if(m_assessmentReportsDestinationHasBeenSet)
  {
   payload.WithObject("assessmentReportsDestination", m_assessmentReportsDestination.Jsonize());

  }

  if(m_scopeHasBeenSet)
  {
   payload.WithObject("scope", m_scope.Jsonize());

  }

  if(m_rolesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> rolesJsonList(m_roles.size());
   for(unsigned rolesIndex = 0; rolesIndex < rolesJsonList.GetLength(); ++rolesIndex)
   {
     rolesJsonList[rolesIndex].AsObject(m_roles[rolesIndex].Jsonize());
   }
   payload.WithArray("roles", std::move(rolesJsonList));

  }

  if(m_delegationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> delegationsJsonList(m_delegations.size());
   for(unsigned delegationsIndex = 0; delegationsIndex < delegationsJsonList.GetLength(); ++delegationsIndex)
   {
     delegationsJsonList[delegationsIndex].AsObject(m_delegations[delegationsIndex].Jsonize());
   }
   payload.WithArray("delegations", std::move(delegationsJsonList));

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("creationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedHasBeenSet)
  {
   payload.WithDouble("lastUpdated", m_lastUpdated.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace AuditManager
} // namespace Aws
