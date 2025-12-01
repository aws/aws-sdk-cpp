/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/eks/model/CapabilityConfigurationRequest.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EKS {
namespace Model {

CapabilityConfigurationRequest::CapabilityConfigurationRequest(JsonView jsonValue) { *this = jsonValue; }

CapabilityConfigurationRequest& CapabilityConfigurationRequest::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("argoCd")) {
    m_argoCd = jsonValue.GetObject("argoCd");
    m_argoCdHasBeenSet = true;
  }
  return *this;
}

JsonValue CapabilityConfigurationRequest::Jsonize() const {
  JsonValue payload;

  if (m_argoCdHasBeenSet) {
    payload.WithObject("argoCd", m_argoCd.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
