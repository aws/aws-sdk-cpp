/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lakeformation/model/GetGlueFunctionSessionContextRequest.h>

#include <utility>

using namespace Aws::LakeFormation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetGlueFunctionSessionContextRequest::SerializePayload() const {
  JsonValue payload;

  if (m_userDefinedFunctionArnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> userDefinedFunctionArnsJsonList(m_userDefinedFunctionArns.size());
    for (unsigned userDefinedFunctionArnsIndex = 0; userDefinedFunctionArnsIndex < userDefinedFunctionArnsJsonList.GetLength();
         ++userDefinedFunctionArnsIndex) {
      userDefinedFunctionArnsJsonList[userDefinedFunctionArnsIndex].AsString(m_userDefinedFunctionArns[userDefinedFunctionArnsIndex]);
    }
    payload.WithArray("UserDefinedFunctionArns", std::move(userDefinedFunctionArnsJsonList));
  }

  if (m_durationSecondsHasBeenSet) {
    payload.WithInteger("DurationSeconds", m_durationSeconds);
  }

  return payload.View().WriteReadable();
}
