/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/DeleteLimitRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::deadline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteLimitRequest::DeleteLimitRequest() : 
    m_farmIdHasBeenSet(false),
    m_limitIdHasBeenSet(false)
{
}

Aws::String DeleteLimitRequest::SerializePayload() const
{
  return {};
}




