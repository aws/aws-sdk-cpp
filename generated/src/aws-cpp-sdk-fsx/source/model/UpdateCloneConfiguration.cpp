/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/fsx/model/UpdateCloneConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace FSx {
namespace Model {

UpdateCloneConfiguration::UpdateCloneConfiguration(JsonView jsonValue) { *this = jsonValue; }

UpdateCloneConfiguration& UpdateCloneConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SplitAction")) {
    m_splitAction = CloneSplitActionMapper::GetCloneSplitActionForName(jsonValue.GetString("SplitAction"));
    m_splitActionHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdateCloneConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_splitActionHasBeenSet) {
    payload.WithString("SplitAction", CloneSplitActionMapper::GetNameForCloneSplitAction(m_splitAction));
  }

  return payload;
}

}  // namespace Model
}  // namespace FSx
}  // namespace Aws
