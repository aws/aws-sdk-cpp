/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Provides configuration information for labeling jobs.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/LabelingJobResourceConfig">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API LabelingJobResourceConfig
  {
  public:
    LabelingJobResourceConfig();
    LabelingJobResourceConfig(Aws::Utils::Json::JsonView jsonValue);
    LabelingJobResourceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The AWS Key Management Service key ID for the key used to encrypt the output
     * data, if any.</p>
     */
    inline const Aws::String& GetVolumeKmsKeyId() const{ return m_volumeKmsKeyId; }

    /**
     * <p>The AWS Key Management Service key ID for the key used to encrypt the output
     * data, if any.</p>
     */
    inline bool VolumeKmsKeyIdHasBeenSet() const { return m_volumeKmsKeyIdHasBeenSet; }

    /**
     * <p>The AWS Key Management Service key ID for the key used to encrypt the output
     * data, if any.</p>
     */
    inline void SetVolumeKmsKeyId(const Aws::String& value) { m_volumeKmsKeyIdHasBeenSet = true; m_volumeKmsKeyId = value; }

    /**
     * <p>The AWS Key Management Service key ID for the key used to encrypt the output
     * data, if any.</p>
     */
    inline void SetVolumeKmsKeyId(Aws::String&& value) { m_volumeKmsKeyIdHasBeenSet = true; m_volumeKmsKeyId = std::move(value); }

    /**
     * <p>The AWS Key Management Service key ID for the key used to encrypt the output
     * data, if any.</p>
     */
    inline void SetVolumeKmsKeyId(const char* value) { m_volumeKmsKeyIdHasBeenSet = true; m_volumeKmsKeyId.assign(value); }

    /**
     * <p>The AWS Key Management Service key ID for the key used to encrypt the output
     * data, if any.</p>
     */
    inline LabelingJobResourceConfig& WithVolumeKmsKeyId(const Aws::String& value) { SetVolumeKmsKeyId(value); return *this;}

    /**
     * <p>The AWS Key Management Service key ID for the key used to encrypt the output
     * data, if any.</p>
     */
    inline LabelingJobResourceConfig& WithVolumeKmsKeyId(Aws::String&& value) { SetVolumeKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The AWS Key Management Service key ID for the key used to encrypt the output
     * data, if any.</p>
     */
    inline LabelingJobResourceConfig& WithVolumeKmsKeyId(const char* value) { SetVolumeKmsKeyId(value); return *this;}

  private:

    Aws::String m_volumeKmsKeyId;
    bool m_volumeKmsKeyIdHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
