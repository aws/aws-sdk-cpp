/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glacier/model/DeleteVaultRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glacier::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteVaultRequest::DeleteVaultRequest() : 
    m_accountIdHasBeenSet(false),
    m_vaultNameHasBeenSet(false)
{
}

Aws::String DeleteVaultRequest::SerializePayload() const
{
  return {};
}




