/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/elementalinference/model/UpdateQuestionSetRequest.h>

#include <utility>

using namespace Aws::ElementalInference::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateQuestionSetRequest::SerializePayload() const {
  JsonValue payload;

  if (m_yesNoHasBeenSet) {
    Aws::Utils::Array<JsonValue> yesNoJsonList(m_yesNo.size());
    for (unsigned yesNoIndex = 0; yesNoIndex < yesNoJsonList.GetLength(); ++yesNoIndex) {
      yesNoJsonList[yesNoIndex].AsObject(m_yesNo[yesNoIndex].Jsonize());
    }
    payload.WithArray("yesNo", std::move(yesNoJsonList));
  }

  if (m_yesNoPerOptionHasBeenSet) {
    Aws::Utils::Array<JsonValue> yesNoPerOptionJsonList(m_yesNoPerOption.size());
    for (unsigned yesNoPerOptionIndex = 0; yesNoPerOptionIndex < yesNoPerOptionJsonList.GetLength(); ++yesNoPerOptionIndex) {
      yesNoPerOptionJsonList[yesNoPerOptionIndex].AsObject(m_yesNoPerOption[yesNoPerOptionIndex].Jsonize());
    }
    payload.WithArray("yesNoPerOption", std::move(yesNoPerOptionJsonList));
  }

  if (m_chooseOneHasBeenSet) {
    Aws::Utils::Array<JsonValue> chooseOneJsonList(m_chooseOne.size());
    for (unsigned chooseOneIndex = 0; chooseOneIndex < chooseOneJsonList.GetLength(); ++chooseOneIndex) {
      chooseOneJsonList[chooseOneIndex].AsObject(m_chooseOne[chooseOneIndex].Jsonize());
    }
    payload.WithArray("chooseOne", std::move(chooseOneJsonList));
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  return payload.View().WriteReadable();
}
