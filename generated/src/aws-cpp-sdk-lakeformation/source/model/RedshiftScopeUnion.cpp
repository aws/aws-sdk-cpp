/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lakeformation/model/RedshiftScopeUnion.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LakeFormation {
namespace Model {

RedshiftScopeUnion::RedshiftScopeUnion(JsonView jsonValue) { *this = jsonValue; }

RedshiftScopeUnion& RedshiftScopeUnion::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("RedshiftConnect")) {
    m_redshiftConnect = jsonValue.GetObject("RedshiftConnect");
    m_redshiftConnectHasBeenSet = true;
  }
  return *this;
}

JsonValue RedshiftScopeUnion::Jsonize() const {
  JsonValue payload;

  if (m_redshiftConnectHasBeenSet) {
    payload.WithObject("RedshiftConnect", m_redshiftConnect.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace LakeFormation
}  // namespace Aws
