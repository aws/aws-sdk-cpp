/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/ProjectSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Bedrock {
namespace Model {

ProjectSummary::ProjectSummary(JsonView jsonValue) { *this = jsonValue; }

ProjectSummary& ProjectSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = ProjectStatusMapper::GetProjectStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("archivedAt")) {
    m_archivedAt = jsonValue.GetString("archivedAt");
    m_archivedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dataRetention")) {
    m_dataRetention = jsonValue.GetObject("dataRetention");
    m_dataRetentionHasBeenSet = true;
  }
  return *this;
}

JsonValue ProjectSummary::Jsonize() const {
  JsonValue payload;

  if (m_idHasBeenSet) {
    payload.WithString("id", m_id);
  }

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", ProjectStatusMapper::GetNameForProjectStatus(m_status));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_archivedAtHasBeenSet) {
    payload.WithString("archivedAt", m_archivedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_dataRetentionHasBeenSet) {
    payload.WithObject("dataRetention", m_dataRetention.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
