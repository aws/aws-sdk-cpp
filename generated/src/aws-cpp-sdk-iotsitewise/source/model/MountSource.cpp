/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotsitewise/model/MountSource.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {

MountSource::MountSource(JsonView jsonValue) { *this = jsonValue; }

MountSource& MountSource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("s3AccessPoint")) {
    m_s3AccessPoint = jsonValue.GetObject("s3AccessPoint");
    m_s3AccessPointHasBeenSet = true;
  }
  return *this;
}

JsonValue MountSource::Jsonize() const {
  JsonValue payload;

  if (m_s3AccessPointHasBeenSet) {
    payload.WithObject("s3AccessPoint", m_s3AccessPoint.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
