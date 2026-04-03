/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/deadline/model/SchedulingConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace deadline {
namespace Model {

SchedulingConfiguration::SchedulingConfiguration(JsonView jsonValue) { *this = jsonValue; }

SchedulingConfiguration& SchedulingConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("priorityFifo")) {
    m_priorityFifo = jsonValue.GetObject("priorityFifo");
    m_priorityFifoHasBeenSet = true;
  }
  if (jsonValue.ValueExists("priorityBalanced")) {
    m_priorityBalanced = jsonValue.GetObject("priorityBalanced");
    m_priorityBalancedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("weightedBalanced")) {
    m_weightedBalanced = jsonValue.GetObject("weightedBalanced");
    m_weightedBalancedHasBeenSet = true;
  }
  return *this;
}

JsonValue SchedulingConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_priorityFifoHasBeenSet) {
    payload.WithObject("priorityFifo", m_priorityFifo.Jsonize());
  }

  if (m_priorityBalancedHasBeenSet) {
    payload.WithObject("priorityBalanced", m_priorityBalanced.Jsonize());
  }

  if (m_weightedBalancedHasBeenSet) {
    payload.WithObject("weightedBalanced", m_weightedBalanced.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace deadline
}  // namespace Aws
