/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry-control/model/GitHubSynchronizedSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgentRegistryControl {
namespace Model {

GitHubSynchronizedSource::GitHubSynchronizedSource(JsonView jsonValue) { *this = jsonValue; }

GitHubSynchronizedSource& GitHubSynchronizedSource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("url")) {
    m_url = jsonValue.GetString("url");
    m_urlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("synchronizedAt")) {
    m_synchronizedAt = jsonValue.GetString("synchronizedAt");
    m_synchronizedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("commitId")) {
    m_commitId = jsonValue.GetString("commitId");
    m_commitIdHasBeenSet = true;
  }
  return *this;
}

JsonValue GitHubSynchronizedSource::Jsonize() const {
  JsonValue payload;

  if (m_urlHasBeenSet) {
    payload.WithString("url", m_url);
  }

  if (m_synchronizedAtHasBeenSet) {
    payload.WithString("synchronizedAt", m_synchronizedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_commitIdHasBeenSet) {
    payload.WithString("commitId", m_commitId);
  }

  return payload;
}

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
