/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda/model/ContextStartedDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {

ContextStartedDetails::ContextStartedDetails(JsonView jsonValue) { *this = jsonValue; }

ContextStartedDetails& ContextStartedDetails::operator=(JsonView jsonValue) {
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue ContextStartedDetails::Jsonize() const {
  JsonValue payload;

  return payload;
}

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
