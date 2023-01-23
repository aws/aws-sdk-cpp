/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glacier/model/CompleteVaultLockRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glacier::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CompleteVaultLockRequest::CompleteVaultLockRequest() : 
    m_accountIdHasBeenSet(false),
    m_vaultNameHasBeenSet(false),
    m_lockIdHasBeenSet(false)
{
}

Aws::String CompleteVaultLockRequest::SerializePayload() const
{
  return {};
}




