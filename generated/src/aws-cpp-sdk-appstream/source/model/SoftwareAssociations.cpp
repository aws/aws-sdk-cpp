/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/SoftwareAssociations.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AppStream {
namespace Model {

SoftwareAssociations::SoftwareAssociations(JsonView jsonValue) { *this = jsonValue; }

SoftwareAssociations& SoftwareAssociations::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SoftwareName")) {
    m_softwareName = jsonValue.GetString("SoftwareName");
    m_softwareNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = SoftwareDeploymentStatusMapper::GetSoftwareDeploymentStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DeploymentError")) {
    Aws::Utils::Array<JsonView> deploymentErrorJsonList = jsonValue.GetArray("DeploymentError");
    for (unsigned deploymentErrorIndex = 0; deploymentErrorIndex < deploymentErrorJsonList.GetLength(); ++deploymentErrorIndex) {
      m_deploymentError.push_back(deploymentErrorJsonList[deploymentErrorIndex].AsObject());
    }
    m_deploymentErrorHasBeenSet = true;
  }
  return *this;
}

JsonValue SoftwareAssociations::Jsonize() const {
  JsonValue payload;

  if (m_softwareNameHasBeenSet) {
    payload.WithString("SoftwareName", m_softwareName);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", SoftwareDeploymentStatusMapper::GetNameForSoftwareDeploymentStatus(m_status));
  }

  if (m_deploymentErrorHasBeenSet) {
    Aws::Utils::Array<JsonValue> deploymentErrorJsonList(m_deploymentError.size());
    for (unsigned deploymentErrorIndex = 0; deploymentErrorIndex < deploymentErrorJsonList.GetLength(); ++deploymentErrorIndex) {
      deploymentErrorJsonList[deploymentErrorIndex].AsObject(m_deploymentError[deploymentErrorIndex].Jsonize());
    }
    payload.WithArray("DeploymentError", std::move(deploymentErrorJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace AppStream
}  // namespace Aws
