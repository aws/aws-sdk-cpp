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

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/CannedAccessControlList.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace IoT
{
namespace Model
{

  /**
   * <p>Describes an action to write data to an Amazon S3 bucket.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/S3Action">AWS API
   * Reference</a></p>
   */
  class AWS_IOT_API S3Action
  {
  public:
    S3Action();
    S3Action(Aws::Utils::Json::JsonView jsonValue);
    S3Action& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the IAM role that grants access.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of the IAM role that grants access.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The ARN of the IAM role that grants access.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The ARN of the IAM role that grants access.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The ARN of the IAM role that grants access.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The ARN of the IAM role that grants access.</p>
     */
    inline S3Action& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the IAM role that grants access.</p>
     */
    inline S3Action& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM role that grants access.</p>
     */
    inline S3Action& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The Amazon S3 bucket.</p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }

    /**
     * <p>The Amazon S3 bucket.</p>
     */
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }

    /**
     * <p>The Amazon S3 bucket.</p>
     */
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }

    /**
     * <p>The Amazon S3 bucket.</p>
     */
    inline void SetBucketName(Aws::String&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::move(value); }

    /**
     * <p>The Amazon S3 bucket.</p>
     */
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }

    /**
     * <p>The Amazon S3 bucket.</p>
     */
    inline S3Action& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}

    /**
     * <p>The Amazon S3 bucket.</p>
     */
    inline S3Action& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 bucket.</p>
     */
    inline S3Action& WithBucketName(const char* value) { SetBucketName(value); return *this;}


    /**
     * <p>The object key.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The object key.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The object key.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The object key.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The object key.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The object key.</p>
     */
    inline S3Action& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The object key.</p>
     */
    inline S3Action& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The object key.</p>
     */
    inline S3Action& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The Amazon S3 canned ACL that controls access to the object identified by the
     * object key. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html#canned-acl">S3
     * canned ACLs</a>.</p>
     */
    inline const CannedAccessControlList& GetCannedAcl() const{ return m_cannedAcl; }

    /**
     * <p>The Amazon S3 canned ACL that controls access to the object identified by the
     * object key. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html#canned-acl">S3
     * canned ACLs</a>.</p>
     */
    inline bool CannedAclHasBeenSet() const { return m_cannedAclHasBeenSet; }

    /**
     * <p>The Amazon S3 canned ACL that controls access to the object identified by the
     * object key. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html#canned-acl">S3
     * canned ACLs</a>.</p>
     */
    inline void SetCannedAcl(const CannedAccessControlList& value) { m_cannedAclHasBeenSet = true; m_cannedAcl = value; }

    /**
     * <p>The Amazon S3 canned ACL that controls access to the object identified by the
     * object key. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html#canned-acl">S3
     * canned ACLs</a>.</p>
     */
    inline void SetCannedAcl(CannedAccessControlList&& value) { m_cannedAclHasBeenSet = true; m_cannedAcl = std::move(value); }

    /**
     * <p>The Amazon S3 canned ACL that controls access to the object identified by the
     * object key. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html#canned-acl">S3
     * canned ACLs</a>.</p>
     */
    inline S3Action& WithCannedAcl(const CannedAccessControlList& value) { SetCannedAcl(value); return *this;}

    /**
     * <p>The Amazon S3 canned ACL that controls access to the object identified by the
     * object key. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html#canned-acl">S3
     * canned ACLs</a>.</p>
     */
    inline S3Action& WithCannedAcl(CannedAccessControlList&& value) { SetCannedAcl(std::move(value)); return *this;}

  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet;

    Aws::String m_key;
    bool m_keyHasBeenSet;

    CannedAccessControlList m_cannedAcl;
    bool m_cannedAclHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
