/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluatorUserUnion.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

EvaluatorUserUnion::EvaluatorUserUnion(JsonView jsonValue) { *this = jsonValue; }

EvaluatorUserUnion& EvaluatorUserUnion::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ConnectUserArn")) {
    m_connectUserArn = jsonValue.GetString("ConnectUserArn");
    m_connectUserArnHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluatorUserUnion::Jsonize() const {
  JsonValue payload;

  if (m_connectUserArnHasBeenSet) {
    payload.WithString("ConnectUserArn", m_connectUserArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
