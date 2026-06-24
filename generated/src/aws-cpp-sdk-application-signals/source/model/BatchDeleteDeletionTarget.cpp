/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/BatchDeleteDeletionTarget.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ApplicationSignals {
namespace Model {

BatchDeleteDeletionTarget::BatchDeleteDeletionTarget(JsonView jsonValue) { *this = jsonValue; }

BatchDeleteDeletionTarget& BatchDeleteDeletionTarget::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Scope")) {
    m_scope = jsonValue.GetObject("Scope");
    m_scopeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResourceArns")) {
    m_resourceArns = jsonValue.GetObject("ResourceArns");
    m_resourceArnsHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchDeleteDeletionTarget::Jsonize() const {
  JsonValue payload;

  if (m_scopeHasBeenSet) {
    payload.WithObject("Scope", m_scope.Jsonize());
  }

  if (m_resourceArnsHasBeenSet) {
    payload.WithObject("ResourceArns", m_resourceArns.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
