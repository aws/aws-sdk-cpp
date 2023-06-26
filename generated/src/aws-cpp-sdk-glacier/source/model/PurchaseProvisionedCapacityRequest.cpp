/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glacier/model/PurchaseProvisionedCapacityRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glacier::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PurchaseProvisionedCapacityRequest::PurchaseProvisionedCapacityRequest() : 
    m_accountIdHasBeenSet(false)
{
}

Aws::String PurchaseProvisionedCapacityRequest::SerializePayload() const
{
  return {};
}




