/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/model/LambdaIntegrationIdentifier.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectCampaignsV2 {
namespace Model {

LambdaIntegrationIdentifier::LambdaIntegrationIdentifier(JsonView jsonValue) { *this = jsonValue; }

LambdaIntegrationIdentifier& LambdaIntegrationIdentifier::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("functionArn")) {
    m_functionArn = jsonValue.GetString("functionArn");
    m_functionArnHasBeenSet = true;
  }
  return *this;
}

JsonValue LambdaIntegrationIdentifier::Jsonize() const {
  JsonValue payload;

  if (m_functionArnHasBeenSet) {
    payload.WithString("functionArn", m_functionArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectCampaignsV2
}  // namespace Aws
