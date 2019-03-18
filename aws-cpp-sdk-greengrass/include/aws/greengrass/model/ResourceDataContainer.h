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
  class AWS_GREENGRASS_API ResourceDataContainer
  {
  public:
    ResourceDataContainer();
    ResourceDataContainer(Aws::Utils::Json::JsonView jsonValue);
    ResourceDataContainer& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Attributes that define the local device resource.
     */
    inline const LocalDeviceResourceData& GetLocalDeviceResourceData() const{ return m_localDeviceResourceData; }

    /**
     * Attributes that define the local device resource.
     */
    inline bool LocalDeviceResourceDataHasBeenSet() const { return m_localDeviceResourceDataHasBeenSet; }

    /**
     * Attributes that define the local device resource.
     */
    inline void SetLocalDeviceResourceData(const LocalDeviceResourceData& value) { m_localDeviceResourceDataHasBeenSet = true; m_localDeviceResourceData = value; }

    /**
     * Attributes that define the local device resource.
     */
    inline void SetLocalDeviceResourceData(LocalDeviceResourceData&& value) { m_localDeviceResourceDataHasBeenSet = true; m_localDeviceResourceData = std::move(value); }

    /**
     * Attributes that define the local device resource.
     */
    inline ResourceDataContainer& WithLocalDeviceResourceData(const LocalDeviceResourceData& value) { SetLocalDeviceResourceData(value); return *this;}

    /**
     * Attributes that define the local device resource.
     */
    inline ResourceDataContainer& WithLocalDeviceResourceData(LocalDeviceResourceData&& value) { SetLocalDeviceResourceData(std::move(value)); return *this;}


    /**
     * Attributes that define the local volume resource.
     */
    inline const LocalVolumeResourceData& GetLocalVolumeResourceData() const{ return m_localVolumeResourceData; }

    /**
     * Attributes that define the local volume resource.
     */
    inline bool LocalVolumeResourceDataHasBeenSet() const { return m_localVolumeResourceDataHasBeenSet; }

    /**
     * Attributes that define the local volume resource.
     */
    inline void SetLocalVolumeResourceData(const LocalVolumeResourceData& value) { m_localVolumeResourceDataHasBeenSet = true; m_localVolumeResourceData = value; }

    /**
     * Attributes that define the local volume resource.
     */
    inline void SetLocalVolumeResourceData(LocalVolumeResourceData&& value) { m_localVolumeResourceDataHasBeenSet = true; m_localVolumeResourceData = std::move(value); }

    /**
     * Attributes that define the local volume resource.
     */
    inline ResourceDataContainer& WithLocalVolumeResourceData(const LocalVolumeResourceData& value) { SetLocalVolumeResourceData(value); return *this;}

    /**
     * Attributes that define the local volume resource.
     */
    inline ResourceDataContainer& WithLocalVolumeResourceData(LocalVolumeResourceData&& value) { SetLocalVolumeResourceData(std::move(value)); return *this;}


    /**
     * Attributes that define an Amazon S3 machine learning resource.
     */
    inline const S3MachineLearningModelResourceData& GetS3MachineLearningModelResourceData() const{ return m_s3MachineLearningModelResourceData; }

    /**
     * Attributes that define an Amazon S3 machine learning resource.
     */
    inline bool S3MachineLearningModelResourceDataHasBeenSet() const { return m_s3MachineLearningModelResourceDataHasBeenSet; }

    /**
     * Attributes that define an Amazon S3 machine learning resource.
     */
    inline void SetS3MachineLearningModelResourceData(const S3MachineLearningModelResourceData& value) { m_s3MachineLearningModelResourceDataHasBeenSet = true; m_s3MachineLearningModelResourceData = value; }

    /**
     * Attributes that define an Amazon S3 machine learning resource.
     */
    inline void SetS3MachineLearningModelResourceData(S3MachineLearningModelResourceData&& value) { m_s3MachineLearningModelResourceDataHasBeenSet = true; m_s3MachineLearningModelResourceData = std::move(value); }

    /**
     * Attributes that define an Amazon S3 machine learning resource.
     */
    inline ResourceDataContainer& WithS3MachineLearningModelResourceData(const S3MachineLearningModelResourceData& value) { SetS3MachineLearningModelResourceData(value); return *this;}

    /**
     * Attributes that define an Amazon S3 machine learning resource.
     */
    inline ResourceDataContainer& WithS3MachineLearningModelResourceData(S3MachineLearningModelResourceData&& value) { SetS3MachineLearningModelResourceData(std::move(value)); return *this;}


    /**
     * Attributes that define an Amazon SageMaker machine learning resource.
     */
    inline const SageMakerMachineLearningModelResourceData& GetSageMakerMachineLearningModelResourceData() const{ return m_sageMakerMachineLearningModelResourceData; }

    /**
     * Attributes that define an Amazon SageMaker machine learning resource.
     */
    inline bool SageMakerMachineLearningModelResourceDataHasBeenSet() const { return m_sageMakerMachineLearningModelResourceDataHasBeenSet; }

    /**
     * Attributes that define an Amazon SageMaker machine learning resource.
     */
    inline void SetSageMakerMachineLearningModelResourceData(const SageMakerMachineLearningModelResourceData& value) { m_sageMakerMachineLearningModelResourceDataHasBeenSet = true; m_sageMakerMachineLearningModelResourceData = value; }

    /**
     * Attributes that define an Amazon SageMaker machine learning resource.
     */
    inline void SetSageMakerMachineLearningModelResourceData(SageMakerMachineLearningModelResourceData&& value) { m_sageMakerMachineLearningModelResourceDataHasBeenSet = true; m_sageMakerMachineLearningModelResourceData = std::move(value); }

    /**
     * Attributes that define an Amazon SageMaker machine learning resource.
     */
    inline ResourceDataContainer& WithSageMakerMachineLearningModelResourceData(const SageMakerMachineLearningModelResourceData& value) { SetSageMakerMachineLearningModelResourceData(value); return *this;}

    /**
     * Attributes that define an Amazon SageMaker machine learning resource.
     */
    inline ResourceDataContainer& WithSageMakerMachineLearningModelResourceData(SageMakerMachineLearningModelResourceData&& value) { SetSageMakerMachineLearningModelResourceData(std::move(value)); return *this;}


    /**
     * Attributes that define a secret resource, which references a secret from AWS
     * Secrets Manager.
     */
    inline const SecretsManagerSecretResourceData& GetSecretsManagerSecretResourceData() const{ return m_secretsManagerSecretResourceData; }

    /**
     * Attributes that define a secret resource, which references a secret from AWS
     * Secrets Manager.
     */
    inline bool SecretsManagerSecretResourceDataHasBeenSet() const { return m_secretsManagerSecretResourceDataHasBeenSet; }

    /**
     * Attributes that define a secret resource, which references a secret from AWS
     * Secrets Manager.
     */
    inline void SetSecretsManagerSecretResourceData(const SecretsManagerSecretResourceData& value) { m_secretsManagerSecretResourceDataHasBeenSet = true; m_secretsManagerSecretResourceData = value; }

    /**
     * Attributes that define a secret resource, which references a secret from AWS
     * Secrets Manager.
     */
    inline void SetSecretsManagerSecretResourceData(SecretsManagerSecretResourceData&& value) { m_secretsManagerSecretResourceDataHasBeenSet = true; m_secretsManagerSecretResourceData = std::move(value); }

    /**
     * Attributes that define a secret resource, which references a secret from AWS
     * Secrets Manager.
     */
    inline ResourceDataContainer& WithSecretsManagerSecretResourceData(const SecretsManagerSecretResourceData& value) { SetSecretsManagerSecretResourceData(value); return *this;}

    /**
     * Attributes that define a secret resource, which references a secret from AWS
     * Secrets Manager.
     */
    inline ResourceDataContainer& WithSecretsManagerSecretResourceData(SecretsManagerSecretResourceData&& value) { SetSecretsManagerSecretResourceData(std::move(value)); return *this;}

  private:

    LocalDeviceResourceData m_localDeviceResourceData;
    bool m_localDeviceResourceDataHasBeenSet;

    LocalVolumeResourceData m_localVolumeResourceData;
    bool m_localVolumeResourceDataHasBeenSet;

    S3MachineLearningModelResourceData m_s3MachineLearningModelResourceData;
    bool m_s3MachineLearningModelResourceDataHasBeenSet;

    SageMakerMachineLearningModelResourceData m_sageMakerMachineLearningModelResourceData;
    bool m_sageMakerMachineLearningModelResourceDataHasBeenSet;

    SecretsManagerSecretResourceData m_secretsManagerSecretResourceData;
    bool m_secretsManagerSecretResourceDataHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
