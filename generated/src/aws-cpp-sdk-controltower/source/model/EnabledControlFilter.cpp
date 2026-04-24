/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controltower/model/EnabledControlFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ControlTower {
namespace Model {

EnabledControlFilter::EnabledControlFilter(JsonView jsonValue) { *this = jsonValue; }

EnabledControlFilter& EnabledControlFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("controlIdentifiers")) {
    Aws::Utils::Array<JsonView> controlIdentifiersJsonList = jsonValue.GetArray("controlIdentifiers");
    for (unsigned controlIdentifiersIndex = 0; controlIdentifiersIndex < controlIdentifiersJsonList.GetLength();
         ++controlIdentifiersIndex) {
      m_controlIdentifiers.push_back(controlIdentifiersJsonList[controlIdentifiersIndex].AsString());
    }
    m_controlIdentifiersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statuses")) {
    Aws::Utils::Array<JsonView> statusesJsonList = jsonValue.GetArray("statuses");
    for (unsigned statusesIndex = 0; statusesIndex < statusesJsonList.GetLength(); ++statusesIndex) {
      m_statuses.push_back(EnablementStatusMapper::GetEnablementStatusForName(statusesJsonList[statusesIndex].AsString()));
    }
    m_statusesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("driftStatuses")) {
    Aws::Utils::Array<JsonView> driftStatusesJsonList = jsonValue.GetArray("driftStatuses");
    for (unsigned driftStatusesIndex = 0; driftStatusesIndex < driftStatusesJsonList.GetLength(); ++driftStatusesIndex) {
      m_driftStatuses.push_back(DriftStatusMapper::GetDriftStatusForName(driftStatusesJsonList[driftStatusesIndex].AsString()));
    }
    m_driftStatusesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("parentIdentifiers")) {
    Aws::Utils::Array<JsonView> parentIdentifiersJsonList = jsonValue.GetArray("parentIdentifiers");
    for (unsigned parentIdentifiersIndex = 0; parentIdentifiersIndex < parentIdentifiersJsonList.GetLength(); ++parentIdentifiersIndex) {
      m_parentIdentifiers.push_back(parentIdentifiersJsonList[parentIdentifiersIndex].AsString());
    }
    m_parentIdentifiersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("inheritanceDriftStatuses")) {
    Aws::Utils::Array<JsonView> inheritanceDriftStatusesJsonList = jsonValue.GetArray("inheritanceDriftStatuses");
    for (unsigned inheritanceDriftStatusesIndex = 0; inheritanceDriftStatusesIndex < inheritanceDriftStatusesJsonList.GetLength();
         ++inheritanceDriftStatusesIndex) {
      m_inheritanceDriftStatuses.push_back(
          DriftStatusMapper::GetDriftStatusForName(inheritanceDriftStatusesJsonList[inheritanceDriftStatusesIndex].AsString()));
    }
    m_inheritanceDriftStatusesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceDriftStatuses")) {
    Aws::Utils::Array<JsonView> resourceDriftStatusesJsonList = jsonValue.GetArray("resourceDriftStatuses");
    for (unsigned resourceDriftStatusesIndex = 0; resourceDriftStatusesIndex < resourceDriftStatusesJsonList.GetLength();
         ++resourceDriftStatusesIndex) {
      m_resourceDriftStatuses.push_back(
          DriftStatusMapper::GetDriftStatusForName(resourceDriftStatusesJsonList[resourceDriftStatusesIndex].AsString()));
    }
    m_resourceDriftStatusesHasBeenSet = true;
  }
  return *this;
}

JsonValue EnabledControlFilter::Jsonize() const {
  JsonValue payload;

  if (m_controlIdentifiersHasBeenSet) {
    Aws::Utils::Array<JsonValue> controlIdentifiersJsonList(m_controlIdentifiers.size());
    for (unsigned controlIdentifiersIndex = 0; controlIdentifiersIndex < controlIdentifiersJsonList.GetLength();
         ++controlIdentifiersIndex) {
      controlIdentifiersJsonList[controlIdentifiersIndex].AsString(m_controlIdentifiers[controlIdentifiersIndex]);
    }
    payload.WithArray("controlIdentifiers", std::move(controlIdentifiersJsonList));
  }

  if (m_statusesHasBeenSet) {
    Aws::Utils::Array<JsonValue> statusesJsonList(m_statuses.size());
    for (unsigned statusesIndex = 0; statusesIndex < statusesJsonList.GetLength(); ++statusesIndex) {
      statusesJsonList[statusesIndex].AsString(EnablementStatusMapper::GetNameForEnablementStatus(m_statuses[statusesIndex]));
    }
    payload.WithArray("statuses", std::move(statusesJsonList));
  }

  if (m_driftStatusesHasBeenSet) {
    Aws::Utils::Array<JsonValue> driftStatusesJsonList(m_driftStatuses.size());
    for (unsigned driftStatusesIndex = 0; driftStatusesIndex < driftStatusesJsonList.GetLength(); ++driftStatusesIndex) {
      driftStatusesJsonList[driftStatusesIndex].AsString(DriftStatusMapper::GetNameForDriftStatus(m_driftStatuses[driftStatusesIndex]));
    }
    payload.WithArray("driftStatuses", std::move(driftStatusesJsonList));
  }

  if (m_parentIdentifiersHasBeenSet) {
    Aws::Utils::Array<JsonValue> parentIdentifiersJsonList(m_parentIdentifiers.size());
    for (unsigned parentIdentifiersIndex = 0; parentIdentifiersIndex < parentIdentifiersJsonList.GetLength(); ++parentIdentifiersIndex) {
      parentIdentifiersJsonList[parentIdentifiersIndex].AsString(m_parentIdentifiers[parentIdentifiersIndex]);
    }
    payload.WithArray("parentIdentifiers", std::move(parentIdentifiersJsonList));
  }

  if (m_inheritanceDriftStatusesHasBeenSet) {
    Aws::Utils::Array<JsonValue> inheritanceDriftStatusesJsonList(m_inheritanceDriftStatuses.size());
    for (unsigned inheritanceDriftStatusesIndex = 0; inheritanceDriftStatusesIndex < inheritanceDriftStatusesJsonList.GetLength();
         ++inheritanceDriftStatusesIndex) {
      inheritanceDriftStatusesJsonList[inheritanceDriftStatusesIndex].AsString(
          DriftStatusMapper::GetNameForDriftStatus(m_inheritanceDriftStatuses[inheritanceDriftStatusesIndex]));
    }
    payload.WithArray("inheritanceDriftStatuses", std::move(inheritanceDriftStatusesJsonList));
  }

  if (m_resourceDriftStatusesHasBeenSet) {
    Aws::Utils::Array<JsonValue> resourceDriftStatusesJsonList(m_resourceDriftStatuses.size());
    for (unsigned resourceDriftStatusesIndex = 0; resourceDriftStatusesIndex < resourceDriftStatusesJsonList.GetLength();
         ++resourceDriftStatusesIndex) {
      resourceDriftStatusesJsonList[resourceDriftStatusesIndex].AsString(
          DriftStatusMapper::GetNameForDriftStatus(m_resourceDriftStatuses[resourceDriftStatusesIndex]));
    }
    payload.WithArray("resourceDriftStatuses", std::move(resourceDriftStatusesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace ControlTower
}  // namespace Aws
