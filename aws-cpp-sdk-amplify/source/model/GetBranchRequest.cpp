/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplify/model/GetBranchRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Amplify::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetBranchRequest::GetBranchRequest() : 
    m_appIdHasBeenSet(false),
    m_branchNameHasBeenSet(false)
{
}

Aws::String GetBranchRequest::SerializePayload() const
{
  return {};
}




