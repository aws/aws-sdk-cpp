/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connecthealth/model/SubmitFeedbackRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConnectHealth::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String SubmitFeedbackRequest::SerializePayload() const {
  JsonValue payload;

  if (m_artifactSourceIdHasBeenSet) {
    payload.WithString("artifactSourceId", m_artifactSourceId);
  }

  if (m_subscriptionIdHasBeenSet) {
    payload.WithString("subscriptionId", m_subscriptionId);
  }

  if (m_artifactTypeHasBeenSet) {
    payload.WithString("artifactType", FeedbackArtifactTypeMapper::GetNameForFeedbackArtifactType(m_artifactType));
  }

  if (m_signedArtifactS3UriHasBeenSet) {
    payload.WithString("signedArtifactS3Uri", m_signedArtifactS3Uri);
  }

  if (m_generatedArtifactS3UriHasBeenSet) {
    payload.WithString("generatedArtifactS3Uri", m_generatedArtifactS3Uri);
  }

  if (m_commentsHasBeenSet) {
    payload.WithString("comments", m_comments);
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}
