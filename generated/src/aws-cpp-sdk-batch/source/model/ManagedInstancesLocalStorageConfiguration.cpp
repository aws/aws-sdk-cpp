/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/ManagedInstancesLocalStorageConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Batch {
namespace Model {

ManagedInstancesLocalStorageConfiguration::ManagedInstancesLocalStorageConfiguration(JsonView jsonValue) { *this = jsonValue; }

ManagedInstancesLocalStorageConfiguration& ManagedInstancesLocalStorageConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("useLocalStorage")) {
    m_useLocalStorage = jsonValue.GetBool("useLocalStorage");
    m_useLocalStorageHasBeenSet = true;
  }
  return *this;
}

JsonValue ManagedInstancesLocalStorageConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_useLocalStorageHasBeenSet) {
    payload.WithBool("useLocalStorage", m_useLocalStorage);
  }

  return payload;
}

}  // namespace Model
}  // namespace Batch
}  // namespace Aws
