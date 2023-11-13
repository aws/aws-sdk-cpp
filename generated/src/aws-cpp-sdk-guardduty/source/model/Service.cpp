/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/Service.h>
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

Service::Service() : 
    m_actionHasBeenSet(false),
    m_evidenceHasBeenSet(false),
    m_archived(false),
    m_archivedHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false),
    m_detectorIdHasBeenSet(false),
    m_eventFirstSeenHasBeenSet(false),
    m_eventLastSeenHasBeenSet(false),
    m_resourceRoleHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_userFeedbackHasBeenSet(false),
    m_additionalInfoHasBeenSet(false),
    m_featureNameHasBeenSet(false),
    m_ebsVolumeScanDetailsHasBeenSet(false),
    m_runtimeDetailsHasBeenSet(false),
    m_detectionHasBeenSet(false)
{
}

Service::Service(JsonView jsonValue) : 
    m_actionHasBeenSet(false),
    m_evidenceHasBeenSet(false),
    m_archived(false),
    m_archivedHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false),
    m_detectorIdHasBeenSet(false),
    m_eventFirstSeenHasBeenSet(false),
    m_eventLastSeenHasBeenSet(false),
    m_resourceRoleHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_userFeedbackHasBeenSet(false),
    m_additionalInfoHasBeenSet(false),
    m_featureNameHasBeenSet(false),
    m_ebsVolumeScanDetailsHasBeenSet(false),
    m_runtimeDetailsHasBeenSet(false),
    m_detectionHasBeenSet(false)
{
  *this = jsonValue;
}

Service& Service::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("action"))
  {
    m_action = jsonValue.GetObject("action");

    m_actionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("evidence"))
  {
    m_evidence = jsonValue.GetObject("evidence");

    m_evidenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("archived"))
  {
    m_archived = jsonValue.GetBool("archived");

    m_archivedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("count"))
  {
    m_count = jsonValue.GetInteger("count");

    m_countHasBeenSet = true;
  }

  if(jsonValue.ValueExists("detectorId"))
  {
    m_detectorId = jsonValue.GetString("detectorId");

    m_detectorIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventFirstSeen"))
  {
    m_eventFirstSeen = jsonValue.GetString("eventFirstSeen");

    m_eventFirstSeenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventLastSeen"))
  {
    m_eventLastSeen = jsonValue.GetString("eventLastSeen");

    m_eventLastSeenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceRole"))
  {
    m_resourceRole = jsonValue.GetString("resourceRole");

    m_resourceRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serviceName"))
  {
    m_serviceName = jsonValue.GetString("serviceName");

    m_serviceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userFeedback"))
  {
    m_userFeedback = jsonValue.GetString("userFeedback");

    m_userFeedbackHasBeenSet = true;
  }

  if(jsonValue.ValueExists("additionalInfo"))
  {
    m_additionalInfo = jsonValue.GetObject("additionalInfo");

    m_additionalInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("featureName"))
  {
    m_featureName = jsonValue.GetString("featureName");

    m_featureNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ebsVolumeScanDetails"))
  {
    m_ebsVolumeScanDetails = jsonValue.GetObject("ebsVolumeScanDetails");

    m_ebsVolumeScanDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("runtimeDetails"))
  {
    m_runtimeDetails = jsonValue.GetObject("runtimeDetails");

    m_runtimeDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("detection"))
  {
    m_detection = jsonValue.GetObject("detection");

    m_detectionHasBeenSet = true;
  }

  return *this;
}

JsonValue Service::Jsonize() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithObject("action", m_action.Jsonize());

  }

  if(m_evidenceHasBeenSet)
  {
   payload.WithObject("evidence", m_evidence.Jsonize());

  }

  if(m_archivedHasBeenSet)
  {
   payload.WithBool("archived", m_archived);

  }

  if(m_countHasBeenSet)
  {
   payload.WithInteger("count", m_count);

  }

  if(m_detectorIdHasBeenSet)
  {
   payload.WithString("detectorId", m_detectorId);

  }

  if(m_eventFirstSeenHasBeenSet)
  {
   payload.WithString("eventFirstSeen", m_eventFirstSeen);

  }

  if(m_eventLastSeenHasBeenSet)
  {
   payload.WithString("eventLastSeen", m_eventLastSeen);

  }

  if(m_resourceRoleHasBeenSet)
  {
   payload.WithString("resourceRole", m_resourceRole);

  }

  if(m_serviceNameHasBeenSet)
  {
   payload.WithString("serviceName", m_serviceName);

  }

  if(m_userFeedbackHasBeenSet)
  {
   payload.WithString("userFeedback", m_userFeedback);

  }

  if(m_additionalInfoHasBeenSet)
  {
   payload.WithObject("additionalInfo", m_additionalInfo.Jsonize());

  }

  if(m_featureNameHasBeenSet)
  {
   payload.WithString("featureName", m_featureName);

  }

  if(m_ebsVolumeScanDetailsHasBeenSet)
  {
   payload.WithObject("ebsVolumeScanDetails", m_ebsVolumeScanDetails.Jsonize());

  }

  if(m_runtimeDetailsHasBeenSet)
  {
   payload.WithObject("runtimeDetails", m_runtimeDetails.Jsonize());

  }

  if(m_detectionHasBeenSet)
  {
   payload.WithObject("detection", m_detection.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
