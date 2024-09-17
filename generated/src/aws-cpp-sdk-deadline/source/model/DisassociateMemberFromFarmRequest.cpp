/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/DisassociateMemberFromFarmRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::deadline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisassociateMemberFromFarmRequest::DisassociateMemberFromFarmRequest() : 
    m_farmIdHasBeenSet(false),
    m_principalIdHasBeenSet(false)
{
}

Aws::String DisassociateMemberFromFarmRequest::SerializePayload() const
{
  return {};
}




