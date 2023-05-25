/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/DisassociateSecurityKeyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisassociateSecurityKeyRequest::DisassociateSecurityKeyRequest() : 
    m_instanceIdHasBeenSet(false),
    m_associationIdHasBeenSet(false)
{
}

Aws::String DisassociateSecurityKeyRequest::SerializePayload() const
{
  return {};
}




