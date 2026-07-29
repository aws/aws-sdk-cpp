/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotsitewise/model/Annotation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {

Annotation::Annotation(JsonView jsonValue) { *this = jsonValue; }

Annotation& Annotation::operator=(JsonView jsonValue) {
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue Annotation::Jsonize() const {
  JsonValue payload;

  return payload;
}

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
