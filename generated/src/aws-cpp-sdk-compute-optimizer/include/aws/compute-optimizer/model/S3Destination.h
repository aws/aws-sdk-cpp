/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
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
namespace ComputeOptimizer
{
namespace Model
{

  /**
   * <p>Describes the destination Amazon Simple Storage Service (Amazon S3) bucket
   * name and object keys of a recommendations export file, and its associated
   * metadata file.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/S3Destination">AWS
   * API Reference</a></p>
   */
  class S3Destination
  {
  public:
    AWS_COMPUTEOPTIMIZER_API S3Destination() = default;
    AWS_COMPUTEOPTIMIZER_API S3Destination(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API S3Destination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Amazon S3 bucket used as the destination of an export
     * file.</p>
     */
    inline const Aws::String& GetBucket() const { return m_bucket; }
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
    template<typename BucketT = Aws::String>
    void SetBucket(BucketT&& value) { m_bucketHasBeenSet = true; m_bucket = std::forward<BucketT>(value); }
    template<typename BucketT = Aws::String>
    S3Destination& WithBucket(BucketT&& value) { SetBucket(std::forward<BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 bucket key of an export file.</p> <p>The key uniquely
     * identifies the object, or export file, in the S3 bucket.</p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    S3Destination& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 bucket key of a metadata file.</p> <p>The key uniquely
     * identifies the object, or metadata file, in the S3 bucket.</p>
     */
    inline const Aws::String& GetMetadataKey() const { return m_metadataKey; }
    inline bool MetadataKeyHasBeenSet() const { return m_metadataKeyHasBeenSet; }
    template<typename MetadataKeyT = Aws::String>
    void SetMetadataKey(MetadataKeyT&& value) { m_metadataKeyHasBeenSet = true; m_metadataKey = std::forward<MetadataKeyT>(value); }
    template<typename MetadataKeyT = Aws::String>
    S3Destination& WithMetadataKey(MetadataKeyT&& value) { SetMetadataKey(std::forward<MetadataKeyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_metadataKey;
    bool m_metadataKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
