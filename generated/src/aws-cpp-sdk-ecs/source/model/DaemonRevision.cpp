/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/DaemonRevision.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

DaemonRevision::DaemonRevision(JsonView jsonValue) { *this = jsonValue; }

DaemonRevision& DaemonRevision::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("daemonRevisionArn")) {
    m_daemonRevisionArn = jsonValue.GetString("daemonRevisionArn");
    m_daemonRevisionArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("clusterArn")) {
    m_clusterArn = jsonValue.GetString("clusterArn");
    m_clusterArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("daemonArn")) {
    m_daemonArn = jsonValue.GetString("daemonArn");
    m_daemonArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("daemonTaskDefinitionArn")) {
    m_daemonTaskDefinitionArn = jsonValue.GetString("daemonTaskDefinitionArn");
    m_daemonTaskDefinitionArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("containerImages")) {
    Aws::Utils::Array<JsonView> containerImagesJsonList = jsonValue.GetArray("containerImages");
    for (unsigned containerImagesIndex = 0; containerImagesIndex < containerImagesJsonList.GetLength(); ++containerImagesIndex) {
      m_containerImages.push_back(containerImagesJsonList[containerImagesIndex].AsObject());
    }
    m_containerImagesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("propagateTags")) {
    m_propagateTags = DaemonPropagateTagsMapper::GetDaemonPropagateTagsForName(jsonValue.GetString("propagateTags"));
    m_propagateTagsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("enableECSManagedTags")) {
    m_enableECSManagedTags = jsonValue.GetBool("enableECSManagedTags");
    m_enableECSManagedTagsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("enableExecuteCommand")) {
    m_enableExecuteCommand = jsonValue.GetBool("enableExecuteCommand");
    m_enableExecuteCommandHasBeenSet = true;
  }
  return *this;
}

JsonValue DaemonRevision::Jsonize() const {
  JsonValue payload;

  if (m_daemonRevisionArnHasBeenSet) {
    payload.WithString("daemonRevisionArn", m_daemonRevisionArn);
  }

  if (m_clusterArnHasBeenSet) {
    payload.WithString("clusterArn", m_clusterArn);
  }

  if (m_daemonArnHasBeenSet) {
    payload.WithString("daemonArn", m_daemonArn);
  }

  if (m_daemonTaskDefinitionArnHasBeenSet) {
    payload.WithString("daemonTaskDefinitionArn", m_daemonTaskDefinitionArn);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_containerImagesHasBeenSet) {
    Aws::Utils::Array<JsonValue> containerImagesJsonList(m_containerImages.size());
    for (unsigned containerImagesIndex = 0; containerImagesIndex < containerImagesJsonList.GetLength(); ++containerImagesIndex) {
      containerImagesJsonList[containerImagesIndex].AsObject(m_containerImages[containerImagesIndex].Jsonize());
    }
    payload.WithArray("containerImages", std::move(containerImagesJsonList));
  }

  if (m_propagateTagsHasBeenSet) {
    payload.WithString("propagateTags", DaemonPropagateTagsMapper::GetNameForDaemonPropagateTags(m_propagateTags));
  }

  if (m_enableECSManagedTagsHasBeenSet) {
    payload.WithBool("enableECSManagedTags", m_enableECSManagedTags);
  }

  if (m_enableExecuteCommandHasBeenSet) {
    payload.WithBool("enableExecuteCommand", m_enableExecuteCommand);
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
