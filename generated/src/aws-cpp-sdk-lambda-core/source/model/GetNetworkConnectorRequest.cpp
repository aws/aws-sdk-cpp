/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda-core/model/GetNetworkConnectorRequest.h>

#include <utility>

using namespace Aws::LambdaCore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetNetworkConnectorRequest::SerializePayload() const { return {}; }
