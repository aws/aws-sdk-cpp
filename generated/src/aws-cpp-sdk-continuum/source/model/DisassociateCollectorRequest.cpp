/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/DisassociateCollectorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Continuum::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DisassociateCollectorRequest::SerializePayload() const {
  JsonValue payload;

  if (m_collectorArnHasBeenSet) {
    payload.WithString("collectorArn", m_collectorArn);
  }

  return payload.View().WriteReadable();
}
