/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/DeleteSourceLocationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaTailor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteSourceLocationRequest::DeleteSourceLocationRequest() : 
    m_sourceLocationNameHasBeenSet(false)
{
}

Aws::String DeleteSourceLocationRequest::SerializePayload() const
{
  return {};
}




