/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/LaunchParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

LaunchParameters::LaunchParameters(JsonView jsonValue) { *this = jsonValue; }

LaunchParameters& LaunchParameters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("operatingSystem")) {
    m_operatingSystem = OperatingSystemMapper::GetOperatingSystemForName(jsonValue.GetString("operatingSystem"));
    m_operatingSystemHasBeenSet = true;
  }
  if (jsonValue.ValueExists("instanceRequirements")) {
    m_instanceRequirements = jsonValue.GetObject("instanceRequirements");
    m_instanceRequirementsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ephemeralVolumes")) {
    Aws::Utils::Array<JsonView> ephemeralVolumesJsonList = jsonValue.GetArray("ephemeralVolumes");
    for (unsigned ephemeralVolumesIndex = 0; ephemeralVolumesIndex < ephemeralVolumesJsonList.GetLength(); ++ephemeralVolumesIndex) {
      m_ephemeralVolumes.push_back(ephemeralVolumesJsonList[ephemeralVolumesIndex].AsObject());
    }
    m_ephemeralVolumesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("monitoring")) {
    m_monitoring = MonitoringMapper::GetMonitoringForName(jsonValue.GetString("monitoring"));
    m_monitoringHasBeenSet = true;
  }
  if (jsonValue.ValueExists("licenseSpecifications")) {
    Aws::Utils::Array<JsonView> licenseSpecificationsJsonList = jsonValue.GetArray("licenseSpecifications");
    for (unsigned licenseSpecificationsIndex = 0; licenseSpecificationsIndex < licenseSpecificationsJsonList.GetLength();
         ++licenseSpecificationsIndex) {
      m_licenseSpecifications.push_back(licenseSpecificationsJsonList[licenseSpecificationsIndex].AsObject());
    }
    m_licenseSpecificationsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("capacityReservationSpecification")) {
    m_capacityReservationSpecification = jsonValue.GetObject("capacityReservationSpecification");
    m_capacityReservationSpecificationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sshKeyName")) {
    m_sshKeyName = jsonValue.GetString("sshKeyName");
    m_sshKeyNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("instanceProfileArn")) {
    m_instanceProfileArn = jsonValue.GetString("instanceProfileArn");
    m_instanceProfileArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("propagatedTags")) {
    Aws::Map<Aws::String, JsonView> propagatedTagsJsonMap = jsonValue.GetObject("propagatedTags").GetAllObjects();
    for (auto& propagatedTagsItem : propagatedTagsJsonMap) {
      m_propagatedTags[propagatedTagsItem.first] = propagatedTagsItem.second.AsString();
    }
    m_propagatedTagsHasBeenSet = true;
  }
  return *this;
}

JsonValue LaunchParameters::Jsonize() const {
  JsonValue payload;

  if (m_operatingSystemHasBeenSet) {
    payload.WithString("operatingSystem", OperatingSystemMapper::GetNameForOperatingSystem(m_operatingSystem));
  }

  if (m_instanceRequirementsHasBeenSet) {
    payload.WithObject("instanceRequirements", m_instanceRequirements.Jsonize());
  }

  if (m_ephemeralVolumesHasBeenSet) {
    Aws::Utils::Array<JsonValue> ephemeralVolumesJsonList(m_ephemeralVolumes.size());
    for (unsigned ephemeralVolumesIndex = 0; ephemeralVolumesIndex < ephemeralVolumesJsonList.GetLength(); ++ephemeralVolumesIndex) {
      ephemeralVolumesJsonList[ephemeralVolumesIndex].AsObject(m_ephemeralVolumes[ephemeralVolumesIndex].Jsonize());
    }
    payload.WithArray("ephemeralVolumes", std::move(ephemeralVolumesJsonList));
  }

  if (m_monitoringHasBeenSet) {
    payload.WithString("monitoring", MonitoringMapper::GetNameForMonitoring(m_monitoring));
  }

  if (m_licenseSpecificationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> licenseSpecificationsJsonList(m_licenseSpecifications.size());
    for (unsigned licenseSpecificationsIndex = 0; licenseSpecificationsIndex < licenseSpecificationsJsonList.GetLength();
         ++licenseSpecificationsIndex) {
      licenseSpecificationsJsonList[licenseSpecificationsIndex].AsObject(m_licenseSpecifications[licenseSpecificationsIndex].Jsonize());
    }
    payload.WithArray("licenseSpecifications", std::move(licenseSpecificationsJsonList));
  }

  if (m_capacityReservationSpecificationHasBeenSet) {
    payload.WithObject("capacityReservationSpecification", m_capacityReservationSpecification.Jsonize());
  }

  if (m_sshKeyNameHasBeenSet) {
    payload.WithString("sshKeyName", m_sshKeyName);
  }

  if (m_instanceProfileArnHasBeenSet) {
    payload.WithString("instanceProfileArn", m_instanceProfileArn);
  }

  if (m_propagatedTagsHasBeenSet) {
    JsonValue propagatedTagsJsonMap;
    for (auto& propagatedTagsItem : m_propagatedTags) {
      propagatedTagsJsonMap.WithString(propagatedTagsItem.first, propagatedTagsItem.second);
    }
    payload.WithObject("propagatedTags", std::move(propagatedTagsJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
