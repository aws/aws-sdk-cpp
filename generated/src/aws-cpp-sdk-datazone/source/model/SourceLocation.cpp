/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/SourceLocation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {

SourceLocation::SourceLocation(JsonView jsonValue) { *this = jsonValue; }

SourceLocation& SourceLocation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("s3")) {
    m_s3 = jsonValue.GetString("s3");
    m_s3HasBeenSet = true;
  }
  return *this;
}

JsonValue SourceLocation::Jsonize() const {
  JsonValue payload;

  if (m_s3HasBeenSet) {
    payload.WithString("s3", m_s3);
  }

  return payload;
}

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
