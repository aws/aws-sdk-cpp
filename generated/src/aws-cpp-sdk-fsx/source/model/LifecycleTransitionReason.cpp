/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/fsx/model/LifecycleTransitionReason.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace FSx {
namespace Model {

LifecycleTransitionReason::LifecycleTransitionReason(JsonView jsonValue) { *this = jsonValue; }

LifecycleTransitionReason& LifecycleTransitionReason::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Message")) {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OntapError")) {
    m_ontapError = jsonValue.GetObject("OntapError");
    m_ontapErrorHasBeenSet = true;
  }
  return *this;
}

JsonValue LifecycleTransitionReason::Jsonize() const {
  JsonValue payload;

  if (m_messageHasBeenSet) {
    payload.WithString("Message", m_message);
  }

  if (m_ontapErrorHasBeenSet) {
    payload.WithObject("OntapError", m_ontapError.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace FSx
}  // namespace Aws
