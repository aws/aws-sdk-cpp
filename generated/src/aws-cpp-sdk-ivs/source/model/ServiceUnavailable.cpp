/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/ivs/model/ServiceUnavailable.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IVS {
namespace Model {

ServiceUnavailable::ServiceUnavailable(JsonView jsonValue) { *this = jsonValue; }

ServiceUnavailable& ServiceUnavailable::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("exceptionMessage")) {
    m_exceptionMessage = jsonValue.GetString("exceptionMessage");
    m_exceptionMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceUnavailable::Jsonize() const {
  JsonValue payload;

  if (m_exceptionMessageHasBeenSet) {
    payload.WithString("exceptionMessage", m_exceptionMessage);
  }

  return payload;
}

}  // namespace Model
}  // namespace IVS
}  // namespace Aws
