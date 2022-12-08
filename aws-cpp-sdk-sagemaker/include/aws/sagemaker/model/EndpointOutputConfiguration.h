/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ProductionVariantInstanceType.h>
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
   * <p>The endpoint configuration made by Inference Recommender during a
   * recommendation job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/EndpointOutputConfiguration">AWS
   * API Reference</a></p>
   */
  class EndpointOutputConfiguration
  {
  public:
    AWS_SAGEMAKER_API EndpointOutputConfiguration();
    AWS_SAGEMAKER_API EndpointOutputConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API EndpointOutputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the endpoint made during a recommendation job.</p>
     */
    inline const Aws::String& GetEndpointName() const{ return m_endpointName; }

    /**
     * <p>The name of the endpoint made during a recommendation job.</p>
     */
    inline bool EndpointNameHasBeenSet() const { return m_endpointNameHasBeenSet; }

    /**
     * <p>The name of the endpoint made during a recommendation job.</p>
     */
    inline void SetEndpointName(const Aws::String& value) { m_endpointNameHasBeenSet = true; m_endpointName = value; }

    /**
     * <p>The name of the endpoint made during a recommendation job.</p>
     */
    inline void SetEndpointName(Aws::String&& value) { m_endpointNameHasBeenSet = true; m_endpointName = std::move(value); }

    /**
     * <p>The name of the endpoint made during a recommendation job.</p>
     */
    inline void SetEndpointName(const char* value) { m_endpointNameHasBeenSet = true; m_endpointName.assign(value); }

    /**
     * <p>The name of the endpoint made during a recommendation job.</p>
     */
    inline EndpointOutputConfiguration& WithEndpointName(const Aws::String& value) { SetEndpointName(value); return *this;}

    /**
     * <p>The name of the endpoint made during a recommendation job.</p>
     */
    inline EndpointOutputConfiguration& WithEndpointName(Aws::String&& value) { SetEndpointName(std::move(value)); return *this;}

    /**
     * <p>The name of the endpoint made during a recommendation job.</p>
     */
    inline EndpointOutputConfiguration& WithEndpointName(const char* value) { SetEndpointName(value); return *this;}


    /**
     * <p>The name of the production variant (deployed model) made during a
     * recommendation job.</p>
     */
    inline const Aws::String& GetVariantName() const{ return m_variantName; }

    /**
     * <p>The name of the production variant (deployed model) made during a
     * recommendation job.</p>
     */
    inline bool VariantNameHasBeenSet() const { return m_variantNameHasBeenSet; }

    /**
     * <p>The name of the production variant (deployed model) made during a
     * recommendation job.</p>
     */
    inline void SetVariantName(const Aws::String& value) { m_variantNameHasBeenSet = true; m_variantName = value; }

    /**
     * <p>The name of the production variant (deployed model) made during a
     * recommendation job.</p>
     */
    inline void SetVariantName(Aws::String&& value) { m_variantNameHasBeenSet = true; m_variantName = std::move(value); }

    /**
     * <p>The name of the production variant (deployed model) made during a
     * recommendation job.</p>
     */
    inline void SetVariantName(const char* value) { m_variantNameHasBeenSet = true; m_variantName.assign(value); }

    /**
     * <p>The name of the production variant (deployed model) made during a
     * recommendation job.</p>
     */
    inline EndpointOutputConfiguration& WithVariantName(const Aws::String& value) { SetVariantName(value); return *this;}

    /**
     * <p>The name of the production variant (deployed model) made during a
     * recommendation job.</p>
     */
    inline EndpointOutputConfiguration& WithVariantName(Aws::String&& value) { SetVariantName(std::move(value)); return *this;}

    /**
     * <p>The name of the production variant (deployed model) made during a
     * recommendation job.</p>
     */
    inline EndpointOutputConfiguration& WithVariantName(const char* value) { SetVariantName(value); return *this;}


    /**
     * <p>The instance type recommended by Amazon SageMaker Inference Recommender.</p>
     */
    inline const ProductionVariantInstanceType& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The instance type recommended by Amazon SageMaker Inference Recommender.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The instance type recommended by Amazon SageMaker Inference Recommender.</p>
     */
    inline void SetInstanceType(const ProductionVariantInstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The instance type recommended by Amazon SageMaker Inference Recommender.</p>
     */
    inline void SetInstanceType(ProductionVariantInstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The instance type recommended by Amazon SageMaker Inference Recommender.</p>
     */
    inline EndpointOutputConfiguration& WithInstanceType(const ProductionVariantInstanceType& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance type recommended by Amazon SageMaker Inference Recommender.</p>
     */
    inline EndpointOutputConfiguration& WithInstanceType(ProductionVariantInstanceType&& value) { SetInstanceType(std::move(value)); return *this;}


    /**
     * <p>The number of instances recommended to launch initially.</p>
     */
    inline int GetInitialInstanceCount() const{ return m_initialInstanceCount; }

    /**
     * <p>The number of instances recommended to launch initially.</p>
     */
    inline bool InitialInstanceCountHasBeenSet() const { return m_initialInstanceCountHasBeenSet; }

    /**
     * <p>The number of instances recommended to launch initially.</p>
     */
    inline void SetInitialInstanceCount(int value) { m_initialInstanceCountHasBeenSet = true; m_initialInstanceCount = value; }

    /**
     * <p>The number of instances recommended to launch initially.</p>
     */
    inline EndpointOutputConfiguration& WithInitialInstanceCount(int value) { SetInitialInstanceCount(value); return *this;}

  private:

    Aws::String m_endpointName;
    bool m_endpointNameHasBeenSet = false;

    Aws::String m_variantName;
    bool m_variantNameHasBeenSet = false;

    ProductionVariantInstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    int m_initialInstanceCount;
    bool m_initialInstanceCountHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
