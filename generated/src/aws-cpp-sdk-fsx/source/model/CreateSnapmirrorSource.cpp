/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/fsx/model/CreateSnapmirrorSource.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace FSx {
namespace Model {

CreateSnapmirrorSource::CreateSnapmirrorSource(JsonView jsonValue) { *this = jsonValue; }

CreateSnapmirrorSource& CreateSnapmirrorSource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Path")) {
    m_path = jsonValue.GetString("Path");
    m_pathHasBeenSet = true;
  }
  return *this;
}

JsonValue CreateSnapmirrorSource::Jsonize() const {
  JsonValue payload;

  if (m_pathHasBeenSet) {
    payload.WithString("Path", m_path);
  }

  return payload;
}

}  // namespace Model
}  // namespace FSx
}  // namespace Aws
