/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rest-json-protocol/model/NoInputAndNoOutputRequest.h>

#include <utility>

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String NoInputAndNoOutputRequest::SerializePayload() const { return {}; }
