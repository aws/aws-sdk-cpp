/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
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
namespace GroundStation
{
namespace Model
{

  /**
   * <p>Information about an S3 recording <code>Config</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/S3RecordingConfig">AWS
   * API Reference</a></p>
   */
  class S3RecordingConfig
  {
  public:
    AWS_GROUNDSTATION_API S3RecordingConfig();
    AWS_GROUNDSTATION_API S3RecordingConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API S3RecordingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>ARN of the bucket to record to.</p>
     */
    inline const Aws::String& GetBucketArn() const{ return m_bucketArn; }

    /**
     * <p>ARN of the bucket to record to.</p>
     */
    inline bool BucketArnHasBeenSet() const { return m_bucketArnHasBeenSet; }

    /**
     * <p>ARN of the bucket to record to.</p>
     */
    inline void SetBucketArn(const Aws::String& value) { m_bucketArnHasBeenSet = true; m_bucketArn = value; }

    /**
     * <p>ARN of the bucket to record to.</p>
     */
    inline void SetBucketArn(Aws::String&& value) { m_bucketArnHasBeenSet = true; m_bucketArn = std::move(value); }

    /**
     * <p>ARN of the bucket to record to.</p>
     */
    inline void SetBucketArn(const char* value) { m_bucketArnHasBeenSet = true; m_bucketArn.assign(value); }

    /**
     * <p>ARN of the bucket to record to.</p>
     */
    inline S3RecordingConfig& WithBucketArn(const Aws::String& value) { SetBucketArn(value); return *this;}

    /**
     * <p>ARN of the bucket to record to.</p>
     */
    inline S3RecordingConfig& WithBucketArn(Aws::String&& value) { SetBucketArn(std::move(value)); return *this;}

    /**
     * <p>ARN of the bucket to record to.</p>
     */
    inline S3RecordingConfig& WithBucketArn(const char* value) { SetBucketArn(value); return *this;}


    /**
     * <p>S3 Key prefix to prefice data files.</p>
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }

    /**
     * <p>S3 Key prefix to prefice data files.</p>
     */
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }

    /**
     * <p>S3 Key prefix to prefice data files.</p>
     */
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }

    /**
     * <p>S3 Key prefix to prefice data files.</p>
     */
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }

    /**
     * <p>S3 Key prefix to prefice data files.</p>
     */
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }

    /**
     * <p>S3 Key prefix to prefice data files.</p>
     */
    inline S3RecordingConfig& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}

    /**
     * <p>S3 Key prefix to prefice data files.</p>
     */
    inline S3RecordingConfig& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}

    /**
     * <p>S3 Key prefix to prefice data files.</p>
     */
    inline S3RecordingConfig& WithPrefix(const char* value) { SetPrefix(value); return *this;}


    /**
     * <p>ARN of the role Ground Station assumes to write data to the bucket.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>ARN of the role Ground Station assumes to write data to the bucket.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>ARN of the role Ground Station assumes to write data to the bucket.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>ARN of the role Ground Station assumes to write data to the bucket.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>ARN of the role Ground Station assumes to write data to the bucket.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>ARN of the role Ground Station assumes to write data to the bucket.</p>
     */
    inline S3RecordingConfig& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>ARN of the role Ground Station assumes to write data to the bucket.</p>
     */
    inline S3RecordingConfig& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>ARN of the role Ground Station assumes to write data to the bucket.</p>
     */
    inline S3RecordingConfig& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    Aws::String m_bucketArn;
    bool m_bucketArnHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
