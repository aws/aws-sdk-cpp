/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
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
namespace DynamoDB
{
namespace Model
{

  /**
   * <p> The S3 bucket that is being imported from. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/S3BucketSource">AWS
   * API Reference</a></p>
   */
  class S3BucketSource
  {
  public:
    AWS_DYNAMODB_API S3BucketSource();
    AWS_DYNAMODB_API S3BucketSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API S3BucketSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The account number of the S3 bucket that is being imported from. If the
     * bucket is owned by the requester this is optional. </p>
     */
    inline const Aws::String& GetS3BucketOwner() const{ return m_s3BucketOwner; }

    /**
     * <p> The account number of the S3 bucket that is being imported from. If the
     * bucket is owned by the requester this is optional. </p>
     */
    inline bool S3BucketOwnerHasBeenSet() const { return m_s3BucketOwnerHasBeenSet; }

    /**
     * <p> The account number of the S3 bucket that is being imported from. If the
     * bucket is owned by the requester this is optional. </p>
     */
    inline void SetS3BucketOwner(const Aws::String& value) { m_s3BucketOwnerHasBeenSet = true; m_s3BucketOwner = value; }

    /**
     * <p> The account number of the S3 bucket that is being imported from. If the
     * bucket is owned by the requester this is optional. </p>
     */
    inline void SetS3BucketOwner(Aws::String&& value) { m_s3BucketOwnerHasBeenSet = true; m_s3BucketOwner = std::move(value); }

    /**
     * <p> The account number of the S3 bucket that is being imported from. If the
     * bucket is owned by the requester this is optional. </p>
     */
    inline void SetS3BucketOwner(const char* value) { m_s3BucketOwnerHasBeenSet = true; m_s3BucketOwner.assign(value); }

    /**
     * <p> The account number of the S3 bucket that is being imported from. If the
     * bucket is owned by the requester this is optional. </p>
     */
    inline S3BucketSource& WithS3BucketOwner(const Aws::String& value) { SetS3BucketOwner(value); return *this;}

    /**
     * <p> The account number of the S3 bucket that is being imported from. If the
     * bucket is owned by the requester this is optional. </p>
     */
    inline S3BucketSource& WithS3BucketOwner(Aws::String&& value) { SetS3BucketOwner(std::move(value)); return *this;}

    /**
     * <p> The account number of the S3 bucket that is being imported from. If the
     * bucket is owned by the requester this is optional. </p>
     */
    inline S3BucketSource& WithS3BucketOwner(const char* value) { SetS3BucketOwner(value); return *this;}


    /**
     * <p> The S3 bucket that is being imported from. </p>
     */
    inline const Aws::String& GetS3Bucket() const{ return m_s3Bucket; }

    /**
     * <p> The S3 bucket that is being imported from. </p>
     */
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }

    /**
     * <p> The S3 bucket that is being imported from. </p>
     */
    inline void SetS3Bucket(const Aws::String& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = value; }

    /**
     * <p> The S3 bucket that is being imported from. </p>
     */
    inline void SetS3Bucket(Aws::String&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::move(value); }

    /**
     * <p> The S3 bucket that is being imported from. </p>
     */
    inline void SetS3Bucket(const char* value) { m_s3BucketHasBeenSet = true; m_s3Bucket.assign(value); }

    /**
     * <p> The S3 bucket that is being imported from. </p>
     */
    inline S3BucketSource& WithS3Bucket(const Aws::String& value) { SetS3Bucket(value); return *this;}

    /**
     * <p> The S3 bucket that is being imported from. </p>
     */
    inline S3BucketSource& WithS3Bucket(Aws::String&& value) { SetS3Bucket(std::move(value)); return *this;}

    /**
     * <p> The S3 bucket that is being imported from. </p>
     */
    inline S3BucketSource& WithS3Bucket(const char* value) { SetS3Bucket(value); return *this;}


    /**
     * <p> The key prefix shared by all S3 Objects that are being imported. </p>
     */
    inline const Aws::String& GetS3KeyPrefix() const{ return m_s3KeyPrefix; }

    /**
     * <p> The key prefix shared by all S3 Objects that are being imported. </p>
     */
    inline bool S3KeyPrefixHasBeenSet() const { return m_s3KeyPrefixHasBeenSet; }

    /**
     * <p> The key prefix shared by all S3 Objects that are being imported. </p>
     */
    inline void SetS3KeyPrefix(const Aws::String& value) { m_s3KeyPrefixHasBeenSet = true; m_s3KeyPrefix = value; }

    /**
     * <p> The key prefix shared by all S3 Objects that are being imported. </p>
     */
    inline void SetS3KeyPrefix(Aws::String&& value) { m_s3KeyPrefixHasBeenSet = true; m_s3KeyPrefix = std::move(value); }

    /**
     * <p> The key prefix shared by all S3 Objects that are being imported. </p>
     */
    inline void SetS3KeyPrefix(const char* value) { m_s3KeyPrefixHasBeenSet = true; m_s3KeyPrefix.assign(value); }

    /**
     * <p> The key prefix shared by all S3 Objects that are being imported. </p>
     */
    inline S3BucketSource& WithS3KeyPrefix(const Aws::String& value) { SetS3KeyPrefix(value); return *this;}

    /**
     * <p> The key prefix shared by all S3 Objects that are being imported. </p>
     */
    inline S3BucketSource& WithS3KeyPrefix(Aws::String&& value) { SetS3KeyPrefix(std::move(value)); return *this;}

    /**
     * <p> The key prefix shared by all S3 Objects that are being imported. </p>
     */
    inline S3BucketSource& WithS3KeyPrefix(const char* value) { SetS3KeyPrefix(value); return *this;}

  private:

    Aws::String m_s3BucketOwner;
    bool m_s3BucketOwnerHasBeenSet = false;

    Aws::String m_s3Bucket;
    bool m_s3BucketHasBeenSet = false;

    Aws::String m_s3KeyPrefix;
    bool m_s3KeyPrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
