/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/AssociateSecurityProfilesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String AssociateSecurityProfilesRequest::SerializePayload() const {
  JsonValue payload;

  if (m_securityProfilesHasBeenSet) {
    Aws::Utils::Array<JsonValue> securityProfilesJsonList(m_securityProfiles.size());
    for (unsigned securityProfilesIndex = 0; securityProfilesIndex < securityProfilesJsonList.GetLength(); ++securityProfilesIndex) {
      securityProfilesJsonList[securityProfilesIndex].AsObject(m_securityProfiles[securityProfilesIndex].Jsonize());
    }
    payload.WithArray("SecurityProfiles", std::move(securityProfilesJsonList));
  }

  if (m_entityTypeHasBeenSet) {
    payload.WithString("EntityType", EntityTypeMapper::GetNameForEntityType(m_entityType));
  }

  if (m_entityArnHasBeenSet) {
    payload.WithString("EntityArn", m_entityArn);
  }

  return payload.View().WriteReadable();
}
