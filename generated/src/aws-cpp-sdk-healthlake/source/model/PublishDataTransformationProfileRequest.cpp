/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/healthlake/model/PublishDataTransformationProfileRequest.h>

#include <utility>

using namespace Aws::HealthLake::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PublishDataTransformationProfileRequest::SerializePayload() const {
  JsonValue payload;

  if (m_profileIdHasBeenSet) {
    payload.WithString("ProfileId", m_profileId);
  }

  if (m_sourceFormatHasBeenSet) {
    payload.WithString("SourceFormat", SourceFormatMapper::GetNameForSourceFormat(m_sourceFormat));
  }

  if (m_fromExistingVersionHasBeenSet) {
    payload.WithInteger("FromExistingVersion", m_fromExistingVersion);
  }

  if (m_changeDescriptionHasBeenSet) {
    payload.WithString("ChangeDescription", m_changeDescription);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PublishDataTransformationProfileRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "HealthLake.PublishDataTransformationProfile"));
  return headers;
}
