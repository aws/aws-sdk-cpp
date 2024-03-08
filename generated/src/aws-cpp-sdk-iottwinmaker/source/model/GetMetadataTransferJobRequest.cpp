/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/GetMetadataTransferJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTTwinMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetMetadataTransferJobRequest::GetMetadataTransferJobRequest() : 
    m_metadataTransferJobIdHasBeenSet(false)
{
}

Aws::String GetMetadataTransferJobRequest::SerializePayload() const
{
  return {};
}




