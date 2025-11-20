/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lakeformation/model/ServiceIntegrationUnion.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LakeFormation {
namespace Model {

ServiceIntegrationUnion::ServiceIntegrationUnion(JsonView jsonValue) { *this = jsonValue; }

ServiceIntegrationUnion& ServiceIntegrationUnion::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Redshift")) {
    Aws::Utils::Array<JsonView> redshiftJsonList = jsonValue.GetArray("Redshift");
    for (unsigned redshiftIndex = 0; redshiftIndex < redshiftJsonList.GetLength(); ++redshiftIndex) {
      m_redshift.push_back(redshiftJsonList[redshiftIndex].AsObject());
    }
    m_redshiftHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceIntegrationUnion::Jsonize() const {
  JsonValue payload;

  if (m_redshiftHasBeenSet) {
    Aws::Utils::Array<JsonValue> redshiftJsonList(m_redshift.size());
    for (unsigned redshiftIndex = 0; redshiftIndex < redshiftJsonList.GetLength(); ++redshiftIndex) {
      redshiftJsonList[redshiftIndex].AsObject(m_redshift[redshiftIndex].Jsonize());
    }
    payload.WithArray("Redshift", std::move(redshiftJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace LakeFormation
}  // namespace Aws
