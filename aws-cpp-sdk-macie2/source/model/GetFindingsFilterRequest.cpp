/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/GetFindingsFilterRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Macie2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetFindingsFilterRequest::GetFindingsFilterRequest() : 
    m_idHasBeenSet(false)
{
}

Aws::String GetFindingsFilterRequest::SerializePayload() const
{
  return {};
}




