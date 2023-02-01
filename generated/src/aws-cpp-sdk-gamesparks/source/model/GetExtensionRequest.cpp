/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamesparks/model/GetExtensionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameSparks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetExtensionRequest::GetExtensionRequest() : 
    m_nameHasBeenSet(false),
    m_namespaceHasBeenSet(false)
{
}

Aws::String GetExtensionRequest::SerializePayload() const
{
  return {};
}




