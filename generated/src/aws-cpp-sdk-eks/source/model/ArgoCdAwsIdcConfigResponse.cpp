/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/eks/model/ArgoCdAwsIdcConfigResponse.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EKS {
namespace Model {

ArgoCdAwsIdcConfigResponse::ArgoCdAwsIdcConfigResponse(JsonView jsonValue) { *this = jsonValue; }

ArgoCdAwsIdcConfigResponse& ArgoCdAwsIdcConfigResponse::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("idcInstanceArn")) {
    m_idcInstanceArn = jsonValue.GetString("idcInstanceArn");
    m_idcInstanceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("idcRegion")) {
    m_idcRegion = jsonValue.GetString("idcRegion");
    m_idcRegionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("idcManagedApplicationArn")) {
    m_idcManagedApplicationArn = jsonValue.GetString("idcManagedApplicationArn");
    m_idcManagedApplicationArnHasBeenSet = true;
  }
  return *this;
}

JsonValue ArgoCdAwsIdcConfigResponse::Jsonize() const {
  JsonValue payload;

  if (m_idcInstanceArnHasBeenSet) {
    payload.WithString("idcInstanceArn", m_idcInstanceArn);
  }

  if (m_idcRegionHasBeenSet) {
    payload.WithString("idcRegion", m_idcRegion);
  }

  if (m_idcManagedApplicationArnHasBeenSet) {
    payload.WithString("idcManagedApplicationArn", m_idcManagedApplicationArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
