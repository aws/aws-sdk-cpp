/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry-control/model/S3SynchronizedSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgentRegistryControl {
namespace Model {

S3SynchronizedSource::S3SynchronizedSource(JsonView jsonValue) { *this = jsonValue; }

S3SynchronizedSource& S3SynchronizedSource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("url")) {
    m_url = jsonValue.GetString("url");
    m_urlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("synchronizedAt")) {
    m_synchronizedAt = jsonValue.GetString("synchronizedAt");
    m_synchronizedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("versionId")) {
    m_versionId = jsonValue.GetString("versionId");
    m_versionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("eTag")) {
    m_eTag = jsonValue.GetString("eTag");
    m_eTagHasBeenSet = true;
  }
  return *this;
}

JsonValue S3SynchronizedSource::Jsonize() const {
  JsonValue payload;

  if (m_urlHasBeenSet) {
    payload.WithString("url", m_url);
  }

  if (m_synchronizedAtHasBeenSet) {
    payload.WithString("synchronizedAt", m_synchronizedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_versionIdHasBeenSet) {
    payload.WithString("versionId", m_versionId);
  }

  if (m_eTagHasBeenSet) {
    payload.WithString("eTag", m_eTag);
  }

  return payload;
}

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
