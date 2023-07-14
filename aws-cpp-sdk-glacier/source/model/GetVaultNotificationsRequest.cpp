/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glacier/model/GetVaultNotificationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glacier::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetVaultNotificationsRequest::GetVaultNotificationsRequest() : 
    m_accountIdHasBeenSet(false),
    m_vaultNameHasBeenSet(false)
{
}

Aws::String GetVaultNotificationsRequest::SerializePayload() const
{
  return {};
}




