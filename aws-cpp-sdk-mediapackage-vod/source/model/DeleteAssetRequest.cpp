/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackage-vod/model/DeleteAssetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaPackageVod::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteAssetRequest::DeleteAssetRequest() : 
    m_idHasBeenSet(false)
{
}

Aws::String DeleteAssetRequest::SerializePayload() const
{
  return {};
}




