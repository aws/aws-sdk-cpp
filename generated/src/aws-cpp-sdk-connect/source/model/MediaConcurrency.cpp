/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/MediaConcurrency.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

MediaConcurrency::MediaConcurrency(JsonView jsonValue) { *this = jsonValue; }

MediaConcurrency& MediaConcurrency::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Channel")) {
    m_channel = ChannelMapper::GetChannelForName(jsonValue.GetString("Channel"));
    m_channelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Concurrency")) {
    m_concurrency = jsonValue.GetInteger("Concurrency");
    m_concurrencyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CrossChannelBehavior")) {
    m_crossChannelBehavior = jsonValue.GetObject("CrossChannelBehavior");
    m_crossChannelBehaviorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("WorkloadTypeConcurrencies")) {
    Aws::Utils::Array<JsonView> workloadTypeConcurrenciesJsonList = jsonValue.GetArray("WorkloadTypeConcurrencies");
    for (unsigned workloadTypeConcurrenciesIndex = 0; workloadTypeConcurrenciesIndex < workloadTypeConcurrenciesJsonList.GetLength();
         ++workloadTypeConcurrenciesIndex) {
      m_workloadTypeConcurrencies.push_back(workloadTypeConcurrenciesJsonList[workloadTypeConcurrenciesIndex].AsObject());
    }
    m_workloadTypeConcurrenciesHasBeenSet = true;
  }
  return *this;
}

JsonValue MediaConcurrency::Jsonize() const {
  JsonValue payload;

  if (m_channelHasBeenSet) {
    payload.WithString("Channel", ChannelMapper::GetNameForChannel(m_channel));
  }

  if (m_concurrencyHasBeenSet) {
    payload.WithInteger("Concurrency", m_concurrency);
  }

  if (m_crossChannelBehaviorHasBeenSet) {
    payload.WithObject("CrossChannelBehavior", m_crossChannelBehavior.Jsonize());
  }

  if (m_workloadTypeConcurrenciesHasBeenSet) {
    Aws::Utils::Array<JsonValue> workloadTypeConcurrenciesJsonList(m_workloadTypeConcurrencies.size());
    for (unsigned workloadTypeConcurrenciesIndex = 0; workloadTypeConcurrenciesIndex < workloadTypeConcurrenciesJsonList.GetLength();
         ++workloadTypeConcurrenciesIndex) {
      workloadTypeConcurrenciesJsonList[workloadTypeConcurrenciesIndex].AsObject(
          m_workloadTypeConcurrencies[workloadTypeConcurrenciesIndex].Jsonize());
    }
    payload.WithArray("WorkloadTypeConcurrencies", std::move(workloadTypeConcurrenciesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
