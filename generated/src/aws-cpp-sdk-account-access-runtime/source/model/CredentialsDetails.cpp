/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/account-access-runtime/model/CredentialsDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AccountAccessRuntime {
namespace Model {

CredentialsDetails::CredentialsDetails(JsonView jsonValue) { *this = jsonValue; }

CredentialsDetails& CredentialsDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("programmaticAccess")) {
    m_programmaticAccess = jsonValue.GetObject("programmaticAccess");
    m_programmaticAccessHasBeenSet = true;
  }
  return *this;
}

JsonValue CredentialsDetails::Jsonize() const {
  JsonValue payload;

  if (m_programmaticAccessHasBeenSet) {
    payload.WithObject("programmaticAccess", m_programmaticAccess.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace AccountAccessRuntime
}  // namespace Aws
