/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
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
namespace IVS
{
namespace Model
{

  /**
   * <p>A complex type that describes an S3 location where recorded videos will be
   * stored.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/S3DestinationConfiguration">AWS
   * API Reference</a></p>
   */
  class S3DestinationConfiguration
  {
  public:
    AWS_IVS_API S3DestinationConfiguration();
    AWS_IVS_API S3DestinationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVS_API S3DestinationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Location (S3 bucket name) where recorded videos will be stored.</p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }

    /**
     * <p>Location (S3 bucket name) where recorded videos will be stored.</p>
     */
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }

    /**
     * <p>Location (S3 bucket name) where recorded videos will be stored.</p>
     */
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }

    /**
     * <p>Location (S3 bucket name) where recorded videos will be stored.</p>
     */
    inline void SetBucketName(Aws::String&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::move(value); }

    /**
     * <p>Location (S3 bucket name) where recorded videos will be stored.</p>
     */
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }

    /**
     * <p>Location (S3 bucket name) where recorded videos will be stored.</p>
     */
    inline S3DestinationConfiguration& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}

    /**
     * <p>Location (S3 bucket name) where recorded videos will be stored.</p>
     */
    inline S3DestinationConfiguration& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}

    /**
     * <p>Location (S3 bucket name) where recorded videos will be stored.</p>
     */
    inline S3DestinationConfiguration& WithBucketName(const char* value) { SetBucketName(value); return *this;}

  private:

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
