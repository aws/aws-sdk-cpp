/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>The Amazon S3 destination where errors associated with the job creation
   * request are saved.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ErrorReportLocation">AWS
   * API Reference</a></p>
   */
  class ErrorReportLocation
  {
  public:
    AWS_IOTSITEWISE_API ErrorReportLocation();
    AWS_IOTSITEWISE_API ErrorReportLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API ErrorReportLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the Amazon S3 bucket to which errors associated with the bulk
     * import job are sent.</p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p>The name of the Amazon S3 bucket to which errors associated with the bulk
     * import job are sent.</p>
     */
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }

    /**
     * <p>The name of the Amazon S3 bucket to which errors associated with the bulk
     * import job are sent.</p>
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * <p>The name of the Amazon S3 bucket to which errors associated with the bulk
     * import job are sent.</p>
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }

    /**
     * <p>The name of the Amazon S3 bucket to which errors associated with the bulk
     * import job are sent.</p>
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * <p>The name of the Amazon S3 bucket to which errors associated with the bulk
     * import job are sent.</p>
     */
    inline ErrorReportLocation& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket to which errors associated with the bulk
     * import job are sent.</p>
     */
    inline ErrorReportLocation& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket to which errors associated with the bulk
     * import job are sent.</p>
     */
    inline ErrorReportLocation& WithBucket(const char* value) { SetBucket(value); return *this;}


    /**
     * <p>Amazon S3 uses the prefix as a folder name to organize data in the bucket.
     * Each Amazon S3 object has a key that is its unique identifier in the bucket.
     * Each object in a bucket has exactly one key. The prefix must end with a forward
     * slash (/). For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-prefixes.html">Organizing
     * objects using prefixes</a> in the <i>Amazon Simple Storage Service User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }

    /**
     * <p>Amazon S3 uses the prefix as a folder name to organize data in the bucket.
     * Each Amazon S3 object has a key that is its unique identifier in the bucket.
     * Each object in a bucket has exactly one key. The prefix must end with a forward
     * slash (/). For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-prefixes.html">Organizing
     * objects using prefixes</a> in the <i>Amazon Simple Storage Service User
     * Guide</i>.</p>
     */
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }

    /**
     * <p>Amazon S3 uses the prefix as a folder name to organize data in the bucket.
     * Each Amazon S3 object has a key that is its unique identifier in the bucket.
     * Each object in a bucket has exactly one key. The prefix must end with a forward
     * slash (/). For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-prefixes.html">Organizing
     * objects using prefixes</a> in the <i>Amazon Simple Storage Service User
     * Guide</i>.</p>
     */
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }

    /**
     * <p>Amazon S3 uses the prefix as a folder name to organize data in the bucket.
     * Each Amazon S3 object has a key that is its unique identifier in the bucket.
     * Each object in a bucket has exactly one key. The prefix must end with a forward
     * slash (/). For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-prefixes.html">Organizing
     * objects using prefixes</a> in the <i>Amazon Simple Storage Service User
     * Guide</i>.</p>
     */
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }

    /**
     * <p>Amazon S3 uses the prefix as a folder name to organize data in the bucket.
     * Each Amazon S3 object has a key that is its unique identifier in the bucket.
     * Each object in a bucket has exactly one key. The prefix must end with a forward
     * slash (/). For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-prefixes.html">Organizing
     * objects using prefixes</a> in the <i>Amazon Simple Storage Service User
     * Guide</i>.</p>
     */
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }

    /**
     * <p>Amazon S3 uses the prefix as a folder name to organize data in the bucket.
     * Each Amazon S3 object has a key that is its unique identifier in the bucket.
     * Each object in a bucket has exactly one key. The prefix must end with a forward
     * slash (/). For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-prefixes.html">Organizing
     * objects using prefixes</a> in the <i>Amazon Simple Storage Service User
     * Guide</i>.</p>
     */
    inline ErrorReportLocation& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}

    /**
     * <p>Amazon S3 uses the prefix as a folder name to organize data in the bucket.
     * Each Amazon S3 object has a key that is its unique identifier in the bucket.
     * Each object in a bucket has exactly one key. The prefix must end with a forward
     * slash (/). For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-prefixes.html">Organizing
     * objects using prefixes</a> in the <i>Amazon Simple Storage Service User
     * Guide</i>.</p>
     */
    inline ErrorReportLocation& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}

    /**
     * <p>Amazon S3 uses the prefix as a folder name to organize data in the bucket.
     * Each Amazon S3 object has a key that is its unique identifier in the bucket.
     * Each object in a bucket has exactly one key. The prefix must end with a forward
     * slash (/). For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-prefixes.html">Organizing
     * objects using prefixes</a> in the <i>Amazon Simple Storage Service User
     * Guide</i>.</p>
     */
    inline ErrorReportLocation& WithPrefix(const char* value) { SetPrefix(value); return *this;}

  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
