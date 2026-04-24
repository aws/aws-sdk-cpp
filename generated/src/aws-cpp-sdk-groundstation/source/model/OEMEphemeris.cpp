/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/groundstation/model/OEMEphemeris.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GroundStation {
namespace Model {

OEMEphemeris::OEMEphemeris(JsonView jsonValue) { *this = jsonValue; }

OEMEphemeris& OEMEphemeris::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("s3Object")) {
    m_s3Object = jsonValue.GetObject("s3Object");
    m_s3ObjectHasBeenSet = true;
  }
  if (jsonValue.ValueExists("oemData")) {
    m_oemData = jsonValue.GetString("oemData");
    m_oemDataHasBeenSet = true;
  }
  return *this;
}

JsonValue OEMEphemeris::Jsonize() const {
  JsonValue payload;

  if (m_s3ObjectHasBeenSet) {
    payload.WithObject("s3Object", m_s3Object.Jsonize());
  }

  if (m_oemDataHasBeenSet) {
    payload.WithString("oemData", m_oemData);
  }

  return payload;
}

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
