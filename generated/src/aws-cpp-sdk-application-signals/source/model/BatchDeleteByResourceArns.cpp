/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/BatchDeleteByResourceArns.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ApplicationSignals {
namespace Model {

BatchDeleteByResourceArns::BatchDeleteByResourceArns(JsonView jsonValue) { *this = jsonValue; }

BatchDeleteByResourceArns& BatchDeleteByResourceArns::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ResourceArns")) {
    Aws::Utils::Array<JsonView> resourceArnsJsonList = jsonValue.GetArray("ResourceArns");
    for (unsigned resourceArnsIndex = 0; resourceArnsIndex < resourceArnsJsonList.GetLength(); ++resourceArnsIndex) {
      m_resourceArns.push_back(resourceArnsJsonList[resourceArnsIndex].AsString());
    }
    m_resourceArnsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InstrumentationType")) {
    m_instrumentationType = InstrumentationTypeMapper::GetInstrumentationTypeForName(jsonValue.GetString("InstrumentationType"));
    m_instrumentationTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchDeleteByResourceArns::Jsonize() const {
  JsonValue payload;

  if (m_resourceArnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> resourceArnsJsonList(m_resourceArns.size());
    for (unsigned resourceArnsIndex = 0; resourceArnsIndex < resourceArnsJsonList.GetLength(); ++resourceArnsIndex) {
      resourceArnsJsonList[resourceArnsIndex].AsString(m_resourceArns[resourceArnsIndex]);
    }
    payload.WithArray("ResourceArns", std::move(resourceArnsJsonList));
  }

  if (m_instrumentationTypeHasBeenSet) {
    payload.WithString("InstrumentationType", InstrumentationTypeMapper::GetNameForInstrumentationType(m_instrumentationType));
  }

  return payload;
}

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
