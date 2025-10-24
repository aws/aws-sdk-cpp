﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotsitewise/model/ListComputationModelDataBindingUsagesRequest.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListComputationModelDataBindingUsagesRequest::SerializePayload() const {
  JsonValue payload;

  if (m_dataBindingValueFilterHasBeenSet) {
    payload.WithObject("dataBindingValueFilter", m_dataBindingValueFilter.Jsonize());
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("nextToken", m_nextToken);
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("maxResults", m_maxResults);
  }

  return payload.View().WriteReadable();
}
