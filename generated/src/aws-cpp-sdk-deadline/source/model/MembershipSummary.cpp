/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/deadline/model/MembershipSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace deadline {
namespace Model {

MembershipSummary::MembershipSummary(JsonView jsonValue) { *this = jsonValue; }

MembershipSummary& MembershipSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("farm")) {
    m_farm = jsonValue.GetObject("farm");
    m_farmHasBeenSet = true;
  }
  if (jsonValue.ValueExists("queue")) {
    m_queue = jsonValue.GetObject("queue");
    m_queueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("fleet")) {
    m_fleet = jsonValue.GetObject("fleet");
    m_fleetHasBeenSet = true;
  }
  if (jsonValue.ValueExists("job")) {
    m_job = jsonValue.GetObject("job");
    m_jobHasBeenSet = true;
  }
  return *this;
}

JsonValue MembershipSummary::Jsonize() const {
  JsonValue payload;

  if (m_farmHasBeenSet) {
    payload.WithObject("farm", m_farm.Jsonize());
  }

  if (m_queueHasBeenSet) {
    payload.WithObject("queue", m_queue.Jsonize());
  }

  if (m_fleetHasBeenSet) {
    payload.WithObject("fleet", m_fleet.Jsonize());
  }

  if (m_jobHasBeenSet) {
    payload.WithObject("job", m_job.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace deadline
}  // namespace Aws
