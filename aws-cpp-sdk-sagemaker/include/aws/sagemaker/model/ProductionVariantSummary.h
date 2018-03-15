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
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
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
  class AWS_SAGEMAKER_API ProductionVariantSummary
  {
  public:
    ProductionVariantSummary();
    ProductionVariantSummary(const Aws::Utils::Json::JsonValue& jsonValue);
    ProductionVariantSummary& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the variant.</p>
     */
    inline const Aws::String& GetVariantName() const{ return m_variantName; }

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
     * <p>The weight associated with the variant.</p>
     */
    inline double GetCurrentWeight() const{ return m_currentWeight; }

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
    inline void SetDesiredInstanceCount(int value) { m_desiredInstanceCountHasBeenSet = true; m_desiredInstanceCount = value; }

    /**
     * <p>The number of instances requested in the
     * <code>UpdateEndpointWeightsAndCapacities</code> request. </p>
     */
    inline ProductionVariantSummary& WithDesiredInstanceCount(int value) { SetDesiredInstanceCount(value); return *this;}

  private:

    Aws::String m_variantName;
    bool m_variantNameHasBeenSet;

    double m_currentWeight;
    bool m_currentWeightHasBeenSet;

    double m_desiredWeight;
    bool m_desiredWeightHasBeenSet;

    int m_currentInstanceCount;
    bool m_currentInstanceCountHasBeenSet;

    int m_desiredInstanceCount;
    bool m_desiredInstanceCountHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
