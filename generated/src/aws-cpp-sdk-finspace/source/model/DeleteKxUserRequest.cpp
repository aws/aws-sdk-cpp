/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/DeleteKxUserRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::finspace::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteKxUserRequest::DeleteKxUserRequest() : 
    m_userNameHasBeenSet(false),
    m_environmentIdHasBeenSet(false)
{
}

Aws::String DeleteKxUserRequest::SerializePayload() const
{
  return {};
}




