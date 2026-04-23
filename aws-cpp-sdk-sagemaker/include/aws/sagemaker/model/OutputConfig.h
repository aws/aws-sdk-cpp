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
#include <aws/sagemaker/model/TargetDevice.h>
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
   * <p>Contains information about the output location for the compiled model and the
   * device (target) that the model runs on.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/OutputConfig">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API OutputConfig
  {
  public:
    OutputConfig();
    OutputConfig(Aws::Utils::Json::JsonView jsonValue);
    OutputConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Identifies the S3 path where you want Amazon SageMaker to store the model
     * artifacts. For example, s3://bucket-name/key-name-prefix.</p>
     */
    inline const Aws::String& GetS3OutputLocation() const{ return m_s3OutputLocation; }

    /**
     * <p>Identifies the S3 path where you want Amazon SageMaker to store the model
     * artifacts. For example, s3://bucket-name/key-name-prefix.</p>
     */
    inline bool S3OutputLocationHasBeenSet() const { return m_s3OutputLocationHasBeenSet; }

    /**
     * <p>Identifies the S3 path where you want Amazon SageMaker to store the model
     * artifacts. For example, s3://bucket-name/key-name-prefix.</p>
     */
    inline void SetS3OutputLocation(const Aws::String& value) { m_s3OutputLocationHasBeenSet = true; m_s3OutputLocation = value; }

    /**
     * <p>Identifies the S3 path where you want Amazon SageMaker to store the model
     * artifacts. For example, s3://bucket-name/key-name-prefix.</p>
     */
    inline void SetS3OutputLocation(Aws::String&& value) { m_s3OutputLocationHasBeenSet = true; m_s3OutputLocation = std::move(value); }

    /**
     * <p>Identifies the S3 path where you want Amazon SageMaker to store the model
     * artifacts. For example, s3://bucket-name/key-name-prefix.</p>
     */
    inline void SetS3OutputLocation(const char* value) { m_s3OutputLocationHasBeenSet = true; m_s3OutputLocation.assign(value); }

    /**
     * <p>Identifies the S3 path where you want Amazon SageMaker to store the model
     * artifacts. For example, s3://bucket-name/key-name-prefix.</p>
     */
    inline OutputConfig& WithS3OutputLocation(const Aws::String& value) { SetS3OutputLocation(value); return *this;}

    /**
     * <p>Identifies the S3 path where you want Amazon SageMaker to store the model
     * artifacts. For example, s3://bucket-name/key-name-prefix.</p>
     */
    inline OutputConfig& WithS3OutputLocation(Aws::String&& value) { SetS3OutputLocation(std::move(value)); return *this;}

    /**
     * <p>Identifies the S3 path where you want Amazon SageMaker to store the model
     * artifacts. For example, s3://bucket-name/key-name-prefix.</p>
     */
    inline OutputConfig& WithS3OutputLocation(const char* value) { SetS3OutputLocation(value); return *this;}


    /**
     * <p>Identifies the device that you want to run your model on after it has been
     * compiled. For example: ml_c5.</p>
     */
    inline const TargetDevice& GetTargetDevice() const{ return m_targetDevice; }

    /**
     * <p>Identifies the device that you want to run your model on after it has been
     * compiled. For example: ml_c5.</p>
     */
    inline bool TargetDeviceHasBeenSet() const { return m_targetDeviceHasBeenSet; }

    /**
     * <p>Identifies the device that you want to run your model on after it has been
     * compiled. For example: ml_c5.</p>
     */
    inline void SetTargetDevice(const TargetDevice& value) { m_targetDeviceHasBeenSet = true; m_targetDevice = value; }

    /**
     * <p>Identifies the device that you want to run your model on after it has been
     * compiled. For example: ml_c5.</p>
     */
    inline void SetTargetDevice(TargetDevice&& value) { m_targetDeviceHasBeenSet = true; m_targetDevice = std::move(value); }

    /**
     * <p>Identifies the device that you want to run your model on after it has been
     * compiled. For example: ml_c5.</p>
     */
    inline OutputConfig& WithTargetDevice(const TargetDevice& value) { SetTargetDevice(value); return *this;}

    /**
     * <p>Identifies the device that you want to run your model on after it has been
     * compiled. For example: ml_c5.</p>
     */
    inline OutputConfig& WithTargetDevice(TargetDevice&& value) { SetTargetDevice(std::move(value)); return *this;}

  private:

    Aws::String m_s3OutputLocation;
    bool m_s3OutputLocationHasBeenSet;

    TargetDevice m_targetDevice;
    bool m_targetDeviceHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
