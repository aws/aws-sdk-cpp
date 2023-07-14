/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/DeleteOutpostRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Outposts::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteOutpostRequest::DeleteOutpostRequest() : 
    m_outpostIdHasBeenSet(false)
{
}

Aws::String DeleteOutpostRequest::SerializePayload() const
{
  return {};
}




