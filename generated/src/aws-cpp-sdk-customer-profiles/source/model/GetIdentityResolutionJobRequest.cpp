/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/GetIdentityResolutionJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetIdentityResolutionJobRequest::GetIdentityResolutionJobRequest() : 
    m_domainNameHasBeenSet(false),
    m_jobIdHasBeenSet(false)
{
}

Aws::String GetIdentityResolutionJobRequest::SerializePayload() const
{
  return {};
}




