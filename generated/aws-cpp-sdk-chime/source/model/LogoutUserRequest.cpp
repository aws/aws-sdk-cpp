/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/LogoutUserRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

LogoutUserRequest::LogoutUserRequest() : 
    m_accountIdHasBeenSet(false),
    m_userIdHasBeenSet(false)
{
}

Aws::String LogoutUserRequest::SerializePayload() const
{
  return {};
}




