/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/WebAppEndpointDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Transfer {
namespace Model {

WebAppEndpointDetails::WebAppEndpointDetails(JsonView jsonValue) { *this = jsonValue; }

WebAppEndpointDetails& WebAppEndpointDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Vpc")) {
    m_vpc = jsonValue.GetObject("Vpc");
    m_vpcHasBeenSet = true;
  }
  return *this;
}

JsonValue WebAppEndpointDetails::Jsonize() const {
  JsonValue payload;

  if (m_vpcHasBeenSet) {
    payload.WithObject("Vpc", m_vpc.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Transfer
}  // namespace Aws
