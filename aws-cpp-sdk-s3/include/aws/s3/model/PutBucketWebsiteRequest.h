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
#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/S3Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3/model/WebsiteConfiguration.h>

namespace Aws
{
namespace S3
{
namespace Model
{

  /**
   */
  class AWS_S3_API PutBucketWebsiteRequest : public S3Request
  {
  public:
    PutBucketWebsiteRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    
    inline PutBucketWebsiteRequest& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    
    inline PutBucketWebsiteRequest& WithBucket(Aws::String&& value) { SetBucket(value); return *this;}

    
    inline PutBucketWebsiteRequest& WithBucket(const char* value) { SetBucket(value); return *this;}

    
    inline const Aws::String& GetContentMD5() const{ return m_contentMD5; }

    
    inline void SetContentMD5(const Aws::String& value) { m_contentMD5HasBeenSet = true; m_contentMD5 = value; }

    
    inline void SetContentMD5(Aws::String&& value) { m_contentMD5HasBeenSet = true; m_contentMD5 = value; }

    
    inline void SetContentMD5(const char* value) { m_contentMD5HasBeenSet = true; m_contentMD5.assign(value); }

    
    inline PutBucketWebsiteRequest& WithContentMD5(const Aws::String& value) { SetContentMD5(value); return *this;}

    
    inline PutBucketWebsiteRequest& WithContentMD5(Aws::String&& value) { SetContentMD5(value); return *this;}

    
    inline PutBucketWebsiteRequest& WithContentMD5(const char* value) { SetContentMD5(value); return *this;}

    
    inline const WebsiteConfiguration& GetWebsiteConfiguration() const{ return m_websiteConfiguration; }

    
    inline void SetWebsiteConfiguration(const WebsiteConfiguration& value) { m_websiteConfigurationHasBeenSet = true; m_websiteConfiguration = value; }

    
    inline void SetWebsiteConfiguration(WebsiteConfiguration&& value) { m_websiteConfigurationHasBeenSet = true; m_websiteConfiguration = value; }

    
    inline PutBucketWebsiteRequest& WithWebsiteConfiguration(const WebsiteConfiguration& value) { SetWebsiteConfiguration(value); return *this;}

    
    inline PutBucketWebsiteRequest& WithWebsiteConfiguration(WebsiteConfiguration&& value) { SetWebsiteConfiguration(value); return *this;}

  private:
    Aws::String m_bucket;
    bool m_bucketHasBeenSet;
    Aws::String m_contentMD5;
    bool m_contentMD5HasBeenSet;
    WebsiteConfiguration m_websiteConfiguration;
    bool m_websiteConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
