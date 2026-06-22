/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda-microvms/model/CodeArtifact.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LambdaMicrovms {
namespace Model {

CodeArtifact::CodeArtifact(JsonView jsonValue) { *this = jsonValue; }

CodeArtifact& CodeArtifact::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("uri")) {
    m_uri = jsonValue.GetString("uri");
    m_uriHasBeenSet = true;
  }
  return *this;
}

JsonValue CodeArtifact::Jsonize() const {
  JsonValue payload;

  if (m_uriHasBeenSet) {
    payload.WithString("uri", m_uri);
  }

  return payload;
}

}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
