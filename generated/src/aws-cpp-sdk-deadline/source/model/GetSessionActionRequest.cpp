/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/GetSessionActionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::deadline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetSessionActionRequest::GetSessionActionRequest() : 
    m_farmIdHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_queueIdHasBeenSet(false),
    m_sessionActionIdHasBeenSet(false)
{
}

Aws::String GetSessionActionRequest::SerializePayload() const
{
  return {};
}




