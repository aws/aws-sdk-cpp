/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda-web/model/AccountQuotas.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LambdaWeb {
namespace Model {

AccountQuotas::AccountQuotas(JsonView jsonValue) { *this = jsonValue; }

AccountQuotas& AccountQuotas::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("maxTotalArmVCpus")) {
    m_maxTotalArmVCpus = jsonValue.GetInteger("maxTotalArmVCpus");
    m_maxTotalArmVCpusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maxTotalRateLimit")) {
    m_maxTotalRateLimit = jsonValue.GetInteger("maxTotalRateLimit");
    m_maxTotalRateLimitHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maxRevisionsPerFunction")) {
    m_maxRevisionsPerFunction = jsonValue.GetInteger("maxRevisionsPerFunction");
    m_maxRevisionsPerFunctionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maxEndpointsPerFunction")) {
    m_maxEndpointsPerFunction = jsonValue.GetInteger("maxEndpointsPerFunction");
    m_maxEndpointsPerFunctionHasBeenSet = true;
  }
  return *this;
}

JsonValue AccountQuotas::Jsonize() const {
  JsonValue payload;

  if (m_maxTotalArmVCpusHasBeenSet) {
    payload.WithInteger("maxTotalArmVCpus", m_maxTotalArmVCpus);
  }

  if (m_maxTotalRateLimitHasBeenSet) {
    payload.WithInteger("maxTotalRateLimit", m_maxTotalRateLimit);
  }

  if (m_maxRevisionsPerFunctionHasBeenSet) {
    payload.WithInteger("maxRevisionsPerFunction", m_maxRevisionsPerFunction);
  }

  if (m_maxEndpointsPerFunctionHasBeenSet) {
    payload.WithInteger("maxEndpointsPerFunction", m_maxEndpointsPerFunction);
  }

  return payload;
}

}  // namespace Model
}  // namespace LambdaWeb
}  // namespace Aws
