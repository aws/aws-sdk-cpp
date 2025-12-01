/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/model/LambdaIntegrationConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectCampaignsV2 {
namespace Model {

LambdaIntegrationConfig::LambdaIntegrationConfig(JsonView jsonValue) { *this = jsonValue; }

LambdaIntegrationConfig& LambdaIntegrationConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("functionArn")) {
    m_functionArn = jsonValue.GetString("functionArn");
    m_functionArnHasBeenSet = true;
  }
  return *this;
}

JsonValue LambdaIntegrationConfig::Jsonize() const {
  JsonValue payload;

  if (m_functionArnHasBeenSet) {
    payload.WithString("functionArn", m_functionArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectCampaignsV2
}  // namespace Aws
