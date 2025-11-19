/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecr/model/ImageReferrer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECR {
namespace Model {

ImageReferrer::ImageReferrer(JsonView jsonValue) { *this = jsonValue; }

ImageReferrer& ImageReferrer::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("digest")) {
    m_digest = jsonValue.GetString("digest");
    m_digestHasBeenSet = true;
  }
  if (jsonValue.ValueExists("mediaType")) {
    m_mediaType = jsonValue.GetString("mediaType");
    m_mediaTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("artifactType")) {
    m_artifactType = jsonValue.GetString("artifactType");
    m_artifactTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("size")) {
    m_size = jsonValue.GetInt64("size");
    m_sizeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("annotations")) {
    Aws::Map<Aws::String, JsonView> annotationsJsonMap = jsonValue.GetObject("annotations").GetAllObjects();
    for (auto& annotationsItem : annotationsJsonMap) {
      m_annotations[annotationsItem.first] = annotationsItem.second.AsString();
    }
    m_annotationsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("artifactStatus")) {
    m_artifactStatus = ArtifactStatusMapper::GetArtifactStatusForName(jsonValue.GetString("artifactStatus"));
    m_artifactStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue ImageReferrer::Jsonize() const {
  JsonValue payload;

  if (m_digestHasBeenSet) {
    payload.WithString("digest", m_digest);
  }

  if (m_mediaTypeHasBeenSet) {
    payload.WithString("mediaType", m_mediaType);
  }

  if (m_artifactTypeHasBeenSet) {
    payload.WithString("artifactType", m_artifactType);
  }

  if (m_sizeHasBeenSet) {
    payload.WithInt64("size", m_size);
  }

  if (m_annotationsHasBeenSet) {
    JsonValue annotationsJsonMap;
    for (auto& annotationsItem : m_annotations) {
      annotationsJsonMap.WithString(annotationsItem.first, annotationsItem.second);
    }
    payload.WithObject("annotations", std::move(annotationsJsonMap));
  }

  if (m_artifactStatusHasBeenSet) {
    payload.WithString("artifactStatus", ArtifactStatusMapper::GetNameForArtifactStatus(m_artifactStatus));
  }

  return payload;
}

}  // namespace Model
}  // namespace ECR
}  // namespace Aws
