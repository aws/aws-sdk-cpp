/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/GetKxUserRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::finspace::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetKxUserRequest::GetKxUserRequest() : 
    m_userNameHasBeenSet(false),
    m_environmentIdHasBeenSet(false)
{
}

Aws::String GetKxUserRequest::SerializePayload() const
{
  return {};
}




