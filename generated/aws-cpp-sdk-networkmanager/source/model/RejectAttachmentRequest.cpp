/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/RejectAttachmentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::NetworkManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RejectAttachmentRequest::RejectAttachmentRequest() : 
    m_attachmentIdHasBeenSet(false)
{
}

Aws::String RejectAttachmentRequest::SerializePayload() const
{
  return {};
}




