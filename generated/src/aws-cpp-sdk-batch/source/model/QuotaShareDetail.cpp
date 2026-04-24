/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/QuotaShareDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Batch {
namespace Model {

QuotaShareDetail::QuotaShareDetail(JsonView jsonValue) { *this = jsonValue; }

QuotaShareDetail& QuotaShareDetail::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("quotaShareName")) {
    m_quotaShareName = jsonValue.GetString("quotaShareName");
    m_quotaShareNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("quotaShareArn")) {
    m_quotaShareArn = jsonValue.GetString("quotaShareArn");
    m_quotaShareArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("jobQueueArn")) {
    m_jobQueueArn = jsonValue.GetString("jobQueueArn");
    m_jobQueueArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("capacityLimits")) {
    Aws::Utils::Array<JsonView> capacityLimitsJsonList = jsonValue.GetArray("capacityLimits");
    for (unsigned capacityLimitsIndex = 0; capacityLimitsIndex < capacityLimitsJsonList.GetLength(); ++capacityLimitsIndex) {
      m_capacityLimits.push_back(capacityLimitsJsonList[capacityLimitsIndex].AsObject());
    }
    m_capacityLimitsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceSharingConfiguration")) {
    m_resourceSharingConfiguration = jsonValue.GetObject("resourceSharingConfiguration");
    m_resourceSharingConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("preemptionConfiguration")) {
    m_preemptionConfiguration = jsonValue.GetObject("preemptionConfiguration");
    m_preemptionConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("state")) {
    m_state = QuotaShareStateMapper::GetQuotaShareStateForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = QuotaShareStatusMapper::GetQuotaShareStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue QuotaShareDetail::Jsonize() const {
  JsonValue payload;

  if (m_quotaShareNameHasBeenSet) {
    payload.WithString("quotaShareName", m_quotaShareName);
  }

  if (m_quotaShareArnHasBeenSet) {
    payload.WithString("quotaShareArn", m_quotaShareArn);
  }

  if (m_jobQueueArnHasBeenSet) {
    payload.WithString("jobQueueArn", m_jobQueueArn);
  }

  if (m_capacityLimitsHasBeenSet) {
    Aws::Utils::Array<JsonValue> capacityLimitsJsonList(m_capacityLimits.size());
    for (unsigned capacityLimitsIndex = 0; capacityLimitsIndex < capacityLimitsJsonList.GetLength(); ++capacityLimitsIndex) {
      capacityLimitsJsonList[capacityLimitsIndex].AsObject(m_capacityLimits[capacityLimitsIndex].Jsonize());
    }
    payload.WithArray("capacityLimits", std::move(capacityLimitsJsonList));
  }

  if (m_resourceSharingConfigurationHasBeenSet) {
    payload.WithObject("resourceSharingConfiguration", m_resourceSharingConfiguration.Jsonize());
  }

  if (m_preemptionConfigurationHasBeenSet) {
    payload.WithObject("preemptionConfiguration", m_preemptionConfiguration.Jsonize());
  }

  if (m_stateHasBeenSet) {
    payload.WithString("state", QuotaShareStateMapper::GetNameForQuotaShareState(m_state));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", QuotaShareStatusMapper::GetNameForQuotaShareStatus(m_status));
  }

  return payload;
}

}  // namespace Model
}  // namespace Batch
}  // namespace Aws
