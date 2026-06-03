/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/NeptuneUngraceful.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ARCRegionswitch {
namespace Model {

NeptuneUngraceful::NeptuneUngraceful(JsonView jsonValue) { *this = jsonValue; }

NeptuneUngraceful& NeptuneUngraceful::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ungraceful")) {
    m_ungraceful = NeptuneUngracefulBehaviorMapper::GetNeptuneUngracefulBehaviorForName(jsonValue.GetString("ungraceful"));
    m_ungracefulHasBeenSet = true;
  }
  return *this;
}

JsonValue NeptuneUngraceful::Jsonize() const {
  JsonValue payload;

  if (m_ungracefulHasBeenSet) {
    payload.WithString("ungraceful", NeptuneUngracefulBehaviorMapper::GetNameForNeptuneUngracefulBehavior(m_ungraceful));
  }

  return payload;
}

}  // namespace Model
}  // namespace ARCRegionswitch
}  // namespace Aws
