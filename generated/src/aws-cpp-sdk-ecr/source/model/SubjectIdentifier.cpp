/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecr/model/SubjectIdentifier.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECR {
namespace Model {

SubjectIdentifier::SubjectIdentifier(JsonView jsonValue) { *this = jsonValue; }

SubjectIdentifier& SubjectIdentifier::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("imageDigest")) {
    m_imageDigest = jsonValue.GetString("imageDigest");
    m_imageDigestHasBeenSet = true;
  }
  return *this;
}

JsonValue SubjectIdentifier::Jsonize() const {
  JsonValue payload;

  if (m_imageDigestHasBeenSet) {
    payload.WithString("imageDigest", m_imageDigest);
  }

  return payload;
}

}  // namespace Model
}  // namespace ECR
}  // namespace Aws
