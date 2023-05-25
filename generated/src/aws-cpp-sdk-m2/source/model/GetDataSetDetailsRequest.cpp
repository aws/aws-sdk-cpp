/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/GetDataSetDetailsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MainframeModernization::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetDataSetDetailsRequest::GetDataSetDetailsRequest() : 
    m_applicationIdHasBeenSet(false),
    m_dataSetNameHasBeenSet(false)
{
}

Aws::String GetDataSetDetailsRequest::SerializePayload() const
{
  return {};
}




