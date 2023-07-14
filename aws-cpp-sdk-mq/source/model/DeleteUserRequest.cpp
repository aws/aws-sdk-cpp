/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mq/model/DeleteUserRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MQ::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteUserRequest::DeleteUserRequest() : 
    m_brokerIdHasBeenSet(false),
    m_usernameHasBeenSet(false)
{
}

Aws::String DeleteUserRequest::SerializePayload() const
{
  return {};
}




