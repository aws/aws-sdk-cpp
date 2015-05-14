/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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

  /*
  */
  class AWS_S3_API UploadPartRequest : public StreamingS3Request
  {
  public:
    UploadPartRequest();
    void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetBucket() const{ return m_bucket; }
    
    inline void SetBucket(const Aws::String& value) { m_bucket = value; }

    
    inline void SetBucket(const char* value) { m_bucket.assign(value); }

    
    inline UploadPartRequest&  WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    
    inline UploadPartRequest& WithBucket(const char* value) { SetBucket(value); return *this;}

    /*
     Size of the body in bytes. This parameter is useful when the size of the body cannot be determined automatically.
    */
    inline long GetContentLength() const{ return m_contentLength; }
    /*
     Size of the body in bytes. This parameter is useful when the size of the body cannot be determined automatically.
    */
    inline void SetContentLength(long value) { m_contentLengthHasBeenSet = true; m_contentLength = value; }

    /*
     Size of the body in bytes. This parameter is useful when the size of the body cannot be determined automatically.
    */
    inline UploadPartRequest&  WithContentLength(long value) { SetContentLength(value); return *this;}

    
    inline const Aws::String& GetContentMD5() const{ return m_contentMD5; }
    
    inline void SetContentMD5(const Aws::String& value) { m_contentMD5HasBeenSet = true; m_contentMD5 = value; }

    
    inline void SetContentMD5(const char* value) { m_contentMD5HasBeenSet = true; m_contentMD5.assign(value); }

    
    inline UploadPartRequest&  WithContentMD5(const Aws::String& value) { SetContentMD5(value); return *this;}

    
    inline UploadPartRequest& WithContentMD5(const char* value) { SetContentMD5(value); return *this;}

    
    inline const Aws::String& GetKey() const{ return m_key; }
    
    inline void SetKey(const Aws::String& value) { m_key = value; }

    
    inline void SetKey(const char* value) { m_key.assign(value); }

    
    inline UploadPartRequest&  WithKey(const Aws::String& value) { SetKey(value); return *this;}

    
    inline UploadPartRequest& WithKey(const char* value) { SetKey(value); return *this;}

    /*
     Part number of part being uploaded.
    */
    inline long GetPartNumber() const{ return m_partNumber; }
    /*
     Part number of part being uploaded.
    */
    inline void SetPartNumber(long value) { m_partNumber = value; }

    /*
     Part number of part being uploaded.
    */
    inline UploadPartRequest&  WithPartNumber(long value) { SetPartNumber(value); return *this;}

    /*
     Upload ID identifying the multipart upload whose part is being uploaded.
    */
    inline const Aws::String& GetUploadId() const{ return m_uploadId; }
    /*
     Upload ID identifying the multipart upload whose part is being uploaded.
    */
    inline void SetUploadId(const Aws::String& value) { m_uploadId = value; }

    /*
     Upload ID identifying the multipart upload whose part is being uploaded.
    */
    inline void SetUploadId(const char* value) { m_uploadId.assign(value); }

    /*
     Upload ID identifying the multipart upload whose part is being uploaded.
    */
    inline UploadPartRequest&  WithUploadId(const Aws::String& value) { SetUploadId(value); return *this;}

    /*
     Upload ID identifying the multipart upload whose part is being uploaded.
    */
    inline UploadPartRequest& WithUploadId(const char* value) { SetUploadId(value); return *this;}

    /*
     Specifies the algorithm to use to when encrypting the object (e.g., AES256, aws:kms).
    */
    inline const Aws::String& GetSSECustomerAlgorithm() const{ return m_sSECustomerAlgorithm; }
    /*
     Specifies the algorithm to use to when encrypting the object (e.g., AES256, aws:kms).
    */
    inline void SetSSECustomerAlgorithm(const Aws::String& value) { m_sSECustomerAlgorithmHasBeenSet = true; m_sSECustomerAlgorithm = value; }

    /*
     Specifies the algorithm to use to when encrypting the object (e.g., AES256, aws:kms).
    */
    inline void SetSSECustomerAlgorithm(const char* value) { m_sSECustomerAlgorithmHasBeenSet = true; m_sSECustomerAlgorithm.assign(value); }

    /*
     Specifies the algorithm to use to when encrypting the object (e.g., AES256, aws:kms).
    */
    inline UploadPartRequest&  WithSSECustomerAlgorithm(const Aws::String& value) { SetSSECustomerAlgorithm(value); return *this;}

    /*
     Specifies the algorithm to use to when encrypting the object (e.g., AES256, aws:kms).
    */
    inline UploadPartRequest& WithSSECustomerAlgorithm(const char* value) { SetSSECustomerAlgorithm(value); return *this;}

    /*
     Specifies the customer-provided encryption key for Amazon S3 to use in encrypting data. This value is used to store the object and then it is discarded; Amazon does not store the encryption key. The key must be appropriate for use with the algorithm specified in the x-amz-server-side&#x200B;-encryption&#x200B;-customer-algorithm header. This must be the same encryption key specified in the initiate multipart upload request.
    */
    inline const Aws::String& GetSSECustomerKey() const{ return m_sSECustomerKey; }
    /*
     Specifies the customer-provided encryption key for Amazon S3 to use in encrypting data. This value is used to store the object and then it is discarded; Amazon does not store the encryption key. The key must be appropriate for use with the algorithm specified in the x-amz-server-side&#x200B;-encryption&#x200B;-customer-algorithm header. This must be the same encryption key specified in the initiate multipart upload request.
    */
    inline void SetSSECustomerKey(const Aws::String& value) { m_sSECustomerKeyHasBeenSet = true; m_sSECustomerKey = value; }

    /*
     Specifies the customer-provided encryption key for Amazon S3 to use in encrypting data. This value is used to store the object and then it is discarded; Amazon does not store the encryption key. The key must be appropriate for use with the algorithm specified in the x-amz-server-side&#x200B;-encryption&#x200B;-customer-algorithm header. This must be the same encryption key specified in the initiate multipart upload request.
    */
    inline void SetSSECustomerKey(const char* value) { m_sSECustomerKeyHasBeenSet = true; m_sSECustomerKey.assign(value); }

    /*
     Specifies the customer-provided encryption key for Amazon S3 to use in encrypting data. This value is used to store the object and then it is discarded; Amazon does not store the encryption key. The key must be appropriate for use with the algorithm specified in the x-amz-server-side&#x200B;-encryption&#x200B;-customer-algorithm header. This must be the same encryption key specified in the initiate multipart upload request.
    */
    inline UploadPartRequest&  WithSSECustomerKey(const Aws::String& value) { SetSSECustomerKey(value); return *this;}

    /*
     Specifies the customer-provided encryption key for Amazon S3 to use in encrypting data. This value is used to store the object and then it is discarded; Amazon does not store the encryption key. The key must be appropriate for use with the algorithm specified in the x-amz-server-side&#x200B;-encryption&#x200B;-customer-algorithm header. This must be the same encryption key specified in the initiate multipart upload request.
    */
    inline UploadPartRequest& WithSSECustomerKey(const char* value) { SetSSECustomerKey(value); return *this;}

    /*
     Specifies the 128-bit MD5 digest of the encryption key according to RFC 1321. Amazon S3 uses this header for a message integrity check to ensure the encryption key was transmitted without error.
    */
    inline const Aws::String& GetSSECustomerKeyMD5() const{ return m_sSECustomerKeyMD5; }
    /*
     Specifies the 128-bit MD5 digest of the encryption key according to RFC 1321. Amazon S3 uses this header for a message integrity check to ensure the encryption key was transmitted without error.
    */
    inline void SetSSECustomerKeyMD5(const Aws::String& value) { m_sSECustomerKeyMD5HasBeenSet = true; m_sSECustomerKeyMD5 = value; }

    /*
     Specifies the 128-bit MD5 digest of the encryption key according to RFC 1321. Amazon S3 uses this header for a message integrity check to ensure the encryption key was transmitted without error.
    */
    inline void SetSSECustomerKeyMD5(const char* value) { m_sSECustomerKeyMD5HasBeenSet = true; m_sSECustomerKeyMD5.assign(value); }

    /*
     Specifies the 128-bit MD5 digest of the encryption key according to RFC 1321. Amazon S3 uses this header for a message integrity check to ensure the encryption key was transmitted without error.
    */
    inline UploadPartRequest&  WithSSECustomerKeyMD5(const Aws::String& value) { SetSSECustomerKeyMD5(value); return *this;}

    /*
     Specifies the 128-bit MD5 digest of the encryption key according to RFC 1321. Amazon S3 uses this header for a message integrity check to ensure the encryption key was transmitted without error.
    */
    inline UploadPartRequest& WithSSECustomerKeyMD5(const char* value) { SetSSECustomerKeyMD5(value); return *this;}

    
    inline const RequestPayer& GetRequestPayer() const{ return m_requestPayer; }
    
    inline void SetRequestPayer(const RequestPayer& value) { m_requestPayerHasBeenSet = true; m_requestPayer = value; }

    
    inline UploadPartRequest&  WithRequestPayer(const RequestPayer& value) { SetRequestPayer(value); return *this;}

  private:
    Aws::String m_bucket;
    long m_contentLength;
    bool m_contentLengthHasBeenSet;
    Aws::String m_contentMD5;
    bool m_contentMD5HasBeenSet;
    Aws::String m_key;
    long m_partNumber;
    Aws::String m_uploadId;
    Aws::String m_sSECustomerAlgorithm;
    bool m_sSECustomerAlgorithmHasBeenSet;
    Aws::String m_sSECustomerKey;
    bool m_sSECustomerKeyHasBeenSet;
    Aws::String m_sSECustomerKeyMD5;
    bool m_sSECustomerKeyMD5HasBeenSet;
    RequestPayer m_requestPayer;
    bool m_requestPayerHasBeenSet;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
