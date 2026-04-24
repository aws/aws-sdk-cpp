/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/SuccessfulBatchAssociationSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

SuccessfulBatchAssociationSummary::SuccessfulBatchAssociationSummary(JsonView jsonValue) { *this = jsonValue; }

SuccessfulBatchAssociationSummary& SuccessfulBatchAssociationSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ResourceArn")) {
    m_resourceArn = jsonValue.GetString("ResourceArn");
    m_resourceArnHasBeenSet = true;
  }
  return *this;
}

JsonValue SuccessfulBatchAssociationSummary::Jsonize() const {
  JsonValue payload;

  if (m_resourceArnHasBeenSet) {
    payload.WithString("ResourceArn", m_resourceArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
