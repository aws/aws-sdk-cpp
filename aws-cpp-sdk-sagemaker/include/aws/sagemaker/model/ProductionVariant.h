/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ProductionVariantInstanceType.h>
#include <aws/sagemaker/model/ProductionVariantAcceleratorType.h>
#include <aws/sagemaker/model/ProductionVariantCoreDumpConfig.h>
#include <aws/sagemaker/model/ProductionVariantServerlessConfig.h>
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
   * <p>Identifies a model that you want to host and the resources chosen to deploy
   * for hosting it. If you are deploying multiple models, tell SageMaker how to
   * distribute traffic among the models by specifying variant weights.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ProductionVariant">AWS
   * API Reference</a></p>
   */
  class ProductionVariant
  {
  public:
    AWS_SAGEMAKER_API ProductionVariant();
    AWS_SAGEMAKER_API ProductionVariant(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ProductionVariant& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the production variant.</p>
     */
    inline const Aws::String& GetVariantName() const{ return m_variantName; }

    /**
     * <p>The name of the production variant.</p>
     */
    inline bool VariantNameHasBeenSet() const { return m_variantNameHasBeenSet; }

    /**
     * <p>The name of the production variant.</p>
     */
    inline void SetVariantName(const Aws::String& value) { m_variantNameHasBeenSet = true; m_variantName = value; }

    /**
     * <p>The name of the production variant.</p>
     */
    inline void SetVariantName(Aws::String&& value) { m_variantNameHasBeenSet = true; m_variantName = std::move(value); }

    /**
     * <p>The name of the production variant.</p>
     */
    inline void SetVariantName(const char* value) { m_variantNameHasBeenSet = true; m_variantName.assign(value); }

    /**
     * <p>The name of the production variant.</p>
     */
    inline ProductionVariant& WithVariantName(const Aws::String& value) { SetVariantName(value); return *this;}

    /**
     * <p>The name of the production variant.</p>
     */
    inline ProductionVariant& WithVariantName(Aws::String&& value) { SetVariantName(std::move(value)); return *this;}

    /**
     * <p>The name of the production variant.</p>
     */
    inline ProductionVariant& WithVariantName(const char* value) { SetVariantName(value); return *this;}


    /**
     * <p>The name of the model that you want to host. This is the name that you
     * specified when creating the model.</p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }

    /**
     * <p>The name of the model that you want to host. This is the name that you
     * specified when creating the model.</p>
     */
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }

    /**
     * <p>The name of the model that you want to host. This is the name that you
     * specified when creating the model.</p>
     */
    inline void SetModelName(const Aws::String& value) { m_modelNameHasBeenSet = true; m_modelName = value; }

    /**
     * <p>The name of the model that you want to host. This is the name that you
     * specified when creating the model.</p>
     */
    inline void SetModelName(Aws::String&& value) { m_modelNameHasBeenSet = true; m_modelName = std::move(value); }

    /**
     * <p>The name of the model that you want to host. This is the name that you
     * specified when creating the model.</p>
     */
    inline void SetModelName(const char* value) { m_modelNameHasBeenSet = true; m_modelName.assign(value); }

    /**
     * <p>The name of the model that you want to host. This is the name that you
     * specified when creating the model.</p>
     */
    inline ProductionVariant& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}

    /**
     * <p>The name of the model that you want to host. This is the name that you
     * specified when creating the model.</p>
     */
    inline ProductionVariant& WithModelName(Aws::String&& value) { SetModelName(std::move(value)); return *this;}

    /**
     * <p>The name of the model that you want to host. This is the name that you
     * specified when creating the model.</p>
     */
    inline ProductionVariant& WithModelName(const char* value) { SetModelName(value); return *this;}


    /**
     * <p>Number of instances to launch initially.</p>
     */
    inline int GetInitialInstanceCount() const{ return m_initialInstanceCount; }

    /**
     * <p>Number of instances to launch initially.</p>
     */
    inline bool InitialInstanceCountHasBeenSet() const { return m_initialInstanceCountHasBeenSet; }

    /**
     * <p>Number of instances to launch initially.</p>
     */
    inline void SetInitialInstanceCount(int value) { m_initialInstanceCountHasBeenSet = true; m_initialInstanceCount = value; }

    /**
     * <p>Number of instances to launch initially.</p>
     */
    inline ProductionVariant& WithInitialInstanceCount(int value) { SetInitialInstanceCount(value); return *this;}


    /**
     * <p>The ML compute instance type.</p>
     */
    inline const ProductionVariantInstanceType& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The ML compute instance type.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The ML compute instance type.</p>
     */
    inline void SetInstanceType(const ProductionVariantInstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The ML compute instance type.</p>
     */
    inline void SetInstanceType(ProductionVariantInstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The ML compute instance type.</p>
     */
    inline ProductionVariant& WithInstanceType(const ProductionVariantInstanceType& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The ML compute instance type.</p>
     */
    inline ProductionVariant& WithInstanceType(ProductionVariantInstanceType&& value) { SetInstanceType(std::move(value)); return *this;}


    /**
     * <p>Determines initial traffic distribution among all of the models that you
     * specify in the endpoint configuration. The traffic to a production variant is
     * determined by the ratio of the <code>VariantWeight</code> to the sum of all
     * <code>VariantWeight</code> values across all ProductionVariants. If unspecified,
     * it defaults to 1.0. </p>
     */
    inline double GetInitialVariantWeight() const{ return m_initialVariantWeight; }

    /**
     * <p>Determines initial traffic distribution among all of the models that you
     * specify in the endpoint configuration. The traffic to a production variant is
     * determined by the ratio of the <code>VariantWeight</code> to the sum of all
     * <code>VariantWeight</code> values across all ProductionVariants. If unspecified,
     * it defaults to 1.0. </p>
     */
    inline bool InitialVariantWeightHasBeenSet() const { return m_initialVariantWeightHasBeenSet; }

    /**
     * <p>Determines initial traffic distribution among all of the models that you
     * specify in the endpoint configuration. The traffic to a production variant is
     * determined by the ratio of the <code>VariantWeight</code> to the sum of all
     * <code>VariantWeight</code> values across all ProductionVariants. If unspecified,
     * it defaults to 1.0. </p>
     */
    inline void SetInitialVariantWeight(double value) { m_initialVariantWeightHasBeenSet = true; m_initialVariantWeight = value; }

    /**
     * <p>Determines initial traffic distribution among all of the models that you
     * specify in the endpoint configuration. The traffic to a production variant is
     * determined by the ratio of the <code>VariantWeight</code> to the sum of all
     * <code>VariantWeight</code> values across all ProductionVariants. If unspecified,
     * it defaults to 1.0. </p>
     */
    inline ProductionVariant& WithInitialVariantWeight(double value) { SetInitialVariantWeight(value); return *this;}


    /**
     * <p>The size of the Elastic Inference (EI) instance to use for the production
     * variant. EI instances provide on-demand GPU computing for inference. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/ei.html">Using Elastic
     * Inference in Amazon SageMaker</a>.</p>
     */
    inline const ProductionVariantAcceleratorType& GetAcceleratorType() const{ return m_acceleratorType; }

    /**
     * <p>The size of the Elastic Inference (EI) instance to use for the production
     * variant. EI instances provide on-demand GPU computing for inference. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/ei.html">Using Elastic
     * Inference in Amazon SageMaker</a>.</p>
     */
    inline bool AcceleratorTypeHasBeenSet() const { return m_acceleratorTypeHasBeenSet; }

    /**
     * <p>The size of the Elastic Inference (EI) instance to use for the production
     * variant. EI instances provide on-demand GPU computing for inference. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/ei.html">Using Elastic
     * Inference in Amazon SageMaker</a>.</p>
     */
    inline void SetAcceleratorType(const ProductionVariantAcceleratorType& value) { m_acceleratorTypeHasBeenSet = true; m_acceleratorType = value; }

    /**
     * <p>The size of the Elastic Inference (EI) instance to use for the production
     * variant. EI instances provide on-demand GPU computing for inference. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/ei.html">Using Elastic
     * Inference in Amazon SageMaker</a>.</p>
     */
    inline void SetAcceleratorType(ProductionVariantAcceleratorType&& value) { m_acceleratorTypeHasBeenSet = true; m_acceleratorType = std::move(value); }

    /**
     * <p>The size of the Elastic Inference (EI) instance to use for the production
     * variant. EI instances provide on-demand GPU computing for inference. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/ei.html">Using Elastic
     * Inference in Amazon SageMaker</a>.</p>
     */
    inline ProductionVariant& WithAcceleratorType(const ProductionVariantAcceleratorType& value) { SetAcceleratorType(value); return *this;}

    /**
     * <p>The size of the Elastic Inference (EI) instance to use for the production
     * variant. EI instances provide on-demand GPU computing for inference. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/ei.html">Using Elastic
     * Inference in Amazon SageMaker</a>.</p>
     */
    inline ProductionVariant& WithAcceleratorType(ProductionVariantAcceleratorType&& value) { SetAcceleratorType(std::move(value)); return *this;}


    /**
     * <p>Specifies configuration for a core dump from the model container when the
     * process crashes.</p>
     */
    inline const ProductionVariantCoreDumpConfig& GetCoreDumpConfig() const{ return m_coreDumpConfig; }

    /**
     * <p>Specifies configuration for a core dump from the model container when the
     * process crashes.</p>
     */
    inline bool CoreDumpConfigHasBeenSet() const { return m_coreDumpConfigHasBeenSet; }

    /**
     * <p>Specifies configuration for a core dump from the model container when the
     * process crashes.</p>
     */
    inline void SetCoreDumpConfig(const ProductionVariantCoreDumpConfig& value) { m_coreDumpConfigHasBeenSet = true; m_coreDumpConfig = value; }

    /**
     * <p>Specifies configuration for a core dump from the model container when the
     * process crashes.</p>
     */
    inline void SetCoreDumpConfig(ProductionVariantCoreDumpConfig&& value) { m_coreDumpConfigHasBeenSet = true; m_coreDumpConfig = std::move(value); }

    /**
     * <p>Specifies configuration for a core dump from the model container when the
     * process crashes.</p>
     */
    inline ProductionVariant& WithCoreDumpConfig(const ProductionVariantCoreDumpConfig& value) { SetCoreDumpConfig(value); return *this;}

    /**
     * <p>Specifies configuration for a core dump from the model container when the
     * process crashes.</p>
     */
    inline ProductionVariant& WithCoreDumpConfig(ProductionVariantCoreDumpConfig&& value) { SetCoreDumpConfig(std::move(value)); return *this;}


    /**
     * <p>The serverless configuration for an endpoint. Specifies a serverless endpoint
     * configuration instead of an instance-based endpoint configuration.</p>
     */
    inline const ProductionVariantServerlessConfig& GetServerlessConfig() const{ return m_serverlessConfig; }

    /**
     * <p>The serverless configuration for an endpoint. Specifies a serverless endpoint
     * configuration instead of an instance-based endpoint configuration.</p>
     */
    inline bool ServerlessConfigHasBeenSet() const { return m_serverlessConfigHasBeenSet; }

    /**
     * <p>The serverless configuration for an endpoint. Specifies a serverless endpoint
     * configuration instead of an instance-based endpoint configuration.</p>
     */
    inline void SetServerlessConfig(const ProductionVariantServerlessConfig& value) { m_serverlessConfigHasBeenSet = true; m_serverlessConfig = value; }

    /**
     * <p>The serverless configuration for an endpoint. Specifies a serverless endpoint
     * configuration instead of an instance-based endpoint configuration.</p>
     */
    inline void SetServerlessConfig(ProductionVariantServerlessConfig&& value) { m_serverlessConfigHasBeenSet = true; m_serverlessConfig = std::move(value); }

    /**
     * <p>The serverless configuration for an endpoint. Specifies a serverless endpoint
     * configuration instead of an instance-based endpoint configuration.</p>
     */
    inline ProductionVariant& WithServerlessConfig(const ProductionVariantServerlessConfig& value) { SetServerlessConfig(value); return *this;}

    /**
     * <p>The serverless configuration for an endpoint. Specifies a serverless endpoint
     * configuration instead of an instance-based endpoint configuration.</p>
     */
    inline ProductionVariant& WithServerlessConfig(ProductionVariantServerlessConfig&& value) { SetServerlessConfig(std::move(value)); return *this;}


    /**
     * <p>The size, in GB, of the ML storage volume attached to individual inference
     * instance associated with the production variant. Currenly only Amazon EBS gp2
     * storage volumes are supported.</p>
     */
    inline int GetVolumeSizeInGB() const{ return m_volumeSizeInGB; }

    /**
     * <p>The size, in GB, of the ML storage volume attached to individual inference
     * instance associated with the production variant. Currenly only Amazon EBS gp2
     * storage volumes are supported.</p>
     */
    inline bool VolumeSizeInGBHasBeenSet() const { return m_volumeSizeInGBHasBeenSet; }

    /**
     * <p>The size, in GB, of the ML storage volume attached to individual inference
     * instance associated with the production variant. Currenly only Amazon EBS gp2
     * storage volumes are supported.</p>
     */
    inline void SetVolumeSizeInGB(int value) { m_volumeSizeInGBHasBeenSet = true; m_volumeSizeInGB = value; }

    /**
     * <p>The size, in GB, of the ML storage volume attached to individual inference
     * instance associated with the production variant. Currenly only Amazon EBS gp2
     * storage volumes are supported.</p>
     */
    inline ProductionVariant& WithVolumeSizeInGB(int value) { SetVolumeSizeInGB(value); return *this;}


    /**
     * <p>The timeout value, in seconds, to download and extract the model that you
     * want to host from Amazon S3 to the individual inference instance associated with
     * this production variant.</p>
     */
    inline int GetModelDataDownloadTimeoutInSeconds() const{ return m_modelDataDownloadTimeoutInSeconds; }

    /**
     * <p>The timeout value, in seconds, to download and extract the model that you
     * want to host from Amazon S3 to the individual inference instance associated with
     * this production variant.</p>
     */
    inline bool ModelDataDownloadTimeoutInSecondsHasBeenSet() const { return m_modelDataDownloadTimeoutInSecondsHasBeenSet; }

    /**
     * <p>The timeout value, in seconds, to download and extract the model that you
     * want to host from Amazon S3 to the individual inference instance associated with
     * this production variant.</p>
     */
    inline void SetModelDataDownloadTimeoutInSeconds(int value) { m_modelDataDownloadTimeoutInSecondsHasBeenSet = true; m_modelDataDownloadTimeoutInSeconds = value; }

    /**
     * <p>The timeout value, in seconds, to download and extract the model that you
     * want to host from Amazon S3 to the individual inference instance associated with
     * this production variant.</p>
     */
    inline ProductionVariant& WithModelDataDownloadTimeoutInSeconds(int value) { SetModelDataDownloadTimeoutInSeconds(value); return *this;}


    /**
     * <p>The timeout value, in seconds, for your inference container to pass health
     * check by SageMaker Hosting. For more information about health check, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms-inference-code.html#your-algorithms-inference-algo-ping-requests">How
     * Your Container Should Respond to Health Check (Ping) Requests</a>.</p>
     */
    inline int GetContainerStartupHealthCheckTimeoutInSeconds() const{ return m_containerStartupHealthCheckTimeoutInSeconds; }

    /**
     * <p>The timeout value, in seconds, for your inference container to pass health
     * check by SageMaker Hosting. For more information about health check, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms-inference-code.html#your-algorithms-inference-algo-ping-requests">How
     * Your Container Should Respond to Health Check (Ping) Requests</a>.</p>
     */
    inline bool ContainerStartupHealthCheckTimeoutInSecondsHasBeenSet() const { return m_containerStartupHealthCheckTimeoutInSecondsHasBeenSet; }

    /**
     * <p>The timeout value, in seconds, for your inference container to pass health
     * check by SageMaker Hosting. For more information about health check, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms-inference-code.html#your-algorithms-inference-algo-ping-requests">How
     * Your Container Should Respond to Health Check (Ping) Requests</a>.</p>
     */
    inline void SetContainerStartupHealthCheckTimeoutInSeconds(int value) { m_containerStartupHealthCheckTimeoutInSecondsHasBeenSet = true; m_containerStartupHealthCheckTimeoutInSeconds = value; }

    /**
     * <p>The timeout value, in seconds, for your inference container to pass health
     * check by SageMaker Hosting. For more information about health check, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms-inference-code.html#your-algorithms-inference-algo-ping-requests">How
     * Your Container Should Respond to Health Check (Ping) Requests</a>.</p>
     */
    inline ProductionVariant& WithContainerStartupHealthCheckTimeoutInSeconds(int value) { SetContainerStartupHealthCheckTimeoutInSeconds(value); return *this;}

  private:

    Aws::String m_variantName;
    bool m_variantNameHasBeenSet = false;

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

    int m_initialInstanceCount;
    bool m_initialInstanceCountHasBeenSet = false;

    ProductionVariantInstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    double m_initialVariantWeight;
    bool m_initialVariantWeightHasBeenSet = false;

    ProductionVariantAcceleratorType m_acceleratorType;
    bool m_acceleratorTypeHasBeenSet = false;

    ProductionVariantCoreDumpConfig m_coreDumpConfig;
    bool m_coreDumpConfigHasBeenSet = false;

    ProductionVariantServerlessConfig m_serverlessConfig;
    bool m_serverlessConfigHasBeenSet = false;

    int m_volumeSizeInGB;
    bool m_volumeSizeInGBHasBeenSet = false;

    int m_modelDataDownloadTimeoutInSeconds;
    bool m_modelDataDownloadTimeoutInSecondsHasBeenSet = false;

    int m_containerStartupHealthCheckTimeoutInSeconds;
    bool m_containerStartupHealthCheckTimeoutInSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
