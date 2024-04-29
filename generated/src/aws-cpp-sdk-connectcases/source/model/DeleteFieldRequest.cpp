/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/DeleteFieldRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConnectCases::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteFieldRequest::DeleteFieldRequest() : 
    m_domainIdHasBeenSet(false),
    m_fieldIdHasBeenSet(false)
{
}

Aws::String DeleteFieldRequest::SerializePayload() const
{
  return {};
}




