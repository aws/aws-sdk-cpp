/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/protocol-mock/model/GetRequestsReceivedRequest.h>

#include <utility>

using namespace Aws::ProtocolMock::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetRequestsReceivedRequest::SerializePayload() const { return {}; }
