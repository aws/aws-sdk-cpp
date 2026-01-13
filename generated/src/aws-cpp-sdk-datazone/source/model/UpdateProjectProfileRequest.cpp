/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/UpdateProjectProfileRequest.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateProjectProfileRequest::SerializePayload() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", StatusMapper::GetNameForStatus(m_status));
  }

  if (m_projectResourceTagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> projectResourceTagsJsonList(m_projectResourceTags.size());
    for (unsigned projectResourceTagsIndex = 0; projectResourceTagsIndex < projectResourceTagsJsonList.GetLength();
         ++projectResourceTagsIndex) {
      projectResourceTagsJsonList[projectResourceTagsIndex].AsObject(m_projectResourceTags[projectResourceTagsIndex].Jsonize());
    }
    payload.WithArray("projectResourceTags", std::move(projectResourceTagsJsonList));
  }

  if (m_allowCustomProjectResourceTagsHasBeenSet) {
    payload.WithBool("allowCustomProjectResourceTags", m_allowCustomProjectResourceTags);
  }

  if (m_projectResourceTagsDescriptionHasBeenSet) {
    payload.WithString("projectResourceTagsDescription", m_projectResourceTagsDescription);
  }

  if (m_environmentConfigurationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> environmentConfigurationsJsonList(m_environmentConfigurations.size());
    for (unsigned environmentConfigurationsIndex = 0; environmentConfigurationsIndex < environmentConfigurationsJsonList.GetLength();
         ++environmentConfigurationsIndex) {
      environmentConfigurationsJsonList[environmentConfigurationsIndex].AsObject(
          m_environmentConfigurations[environmentConfigurationsIndex].Jsonize());
    }
    payload.WithArray("environmentConfigurations", std::move(environmentConfigurationsJsonList));
  }

  if (m_domainUnitIdentifierHasBeenSet) {
    payload.WithString("domainUnitIdentifier", m_domainUnitIdentifier);
  }

  return payload.View().WriteReadable();
}
