/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplify/model/GetDomainAssociationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Amplify::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetDomainAssociationRequest::GetDomainAssociationRequest() : 
    m_appIdHasBeenSet(false),
    m_domainNameHasBeenSet(false)
{
}

Aws::String GetDomainAssociationRequest::SerializePayload() const
{
  return {};
}




