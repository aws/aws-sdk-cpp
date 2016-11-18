﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  return "";
}

Aws::Http::HeaderValueCollection CompleteMultipartUploadRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_archiveSizeHasBeenSet)
  {
    ss << m_archiveSize;
    headers.insert(Aws::Http::HeaderValuePair("x-amz-archive-size", ss.str()));
    ss.str("");
  }

  if(m_checksumHasBeenSet)
  {
    ss << m_checksum;
    headers.insert(Aws::Http::HeaderValuePair("x-amz-sha256-tree-hash", ss.str()));
    ss.str("");
  }

  return headers;

}



