/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glacier/model/InitiateMultipartUploadRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Glacier::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

InitiateMultipartUploadRequest::InitiateMultipartUploadRequest() : 
    m_accountIdHasBeenSet(false),
    m_vaultNameHasBeenSet(false),
    m_archiveDescriptionHasBeenSet(false),
    m_partSizeHasBeenSet(false)
{
}

Aws::String InitiateMultipartUploadRequest::SerializePayload() const
{
  return {};
}

Aws::Http::HeaderValueCollection InitiateMultipartUploadRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_archiveDescriptionHasBeenSet)
  {
    ss << m_archiveDescription;
    headers.emplace("x-amz-archive-description",  ss.str());
    ss.str("");
  }

  if(m_partSizeHasBeenSet)
  {
    ss << m_partSize;
    headers.emplace("x-amz-part-size",  ss.str());
    ss.str("");
  }

  return headers;

}




