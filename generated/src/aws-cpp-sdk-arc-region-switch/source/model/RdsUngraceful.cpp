/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/RdsUngraceful.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ARCRegionswitch {
namespace Model {

RdsUngraceful::RdsUngraceful(JsonView jsonValue) { *this = jsonValue; }

RdsUngraceful& RdsUngraceful::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ungraceful")) {
    m_ungraceful = RdsUngracefulBehaviorMapper::GetRdsUngracefulBehaviorForName(jsonValue.GetString("ungraceful"));
    m_ungracefulHasBeenSet = true;
  }
  return *this;
}

JsonValue RdsUngraceful::Jsonize() const {
  JsonValue payload;

  if (m_ungracefulHasBeenSet) {
    payload.WithString("ungraceful", RdsUngracefulBehaviorMapper::GetNameForRdsUngracefulBehavior(m_ungraceful));
  }

  return payload;
}

}  // namespace Model
}  // namespace ARCRegionswitch
}  // namespace Aws
