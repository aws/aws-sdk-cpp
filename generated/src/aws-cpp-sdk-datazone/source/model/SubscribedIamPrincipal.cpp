/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/SubscribedIamPrincipal.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {

SubscribedIamPrincipal::SubscribedIamPrincipal(JsonView jsonValue) { *this = jsonValue; }

SubscribedIamPrincipal& SubscribedIamPrincipal::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("principalArn")) {
    m_principalArn = jsonValue.GetString("principalArn");
    m_principalArnHasBeenSet = true;
  }
  return *this;
}

JsonValue SubscribedIamPrincipal::Jsonize() const {
  JsonValue payload;

  if (m_principalArnHasBeenSet) {
    payload.WithString("principalArn", m_principalArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
