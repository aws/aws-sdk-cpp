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

#include <aws/mediastore-data/model/PutObjectRequest.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MediaStoreData::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

PutObjectRequest::PutObjectRequest() : 
    m_pathHasBeenSet(false),
    m_cacheControlHasBeenSet(false),
    m_storageClass(StorageClass::NOT_SET),
    m_storageClassHasBeenSet(false),
    m_uploadAvailability(UploadAvailability::NOT_SET),
    m_uploadAvailabilityHasBeenSet(false)
{
}



Aws::Http::HeaderValueCollection PutObjectRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_cacheControlHasBeenSet)
  {
    ss << m_cacheControl;
    headers.emplace("cache-control",  ss.str());
    ss.str("");
  }

  if(m_storageClassHasBeenSet)
  {
    headers.emplace("x-amz-storage-class", StorageClassMapper::GetNameForStorageClass(m_storageClass));
  }

  if(m_uploadAvailabilityHasBeenSet)
  {
    headers.emplace("x-amz-upload-availability", UploadAvailabilityMapper::GetNameForUploadAvailability(m_uploadAvailability));
  }

  return headers;

}
