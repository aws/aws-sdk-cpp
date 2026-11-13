/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda-core/model/RuntimeVersionInfo.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LambdaCore {
namespace Model {

RuntimeVersionInfo::RuntimeVersionInfo(JsonView jsonValue) { *this = jsonValue; }

RuntimeVersionInfo& RuntimeVersionInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Arn")) {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResolvedUri")) {
    m_resolvedUri = jsonValue.GetString("ResolvedUri");
    m_resolvedUriHasBeenSet = true;
  }
  if (jsonValue.ValueExists("State")) {
    m_state = RuntimeVersionStateMapper::GetRuntimeVersionStateForName(jsonValue.GetString("State"));
    m_stateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PendingDeletionAt")) {
    m_pendingDeletionAt = jsonValue.GetString("PendingDeletionAt");
    m_pendingDeletionAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ReleaseNotes")) {
    m_releaseNotes = jsonValue.GetString("ReleaseNotes");
    m_releaseNotesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Compatibility")) {
    m_compatibility = jsonValue.GetObject("Compatibility");
    m_compatibilityHasBeenSet = true;
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

JsonValue RuntimeVersionInfo::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_arnHasBeenSet) {
    payload.WithString("Arn", m_arn);
  }

  if (m_resolvedUriHasBeenSet) {
    payload.WithString("ResolvedUri", m_resolvedUri);
  }

  if (m_stateHasBeenSet) {
    payload.WithString("State", RuntimeVersionStateMapper::GetNameForRuntimeVersionState(m_state));
  }

  if (m_pendingDeletionAtHasBeenSet) {
    payload.WithString("PendingDeletionAt", m_pendingDeletionAt);
  }

  if (m_releaseNotesHasBeenSet) {
    payload.WithString("ReleaseNotes", m_releaseNotes);
  }

  if (m_compatibilityHasBeenSet) {
    payload.WithObject("Compatibility", m_compatibility.Jsonize());
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
