/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lakeformation/model/RedshiftConnect.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LakeFormation {
namespace Model {

RedshiftConnect::RedshiftConnect(JsonView jsonValue) { *this = jsonValue; }

RedshiftConnect& RedshiftConnect::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Authorization")) {
    m_authorization = ServiceAuthorizationMapper::GetServiceAuthorizationForName(jsonValue.GetString("Authorization"));
    m_authorizationHasBeenSet = true;
  }
  return *this;
}

JsonValue RedshiftConnect::Jsonize() const {
  JsonValue payload;

  if (m_authorizationHasBeenSet) {
    payload.WithString("Authorization", ServiceAuthorizationMapper::GetNameForServiceAuthorization(m_authorization));
  }

  return payload;
}

}  // namespace Model
}  // namespace LakeFormation
}  // namespace Aws
