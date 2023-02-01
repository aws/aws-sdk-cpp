/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
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
namespace DataExchange
{
namespace Model
{

  /**
   * <p>The source of the assets.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/AssetSourceEntry">AWS
   * API Reference</a></p>
   */
  class AssetSourceEntry
  {
  public:
    AWS_DATAEXCHANGE_API AssetSourceEntry();
    AWS_DATAEXCHANGE_API AssetSourceEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API AssetSourceEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon S3 bucket that's part of the source of the asset.</p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p>The Amazon S3 bucket that's part of the source of the asset.</p>
     */
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }

    /**
     * <p>The Amazon S3 bucket that's part of the source of the asset.</p>
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * <p>The Amazon S3 bucket that's part of the source of the asset.</p>
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }

    /**
     * <p>The Amazon S3 bucket that's part of the source of the asset.</p>
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * <p>The Amazon S3 bucket that's part of the source of the asset.</p>
     */
    inline AssetSourceEntry& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p>The Amazon S3 bucket that's part of the source of the asset.</p>
     */
    inline AssetSourceEntry& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 bucket that's part of the source of the asset.</p>
     */
    inline AssetSourceEntry& WithBucket(const char* value) { SetBucket(value); return *this;}


    /**
     * <p>The name of the object in Amazon S3 for the asset.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The name of the object in Amazon S3 for the asset.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The name of the object in Amazon S3 for the asset.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The name of the object in Amazon S3 for the asset.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The name of the object in Amazon S3 for the asset.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The name of the object in Amazon S3 for the asset.</p>
     */
    inline AssetSourceEntry& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The name of the object in Amazon S3 for the asset.</p>
     */
    inline AssetSourceEntry& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The name of the object in Amazon S3 for the asset.</p>
     */
    inline AssetSourceEntry& WithKey(const char* value) { SetKey(value); return *this;}

  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
