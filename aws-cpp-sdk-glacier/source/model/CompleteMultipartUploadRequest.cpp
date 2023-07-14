/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glacier/model/CompleteMultipartUploadRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Glacier::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CompleteMultipartUploadRequest::CompleteMultipartUploadRequest() : 
    m_accountIdHasBeenSet(false),
    m_vaultNameHasBeenSet(false),
    m_uploadIdHasBeenSet(false),
    m_archiveSizeHasBeenSet(false),
    m_checksumHasBeenSet(false)
{
}

Aws::String CompleteMultipartUploadRequest::SerializePayload() const
{
  return {};
}

Aws::Http::HeaderValueCollection CompleteMultipartUploadRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_archiveSizeHasBeenSet)
  {
    ss << m_archiveSize;
    headers.emplace("x-amz-archive-size",  ss.str());
    ss.str("");
  }

  if(m_checksumHasBeenSet)
  {
    ss << m_checksum;
    headers.emplace("x-amz-sha256-tree-hash",  ss.str());
    ss.str("");
  }

  return headers;

}




