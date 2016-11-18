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
#include <aws/s3/model/CompletedMultipartUpload.h>
#include <aws/s3/model/RequestPayer.h>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace S3
{
namespace Model
{

  /**
   */
  class AWS_S3_API CompleteMultipartUploadRequest : public S3Request
  {
  public:
    CompleteMultipartUploadRequest();
    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    
    inline CompleteMultipartUploadRequest& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    
    inline CompleteMultipartUploadRequest& WithBucket(Aws::String&& value) { SetBucket(value); return *this;}

    
    inline CompleteMultipartUploadRequest& WithBucket(const char* value) { SetBucket(value); return *this;}

    
    inline const Aws::String& GetKey() const{ return m_key; }

    
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = value; }

    
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    
    inline CompleteMultipartUploadRequest& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    
    inline CompleteMultipartUploadRequest& WithKey(Aws::String&& value) { SetKey(value); return *this;}

    
    inline CompleteMultipartUploadRequest& WithKey(const char* value) { SetKey(value); return *this;}

    
    inline const CompletedMultipartUpload& GetMultipartUpload() const{ return m_multipartUpload; }

    
    inline void SetMultipartUpload(const CompletedMultipartUpload& value) { m_multipartUploadHasBeenSet = true; m_multipartUpload = value; }

    
    inline void SetMultipartUpload(CompletedMultipartUpload&& value) { m_multipartUploadHasBeenSet = true; m_multipartUpload = value; }

    
    inline CompleteMultipartUploadRequest& WithMultipartUpload(const CompletedMultipartUpload& value) { SetMultipartUpload(value); return *this;}

    
    inline CompleteMultipartUploadRequest& WithMultipartUpload(CompletedMultipartUpload&& value) { SetMultipartUpload(value); return *this;}

    
    inline const Aws::String& GetUploadId() const{ return m_uploadId; }

    
    inline void SetUploadId(const Aws::String& value) { m_uploadIdHasBeenSet = true; m_uploadId = value; }

    
    inline void SetUploadId(Aws::String&& value) { m_uploadIdHasBeenSet = true; m_uploadId = value; }

    
    inline void SetUploadId(const char* value) { m_uploadIdHasBeenSet = true; m_uploadId.assign(value); }

    
    inline CompleteMultipartUploadRequest& WithUploadId(const Aws::String& value) { SetUploadId(value); return *this;}

    
    inline CompleteMultipartUploadRequest& WithUploadId(Aws::String&& value) { SetUploadId(value); return *this;}

    
    inline CompleteMultipartUploadRequest& WithUploadId(const char* value) { SetUploadId(value); return *this;}

    
    inline const RequestPayer& GetRequestPayer() const{ return m_requestPayer; }

    
    inline void SetRequestPayer(const RequestPayer& value) { m_requestPayerHasBeenSet = true; m_requestPayer = value; }

    
    inline void SetRequestPayer(RequestPayer&& value) { m_requestPayerHasBeenSet = true; m_requestPayer = value; }

    
    inline CompleteMultipartUploadRequest& WithRequestPayer(const RequestPayer& value) { SetRequestPayer(value); return *this;}

    
    inline CompleteMultipartUploadRequest& WithRequestPayer(RequestPayer&& value) { SetRequestPayer(value); return *this;}

  private:
    Aws::String m_bucket;
    bool m_bucketHasBeenSet;
    Aws::String m_key;
    bool m_keyHasBeenSet;
    CompletedMultipartUpload m_multipartUpload;
    bool m_multipartUploadHasBeenSet;
    Aws::String m_uploadId;
    bool m_uploadIdHasBeenSet;
    RequestPayer m_requestPayer;
    bool m_requestPayerHasBeenSet;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
