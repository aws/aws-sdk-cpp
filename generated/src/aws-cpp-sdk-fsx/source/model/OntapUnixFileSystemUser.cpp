/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/fsx/model/OntapUnixFileSystemUser.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace FSx {
namespace Model {

OntapUnixFileSystemUser::OntapUnixFileSystemUser(JsonView jsonValue) { *this = jsonValue; }

OntapUnixFileSystemUser& OntapUnixFileSystemUser::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  return *this;
}

JsonValue OntapUnixFileSystemUser::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  return payload;
}

}  // namespace Model
}  // namespace FSx
}  // namespace Aws
