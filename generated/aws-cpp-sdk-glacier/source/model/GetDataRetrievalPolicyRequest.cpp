/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glacier/model/GetDataRetrievalPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glacier::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetDataRetrievalPolicyRequest::GetDataRetrievalPolicyRequest() : 
    m_accountIdHasBeenSet(false)
{
}

Aws::String GetDataRetrievalPolicyRequest::SerializePayload() const
{
  return {};
}




