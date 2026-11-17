/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/ConformancePackSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConfigService {
namespace Model {

ConformancePackSource::ConformancePackSource(JsonView jsonValue) { *this = jsonValue; }

ConformancePackSource& ConformancePackSource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SourceIdentifier")) {
    m_sourceIdentifier = jsonValue.GetString("SourceIdentifier");
    m_sourceIdentifierHasBeenSet = true;
  }
  return *this;
}

JsonValue ConformancePackSource::Jsonize() const {
  JsonValue payload;

  if (m_sourceIdentifierHasBeenSet) {
    payload.WithString("SourceIdentifier", m_sourceIdentifier);
  }

  return payload;
}

}  // namespace Model
}  // namespace ConfigService
}  // namespace Aws
