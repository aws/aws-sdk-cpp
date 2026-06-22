/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/BatchDeleteSuccessfulDeletion.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ApplicationSignals {
namespace Model {

BatchDeleteSuccessfulDeletion::BatchDeleteSuccessfulDeletion(JsonView jsonValue) { *this = jsonValue; }

BatchDeleteSuccessfulDeletion& BatchDeleteSuccessfulDeletion::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ResourceArn")) {
    m_resourceArn = jsonValue.GetString("ResourceArn");
    m_resourceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SignalType")) {
    m_signalType = jsonValue.GetString("SignalType");
    m_signalTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LocationHash")) {
    m_locationHash = jsonValue.GetString("LocationHash");
    m_locationHashHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchDeleteSuccessfulDeletion::Jsonize() const {
  JsonValue payload;

  if (m_resourceArnHasBeenSet) {
    payload.WithString("ResourceArn", m_resourceArn);
  }

  if (m_signalTypeHasBeenSet) {
    payload.WithString("SignalType", m_signalType);
  }

  if (m_locationHashHasBeenSet) {
    payload.WithString("LocationHash", m_locationHash);
  }

  return payload;
}

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
