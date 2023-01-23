/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticfilesystem/model/DeleteAccessPointRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EFS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteAccessPointRequest::DeleteAccessPointRequest() : 
    m_accessPointIdHasBeenSet(false)
{
}

Aws::String DeleteAccessPointRequest::SerializePayload() const
{
  return {};
}




