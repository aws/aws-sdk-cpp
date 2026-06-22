/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda-microvms/model/Logging.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LambdaMicrovms {
namespace Model {

Logging::Logging(JsonView jsonValue) { *this = jsonValue; }

Logging& Logging::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("disabled")) {
    m_disabled = jsonValue.GetObject("disabled");
    m_disabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cloudWatch")) {
    m_cloudWatch = jsonValue.GetObject("cloudWatch");
    m_cloudWatchHasBeenSet = true;
  }
  return *this;
}

JsonValue Logging::Jsonize() const {
  JsonValue payload;

  if (m_disabledHasBeenSet) {
    payload.WithObject("disabled", m_disabled.Jsonize());
  }

  if (m_cloudWatchHasBeenSet) {
    payload.WithObject("cloudWatch", m_cloudWatch.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
