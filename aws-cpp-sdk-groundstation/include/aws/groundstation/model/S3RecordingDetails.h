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
   * <p>Details about an S3 recording <code>Config</code> used in a
   * contact.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/S3RecordingDetails">AWS
   * API Reference</a></p>
   */
  class S3RecordingDetails
  {
  public:
    AWS_GROUNDSTATION_API S3RecordingDetails();
    AWS_GROUNDSTATION_API S3RecordingDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API S3RecordingDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>ARN of the bucket used.</p>
     */
    inline const Aws::String& GetBucketArn() const{ return m_bucketArn; }

    /**
     * <p>ARN of the bucket used.</p>
     */
    inline bool BucketArnHasBeenSet() const { return m_bucketArnHasBeenSet; }

    /**
     * <p>ARN of the bucket used.</p>
     */
    inline void SetBucketArn(const Aws::String& value) { m_bucketArnHasBeenSet = true; m_bucketArn = value; }

    /**
     * <p>ARN of the bucket used.</p>
     */
    inline void SetBucketArn(Aws::String&& value) { m_bucketArnHasBeenSet = true; m_bucketArn = std::move(value); }

    /**
     * <p>ARN of the bucket used.</p>
     */
    inline void SetBucketArn(const char* value) { m_bucketArnHasBeenSet = true; m_bucketArn.assign(value); }

    /**
     * <p>ARN of the bucket used.</p>
     */
    inline S3RecordingDetails& WithBucketArn(const Aws::String& value) { SetBucketArn(value); return *this;}

    /**
     * <p>ARN of the bucket used.</p>
     */
    inline S3RecordingDetails& WithBucketArn(Aws::String&& value) { SetBucketArn(std::move(value)); return *this;}

    /**
     * <p>ARN of the bucket used.</p>
     */
    inline S3RecordingDetails& WithBucketArn(const char* value) { SetBucketArn(value); return *this;}


    /**
     * <p>Key template used for the S3 Recording Configuration</p>
     */
    inline const Aws::String& GetKeyTemplate() const{ return m_keyTemplate; }

    /**
     * <p>Key template used for the S3 Recording Configuration</p>
     */
    inline bool KeyTemplateHasBeenSet() const { return m_keyTemplateHasBeenSet; }

    /**
     * <p>Key template used for the S3 Recording Configuration</p>
     */
    inline void SetKeyTemplate(const Aws::String& value) { m_keyTemplateHasBeenSet = true; m_keyTemplate = value; }

    /**
     * <p>Key template used for the S3 Recording Configuration</p>
     */
    inline void SetKeyTemplate(Aws::String&& value) { m_keyTemplateHasBeenSet = true; m_keyTemplate = std::move(value); }

    /**
     * <p>Key template used for the S3 Recording Configuration</p>
     */
    inline void SetKeyTemplate(const char* value) { m_keyTemplateHasBeenSet = true; m_keyTemplate.assign(value); }

    /**
     * <p>Key template used for the S3 Recording Configuration</p>
     */
    inline S3RecordingDetails& WithKeyTemplate(const Aws::String& value) { SetKeyTemplate(value); return *this;}

    /**
     * <p>Key template used for the S3 Recording Configuration</p>
     */
    inline S3RecordingDetails& WithKeyTemplate(Aws::String&& value) { SetKeyTemplate(std::move(value)); return *this;}

    /**
     * <p>Key template used for the S3 Recording Configuration</p>
     */
    inline S3RecordingDetails& WithKeyTemplate(const char* value) { SetKeyTemplate(value); return *this;}

  private:

    Aws::String m_bucketArn;
    bool m_bucketArnHasBeenSet = false;

    Aws::String m_keyTemplate;
    bool m_keyTemplateHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
