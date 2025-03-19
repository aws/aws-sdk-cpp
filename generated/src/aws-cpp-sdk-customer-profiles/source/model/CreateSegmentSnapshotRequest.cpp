/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/CreateSegmentSnapshotRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateSegmentSnapshotRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_dataFormatHasBeenSet)
  {
   payload.WithString("DataFormat", DataFormatMapper::GetNameForDataFormat(m_dataFormat));
  }

  if(m_encryptionKeyHasBeenSet)
  {
   payload.WithString("EncryptionKey", m_encryptionKey);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_destinationUriHasBeenSet)
  {
   payload.WithString("DestinationUri", m_destinationUri);

  }

  return payload.View().WriteReadable();
}




