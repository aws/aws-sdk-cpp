/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/deadline/model/PersistentVolumeConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace deadline {
namespace Model {

PersistentVolumeConfiguration::PersistentVolumeConfiguration(JsonView jsonValue) { *this = jsonValue; }

PersistentVolumeConfiguration& PersistentVolumeConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sizeGiB")) {
    m_sizeGiB = jsonValue.GetInteger("sizeGiB");
    m_sizeGiBHasBeenSet = true;
  }
  if (jsonValue.ValueExists("iops")) {
    m_iops = jsonValue.GetInteger("iops");
    m_iopsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("throughputMiB")) {
    m_throughputMiB = jsonValue.GetInteger("throughputMiB");
    m_throughputMiBHasBeenSet = true;
  }
  if (jsonValue.ValueExists("mountPath")) {
    m_mountPath = jsonValue.GetString("mountPath");
    m_mountPathHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastUsedTtlHours")) {
    m_lastUsedTtlHours = jsonValue.GetInteger("lastUsedTtlHours");
    m_lastUsedTtlHoursHasBeenSet = true;
  }
  return *this;
}

JsonValue PersistentVolumeConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_sizeGiBHasBeenSet) {
    payload.WithInteger("sizeGiB", m_sizeGiB);
  }

  if (m_iopsHasBeenSet) {
    payload.WithInteger("iops", m_iops);
  }

  if (m_throughputMiBHasBeenSet) {
    payload.WithInteger("throughputMiB", m_throughputMiB);
  }

  if (m_mountPathHasBeenSet) {
    payload.WithString("mountPath", m_mountPath);
  }

  if (m_lastUsedTtlHoursHasBeenSet) {
    payload.WithInteger("lastUsedTtlHours", m_lastUsedTtlHours);
  }

  return payload;
}

}  // namespace Model
}  // namespace deadline
}  // namespace Aws
