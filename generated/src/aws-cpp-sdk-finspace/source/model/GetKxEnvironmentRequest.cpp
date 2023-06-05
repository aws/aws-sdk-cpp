/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/GetKxEnvironmentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::finspace::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetKxEnvironmentRequest::GetKxEnvironmentRequest() : 
    m_environmentIdHasBeenSet(false)
{
}

Aws::String GetKxEnvironmentRequest::SerializePayload() const
{
  return {};
}




