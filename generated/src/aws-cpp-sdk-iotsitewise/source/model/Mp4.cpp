/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotsitewise/model/Mp4.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {

Mp4::Mp4(JsonView jsonValue) { *this = jsonValue; }

Mp4& Mp4::operator=(JsonView jsonValue) {
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue Mp4::Jsonize() const {
  JsonValue payload;

  return payload;
}

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
