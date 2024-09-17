/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/model/DeletePolicyStatementRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EntityResolution::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeletePolicyStatementRequest::DeletePolicyStatementRequest() : 
    m_arnHasBeenSet(false),
    m_statementIdHasBeenSet(false)
{
}

Aws::String DeletePolicyStatementRequest::SerializePayload() const
{
  return {};
}




