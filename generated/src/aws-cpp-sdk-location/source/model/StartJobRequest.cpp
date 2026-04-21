/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/location/model/StartJobRequest.h>

#include <utility>

using namespace Aws::LocationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartJobRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clientTokenHasBeenSet) {
    payload.WithString("ClientToken", m_clientToken);
  }

  if (m_actionHasBeenSet) {
    payload.WithString("Action", JobActionMapper::GetNameForJobAction(m_action));
  }

  if (m_actionOptionsHasBeenSet) {
    payload.WithObject("ActionOptions", m_actionOptions.Jsonize());
  }

  if (m_executionRoleArnHasBeenSet) {
    payload.WithString("ExecutionRoleArn", m_executionRoleArn);
  }

  if (m_inputOptionsHasBeenSet) {
    payload.WithObject("InputOptions", m_inputOptions.Jsonize());
  }

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_outputOptionsHasBeenSet) {
    payload.WithObject("OutputOptions", m_outputOptions.Jsonize());
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("Tags", std::move(tagsJsonMap));
  }

  return payload.View().WriteReadable();
}
