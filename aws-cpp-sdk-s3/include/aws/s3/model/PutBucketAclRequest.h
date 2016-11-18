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
#include <aws/s3/model/BucketCannedACL.h>
#include <aws/s3/model/AccessControlPolicy.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace S3
{
namespace Model
{

  /**
   */
  class AWS_S3_API PutBucketAclRequest : public S3Request
  {
  public:
    PutBucketAclRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * The canned ACL to apply to the bucket.
     */
    inline const BucketCannedACL& GetACL() const{ return m_aCL; }

    /**
     * The canned ACL to apply to the bucket.
     */
    inline void SetACL(const BucketCannedACL& value) { m_aCLHasBeenSet = true; m_aCL = value; }

    /**
     * The canned ACL to apply to the bucket.
     */
    inline void SetACL(BucketCannedACL&& value) { m_aCLHasBeenSet = true; m_aCL = value; }

    /**
     * The canned ACL to apply to the bucket.
     */
    inline PutBucketAclRequest& WithACL(const BucketCannedACL& value) { SetACL(value); return *this;}

    /**
     * The canned ACL to apply to the bucket.
     */
    inline PutBucketAclRequest& WithACL(BucketCannedACL&& value) { SetACL(value); return *this;}

    
    inline const AccessControlPolicy& GetAccessControlPolicy() const{ return m_accessControlPolicy; }

    
    inline void SetAccessControlPolicy(const AccessControlPolicy& value) { m_accessControlPolicyHasBeenSet = true; m_accessControlPolicy = value; }

    
    inline void SetAccessControlPolicy(AccessControlPolicy&& value) { m_accessControlPolicyHasBeenSet = true; m_accessControlPolicy = value; }

    
    inline PutBucketAclRequest& WithAccessControlPolicy(const AccessControlPolicy& value) { SetAccessControlPolicy(value); return *this;}

    
    inline PutBucketAclRequest& WithAccessControlPolicy(AccessControlPolicy&& value) { SetAccessControlPolicy(value); return *this;}

    
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    
    inline PutBucketAclRequest& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    
    inline PutBucketAclRequest& WithBucket(Aws::String&& value) { SetBucket(value); return *this;}

    
    inline PutBucketAclRequest& WithBucket(const char* value) { SetBucket(value); return *this;}

    
    inline const Aws::String& GetContentMD5() const{ return m_contentMD5; }

    
    inline void SetContentMD5(const Aws::String& value) { m_contentMD5HasBeenSet = true; m_contentMD5 = value; }

    
    inline void SetContentMD5(Aws::String&& value) { m_contentMD5HasBeenSet = true; m_contentMD5 = value; }

    
    inline void SetContentMD5(const char* value) { m_contentMD5HasBeenSet = true; m_contentMD5.assign(value); }

    
    inline PutBucketAclRequest& WithContentMD5(const Aws::String& value) { SetContentMD5(value); return *this;}

    
    inline PutBucketAclRequest& WithContentMD5(Aws::String&& value) { SetContentMD5(value); return *this;}

    
    inline PutBucketAclRequest& WithContentMD5(const char* value) { SetContentMD5(value); return *this;}

    /**
     * Allows grantee the read, write, read ACP, and write ACP permissions on the
     * bucket.
     */
    inline const Aws::String& GetGrantFullControl() const{ return m_grantFullControl; }

    /**
     * Allows grantee the read, write, read ACP, and write ACP permissions on the
     * bucket.
     */
    inline void SetGrantFullControl(const Aws::String& value) { m_grantFullControlHasBeenSet = true; m_grantFullControl = value; }

    /**
     * Allows grantee the read, write, read ACP, and write ACP permissions on the
     * bucket.
     */
    inline void SetGrantFullControl(Aws::String&& value) { m_grantFullControlHasBeenSet = true; m_grantFullControl = value; }

    /**
     * Allows grantee the read, write, read ACP, and write ACP permissions on the
     * bucket.
     */
    inline void SetGrantFullControl(const char* value) { m_grantFullControlHasBeenSet = true; m_grantFullControl.assign(value); }

    /**
     * Allows grantee the read, write, read ACP, and write ACP permissions on the
     * bucket.
     */
    inline PutBucketAclRequest& WithGrantFullControl(const Aws::String& value) { SetGrantFullControl(value); return *this;}

    /**
     * Allows grantee the read, write, read ACP, and write ACP permissions on the
     * bucket.
     */
    inline PutBucketAclRequest& WithGrantFullControl(Aws::String&& value) { SetGrantFullControl(value); return *this;}

    /**
     * Allows grantee the read, write, read ACP, and write ACP permissions on the
     * bucket.
     */
    inline PutBucketAclRequest& WithGrantFullControl(const char* value) { SetGrantFullControl(value); return *this;}

    /**
     * Allows grantee to list the objects in the bucket.
     */
    inline const Aws::String& GetGrantRead() const{ return m_grantRead; }

    /**
     * Allows grantee to list the objects in the bucket.
     */
    inline void SetGrantRead(const Aws::String& value) { m_grantReadHasBeenSet = true; m_grantRead = value; }

    /**
     * Allows grantee to list the objects in the bucket.
     */
    inline void SetGrantRead(Aws::String&& value) { m_grantReadHasBeenSet = true; m_grantRead = value; }

    /**
     * Allows grantee to list the objects in the bucket.
     */
    inline void SetGrantRead(const char* value) { m_grantReadHasBeenSet = true; m_grantRead.assign(value); }

    /**
     * Allows grantee to list the objects in the bucket.
     */
    inline PutBucketAclRequest& WithGrantRead(const Aws::String& value) { SetGrantRead(value); return *this;}

    /**
     * Allows grantee to list the objects in the bucket.
     */
    inline PutBucketAclRequest& WithGrantRead(Aws::String&& value) { SetGrantRead(value); return *this;}

    /**
     * Allows grantee to list the objects in the bucket.
     */
    inline PutBucketAclRequest& WithGrantRead(const char* value) { SetGrantRead(value); return *this;}

    /**
     * Allows grantee to read the bucket ACL.
     */
    inline const Aws::String& GetGrantReadACP() const{ return m_grantReadACP; }

    /**
     * Allows grantee to read the bucket ACL.
     */
    inline void SetGrantReadACP(const Aws::String& value) { m_grantReadACPHasBeenSet = true; m_grantReadACP = value; }

    /**
     * Allows grantee to read the bucket ACL.
     */
    inline void SetGrantReadACP(Aws::String&& value) { m_grantReadACPHasBeenSet = true; m_grantReadACP = value; }

    /**
     * Allows grantee to read the bucket ACL.
     */
    inline void SetGrantReadACP(const char* value) { m_grantReadACPHasBeenSet = true; m_grantReadACP.assign(value); }

    /**
     * Allows grantee to read the bucket ACL.
     */
    inline PutBucketAclRequest& WithGrantReadACP(const Aws::String& value) { SetGrantReadACP(value); return *this;}

    /**
     * Allows grantee to read the bucket ACL.
     */
    inline PutBucketAclRequest& WithGrantReadACP(Aws::String&& value) { SetGrantReadACP(value); return *this;}

    /**
     * Allows grantee to read the bucket ACL.
     */
    inline PutBucketAclRequest& WithGrantReadACP(const char* value) { SetGrantReadACP(value); return *this;}

    /**
     * Allows grantee to create, overwrite, and delete any object in the bucket.
     */
    inline const Aws::String& GetGrantWrite() const{ return m_grantWrite; }

    /**
     * Allows grantee to create, overwrite, and delete any object in the bucket.
     */
    inline void SetGrantWrite(const Aws::String& value) { m_grantWriteHasBeenSet = true; m_grantWrite = value; }

    /**
     * Allows grantee to create, overwrite, and delete any object in the bucket.
     */
    inline void SetGrantWrite(Aws::String&& value) { m_grantWriteHasBeenSet = true; m_grantWrite = value; }

    /**
     * Allows grantee to create, overwrite, and delete any object in the bucket.
     */
    inline void SetGrantWrite(const char* value) { m_grantWriteHasBeenSet = true; m_grantWrite.assign(value); }

    /**
     * Allows grantee to create, overwrite, and delete any object in the bucket.
     */
    inline PutBucketAclRequest& WithGrantWrite(const Aws::String& value) { SetGrantWrite(value); return *this;}

    /**
     * Allows grantee to create, overwrite, and delete any object in the bucket.
     */
    inline PutBucketAclRequest& WithGrantWrite(Aws::String&& value) { SetGrantWrite(value); return *this;}

    /**
     * Allows grantee to create, overwrite, and delete any object in the bucket.
     */
    inline PutBucketAclRequest& WithGrantWrite(const char* value) { SetGrantWrite(value); return *this;}

    /**
     * Allows grantee to write the ACL for the applicable bucket.
     */
    inline const Aws::String& GetGrantWriteACP() const{ return m_grantWriteACP; }

    /**
     * Allows grantee to write the ACL for the applicable bucket.
     */
    inline void SetGrantWriteACP(const Aws::String& value) { m_grantWriteACPHasBeenSet = true; m_grantWriteACP = value; }

    /**
     * Allows grantee to write the ACL for the applicable bucket.
     */
    inline void SetGrantWriteACP(Aws::String&& value) { m_grantWriteACPHasBeenSet = true; m_grantWriteACP = value; }

    /**
     * Allows grantee to write the ACL for the applicable bucket.
     */
    inline void SetGrantWriteACP(const char* value) { m_grantWriteACPHasBeenSet = true; m_grantWriteACP.assign(value); }

    /**
     * Allows grantee to write the ACL for the applicable bucket.
     */
    inline PutBucketAclRequest& WithGrantWriteACP(const Aws::String& value) { SetGrantWriteACP(value); return *this;}

    /**
     * Allows grantee to write the ACL for the applicable bucket.
     */
    inline PutBucketAclRequest& WithGrantWriteACP(Aws::String&& value) { SetGrantWriteACP(value); return *this;}

    /**
     * Allows grantee to write the ACL for the applicable bucket.
     */
    inline PutBucketAclRequest& WithGrantWriteACP(const char* value) { SetGrantWriteACP(value); return *this;}

  private:
    BucketCannedACL m_aCL;
    bool m_aCLHasBeenSet;
    AccessControlPolicy m_accessControlPolicy;
    bool m_accessControlPolicyHasBeenSet;
    Aws::String m_bucket;
    bool m_bucketHasBeenSet;
    Aws::String m_contentMD5;
    bool m_contentMD5HasBeenSet;
    Aws::String m_grantFullControl;
    bool m_grantFullControlHasBeenSet;
    Aws::String m_grantRead;
    bool m_grantReadHasBeenSet;
    Aws::String m_grantReadACP;
    bool m_grantReadACPHasBeenSet;
    Aws::String m_grantWrite;
    bool m_grantWriteHasBeenSet;
    Aws::String m_grantWriteACP;
    bool m_grantWriteACPHasBeenSet;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
