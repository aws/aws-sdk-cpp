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
   * <p>The file in Amazon S3 where your data is saved. </p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/File">AWS
   * API Reference</a></p>
   */
  class File
  {
  public:
    AWS_IOTSITEWISE_API File();
    AWS_IOTSITEWISE_API File(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API File& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the Amazon S3 bucket from which data is imported.</p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p>The name of the Amazon S3 bucket from which data is imported.</p>
     */
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }

    /**
     * <p>The name of the Amazon S3 bucket from which data is imported.</p>
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * <p>The name of the Amazon S3 bucket from which data is imported.</p>
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }

    /**
     * <p>The name of the Amazon S3 bucket from which data is imported.</p>
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * <p>The name of the Amazon S3 bucket from which data is imported.</p>
     */
    inline File& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket from which data is imported.</p>
     */
    inline File& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket from which data is imported.</p>
     */
    inline File& WithBucket(const char* value) { SetBucket(value); return *this;}


    /**
     * <p>The key of the Amazon S3 object that contains your data. Each object has a
     * key that is a unique identifier. Each object has exactly one key.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The key of the Amazon S3 object that contains your data. Each object has a
     * key that is a unique identifier. Each object has exactly one key.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The key of the Amazon S3 object that contains your data. Each object has a
     * key that is a unique identifier. Each object has exactly one key.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The key of the Amazon S3 object that contains your data. Each object has a
     * key that is a unique identifier. Each object has exactly one key.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The key of the Amazon S3 object that contains your data. Each object has a
     * key that is a unique identifier. Each object has exactly one key.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The key of the Amazon S3 object that contains your data. Each object has a
     * key that is a unique identifier. Each object has exactly one key.</p>
     */
    inline File& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The key of the Amazon S3 object that contains your data. Each object has a
     * key that is a unique identifier. Each object has exactly one key.</p>
     */
    inline File& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The key of the Amazon S3 object that contains your data. Each object has a
     * key that is a unique identifier. Each object has exactly one key.</p>
     */
    inline File& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The version ID to identify a specific version of the Amazon S3 object that
     * contains your data.</p>
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }

    /**
     * <p>The version ID to identify a specific version of the Amazon S3 object that
     * contains your data.</p>
     */
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }

    /**
     * <p>The version ID to identify a specific version of the Amazon S3 object that
     * contains your data.</p>
     */
    inline void SetVersionId(const Aws::String& value) { m_versionIdHasBeenSet = true; m_versionId = value; }

    /**
     * <p>The version ID to identify a specific version of the Amazon S3 object that
     * contains your data.</p>
     */
    inline void SetVersionId(Aws::String&& value) { m_versionIdHasBeenSet = true; m_versionId = std::move(value); }

    /**
     * <p>The version ID to identify a specific version of the Amazon S3 object that
     * contains your data.</p>
     */
    inline void SetVersionId(const char* value) { m_versionIdHasBeenSet = true; m_versionId.assign(value); }

    /**
     * <p>The version ID to identify a specific version of the Amazon S3 object that
     * contains your data.</p>
     */
    inline File& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}

    /**
     * <p>The version ID to identify a specific version of the Amazon S3 object that
     * contains your data.</p>
     */
    inline File& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}

    /**
     * <p>The version ID to identify a specific version of the Amazon S3 object that
     * contains your data.</p>
     */
    inline File& WithVersionId(const char* value) { SetVersionId(value); return *this;}

  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
