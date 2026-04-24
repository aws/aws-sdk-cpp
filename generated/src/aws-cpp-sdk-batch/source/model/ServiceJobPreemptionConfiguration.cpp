/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/ServiceJobPreemptionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Batch {
namespace Model {

ServiceJobPreemptionConfiguration::ServiceJobPreemptionConfiguration(JsonView jsonValue) { *this = jsonValue; }

ServiceJobPreemptionConfiguration& ServiceJobPreemptionConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("preemptionRetriesBeforeTermination")) {
    m_preemptionRetriesBeforeTermination = jsonValue.GetInteger("preemptionRetriesBeforeTermination");
    m_preemptionRetriesBeforeTerminationHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceJobPreemptionConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_preemptionRetriesBeforeTerminationHasBeenSet) {
    payload.WithInteger("preemptionRetriesBeforeTermination", m_preemptionRetriesBeforeTermination);
  }

  return payload;
}

}  // namespace Model
}  // namespace Batch
}  // namespace Aws
