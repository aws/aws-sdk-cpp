/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/VpcConfig.h>
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
namespace Comprehend
{
namespace Model
{

  /**
   * <p>Data security configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DataSecurityConfig">AWS
   * API Reference</a></p>
   */
  class DataSecurityConfig
  {
  public:
    AWS_COMPREHEND_API DataSecurityConfig() = default;
    AWS_COMPREHEND_API DataSecurityConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API DataSecurityConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>ID for the KMS key that Amazon Comprehend uses to encrypt trained custom
     * models. The ModelKmsKeyId can be either of the following formats:</p> <ul> <li>
     * <p>KMS Key ID: <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li>
     * <li> <p>Amazon Resource Name (ARN) of a KMS Key:
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline const Aws::String& GetModelKmsKeyId() const { return m_modelKmsKeyId; }
    inline bool ModelKmsKeyIdHasBeenSet() const { return m_modelKmsKeyIdHasBeenSet; }
    template<typename ModelKmsKeyIdT = Aws::String>
    void SetModelKmsKeyId(ModelKmsKeyIdT&& value) { m_modelKmsKeyIdHasBeenSet = true; m_modelKmsKeyId = std::forward<ModelKmsKeyIdT>(value); }
    template<typename ModelKmsKeyIdT = Aws::String>
    DataSecurityConfig& WithModelKmsKeyId(ModelKmsKeyIdT&& value) { SetModelKmsKeyId(std::forward<ModelKmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID for the KMS key that Amazon Comprehend uses to encrypt the volume.</p>
     */
    inline const Aws::String& GetVolumeKmsKeyId() const { return m_volumeKmsKeyId; }
    inline bool VolumeKmsKeyIdHasBeenSet() const { return m_volumeKmsKeyIdHasBeenSet; }
    template<typename VolumeKmsKeyIdT = Aws::String>
    void SetVolumeKmsKeyId(VolumeKmsKeyIdT&& value) { m_volumeKmsKeyIdHasBeenSet = true; m_volumeKmsKeyId = std::forward<VolumeKmsKeyIdT>(value); }
    template<typename VolumeKmsKeyIdT = Aws::String>
    DataSecurityConfig& WithVolumeKmsKeyId(VolumeKmsKeyIdT&& value) { SetVolumeKmsKeyId(std::forward<VolumeKmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID for the KMS key that Amazon Comprehend uses to encrypt the data in the
     * data lake.</p>
     */
    inline const Aws::String& GetDataLakeKmsKeyId() const { return m_dataLakeKmsKeyId; }
    inline bool DataLakeKmsKeyIdHasBeenSet() const { return m_dataLakeKmsKeyIdHasBeenSet; }
    template<typename DataLakeKmsKeyIdT = Aws::String>
    void SetDataLakeKmsKeyId(DataLakeKmsKeyIdT&& value) { m_dataLakeKmsKeyIdHasBeenSet = true; m_dataLakeKmsKeyId = std::forward<DataLakeKmsKeyIdT>(value); }
    template<typename DataLakeKmsKeyIdT = Aws::String>
    DataSecurityConfig& WithDataLakeKmsKeyId(DataLakeKmsKeyIdT&& value) { SetDataLakeKmsKeyId(std::forward<DataLakeKmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const VpcConfig& GetVpcConfig() const { return m_vpcConfig; }
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }
    template<typename VpcConfigT = VpcConfig>
    void SetVpcConfig(VpcConfigT&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::forward<VpcConfigT>(value); }
    template<typename VpcConfigT = VpcConfig>
    DataSecurityConfig& WithVpcConfig(VpcConfigT&& value) { SetVpcConfig(std::forward<VpcConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_modelKmsKeyId;
    bool m_modelKmsKeyIdHasBeenSet = false;

    Aws::String m_volumeKmsKeyId;
    bool m_volumeKmsKeyIdHasBeenSet = false;

    Aws::String m_dataLakeKmsKeyId;
    bool m_dataLakeKmsKeyIdHasBeenSet = false;

    VpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
