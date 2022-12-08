/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Specifies weight and capacity values for a production variant.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DesiredWeightAndCapacity">AWS
   * API Reference</a></p>
   */
  class DesiredWeightAndCapacity
  {
  public:
    AWS_SAGEMAKER_API DesiredWeightAndCapacity();
    AWS_SAGEMAKER_API DesiredWeightAndCapacity(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API DesiredWeightAndCapacity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the variant to update.</p>
     */
    inline const Aws::String& GetVariantName() const{ return m_variantName; }

    /**
     * <p>The name of the variant to update.</p>
     */
    inline bool VariantNameHasBeenSet() const { return m_variantNameHasBeenSet; }

    /**
     * <p>The name of the variant to update.</p>
     */
    inline void SetVariantName(const Aws::String& value) { m_variantNameHasBeenSet = true; m_variantName = value; }

    /**
     * <p>The name of the variant to update.</p>
     */
    inline void SetVariantName(Aws::String&& value) { m_variantNameHasBeenSet = true; m_variantName = std::move(value); }

    /**
     * <p>The name of the variant to update.</p>
     */
    inline void SetVariantName(const char* value) { m_variantNameHasBeenSet = true; m_variantName.assign(value); }

    /**
     * <p>The name of the variant to update.</p>
     */
    inline DesiredWeightAndCapacity& WithVariantName(const Aws::String& value) { SetVariantName(value); return *this;}

    /**
     * <p>The name of the variant to update.</p>
     */
    inline DesiredWeightAndCapacity& WithVariantName(Aws::String&& value) { SetVariantName(std::move(value)); return *this;}

    /**
     * <p>The name of the variant to update.</p>
     */
    inline DesiredWeightAndCapacity& WithVariantName(const char* value) { SetVariantName(value); return *this;}


    /**
     * <p>The variant's weight.</p>
     */
    inline double GetDesiredWeight() const{ return m_desiredWeight; }

    /**
     * <p>The variant's weight.</p>
     */
    inline bool DesiredWeightHasBeenSet() const { return m_desiredWeightHasBeenSet; }

    /**
     * <p>The variant's weight.</p>
     */
    inline void SetDesiredWeight(double value) { m_desiredWeightHasBeenSet = true; m_desiredWeight = value; }

    /**
     * <p>The variant's weight.</p>
     */
    inline DesiredWeightAndCapacity& WithDesiredWeight(double value) { SetDesiredWeight(value); return *this;}


    /**
     * <p>The variant's capacity.</p>
     */
    inline int GetDesiredInstanceCount() const{ return m_desiredInstanceCount; }

    /**
     * <p>The variant's capacity.</p>
     */
    inline bool DesiredInstanceCountHasBeenSet() const { return m_desiredInstanceCountHasBeenSet; }

    /**
     * <p>The variant's capacity.</p>
     */
    inline void SetDesiredInstanceCount(int value) { m_desiredInstanceCountHasBeenSet = true; m_desiredInstanceCount = value; }

    /**
     * <p>The variant's capacity.</p>
     */
    inline DesiredWeightAndCapacity& WithDesiredInstanceCount(int value) { SetDesiredInstanceCount(value); return *this;}

  private:

    Aws::String m_variantName;
    bool m_variantNameHasBeenSet = false;

    double m_desiredWeight;
    bool m_desiredWeightHasBeenSet = false;

    int m_desiredInstanceCount;
    bool m_desiredInstanceCountHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
