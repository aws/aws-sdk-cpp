/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda-web/model/RevisionWeight.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LambdaWeb {
namespace Model {

RevisionWeight::RevisionWeight(JsonView jsonValue) { *this = jsonValue; }

RevisionWeight& RevisionWeight::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("revisionId")) {
    m_revisionId = jsonValue.GetString("revisionId");
    m_revisionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("weight")) {
    m_weight = jsonValue.GetInteger("weight");
    m_weightHasBeenSet = true;
  }
  return *this;
}

JsonValue RevisionWeight::Jsonize() const {
  JsonValue payload;

  if (m_revisionIdHasBeenSet) {
    payload.WithString("revisionId", m_revisionId);
  }

  if (m_weightHasBeenSet) {
    payload.WithInteger("weight", m_weight);
  }

  return payload;
}

}  // namespace Model
}  // namespace LambdaWeb
}  // namespace Aws
