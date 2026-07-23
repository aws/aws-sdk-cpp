/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/GitMetadata.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {

GitMetadata::GitMetadata(JsonView jsonValue) { *this = jsonValue; }

GitMetadata& GitMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("connectionId")) {
    m_connectionId = jsonValue.GetString("connectionId");
    m_connectionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("repository")) {
    m_repository = jsonValue.GetString("repository");
    m_repositoryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("branch")) {
    m_branch = jsonValue.GetString("branch");
    m_branchHasBeenSet = true;
  }
  if (jsonValue.ValueExists("commitHash")) {
    m_commitHash = jsonValue.GetString("commitHash");
    m_commitHashHasBeenSet = true;
  }
  if (jsonValue.ValueExists("fileName")) {
    m_fileName = jsonValue.GetString("fileName");
    m_fileNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("committedAt")) {
    m_committedAt = jsonValue.GetDouble("committedAt");
    m_committedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("commitMessage")) {
    m_commitMessage = jsonValue.GetString("commitMessage");
    m_commitMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue GitMetadata::Jsonize() const {
  JsonValue payload;

  if (m_connectionIdHasBeenSet) {
    payload.WithString("connectionId", m_connectionId);
  }

  if (m_repositoryHasBeenSet) {
    payload.WithString("repository", m_repository);
  }

  if (m_branchHasBeenSet) {
    payload.WithString("branch", m_branch);
  }

  if (m_commitHashHasBeenSet) {
    payload.WithString("commitHash", m_commitHash);
  }

  if (m_fileNameHasBeenSet) {
    payload.WithString("fileName", m_fileName);
  }

  if (m_committedAtHasBeenSet) {
    payload.WithDouble("committedAt", m_committedAt.SecondsWithMSPrecision());
  }

  if (m_commitMessageHasBeenSet) {
    payload.WithString("commitMessage", m_commitMessage);
  }

  return payload;
}

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
