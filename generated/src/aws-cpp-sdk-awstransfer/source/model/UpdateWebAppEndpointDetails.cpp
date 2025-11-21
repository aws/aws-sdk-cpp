/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/UpdateWebAppEndpointDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Transfer {
namespace Model {

UpdateWebAppEndpointDetails::UpdateWebAppEndpointDetails(JsonView jsonValue) { *this = jsonValue; }

UpdateWebAppEndpointDetails& UpdateWebAppEndpointDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Vpc")) {
    m_vpc = jsonValue.GetObject("Vpc");
    m_vpcHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdateWebAppEndpointDetails::Jsonize() const {
  JsonValue payload;

  if (m_vpcHasBeenSet) {
    payload.WithObject("Vpc", m_vpc.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Transfer
}  // namespace Aws
