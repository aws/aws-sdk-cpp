/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/ProductionVariantServerlessConfig.h>
#include <aws/sagemaker/model/DeployedImage.h>
#include <aws/sagemaker/model/ProductionVariantStatus.h>
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
   * <p>Describes weight and capacities for a production variant associated with an
   * endpoint. If you sent a request to the
   * <code>UpdateEndpointWeightsAndCapacities</code> API and the endpoint status is
   * <code>Updating</code>, you get different desired and current values.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ProductionVariantSummary">AWS
   * API Reference</a></p>
   */
  class ProductionVariantSummary
  {
  public:
    AWS_SAGEMAKER_API ProductionVariantSummary();
    AWS_SAGEMAKER_API ProductionVariantSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ProductionVariantSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline ProductionVariantSummary& WithVariantName(const Aws::String& value) { SetVariantName(value); return *this;}

    /**
     * <p>The name of the variant.</p>
     */
    inline ProductionVariantSummary& WithVariantName(Aws::String&& value) { SetVariantName(std::move(value)); return *this;}

    /**
     * <p>The name of the variant.</p>
     */
    inline ProductionVariantSummary& WithVariantName(const char* value) { SetVariantName(value); return *this;}


    /**
     * <p>An array of <code>DeployedImage</code> objects that specify the Amazon EC2
     * Container Registry paths of the inference images deployed on instances of this
     * <code>ProductionVariant</code>.</p>
     */
    inline const Aws::Vector<DeployedImage>& GetDeployedImages() const{ return m_deployedImages; }

    /**
     * <p>An array of <code>DeployedImage</code> objects that specify the Amazon EC2
     * Container Registry paths of the inference images deployed on instances of this
     * <code>ProductionVariant</code>.</p>
     */
    inline bool DeployedImagesHasBeenSet() const { return m_deployedImagesHasBeenSet; }

    /**
     * <p>An array of <code>DeployedImage</code> objects that specify the Amazon EC2
     * Container Registry paths of the inference images deployed on instances of this
     * <code>ProductionVariant</code>.</p>
     */
    inline void SetDeployedImages(const Aws::Vector<DeployedImage>& value) { m_deployedImagesHasBeenSet = true; m_deployedImages = value; }

    /**
     * <p>An array of <code>DeployedImage</code> objects that specify the Amazon EC2
     * Container Registry paths of the inference images deployed on instances of this
     * <code>ProductionVariant</code>.</p>
     */
    inline void SetDeployedImages(Aws::Vector<DeployedImage>&& value) { m_deployedImagesHasBeenSet = true; m_deployedImages = std::move(value); }

    /**
     * <p>An array of <code>DeployedImage</code> objects that specify the Amazon EC2
     * Container Registry paths of the inference images deployed on instances of this
     * <code>ProductionVariant</code>.</p>
     */
    inline ProductionVariantSummary& WithDeployedImages(const Aws::Vector<DeployedImage>& value) { SetDeployedImages(value); return *this;}

    /**
     * <p>An array of <code>DeployedImage</code> objects that specify the Amazon EC2
     * Container Registry paths of the inference images deployed on instances of this
     * <code>ProductionVariant</code>.</p>
     */
    inline ProductionVariantSummary& WithDeployedImages(Aws::Vector<DeployedImage>&& value) { SetDeployedImages(std::move(value)); return *this;}

    /**
     * <p>An array of <code>DeployedImage</code> objects that specify the Amazon EC2
     * Container Registry paths of the inference images deployed on instances of this
     * <code>ProductionVariant</code>.</p>
     */
    inline ProductionVariantSummary& AddDeployedImages(const DeployedImage& value) { m_deployedImagesHasBeenSet = true; m_deployedImages.push_back(value); return *this; }

    /**
     * <p>An array of <code>DeployedImage</code> objects that specify the Amazon EC2
     * Container Registry paths of the inference images deployed on instances of this
     * <code>ProductionVariant</code>.</p>
     */
    inline ProductionVariantSummary& AddDeployedImages(DeployedImage&& value) { m_deployedImagesHasBeenSet = true; m_deployedImages.push_back(std::move(value)); return *this; }


    /**
     * <p>The weight associated with the variant.</p>
     */
    inline double GetCurrentWeight() const{ return m_currentWeight; }

    /**
     * <p>The weight associated with the variant.</p>
     */
    inline bool CurrentWeightHasBeenSet() const { return m_currentWeightHasBeenSet; }

    /**
     * <p>The weight associated with the variant.</p>
     */
    inline void SetCurrentWeight(double value) { m_currentWeightHasBeenSet = true; m_currentWeight = value; }

    /**
     * <p>The weight associated with the variant.</p>
     */
    inline ProductionVariantSummary& WithCurrentWeight(double value) { SetCurrentWeight(value); return *this;}


    /**
     * <p>The requested weight, as specified in the
     * <code>UpdateEndpointWeightsAndCapacities</code> request. </p>
     */
    inline double GetDesiredWeight() const{ return m_desiredWeight; }

    /**
     * <p>The requested weight, as specified in the
     * <code>UpdateEndpointWeightsAndCapacities</code> request. </p>
     */
    inline bool DesiredWeightHasBeenSet() const { return m_desiredWeightHasBeenSet; }

    /**
     * <p>The requested weight, as specified in the
     * <code>UpdateEndpointWeightsAndCapacities</code> request. </p>
     */
    inline void SetDesiredWeight(double value) { m_desiredWeightHasBeenSet = true; m_desiredWeight = value; }

    /**
     * <p>The requested weight, as specified in the
     * <code>UpdateEndpointWeightsAndCapacities</code> request. </p>
     */
    inline ProductionVariantSummary& WithDesiredWeight(double value) { SetDesiredWeight(value); return *this;}


    /**
     * <p>The number of instances associated with the variant.</p>
     */
    inline int GetCurrentInstanceCount() const{ return m_currentInstanceCount; }

    /**
     * <p>The number of instances associated with the variant.</p>
     */
    inline bool CurrentInstanceCountHasBeenSet() const { return m_currentInstanceCountHasBeenSet; }

    /**
     * <p>The number of instances associated with the variant.</p>
     */
    inline void SetCurrentInstanceCount(int value) { m_currentInstanceCountHasBeenSet = true; m_currentInstanceCount = value; }

    /**
     * <p>The number of instances associated with the variant.</p>
     */
    inline ProductionVariantSummary& WithCurrentInstanceCount(int value) { SetCurrentInstanceCount(value); return *this;}


    /**
     * <p>The number of instances requested in the
     * <code>UpdateEndpointWeightsAndCapacities</code> request. </p>
     */
    inline int GetDesiredInstanceCount() const{ return m_desiredInstanceCount; }

    /**
     * <p>The number of instances requested in the
     * <code>UpdateEndpointWeightsAndCapacities</code> request. </p>
     */
    inline bool DesiredInstanceCountHasBeenSet() const { return m_desiredInstanceCountHasBeenSet; }

    /**
     * <p>The number of instances requested in the
     * <code>UpdateEndpointWeightsAndCapacities</code> request. </p>
     */
    inline void SetDesiredInstanceCount(int value) { m_desiredInstanceCountHasBeenSet = true; m_desiredInstanceCount = value; }

    /**
     * <p>The number of instances requested in the
     * <code>UpdateEndpointWeightsAndCapacities</code> request. </p>
     */
    inline ProductionVariantSummary& WithDesiredInstanceCount(int value) { SetDesiredInstanceCount(value); return *this;}


    /**
     * <p>The endpoint variant status which describes the current deployment stage
     * status or operational status.</p>
     */
    inline const Aws::Vector<ProductionVariantStatus>& GetVariantStatus() const{ return m_variantStatus; }

    /**
     * <p>The endpoint variant status which describes the current deployment stage
     * status or operational status.</p>
     */
    inline bool VariantStatusHasBeenSet() const { return m_variantStatusHasBeenSet; }

    /**
     * <p>The endpoint variant status which describes the current deployment stage
     * status or operational status.</p>
     */
    inline void SetVariantStatus(const Aws::Vector<ProductionVariantStatus>& value) { m_variantStatusHasBeenSet = true; m_variantStatus = value; }

    /**
     * <p>The endpoint variant status which describes the current deployment stage
     * status or operational status.</p>
     */
    inline void SetVariantStatus(Aws::Vector<ProductionVariantStatus>&& value) { m_variantStatusHasBeenSet = true; m_variantStatus = std::move(value); }

    /**
     * <p>The endpoint variant status which describes the current deployment stage
     * status or operational status.</p>
     */
    inline ProductionVariantSummary& WithVariantStatus(const Aws::Vector<ProductionVariantStatus>& value) { SetVariantStatus(value); return *this;}

    /**
     * <p>The endpoint variant status which describes the current deployment stage
     * status or operational status.</p>
     */
    inline ProductionVariantSummary& WithVariantStatus(Aws::Vector<ProductionVariantStatus>&& value) { SetVariantStatus(std::move(value)); return *this;}

    /**
     * <p>The endpoint variant status which describes the current deployment stage
     * status or operational status.</p>
     */
    inline ProductionVariantSummary& AddVariantStatus(const ProductionVariantStatus& value) { m_variantStatusHasBeenSet = true; m_variantStatus.push_back(value); return *this; }

    /**
     * <p>The endpoint variant status which describes the current deployment stage
     * status or operational status.</p>
     */
    inline ProductionVariantSummary& AddVariantStatus(ProductionVariantStatus&& value) { m_variantStatusHasBeenSet = true; m_variantStatus.push_back(std::move(value)); return *this; }


    /**
     * <p>The serverless configuration for the endpoint.</p>
     */
    inline const ProductionVariantServerlessConfig& GetCurrentServerlessConfig() const{ return m_currentServerlessConfig; }

    /**
     * <p>The serverless configuration for the endpoint.</p>
     */
    inline bool CurrentServerlessConfigHasBeenSet() const { return m_currentServerlessConfigHasBeenSet; }

    /**
     * <p>The serverless configuration for the endpoint.</p>
     */
    inline void SetCurrentServerlessConfig(const ProductionVariantServerlessConfig& value) { m_currentServerlessConfigHasBeenSet = true; m_currentServerlessConfig = value; }

    /**
     * <p>The serverless configuration for the endpoint.</p>
     */
    inline void SetCurrentServerlessConfig(ProductionVariantServerlessConfig&& value) { m_currentServerlessConfigHasBeenSet = true; m_currentServerlessConfig = std::move(value); }

    /**
     * <p>The serverless configuration for the endpoint.</p>
     */
    inline ProductionVariantSummary& WithCurrentServerlessConfig(const ProductionVariantServerlessConfig& value) { SetCurrentServerlessConfig(value); return *this;}

    /**
     * <p>The serverless configuration for the endpoint.</p>
     */
    inline ProductionVariantSummary& WithCurrentServerlessConfig(ProductionVariantServerlessConfig&& value) { SetCurrentServerlessConfig(std::move(value)); return *this;}


    /**
     * <p>The serverless configuration requested for the endpoint update.</p>
     */
    inline const ProductionVariantServerlessConfig& GetDesiredServerlessConfig() const{ return m_desiredServerlessConfig; }

    /**
     * <p>The serverless configuration requested for the endpoint update.</p>
     */
    inline bool DesiredServerlessConfigHasBeenSet() const { return m_desiredServerlessConfigHasBeenSet; }

    /**
     * <p>The serverless configuration requested for the endpoint update.</p>
     */
    inline void SetDesiredServerlessConfig(const ProductionVariantServerlessConfig& value) { m_desiredServerlessConfigHasBeenSet = true; m_desiredServerlessConfig = value; }

    /**
     * <p>The serverless configuration requested for the endpoint update.</p>
     */
    inline void SetDesiredServerlessConfig(ProductionVariantServerlessConfig&& value) { m_desiredServerlessConfigHasBeenSet = true; m_desiredServerlessConfig = std::move(value); }

    /**
     * <p>The serverless configuration requested for the endpoint update.</p>
     */
    inline ProductionVariantSummary& WithDesiredServerlessConfig(const ProductionVariantServerlessConfig& value) { SetDesiredServerlessConfig(value); return *this;}

    /**
     * <p>The serverless configuration requested for the endpoint update.</p>
     */
    inline ProductionVariantSummary& WithDesiredServerlessConfig(ProductionVariantServerlessConfig&& value) { SetDesiredServerlessConfig(std::move(value)); return *this;}

  private:

    Aws::String m_variantName;
    bool m_variantNameHasBeenSet = false;

    Aws::Vector<DeployedImage> m_deployedImages;
    bool m_deployedImagesHasBeenSet = false;

    double m_currentWeight;
    bool m_currentWeightHasBeenSet = false;

    double m_desiredWeight;
    bool m_desiredWeightHasBeenSet = false;

    int m_currentInstanceCount;
    bool m_currentInstanceCountHasBeenSet = false;

    int m_desiredInstanceCount;
    bool m_desiredInstanceCountHasBeenSet = false;

    Aws::Vector<ProductionVariantStatus> m_variantStatus;
    bool m_variantStatusHasBeenSet = false;

    ProductionVariantServerlessConfig m_currentServerlessConfig;
    bool m_currentServerlessConfigHasBeenSet = false;

    ProductionVariantServerlessConfig m_desiredServerlessConfig;
    bool m_desiredServerlessConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
