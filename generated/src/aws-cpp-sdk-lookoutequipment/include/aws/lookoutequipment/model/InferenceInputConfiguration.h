/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/lookoutequipment/model/InferenceS3InputConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutequipment/model/InferenceInputNameConfiguration.h>
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
namespace LookoutEquipment
{
namespace Model
{

  /**
   * <p>Specifies configuration information for the input data for the inference,
   * including Amazon S3 location of input data.. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/InferenceInputConfiguration">AWS
   * API Reference</a></p>
   */
  class InferenceInputConfiguration
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API InferenceInputConfiguration();
    AWS_LOOKOUTEQUIPMENT_API InferenceInputConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API InferenceInputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Specifies configuration information for the input data for the inference,
     * including Amazon S3 location of input data.</p>
     */
    inline const InferenceS3InputConfiguration& GetS3InputConfiguration() const{ return m_s3InputConfiguration; }
    inline bool S3InputConfigurationHasBeenSet() const { return m_s3InputConfigurationHasBeenSet; }
    inline void SetS3InputConfiguration(const InferenceS3InputConfiguration& value) { m_s3InputConfigurationHasBeenSet = true; m_s3InputConfiguration = value; }
    inline void SetS3InputConfiguration(InferenceS3InputConfiguration&& value) { m_s3InputConfigurationHasBeenSet = true; m_s3InputConfiguration = std::move(value); }
    inline InferenceInputConfiguration& WithS3InputConfiguration(const InferenceS3InputConfiguration& value) { SetS3InputConfiguration(value); return *this;}
    inline InferenceInputConfiguration& WithS3InputConfiguration(InferenceS3InputConfiguration&& value) { SetS3InputConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the difference between your time zone and Coordinated Universal
     * Time (UTC).</p>
     */
    inline const Aws::String& GetInputTimeZoneOffset() const{ return m_inputTimeZoneOffset; }
    inline bool InputTimeZoneOffsetHasBeenSet() const { return m_inputTimeZoneOffsetHasBeenSet; }
    inline void SetInputTimeZoneOffset(const Aws::String& value) { m_inputTimeZoneOffsetHasBeenSet = true; m_inputTimeZoneOffset = value; }
    inline void SetInputTimeZoneOffset(Aws::String&& value) { m_inputTimeZoneOffsetHasBeenSet = true; m_inputTimeZoneOffset = std::move(value); }
    inline void SetInputTimeZoneOffset(const char* value) { m_inputTimeZoneOffsetHasBeenSet = true; m_inputTimeZoneOffset.assign(value); }
    inline InferenceInputConfiguration& WithInputTimeZoneOffset(const Aws::String& value) { SetInputTimeZoneOffset(value); return *this;}
    inline InferenceInputConfiguration& WithInputTimeZoneOffset(Aws::String&& value) { SetInputTimeZoneOffset(std::move(value)); return *this;}
    inline InferenceInputConfiguration& WithInputTimeZoneOffset(const char* value) { SetInputTimeZoneOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies configuration information for the input data for the inference,
     * including timestamp format and delimiter. </p>
     */
    inline const InferenceInputNameConfiguration& GetInferenceInputNameConfiguration() const{ return m_inferenceInputNameConfiguration; }
    inline bool InferenceInputNameConfigurationHasBeenSet() const { return m_inferenceInputNameConfigurationHasBeenSet; }
    inline void SetInferenceInputNameConfiguration(const InferenceInputNameConfiguration& value) { m_inferenceInputNameConfigurationHasBeenSet = true; m_inferenceInputNameConfiguration = value; }
    inline void SetInferenceInputNameConfiguration(InferenceInputNameConfiguration&& value) { m_inferenceInputNameConfigurationHasBeenSet = true; m_inferenceInputNameConfiguration = std::move(value); }
    inline InferenceInputConfiguration& WithInferenceInputNameConfiguration(const InferenceInputNameConfiguration& value) { SetInferenceInputNameConfiguration(value); return *this;}
    inline InferenceInputConfiguration& WithInferenceInputNameConfiguration(InferenceInputNameConfiguration&& value) { SetInferenceInputNameConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    InferenceS3InputConfiguration m_s3InputConfiguration;
    bool m_s3InputConfigurationHasBeenSet = false;

    Aws::String m_inputTimeZoneOffset;
    bool m_inputTimeZoneOffsetHasBeenSet = false;

    InferenceInputNameConfiguration m_inferenceInputNameConfiguration;
    bool m_inferenceInputNameConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
