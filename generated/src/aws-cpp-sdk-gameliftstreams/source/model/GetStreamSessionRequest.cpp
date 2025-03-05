/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gameliftstreams/model/GetStreamSessionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameLiftStreams::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetStreamSessionRequest::GetStreamSessionRequest() : 
    m_identifierHasBeenSet(false),
    m_streamSessionIdentifierHasBeenSet(false)
{
}

Aws::String GetStreamSessionRequest::SerializePayload() const
{
  return {};
}




