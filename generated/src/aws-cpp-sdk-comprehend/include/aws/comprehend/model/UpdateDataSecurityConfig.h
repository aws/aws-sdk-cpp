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
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/UpdateDataSecurityConfig">AWS
   * API Reference</a></p>
   */
  class UpdateDataSecurityConfig
  {
  public:
    AWS_COMPREHEND_API UpdateDataSecurityConfig() = default;
    AWS_COMPREHEND_API UpdateDataSecurityConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API UpdateDataSecurityConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    UpdateDataSecurityConfig& WithModelKmsKeyId(ModelKmsKeyIdT&& value) { SetModelKmsKeyId(std::forward<ModelKmsKeyIdT>(value)); return *this;}
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
    UpdateDataSecurityConfig& WithVolumeKmsKeyId(VolumeKmsKeyIdT&& value) { SetVolumeKmsKeyId(std::forward<VolumeKmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const VpcConfig& GetVpcConfig() const { return m_vpcConfig; }
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }
    template<typename VpcConfigT = VpcConfig>
    void SetVpcConfig(VpcConfigT&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::forward<VpcConfigT>(value); }
    template<typename VpcConfigT = VpcConfig>
    UpdateDataSecurityConfig& WithVpcConfig(VpcConfigT&& value) { SetVpcConfig(std::forward<VpcConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_modelKmsKeyId;
    bool m_modelKmsKeyIdHasBeenSet = false;

    Aws::String m_volumeKmsKeyId;
    bool m_volumeKmsKeyIdHasBeenSet = false;

    VpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
