/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace LookoutEquipment
{
namespace Model
{

  /**
   * <p>Contains information about an S3 bucket. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/S3Object">AWS
   * API Reference</a></p>
   */
  class S3Object
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API S3Object();
    AWS_LOOKOUTEQUIPMENT_API S3Object(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API S3Object& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the specific S3 bucket. </p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p>The name of the specific S3 bucket. </p>
     */
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }

    /**
     * <p>The name of the specific S3 bucket. </p>
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * <p>The name of the specific S3 bucket. </p>
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }

    /**
     * <p>The name of the specific S3 bucket. </p>
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * <p>The name of the specific S3 bucket. </p>
     */
    inline S3Object& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p>The name of the specific S3 bucket. </p>
     */
    inline S3Object& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    /**
     * <p>The name of the specific S3 bucket. </p>
     */
    inline S3Object& WithBucket(const char* value) { SetBucket(value); return *this;}


    /**
     * <p>The AWS Key Management Service (AWS KMS) key being used to encrypt the S3
     * object. Without this key, data in the bucket is not accessible. </p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The AWS Key Management Service (AWS KMS) key being used to encrypt the S3
     * object. Without this key, data in the bucket is not accessible. </p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The AWS Key Management Service (AWS KMS) key being used to encrypt the S3
     * object. Without this key, data in the bucket is not accessible. </p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The AWS Key Management Service (AWS KMS) key being used to encrypt the S3
     * object. Without this key, data in the bucket is not accessible. </p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The AWS Key Management Service (AWS KMS) key being used to encrypt the S3
     * object. Without this key, data in the bucket is not accessible. </p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The AWS Key Management Service (AWS KMS) key being used to encrypt the S3
     * object. Without this key, data in the bucket is not accessible. </p>
     */
    inline S3Object& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The AWS Key Management Service (AWS KMS) key being used to encrypt the S3
     * object. Without this key, data in the bucket is not accessible. </p>
     */
    inline S3Object& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The AWS Key Management Service (AWS KMS) key being used to encrypt the S3
     * object. Without this key, data in the bucket is not accessible. </p>
     */
    inline S3Object& WithKey(const char* value) { SetKey(value); return *this;}

  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
