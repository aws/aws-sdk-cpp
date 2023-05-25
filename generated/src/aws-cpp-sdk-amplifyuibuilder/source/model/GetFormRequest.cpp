/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/GetFormRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AmplifyUIBuilder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetFormRequest::GetFormRequest() : 
    m_appIdHasBeenSet(false),
    m_environmentNameHasBeenSet(false),
    m_idHasBeenSet(false)
{
}

Aws::String GetFormRequest::SerializePayload() const
{
  return {};
}




