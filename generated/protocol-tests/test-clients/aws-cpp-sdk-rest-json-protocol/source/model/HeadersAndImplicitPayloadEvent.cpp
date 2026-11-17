/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/rest-json-protocol/model/HeadersAndImplicitPayloadEvent.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace RestJsonProtocol {
namespace Model {

HeadersAndImplicitPayloadEvent::HeadersAndImplicitPayloadEvent(JsonView jsonValue) { *this = jsonValue; }

HeadersAndImplicitPayloadEvent& HeadersAndImplicitPayloadEvent::operator=(JsonView) { return *this; }

JsonValue HeadersAndImplicitPayloadEvent::Jsonize() const {
  JsonValue payload;
  return payload;
}

}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws
