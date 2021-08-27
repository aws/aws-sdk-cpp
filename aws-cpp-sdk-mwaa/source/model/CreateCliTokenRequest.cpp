/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mwaa/model/CreateCliTokenRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MWAA::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateCliTokenRequest::CreateCliTokenRequest() : 
    m_nameHasBeenSet(false)
{
}

Aws::String CreateCliTokenRequest::SerializePayload() const
{
  return {};
}




