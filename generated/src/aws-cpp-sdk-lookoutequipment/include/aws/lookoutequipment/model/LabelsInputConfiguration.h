/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/lookoutequipment/model/LabelsS3InputConfiguration.h>
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
namespace LookoutEquipment
{
namespace Model
{

  /**
   * <p>Contains the configuration information for the S3 location being used to hold
   * label data. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/LabelsInputConfiguration">AWS
   * API Reference</a></p>
   */
  class LabelsInputConfiguration
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API LabelsInputConfiguration() = default;
    AWS_LOOKOUTEQUIPMENT_API LabelsInputConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API LabelsInputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains location information for the S3 location being used for label data.
     * </p>
     */
    inline const LabelsS3InputConfiguration& GetS3InputConfiguration() const { return m_s3InputConfiguration; }
    inline bool S3InputConfigurationHasBeenSet() const { return m_s3InputConfigurationHasBeenSet; }
    template<typename S3InputConfigurationT = LabelsS3InputConfiguration>
    void SetS3InputConfiguration(S3InputConfigurationT&& value) { m_s3InputConfigurationHasBeenSet = true; m_s3InputConfiguration = std::forward<S3InputConfigurationT>(value); }
    template<typename S3InputConfigurationT = LabelsS3InputConfiguration>
    LabelsInputConfiguration& WithS3InputConfiguration(S3InputConfigurationT&& value) { SetS3InputConfiguration(std::forward<S3InputConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the label group to be used for label data. </p>
     */
    inline const Aws::String& GetLabelGroupName() const { return m_labelGroupName; }
    inline bool LabelGroupNameHasBeenSet() const { return m_labelGroupNameHasBeenSet; }
    template<typename LabelGroupNameT = Aws::String>
    void SetLabelGroupName(LabelGroupNameT&& value) { m_labelGroupNameHasBeenSet = true; m_labelGroupName = std::forward<LabelGroupNameT>(value); }
    template<typename LabelGroupNameT = Aws::String>
    LabelsInputConfiguration& WithLabelGroupName(LabelGroupNameT&& value) { SetLabelGroupName(std::forward<LabelGroupNameT>(value)); return *this;}
    ///@}
  private:

    LabelsS3InputConfiguration m_s3InputConfiguration;
    bool m_s3InputConfigurationHasBeenSet = false;

    Aws::String m_labelGroupName;
    bool m_labelGroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
