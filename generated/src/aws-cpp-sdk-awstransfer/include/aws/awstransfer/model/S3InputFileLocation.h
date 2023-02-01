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
   * <p>Specifies the customer input S3 file location. If it is used inside
   * <code>copyStepDetails.DestinationFileLocation</code>, it should be the S3 copy
   * destination.</p> <p> You need to provide the bucket and key. The key can
   * represent either a path or a file. This is determined by whether or not you end
   * the key value with the forward slash (/) character. If the final character is
   * "/", then your file is copied to the folder, and its name does not change. If,
   * rather, the final character is alphanumeric, your uploaded file is renamed to
   * the path value. In this case, if a file with that name already exists, it is
   * overwritten. </p> <p>For example, if your path is
   * <code>shared-files/bob/</code>, your uploaded files are copied to the
   * <code>shared-files/bob/</code>, folder. If your path is
   * <code>shared-files/today</code>, each uploaded file is copied to the
   * <code>shared-files</code> folder and named <code>today</code>: each upload
   * overwrites the previous version of the <i>bob</i> file.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/S3InputFileLocation">AWS
   * API Reference</a></p>
   */
  class S3InputFileLocation
  {
  public:
    AWS_TRANSFER_API S3InputFileLocation();
    AWS_TRANSFER_API S3InputFileLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API S3InputFileLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the S3 bucket for the customer input file.</p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p>Specifies the S3 bucket for the customer input file.</p>
     */
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }

    /**
     * <p>Specifies the S3 bucket for the customer input file.</p>
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * <p>Specifies the S3 bucket for the customer input file.</p>
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }

    /**
     * <p>Specifies the S3 bucket for the customer input file.</p>
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * <p>Specifies the S3 bucket for the customer input file.</p>
     */
    inline S3InputFileLocation& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p>Specifies the S3 bucket for the customer input file.</p>
     */
    inline S3InputFileLocation& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    /**
     * <p>Specifies the S3 bucket for the customer input file.</p>
     */
    inline S3InputFileLocation& WithBucket(const char* value) { SetBucket(value); return *this;}


    /**
     * <p>The name assigned to the file when it was created in Amazon S3. You use the
     * object key to retrieve the object.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The name assigned to the file when it was created in Amazon S3. You use the
     * object key to retrieve the object.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The name assigned to the file when it was created in Amazon S3. You use the
     * object key to retrieve the object.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The name assigned to the file when it was created in Amazon S3. You use the
     * object key to retrieve the object.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The name assigned to the file when it was created in Amazon S3. You use the
     * object key to retrieve the object.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The name assigned to the file when it was created in Amazon S3. You use the
     * object key to retrieve the object.</p>
     */
    inline S3InputFileLocation& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The name assigned to the file when it was created in Amazon S3. You use the
     * object key to retrieve the object.</p>
     */
    inline S3InputFileLocation& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The name assigned to the file when it was created in Amazon S3. You use the
     * object key to retrieve the object.</p>
     */
    inline S3InputFileLocation& WithKey(const char* value) { SetKey(value); return *this;}

  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
