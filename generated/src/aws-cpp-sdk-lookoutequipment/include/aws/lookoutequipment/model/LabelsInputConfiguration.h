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
    AWS_LOOKOUTEQUIPMENT_API LabelsInputConfiguration();
    AWS_LOOKOUTEQUIPMENT_API LabelsInputConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API LabelsInputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Contains location information for the S3 location being used for label data.
     * </p>
     */
    inline const LabelsS3InputConfiguration& GetS3InputConfiguration() const{ return m_s3InputConfiguration; }

    /**
     * <p>Contains location information for the S3 location being used for label data.
     * </p>
     */
    inline bool S3InputConfigurationHasBeenSet() const { return m_s3InputConfigurationHasBeenSet; }

    /**
     * <p>Contains location information for the S3 location being used for label data.
     * </p>
     */
    inline void SetS3InputConfiguration(const LabelsS3InputConfiguration& value) { m_s3InputConfigurationHasBeenSet = true; m_s3InputConfiguration = value; }

    /**
     * <p>Contains location information for the S3 location being used for label data.
     * </p>
     */
    inline void SetS3InputConfiguration(LabelsS3InputConfiguration&& value) { m_s3InputConfigurationHasBeenSet = true; m_s3InputConfiguration = std::move(value); }

    /**
     * <p>Contains location information for the S3 location being used for label data.
     * </p>
     */
    inline LabelsInputConfiguration& WithS3InputConfiguration(const LabelsS3InputConfiguration& value) { SetS3InputConfiguration(value); return *this;}

    /**
     * <p>Contains location information for the S3 location being used for label data.
     * </p>
     */
    inline LabelsInputConfiguration& WithS3InputConfiguration(LabelsS3InputConfiguration&& value) { SetS3InputConfiguration(std::move(value)); return *this;}


    /**
     * <p> The name of the label group to be used for label data. </p>
     */
    inline const Aws::String& GetLabelGroupName() const{ return m_labelGroupName; }

    /**
     * <p> The name of the label group to be used for label data. </p>
     */
    inline bool LabelGroupNameHasBeenSet() const { return m_labelGroupNameHasBeenSet; }

    /**
     * <p> The name of the label group to be used for label data. </p>
     */
    inline void SetLabelGroupName(const Aws::String& value) { m_labelGroupNameHasBeenSet = true; m_labelGroupName = value; }

    /**
     * <p> The name of the label group to be used for label data. </p>
     */
    inline void SetLabelGroupName(Aws::String&& value) { m_labelGroupNameHasBeenSet = true; m_labelGroupName = std::move(value); }

    /**
     * <p> The name of the label group to be used for label data. </p>
     */
    inline void SetLabelGroupName(const char* value) { m_labelGroupNameHasBeenSet = true; m_labelGroupName.assign(value); }

    /**
     * <p> The name of the label group to be used for label data. </p>
     */
    inline LabelsInputConfiguration& WithLabelGroupName(const Aws::String& value) { SetLabelGroupName(value); return *this;}

    /**
     * <p> The name of the label group to be used for label data. </p>
     */
    inline LabelsInputConfiguration& WithLabelGroupName(Aws::String&& value) { SetLabelGroupName(std::move(value)); return *this;}

    /**
     * <p> The name of the label group to be used for label data. </p>
     */
    inline LabelsInputConfiguration& WithLabelGroupName(const char* value) { SetLabelGroupName(value); return *this;}

  private:

    LabelsS3InputConfiguration m_s3InputConfiguration;
    bool m_s3InputConfigurationHasBeenSet = false;

    Aws::String m_labelGroupName;
    bool m_labelGroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
