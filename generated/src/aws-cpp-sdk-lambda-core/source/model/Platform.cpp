/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda-core/model/Platform.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LambdaCore {
namespace Model {

Platform::Platform(JsonView jsonValue) { *this = jsonValue; }

Platform& Platform::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Architecture")) {
    m_architecture = jsonValue.GetString("Architecture");
    m_architectureHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Os")) {
    m_os = jsonValue.GetString("Os");
    m_osHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Digest")) {
    m_digest = jsonValue.GetString("Digest");
    m_digestHasBeenSet = true;
  }
  return *this;
}

JsonValue Platform::Jsonize() const {
  JsonValue payload;

  if (m_architectureHasBeenSet) {
    payload.WithString("Architecture", m_architecture);
  }

  if (m_osHasBeenSet) {
    payload.WithString("Os", m_os);
  }

  if (m_digestHasBeenSet) {
    payload.WithString("Digest", m_digest);
  }

  return payload;
}

}  // namespace Model
}  // namespace LambdaCore
}  // namespace Aws
