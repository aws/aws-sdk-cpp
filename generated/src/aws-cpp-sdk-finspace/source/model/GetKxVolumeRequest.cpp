/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/GetKxVolumeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::finspace::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetKxVolumeRequest::GetKxVolumeRequest() : 
    m_environmentIdHasBeenSet(false),
    m_volumeNameHasBeenSet(false)
{
}

Aws::String GetKxVolumeRequest::SerializePayload() const
{
  return {};
}




