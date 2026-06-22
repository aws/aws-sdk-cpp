/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda-microvms/model/LoggingDisabled.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LambdaMicrovms {
namespace Model {

LoggingDisabled::LoggingDisabled(JsonView jsonValue) { *this = jsonValue; }

LoggingDisabled& LoggingDisabled::operator=(JsonView jsonValue) {
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue LoggingDisabled::Jsonize() const {
  JsonValue payload;

  return payload;
}

}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
