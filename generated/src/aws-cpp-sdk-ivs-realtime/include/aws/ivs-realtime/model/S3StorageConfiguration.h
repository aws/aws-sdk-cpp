/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
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
namespace ivsrealtime
{
namespace Model
{

  /**
   * <p>A complex type that describes an S3 location where recorded videos will be
   * stored.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/S3StorageConfiguration">AWS
   * API Reference</a></p>
   */
  class S3StorageConfiguration
  {
  public:
    AWS_IVSREALTIME_API S3StorageConfiguration();
    AWS_IVSREALTIME_API S3StorageConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API S3StorageConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Location (S3 bucket name) where recorded videos will be stored. Note that the
     * StorageConfiguration and S3 bucket must be in the same region as the
     * Composition.</p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }

    /**
     * <p>Location (S3 bucket name) where recorded videos will be stored. Note that the
     * StorageConfiguration and S3 bucket must be in the same region as the
     * Composition.</p>
     */
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }

    /**
     * <p>Location (S3 bucket name) where recorded videos will be stored. Note that the
     * StorageConfiguration and S3 bucket must be in the same region as the
     * Composition.</p>
     */
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }

    /**
     * <p>Location (S3 bucket name) where recorded videos will be stored. Note that the
     * StorageConfiguration and S3 bucket must be in the same region as the
     * Composition.</p>
     */
    inline void SetBucketName(Aws::String&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::move(value); }

    /**
     * <p>Location (S3 bucket name) where recorded videos will be stored. Note that the
     * StorageConfiguration and S3 bucket must be in the same region as the
     * Composition.</p>
     */
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }

    /**
     * <p>Location (S3 bucket name) where recorded videos will be stored. Note that the
     * StorageConfiguration and S3 bucket must be in the same region as the
     * Composition.</p>
     */
    inline S3StorageConfiguration& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}

    /**
     * <p>Location (S3 bucket name) where recorded videos will be stored. Note that the
     * StorageConfiguration and S3 bucket must be in the same region as the
     * Composition.</p>
     */
    inline S3StorageConfiguration& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}

    /**
     * <p>Location (S3 bucket name) where recorded videos will be stored. Note that the
     * StorageConfiguration and S3 bucket must be in the same region as the
     * Composition.</p>
     */
    inline S3StorageConfiguration& WithBucketName(const char* value) { SetBucketName(value); return *this;}

  private:

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
