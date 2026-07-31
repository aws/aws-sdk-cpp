/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/model/PacingStrategy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectCampaignsV2 {
namespace Model {

PacingStrategy::PacingStrategy(JsonView jsonValue) { *this = jsonValue; }

PacingStrategy& PacingStrategy::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("abandonmentRate")) {
    m_abandonmentRate = jsonValue.GetObject("abandonmentRate");
    m_abandonmentRateHasBeenSet = true;
  }
  return *this;
}

JsonValue PacingStrategy::Jsonize() const {
  JsonValue payload;

  if (m_abandonmentRateHasBeenSet) {
    payload.WithObject("abandonmentRate", m_abandonmentRate.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectCampaignsV2
}  // namespace Aws
