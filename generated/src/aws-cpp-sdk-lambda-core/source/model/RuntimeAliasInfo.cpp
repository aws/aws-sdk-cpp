/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda-core/model/RuntimeAliasInfo.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LambdaCore {
namespace Model {

RuntimeAliasInfo::RuntimeAliasInfo(JsonView jsonValue) { *this = jsonValue; }

RuntimeAliasInfo& RuntimeAliasInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Arn")) {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RuntimeVersion")) {
    m_runtimeVersion = jsonValue.GetString("RuntimeVersion");
    m_runtimeVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RuntimeVersionArn")) {
    m_runtimeVersionArn = jsonValue.GetString("RuntimeVersionArn");
    m_runtimeVersionArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("State")) {
    m_state = RuntimeAliasStateMapper::GetRuntimeAliasStateForName(jsonValue.GetString("State"));
    m_stateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PendingDeletionAt")) {
    m_pendingDeletionAt = jsonValue.GetString("PendingDeletionAt");
    m_pendingDeletionAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Compatibility")) {
    m_compatibility = jsonValue.GetObject("Compatibility");
    m_compatibilityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ReleaseLifecycle")) {
    m_releaseLifecycle = jsonValue.GetObject("ReleaseLifecycle");
    m_releaseLifecycleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Created")) {
    m_created = jsonValue.GetString("Created");
    m_createdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastModified")) {
    m_lastModified = jsonValue.GetString("LastModified");
    m_lastModifiedHasBeenSet = true;
  }
  return *this;
}

JsonValue RuntimeAliasInfo::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_arnHasBeenSet) {
    payload.WithString("Arn", m_arn);
  }

  if (m_runtimeVersionHasBeenSet) {
    payload.WithString("RuntimeVersion", m_runtimeVersion);
  }

  if (m_runtimeVersionArnHasBeenSet) {
    payload.WithString("RuntimeVersionArn", m_runtimeVersionArn);
  }

  if (m_stateHasBeenSet) {
    payload.WithString("State", RuntimeAliasStateMapper::GetNameForRuntimeAliasState(m_state));
  }

  if (m_pendingDeletionAtHasBeenSet) {
    payload.WithString("PendingDeletionAt", m_pendingDeletionAt);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_compatibilityHasBeenSet) {
    payload.WithObject("Compatibility", m_compatibility.Jsonize());
  }

  if (m_releaseLifecycleHasBeenSet) {
    payload.WithObject("ReleaseLifecycle", m_releaseLifecycle.Jsonize());
  }

  if (m_createdHasBeenSet) {
    payload.WithString("Created", m_created);
  }

  if (m_lastModifiedHasBeenSet) {
    payload.WithString("LastModified", m_lastModified);
  }

  return payload;
}

}  // namespace Model
}  // namespace LambdaCore
}  // namespace Aws
