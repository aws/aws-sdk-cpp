/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediastore-data/model/DeleteObjectRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaStoreData::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteObjectRequest::DeleteObjectRequest() : 
    m_pathHasBeenSet(false)
{
}

Aws::String DeleteObjectRequest::SerializePayload() const
{
  return {};
}




