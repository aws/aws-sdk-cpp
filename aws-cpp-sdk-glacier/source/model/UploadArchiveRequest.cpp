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
#include <aws/glacier/model/UploadArchiveRequest.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Glacier::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

UploadArchiveRequest::UploadArchiveRequest() : 
    m_vaultNameHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_archiveDescriptionHasBeenSet(false),
    m_checksumHasBeenSet(false)
{
}


Aws::Http::HeaderValueCollection UploadArchiveRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("x-amz-glacier-version", "2012-06-01"));

  Aws::StringStream ss;
  if(m_archiveDescriptionHasBeenSet)
  {
    ss << m_archiveDescription;
    headers.insert(Aws::Http::HeaderValuePair("x-amz-archive-description", ss.str()));
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
