/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/GetCalculatedAttributeForProfileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetCalculatedAttributeForProfileRequest::GetCalculatedAttributeForProfileRequest() : 
    m_domainNameHasBeenSet(false),
    m_profileIdHasBeenSet(false),
    m_calculatedAttributeNameHasBeenSet(false)
{
}

Aws::String GetCalculatedAttributeForProfileRequest::SerializePayload() const
{
  return {};
}




