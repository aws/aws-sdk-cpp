/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/CustomModelDeploymentUpdateDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Bedrock {
namespace Model {

CustomModelDeploymentUpdateDetails::CustomModelDeploymentUpdateDetails(JsonView jsonValue) { *this = jsonValue; }

CustomModelDeploymentUpdateDetails& CustomModelDeploymentUpdateDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("modelArn")) {
    m_modelArn = jsonValue.GetString("modelArn");
    m_modelArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updateStatus")) {
    m_updateStatus =
        CustomModelDeploymentUpdateStatusMapper::GetCustomModelDeploymentUpdateStatusForName(jsonValue.GetString("updateStatus"));
    m_updateStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue CustomModelDeploymentUpdateDetails::Jsonize() const {
  JsonValue payload;

  if (m_modelArnHasBeenSet) {
    payload.WithString("modelArn", m_modelArn);
  }

  if (m_updateStatusHasBeenSet) {
    payload.WithString("updateStatus",
                       CustomModelDeploymentUpdateStatusMapper::GetNameForCustomModelDeploymentUpdateStatus(m_updateStatus));
  }

  return payload;
}

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
