/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/GetMetadataRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AmplifyUIBuilder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetMetadataRequest::GetMetadataRequest() : 
    m_appIdHasBeenSet(false),
    m_environmentNameHasBeenSet(false)
{
}

Aws::String GetMetadataRequest::SerializePayload() const
{
  return {};
}




