/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecr/model/ListImageReferrersFilter.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECR {
namespace Model {

ListImageReferrersFilter::ListImageReferrersFilter(JsonView jsonValue) { *this = jsonValue; }

ListImageReferrersFilter& ListImageReferrersFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("artifactTypes")) {
    Aws::Utils::Array<JsonView> artifactTypesJsonList = jsonValue.GetArray("artifactTypes");
    for (unsigned artifactTypesIndex = 0; artifactTypesIndex < artifactTypesJsonList.GetLength(); ++artifactTypesIndex) {
      m_artifactTypes.push_back(artifactTypesJsonList[artifactTypesIndex].AsString());
    }
    m_artifactTypesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("artifactStatus")) {
    m_artifactStatus = ArtifactStatusFilterMapper::GetArtifactStatusFilterForName(jsonValue.GetString("artifactStatus"));
    m_artifactStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue ListImageReferrersFilter::Jsonize() const {
  JsonValue payload;

  if (m_artifactTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> artifactTypesJsonList(m_artifactTypes.size());
    for (unsigned artifactTypesIndex = 0; artifactTypesIndex < artifactTypesJsonList.GetLength(); ++artifactTypesIndex) {
      artifactTypesJsonList[artifactTypesIndex].AsString(m_artifactTypes[artifactTypesIndex]);
    }
    payload.WithArray("artifactTypes", std::move(artifactTypesJsonList));
  }

  if (m_artifactStatusHasBeenSet) {
    payload.WithString("artifactStatus", ArtifactStatusFilterMapper::GetNameForArtifactStatusFilter(m_artifactStatus));
  }

  return payload;
}

}  // namespace Model
}  // namespace ECR
}  // namespace Aws
