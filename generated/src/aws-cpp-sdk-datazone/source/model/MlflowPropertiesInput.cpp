/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/MlflowPropertiesInput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {

MlflowPropertiesInput::MlflowPropertiesInput(JsonView jsonValue) { *this = jsonValue; }

MlflowPropertiesInput& MlflowPropertiesInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("trackingServerArn")) {
    m_trackingServerArn = jsonValue.GetString("trackingServerArn");
    m_trackingServerArnHasBeenSet = true;
  }
  return *this;
}

JsonValue MlflowPropertiesInput::Jsonize() const {
  JsonValue payload;

  if (m_trackingServerArnHasBeenSet) {
    payload.WithString("trackingServerArn", m_trackingServerArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
