/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/DocumentDbUngraceful.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ARCRegionswitch {
namespace Model {

DocumentDbUngraceful::DocumentDbUngraceful(JsonView jsonValue) { *this = jsonValue; }

DocumentDbUngraceful& DocumentDbUngraceful::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ungraceful")) {
    m_ungraceful = DocumentDbUngracefulBehaviorMapper::GetDocumentDbUngracefulBehaviorForName(jsonValue.GetString("ungraceful"));
    m_ungracefulHasBeenSet = true;
  }
  return *this;
}

JsonValue DocumentDbUngraceful::Jsonize() const {
  JsonValue payload;

  if (m_ungracefulHasBeenSet) {
    payload.WithString("ungraceful", DocumentDbUngracefulBehaviorMapper::GetNameForDocumentDbUngracefulBehavior(m_ungraceful));
  }

  return payload;
}

}  // namespace Model
}  // namespace ARCRegionswitch
}  // namespace Aws
