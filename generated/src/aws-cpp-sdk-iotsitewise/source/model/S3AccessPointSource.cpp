/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotsitewise/model/S3AccessPointSource.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {

S3AccessPointSource::S3AccessPointSource(JsonView jsonValue) { *this = jsonValue; }

S3AccessPointSource& S3AccessPointSource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("accessPointArn")) {
    m_accessPointArn = jsonValue.GetString("accessPointArn");
    m_accessPointArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("prefix")) {
    m_prefix = jsonValue.GetString("prefix");
    m_prefixHasBeenSet = true;
  }
  return *this;
}

JsonValue S3AccessPointSource::Jsonize() const {
  JsonValue payload;

  if (m_accessPointArnHasBeenSet) {
    payload.WithString("accessPointArn", m_accessPointArn);
  }

  if (m_prefixHasBeenSet) {
    payload.WithString("prefix", m_prefix);
  }

  return payload;
}

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
