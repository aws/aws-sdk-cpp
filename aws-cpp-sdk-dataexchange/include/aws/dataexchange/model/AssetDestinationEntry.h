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
   * <p>The destination for the asset.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/AssetDestinationEntry">AWS
   * API Reference</a></p>
   */
  class AssetDestinationEntry
  {
  public:
    AWS_DATAEXCHANGE_API AssetDestinationEntry();
    AWS_DATAEXCHANGE_API AssetDestinationEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API AssetDestinationEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for the asset.</p>
     */
    inline const Aws::String& GetAssetId() const{ return m_assetId; }

    /**
     * <p>The unique identifier for the asset.</p>
     */
    inline bool AssetIdHasBeenSet() const { return m_assetIdHasBeenSet; }

    /**
     * <p>The unique identifier for the asset.</p>
     */
    inline void SetAssetId(const Aws::String& value) { m_assetIdHasBeenSet = true; m_assetId = value; }

    /**
     * <p>The unique identifier for the asset.</p>
     */
    inline void SetAssetId(Aws::String&& value) { m_assetIdHasBeenSet = true; m_assetId = std::move(value); }

    /**
     * <p>The unique identifier for the asset.</p>
     */
    inline void SetAssetId(const char* value) { m_assetIdHasBeenSet = true; m_assetId.assign(value); }

    /**
     * <p>The unique identifier for the asset.</p>
     */
    inline AssetDestinationEntry& WithAssetId(const Aws::String& value) { SetAssetId(value); return *this;}

    /**
     * <p>The unique identifier for the asset.</p>
     */
    inline AssetDestinationEntry& WithAssetId(Aws::String&& value) { SetAssetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the asset.</p>
     */
    inline AssetDestinationEntry& WithAssetId(const char* value) { SetAssetId(value); return *this;}


    /**
     * <p>The Amazon S3 bucket that is the destination for the asset.</p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p>The Amazon S3 bucket that is the destination for the asset.</p>
     */
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }

    /**
     * <p>The Amazon S3 bucket that is the destination for the asset.</p>
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * <p>The Amazon S3 bucket that is the destination for the asset.</p>
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }

    /**
     * <p>The Amazon S3 bucket that is the destination for the asset.</p>
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * <p>The Amazon S3 bucket that is the destination for the asset.</p>
     */
    inline AssetDestinationEntry& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p>The Amazon S3 bucket that is the destination for the asset.</p>
     */
    inline AssetDestinationEntry& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 bucket that is the destination for the asset.</p>
     */
    inline AssetDestinationEntry& WithBucket(const char* value) { SetBucket(value); return *this;}


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
    inline AssetDestinationEntry& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The name of the object in Amazon S3 for the asset.</p>
     */
    inline AssetDestinationEntry& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The name of the object in Amazon S3 for the asset.</p>
     */
    inline AssetDestinationEntry& WithKey(const char* value) { SetKey(value); return *this;}

  private:

    Aws::String m_assetId;
    bool m_assetIdHasBeenSet = false;

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
