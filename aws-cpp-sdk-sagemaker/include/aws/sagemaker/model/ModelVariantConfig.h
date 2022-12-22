/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ModelInfrastructureConfig.h>
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
   * <p>Contains information about the deployment options of a model.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ModelVariantConfig">AWS
   * API Reference</a></p>
   */
  class ModelVariantConfig
  {
  public:
    AWS_SAGEMAKER_API ModelVariantConfig();
    AWS_SAGEMAKER_API ModelVariantConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ModelVariantConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the Amazon SageMaker Model entity.</p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }

    /**
     * <p>The name of the Amazon SageMaker Model entity.</p>
     */
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }

    /**
     * <p>The name of the Amazon SageMaker Model entity.</p>
     */
    inline void SetModelName(const Aws::String& value) { m_modelNameHasBeenSet = true; m_modelName = value; }

    /**
     * <p>The name of the Amazon SageMaker Model entity.</p>
     */
    inline void SetModelName(Aws::String&& value) { m_modelNameHasBeenSet = true; m_modelName = std::move(value); }

    /**
     * <p>The name of the Amazon SageMaker Model entity.</p>
     */
    inline void SetModelName(const char* value) { m_modelNameHasBeenSet = true; m_modelName.assign(value); }

    /**
     * <p>The name of the Amazon SageMaker Model entity.</p>
     */
    inline ModelVariantConfig& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}

    /**
     * <p>The name of the Amazon SageMaker Model entity.</p>
     */
    inline ModelVariantConfig& WithModelName(Aws::String&& value) { SetModelName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon SageMaker Model entity.</p>
     */
    inline ModelVariantConfig& WithModelName(const char* value) { SetModelName(value); return *this;}


    /**
     * <p>The name of the variant.</p>
     */
    inline const Aws::String& GetVariantName() const{ return m_variantName; }

    /**
     * <p>The name of the variant.</p>
     */
    inline bool VariantNameHasBeenSet() const { return m_variantNameHasBeenSet; }

    /**
     * <p>The name of the variant.</p>
     */
    inline void SetVariantName(const Aws::String& value) { m_variantNameHasBeenSet = true; m_variantName = value; }

    /**
     * <p>The name of the variant.</p>
     */
    inline void SetVariantName(Aws::String&& value) { m_variantNameHasBeenSet = true; m_variantName = std::move(value); }

    /**
     * <p>The name of the variant.</p>
     */
    inline void SetVariantName(const char* value) { m_variantNameHasBeenSet = true; m_variantName.assign(value); }

    /**
     * <p>The name of the variant.</p>
     */
    inline ModelVariantConfig& WithVariantName(const Aws::String& value) { SetVariantName(value); return *this;}

    /**
     * <p>The name of the variant.</p>
     */
    inline ModelVariantConfig& WithVariantName(Aws::String&& value) { SetVariantName(std::move(value)); return *this;}

    /**
     * <p>The name of the variant.</p>
     */
    inline ModelVariantConfig& WithVariantName(const char* value) { SetVariantName(value); return *this;}


    /**
     * <p>The configuration for the infrastructure that the model will be deployed
     * to.</p>
     */
    inline const ModelInfrastructureConfig& GetInfrastructureConfig() const{ return m_infrastructureConfig; }

    /**
     * <p>The configuration for the infrastructure that the model will be deployed
     * to.</p>
     */
    inline bool InfrastructureConfigHasBeenSet() const { return m_infrastructureConfigHasBeenSet; }

    /**
     * <p>The configuration for the infrastructure that the model will be deployed
     * to.</p>
     */
    inline void SetInfrastructureConfig(const ModelInfrastructureConfig& value) { m_infrastructureConfigHasBeenSet = true; m_infrastructureConfig = value; }

    /**
     * <p>The configuration for the infrastructure that the model will be deployed
     * to.</p>
     */
    inline void SetInfrastructureConfig(ModelInfrastructureConfig&& value) { m_infrastructureConfigHasBeenSet = true; m_infrastructureConfig = std::move(value); }

    /**
     * <p>The configuration for the infrastructure that the model will be deployed
     * to.</p>
     */
    inline ModelVariantConfig& WithInfrastructureConfig(const ModelInfrastructureConfig& value) { SetInfrastructureConfig(value); return *this;}

    /**
     * <p>The configuration for the infrastructure that the model will be deployed
     * to.</p>
     */
    inline ModelVariantConfig& WithInfrastructureConfig(ModelInfrastructureConfig&& value) { SetInfrastructureConfig(std::move(value)); return *this;}

  private:

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

    Aws::String m_variantName;
    bool m_variantNameHasBeenSet = false;

    ModelInfrastructureConfig m_infrastructureConfig;
    bool m_infrastructureConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
