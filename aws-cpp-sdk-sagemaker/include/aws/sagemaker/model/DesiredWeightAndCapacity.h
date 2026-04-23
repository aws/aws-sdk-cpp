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
  class AWS_SAGEMAKER_API DesiredWeightAndCapacity
  {
  public:
    DesiredWeightAndCapacity();
    DesiredWeightAndCapacity(Aws::Utils::Json::JsonView jsonValue);
    DesiredWeightAndCapacity& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_variantNameHasBeenSet;

    double m_desiredWeight;
    bool m_desiredWeightHasBeenSet;

    int m_desiredInstanceCount;
    bool m_desiredInstanceCountHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
