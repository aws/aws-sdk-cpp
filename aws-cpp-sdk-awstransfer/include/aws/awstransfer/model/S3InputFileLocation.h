/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
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
namespace Transfer
{
namespace Model
{

  /**
   * <p>Specifies the details for the S3 file being copied.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/S3InputFileLocation">AWS
   * API Reference</a></p>
   */
  class AWS_TRANSFER_API S3InputFileLocation
  {
  public:
    S3InputFileLocation();
    S3InputFileLocation(Aws::Utils::Json::JsonView jsonValue);
    S3InputFileLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the S3 bucket that contains the file being copied.</p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p>Specifies the S3 bucket that contains the file being copied.</p>
     */
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }

    /**
     * <p>Specifies the S3 bucket that contains the file being copied.</p>
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * <p>Specifies the S3 bucket that contains the file being copied.</p>
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }

    /**
     * <p>Specifies the S3 bucket that contains the file being copied.</p>
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * <p>Specifies the S3 bucket that contains the file being copied.</p>
     */
    inline S3InputFileLocation& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p>Specifies the S3 bucket that contains the file being copied.</p>
     */
    inline S3InputFileLocation& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    /**
     * <p>Specifies the S3 bucket that contains the file being copied.</p>
     */
    inline S3InputFileLocation& WithBucket(const char* value) { SetBucket(value); return *this;}


    /**
     * <p>The name assigned to the file when it was created in S3. You use the object
     * key to retrieve the object.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The name assigned to the file when it was created in S3. You use the object
     * key to retrieve the object.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The name assigned to the file when it was created in S3. You use the object
     * key to retrieve the object.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The name assigned to the file when it was created in S3. You use the object
     * key to retrieve the object.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The name assigned to the file when it was created in S3. You use the object
     * key to retrieve the object.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The name assigned to the file when it was created in S3. You use the object
     * key to retrieve the object.</p>
     */
    inline S3InputFileLocation& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The name assigned to the file when it was created in S3. You use the object
     * key to retrieve the object.</p>
     */
    inline S3InputFileLocation& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The name assigned to the file when it was created in S3. You use the object
     * key to retrieve the object.</p>
     */
    inline S3InputFileLocation& WithKey(const char* value) { SetKey(value); return *this;}

  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet;

    Aws::String m_key;
    bool m_keyHasBeenSet;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
