/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/IssueArtifactItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {

IssueArtifactItem::IssueArtifactItem(JsonView jsonValue) { *this = jsonValue; }

IssueArtifactItem& IssueArtifactItem::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("artifactId")) {
    m_artifactId = jsonValue.GetString("artifactId");
    m_artifactIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("artifactType")) {
    m_artifactType = IssueArtifactTypeMapper::GetIssueArtifactTypeForName(jsonValue.GetString("artifactType"));
    m_artifactTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("mediaType")) {
    m_mediaType = jsonValue.GetString("mediaType");
    m_mediaTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("producer")) {
    m_producer = jsonValue.GetObject("producer");
    m_producerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("contentSizeBytes")) {
    m_contentSizeBytes = jsonValue.GetInt64("contentSizeBytes");
    m_contentSizeBytesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  return *this;
}

JsonValue IssueArtifactItem::Jsonize() const {
  JsonValue payload;

  if (m_artifactIdHasBeenSet) {
    payload.WithString("artifactId", m_artifactId);
  }

  if (m_artifactTypeHasBeenSet) {
    payload.WithString("artifactType", IssueArtifactTypeMapper::GetNameForIssueArtifactType(m_artifactType));
  }

  if (m_mediaTypeHasBeenSet) {
    payload.WithString("mediaType", m_mediaType);
  }

  if (m_producerHasBeenSet) {
    payload.WithObject("producer", m_producer.Jsonize());
  }

  if (m_contentSizeBytesHasBeenSet) {
    payload.WithInt64("contentSizeBytes", m_contentSizeBytes);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
