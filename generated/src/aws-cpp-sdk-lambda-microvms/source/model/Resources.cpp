/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda-microvms/model/Resources.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LambdaMicrovms {
namespace Model {

Resources::Resources(JsonView jsonValue) { *this = jsonValue; }

Resources& Resources::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("minimumMemoryInMiB")) {
    m_minimumMemoryInMiB = jsonValue.GetInteger("minimumMemoryInMiB");
    m_minimumMemoryInMiBHasBeenSet = true;
  }
  return *this;
}

JsonValue Resources::Jsonize() const {
  JsonValue payload;

  if (m_minimumMemoryInMiBHasBeenSet) {
    payload.WithInteger("minimumMemoryInMiB", m_minimumMemoryInMiB);
  }

  return payload;
}

}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
