/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    headers.emplace("x-amz-archive-description",  ss.str());
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
