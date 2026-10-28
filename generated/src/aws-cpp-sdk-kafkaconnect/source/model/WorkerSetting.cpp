/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kafkaconnect/model/WorkerSetting.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace KafkaConnect {
namespace Model {

WorkerSetting::WorkerSetting(JsonView jsonValue) { *this = jsonValue; }

WorkerSetting& WorkerSetting::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("capacity")) {
    m_capacity = jsonValue.GetObject("capacity");
    m_capacityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("plugins")) {
    Aws::Utils::Array<JsonView> pluginsJsonList = jsonValue.GetArray("plugins");
    for (unsigned pluginsIndex = 0; pluginsIndex < pluginsJsonList.GetLength(); ++pluginsIndex) {
      m_plugins.push_back(pluginsJsonList[pluginsIndex].AsObject());
    }
    m_pluginsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("workerConfiguration")) {
    m_workerConfiguration = jsonValue.GetObject("workerConfiguration");
    m_workerConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("useDefaultWorkerConfiguration")) {
    m_useDefaultWorkerConfiguration = jsonValue.GetBool("useDefaultWorkerConfiguration");
    m_useDefaultWorkerConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue WorkerSetting::Jsonize() const {
  JsonValue payload;

  if (m_capacityHasBeenSet) {
    payload.WithObject("capacity", m_capacity.Jsonize());
  }

  if (m_pluginsHasBeenSet) {
    Aws::Utils::Array<JsonValue> pluginsJsonList(m_plugins.size());
    for (unsigned pluginsIndex = 0; pluginsIndex < pluginsJsonList.GetLength(); ++pluginsIndex) {
      pluginsJsonList[pluginsIndex].AsObject(m_plugins[pluginsIndex].Jsonize());
    }
    payload.WithArray("plugins", std::move(pluginsJsonList));
  }

  if (m_workerConfigurationHasBeenSet) {
    payload.WithObject("workerConfiguration", m_workerConfiguration.Jsonize());
  }

  if (m_useDefaultWorkerConfigurationHasBeenSet) {
    payload.WithBool("useDefaultWorkerConfiguration", m_useDefaultWorkerConfiguration);
  }

  return payload;
}

}  // namespace Model
}  // namespace KafkaConnect
}  // namespace Aws
