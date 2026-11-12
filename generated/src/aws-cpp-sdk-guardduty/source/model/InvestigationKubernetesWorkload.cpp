/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/InvestigationKubernetesWorkload.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

InvestigationKubernetesWorkload::InvestigationKubernetesWorkload(JsonView jsonValue) { *this = jsonValue; }

InvestigationKubernetesWorkload& InvestigationKubernetesWorkload::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("workloadType")) {
    m_workloadType = jsonValue.GetString("workloadType");
    m_workloadTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("workloadName")) {
    m_workloadName = jsonValue.GetString("workloadName");
    m_workloadNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("containers")) {
    m_containers = jsonValue.GetString("containers");
    m_containersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("volumes")) {
    m_volumes = jsonValue.GetString("volumes");
    m_volumesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("securityContext")) {
    m_securityContext = jsonValue.GetString("securityContext");
    m_securityContextHasBeenSet = true;
  }
  return *this;
}

JsonValue InvestigationKubernetesWorkload::Jsonize() const {
  JsonValue payload;

  if (m_workloadTypeHasBeenSet) {
    payload.WithString("workloadType", m_workloadType);
  }

  if (m_workloadNameHasBeenSet) {
    payload.WithString("workloadName", m_workloadName);
  }

  if (m_containersHasBeenSet) {
    payload.WithString("containers", m_containers);
  }

  if (m_volumesHasBeenSet) {
    payload.WithString("volumes", m_volumes);
  }

  if (m_securityContextHasBeenSet) {
    payload.WithString("securityContext", m_securityContext);
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
