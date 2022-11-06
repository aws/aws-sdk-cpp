/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/AssessmentControlSet.h>
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

AssessmentControlSet::AssessmentControlSet() : 
    m_idHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_status(ControlSetStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_rolesHasBeenSet(false),
    m_controlsHasBeenSet(false),
    m_delegationsHasBeenSet(false),
    m_systemEvidenceCount(0),
    m_systemEvidenceCountHasBeenSet(false),
    m_manualEvidenceCount(0),
    m_manualEvidenceCountHasBeenSet(false)
{
}

AssessmentControlSet::AssessmentControlSet(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_status(ControlSetStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_rolesHasBeenSet(false),
    m_controlsHasBeenSet(false),
    m_delegationsHasBeenSet(false),
    m_systemEvidenceCount(0),
    m_systemEvidenceCountHasBeenSet(false),
    m_manualEvidenceCount(0),
    m_manualEvidenceCountHasBeenSet(false)
{
  *this = jsonValue;
}

AssessmentControlSet& AssessmentControlSet::operator =(JsonView jsonValue)
{
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

  if(jsonValue.ValueExists("status"))
  {
    m_status = ControlSetStatusMapper::GetControlSetStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
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

  if(jsonValue.ValueExists("controls"))
  {
    Aws::Utils::Array<JsonView> controlsJsonList = jsonValue.GetArray("controls");
    for(unsigned controlsIndex = 0; controlsIndex < controlsJsonList.GetLength(); ++controlsIndex)
    {
      m_controls.push_back(controlsJsonList[controlsIndex].AsObject());
    }
    m_controlsHasBeenSet = true;
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

  if(jsonValue.ValueExists("systemEvidenceCount"))
  {
    m_systemEvidenceCount = jsonValue.GetInteger("systemEvidenceCount");

    m_systemEvidenceCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("manualEvidenceCount"))
  {
    m_manualEvidenceCount = jsonValue.GetInteger("manualEvidenceCount");

    m_manualEvidenceCountHasBeenSet = true;
  }

  return *this;
}

JsonValue AssessmentControlSet::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ControlSetStatusMapper::GetNameForControlSetStatus(m_status));
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

  if(m_controlsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> controlsJsonList(m_controls.size());
   for(unsigned controlsIndex = 0; controlsIndex < controlsJsonList.GetLength(); ++controlsIndex)
   {
     controlsJsonList[controlsIndex].AsObject(m_controls[controlsIndex].Jsonize());
   }
   payload.WithArray("controls", std::move(controlsJsonList));

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

  if(m_systemEvidenceCountHasBeenSet)
  {
   payload.WithInteger("systemEvidenceCount", m_systemEvidenceCount);

  }

  if(m_manualEvidenceCountHasBeenSet)
  {
   payload.WithInteger("manualEvidenceCount", m_manualEvidenceCount);

  }

  return payload;
}

} // namespace Model
} // namespace AuditManager
} // namespace Aws
