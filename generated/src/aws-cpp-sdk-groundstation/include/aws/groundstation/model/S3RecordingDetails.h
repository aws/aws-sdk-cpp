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
    AWS_GROUNDSTATION_API S3RecordingDetails() = default;
    AWS_GROUNDSTATION_API S3RecordingDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API S3RecordingDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>ARN of the bucket used.</p>
     */
    inline const Aws::String& GetBucketArn() const { return m_bucketArn; }
    inline bool BucketArnHasBeenSet() const { return m_bucketArnHasBeenSet; }
    template<typename BucketArnT = Aws::String>
    void SetBucketArn(BucketArnT&& value) { m_bucketArnHasBeenSet = true; m_bucketArn = std::forward<BucketArnT>(value); }
    template<typename BucketArnT = Aws::String>
    S3RecordingDetails& WithBucketArn(BucketArnT&& value) { SetBucketArn(std::forward<BucketArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Key template used for the S3 Recording Configuration</p>
     */
    inline const Aws::String& GetKeyTemplate() const { return m_keyTemplate; }
    inline bool KeyTemplateHasBeenSet() const { return m_keyTemplateHasBeenSet; }
    template<typename KeyTemplateT = Aws::String>
    void SetKeyTemplate(KeyTemplateT&& value) { m_keyTemplateHasBeenSet = true; m_keyTemplate = std::forward<KeyTemplateT>(value); }
    template<typename KeyTemplateT = Aws::String>
    S3RecordingDetails& WithKeyTemplate(KeyTemplateT&& value) { SetKeyTemplate(std::forward<KeyTemplateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_bucketArn;
    bool m_bucketArnHasBeenSet = false;

    Aws::String m_keyTemplate;
    bool m_keyTemplateHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
