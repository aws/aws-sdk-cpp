/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/ListWebhooksRequest.h>

#include <utility>

using namespace Aws::DevOpsAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListWebhooksRequest::SerializePayload() const { return {}; }
