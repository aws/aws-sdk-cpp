/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/glacier/model/UploadMultipartPartRequest.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Glacier::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

UploadMultipartPartRequest::UploadMultipartPartRequest() : 
    m_accountIdHasBeenSet(false),
    m_vaultNameHasBeenSet(false),
    m_uploadIdHasBeenSet(false),
    m_checksumHasBeenSet(false),
    m_rangeHasBeenSet(false)
{
}



Aws::Http::HeaderValueCollection UploadMultipartPartRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("x-amz-glacier-version", "2012-06-01"));
  Aws::StringStream ss;
  if(m_checksumHasBeenSet)
  {
    ss << m_checksum;
    headers.emplace("x-amz-sha256-tree-hash",  ss.str());
    ss.str("");
  }

  if(m_rangeHasBeenSet)
  {
    ss << m_range;
    headers.emplace("content-range",  ss.str());
    ss.str("");
  }

  return headers;

}
