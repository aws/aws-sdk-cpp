/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/GetAccountRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetAccountRequest::GetAccountRequest() : 
    m_accountIdHasBeenSet(false)
{
}

Aws::String GetAccountRequest::SerializePayload() const
{
  return {};
}




