/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/greengrass/model/LocalDeviceResourceData.h>
#include <aws/greengrass/model/LocalVolumeResourceData.h>
#include <aws/greengrass/model/S3MachineLearningModelResourceData.h>
#include <aws/greengrass/model/SageMakerMachineLearningModelResourceData.h>
#include <aws/greengrass/model/SecretsManagerSecretResourceData.h>
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
namespace Greengrass
{
namespace Model
{

  /**
   * A container for resource data. The container takes only one of the following
   * supported resource data types: ''LocalDeviceResourceData'',
   * ''LocalVolumeResourceData'', ''SageMakerMachineLearningModelResourceData'',
   * ''S3MachineLearningModelResourceData'',
   * ''SecretsManagerSecretResourceData''.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ResourceDataContainer">AWS
   * API Reference</a></p>
   */
  class ResourceDataContainer
  {
  public:
    AWS_GREENGRASS_API ResourceDataContainer() = default;
    AWS_GREENGRASS_API ResourceDataContainer(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API ResourceDataContainer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Attributes that define the local device resource.
     */
    inline const LocalDeviceResourceData& GetLocalDeviceResourceData() const { return m_localDeviceResourceData; }
    inline bool LocalDeviceResourceDataHasBeenSet() const { return m_localDeviceResourceDataHasBeenSet; }
    template<typename LocalDeviceResourceDataT = LocalDeviceResourceData>
    void SetLocalDeviceResourceData(LocalDeviceResourceDataT&& value) { m_localDeviceResourceDataHasBeenSet = true; m_localDeviceResourceData = std::forward<LocalDeviceResourceDataT>(value); }
    template<typename LocalDeviceResourceDataT = LocalDeviceResourceData>
    ResourceDataContainer& WithLocalDeviceResourceData(LocalDeviceResourceDataT&& value) { SetLocalDeviceResourceData(std::forward<LocalDeviceResourceDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Attributes that define the local volume resource.
     */
    inline const LocalVolumeResourceData& GetLocalVolumeResourceData() const { return m_localVolumeResourceData; }
    inline bool LocalVolumeResourceDataHasBeenSet() const { return m_localVolumeResourceDataHasBeenSet; }
    template<typename LocalVolumeResourceDataT = LocalVolumeResourceData>
    void SetLocalVolumeResourceData(LocalVolumeResourceDataT&& value) { m_localVolumeResourceDataHasBeenSet = true; m_localVolumeResourceData = std::forward<LocalVolumeResourceDataT>(value); }
    template<typename LocalVolumeResourceDataT = LocalVolumeResourceData>
    ResourceDataContainer& WithLocalVolumeResourceData(LocalVolumeResourceDataT&& value) { SetLocalVolumeResourceData(std::forward<LocalVolumeResourceDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Attributes that define an Amazon S3 machine learning resource.
     */
    inline const S3MachineLearningModelResourceData& GetS3MachineLearningModelResourceData() const { return m_s3MachineLearningModelResourceData; }
    inline bool S3MachineLearningModelResourceDataHasBeenSet() const { return m_s3MachineLearningModelResourceDataHasBeenSet; }
    template<typename S3MachineLearningModelResourceDataT = S3MachineLearningModelResourceData>
    void SetS3MachineLearningModelResourceData(S3MachineLearningModelResourceDataT&& value) { m_s3MachineLearningModelResourceDataHasBeenSet = true; m_s3MachineLearningModelResourceData = std::forward<S3MachineLearningModelResourceDataT>(value); }
    template<typename S3MachineLearningModelResourceDataT = S3MachineLearningModelResourceData>
    ResourceDataContainer& WithS3MachineLearningModelResourceData(S3MachineLearningModelResourceDataT&& value) { SetS3MachineLearningModelResourceData(std::forward<S3MachineLearningModelResourceDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Attributes that define an Amazon SageMaker machine learning resource.
     */
    inline const SageMakerMachineLearningModelResourceData& GetSageMakerMachineLearningModelResourceData() const { return m_sageMakerMachineLearningModelResourceData; }
    inline bool SageMakerMachineLearningModelResourceDataHasBeenSet() const { return m_sageMakerMachineLearningModelResourceDataHasBeenSet; }
    template<typename SageMakerMachineLearningModelResourceDataT = SageMakerMachineLearningModelResourceData>
    void SetSageMakerMachineLearningModelResourceData(SageMakerMachineLearningModelResourceDataT&& value) { m_sageMakerMachineLearningModelResourceDataHasBeenSet = true; m_sageMakerMachineLearningModelResourceData = std::forward<SageMakerMachineLearningModelResourceDataT>(value); }
    template<typename SageMakerMachineLearningModelResourceDataT = SageMakerMachineLearningModelResourceData>
    ResourceDataContainer& WithSageMakerMachineLearningModelResourceData(SageMakerMachineLearningModelResourceDataT&& value) { SetSageMakerMachineLearningModelResourceData(std::forward<SageMakerMachineLearningModelResourceDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Attributes that define a secret resource, which references a secret from AWS
     * Secrets Manager.
     */
    inline const SecretsManagerSecretResourceData& GetSecretsManagerSecretResourceData() const { return m_secretsManagerSecretResourceData; }
    inline bool SecretsManagerSecretResourceDataHasBeenSet() const { return m_secretsManagerSecretResourceDataHasBeenSet; }
    template<typename SecretsManagerSecretResourceDataT = SecretsManagerSecretResourceData>
    void SetSecretsManagerSecretResourceData(SecretsManagerSecretResourceDataT&& value) { m_secretsManagerSecretResourceDataHasBeenSet = true; m_secretsManagerSecretResourceData = std::forward<SecretsManagerSecretResourceDataT>(value); }
    template<typename SecretsManagerSecretResourceDataT = SecretsManagerSecretResourceData>
    ResourceDataContainer& WithSecretsManagerSecretResourceData(SecretsManagerSecretResourceDataT&& value) { SetSecretsManagerSecretResourceData(std::forward<SecretsManagerSecretResourceDataT>(value)); return *this;}
    ///@}
  private:

    LocalDeviceResourceData m_localDeviceResourceData;
    bool m_localDeviceResourceDataHasBeenSet = false;

    LocalVolumeResourceData m_localVolumeResourceData;
    bool m_localVolumeResourceDataHasBeenSet = false;

    S3MachineLearningModelResourceData m_s3MachineLearningModelResourceData;
    bool m_s3MachineLearningModelResourceDataHasBeenSet = false;

    SageMakerMachineLearningModelResourceData m_sageMakerMachineLearningModelResourceData;
    bool m_sageMakerMachineLearningModelResourceDataHasBeenSet = false;

    SecretsManagerSecretResourceData m_secretsManagerSecretResourceData;
    bool m_secretsManagerSecretResourceDataHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
