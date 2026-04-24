/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/DaemonDeploymentRevisionDetail.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

DaemonDeploymentRevisionDetail::DaemonDeploymentRevisionDetail(JsonView jsonValue) { *this = jsonValue; }

DaemonDeploymentRevisionDetail& DaemonDeploymentRevisionDetail::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("capacityProviders")) {
    Aws::Utils::Array<JsonView> capacityProvidersJsonList = jsonValue.GetArray("capacityProviders");
    for (unsigned capacityProvidersIndex = 0; capacityProvidersIndex < capacityProvidersJsonList.GetLength(); ++capacityProvidersIndex) {
      m_capacityProviders.push_back(capacityProvidersJsonList[capacityProvidersIndex].AsObject());
    }
    m_capacityProvidersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("totalRunningInstanceCount")) {
    m_totalRunningInstanceCount = jsonValue.GetInteger("totalRunningInstanceCount");
    m_totalRunningInstanceCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("totalDrainingInstanceCount")) {
    m_totalDrainingInstanceCount = jsonValue.GetInteger("totalDrainingInstanceCount");
    m_totalDrainingInstanceCountHasBeenSet = true;
  }
  return *this;
}

JsonValue DaemonDeploymentRevisionDetail::Jsonize() const {
  JsonValue payload;

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_capacityProvidersHasBeenSet) {
    Aws::Utils::Array<JsonValue> capacityProvidersJsonList(m_capacityProviders.size());
    for (unsigned capacityProvidersIndex = 0; capacityProvidersIndex < capacityProvidersJsonList.GetLength(); ++capacityProvidersIndex) {
      capacityProvidersJsonList[capacityProvidersIndex].AsObject(m_capacityProviders[capacityProvidersIndex].Jsonize());
    }
    payload.WithArray("capacityProviders", std::move(capacityProvidersJsonList));
  }

  if (m_totalRunningInstanceCountHasBeenSet) {
    payload.WithInteger("totalRunningInstanceCount", m_totalRunningInstanceCount);
  }

  if (m_totalDrainingInstanceCountHasBeenSet) {
    payload.WithInteger("totalDrainingInstanceCount", m_totalDrainingInstanceCount);
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
