/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmailmessageflow/WorkMailMessageFlow_EXPORTS.h>
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
namespace WorkMailMessageFlow
{
namespace Model
{

  /**
   * <p>Amazon S3 object representing the updated message content, in MIME
   * format.</p>  <p>The region for the S3 bucket containing the S3 object must
   * match the region used for WorkMail operations. Also, for WorkMail to process an
   * S3 object, it must have permission to access that object. For more information,
   * see <a
   * href="https://docs.aws.amazon.com/workmail/latest/adminguide/update-with-lambda.html">
   * Updating message content with AWS Lambda</a>.</p> <p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workmailmessageflow-2019-05-01/S3Reference">AWS
   * API Reference</a></p>
   */
  class S3Reference
  {
  public:
    AWS_WORKMAILMESSAGEFLOW_API S3Reference();
    AWS_WORKMAILMESSAGEFLOW_API S3Reference(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAILMESSAGEFLOW_API S3Reference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAILMESSAGEFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The S3 bucket name.</p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p>The S3 bucket name.</p>
     */
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }

    /**
     * <p>The S3 bucket name.</p>
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * <p>The S3 bucket name.</p>
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }

    /**
     * <p>The S3 bucket name.</p>
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * <p>The S3 bucket name.</p>
     */
    inline S3Reference& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p>The S3 bucket name.</p>
     */
    inline S3Reference& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    /**
     * <p>The S3 bucket name.</p>
     */
    inline S3Reference& WithBucket(const char* value) { SetBucket(value); return *this;}


    /**
     * <p>The S3 key object name.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The S3 key object name.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The S3 key object name.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The S3 key object name.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The S3 key object name.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The S3 key object name.</p>
     */
    inline S3Reference& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The S3 key object name.</p>
     */
    inline S3Reference& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The S3 key object name.</p>
     */
    inline S3Reference& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>If you enable versioning for the bucket, you can specify the object
     * version.</p>
     */
    inline const Aws::String& GetObjectVersion() const{ return m_objectVersion; }

    /**
     * <p>If you enable versioning for the bucket, you can specify the object
     * version.</p>
     */
    inline bool ObjectVersionHasBeenSet() const { return m_objectVersionHasBeenSet; }

    /**
     * <p>If you enable versioning for the bucket, you can specify the object
     * version.</p>
     */
    inline void SetObjectVersion(const Aws::String& value) { m_objectVersionHasBeenSet = true; m_objectVersion = value; }

    /**
     * <p>If you enable versioning for the bucket, you can specify the object
     * version.</p>
     */
    inline void SetObjectVersion(Aws::String&& value) { m_objectVersionHasBeenSet = true; m_objectVersion = std::move(value); }

    /**
     * <p>If you enable versioning for the bucket, you can specify the object
     * version.</p>
     */
    inline void SetObjectVersion(const char* value) { m_objectVersionHasBeenSet = true; m_objectVersion.assign(value); }

    /**
     * <p>If you enable versioning for the bucket, you can specify the object
     * version.</p>
     */
    inline S3Reference& WithObjectVersion(const Aws::String& value) { SetObjectVersion(value); return *this;}

    /**
     * <p>If you enable versioning for the bucket, you can specify the object
     * version.</p>
     */
    inline S3Reference& WithObjectVersion(Aws::String&& value) { SetObjectVersion(std::move(value)); return *this;}

    /**
     * <p>If you enable versioning for the bucket, you can specify the object
     * version.</p>
     */
    inline S3Reference& WithObjectVersion(const char* value) { SetObjectVersion(value); return *this;}

  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_objectVersion;
    bool m_objectVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMailMessageFlow
} // namespace Aws
