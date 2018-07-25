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
#include <aws/sagemaker/model/TransformInstanceType.h>
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
   * <p>Describes the resources, including ML instance types and ML instance count,
   * to use for transform job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TransformResources">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API TransformResources
  {
  public:
    TransformResources();
    TransformResources(Aws::Utils::Json::JsonView jsonValue);
    TransformResources& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ML compute instance type for the transform job. For using built-in
     * algorithms to transform moderately sized datasets, ml.m4.xlarge or
     * <code>ml.m5.large</code> should suffice. There is no default value for
     * <code>InstanceType</code>.</p>
     */
    inline const TransformInstanceType& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The ML compute instance type for the transform job. For using built-in
     * algorithms to transform moderately sized datasets, ml.m4.xlarge or
     * <code>ml.m5.large</code> should suffice. There is no default value for
     * <code>InstanceType</code>.</p>
     */
    inline void SetInstanceType(const TransformInstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The ML compute instance type for the transform job. For using built-in
     * algorithms to transform moderately sized datasets, ml.m4.xlarge or
     * <code>ml.m5.large</code> should suffice. There is no default value for
     * <code>InstanceType</code>.</p>
     */
    inline void SetInstanceType(TransformInstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The ML compute instance type for the transform job. For using built-in
     * algorithms to transform moderately sized datasets, ml.m4.xlarge or
     * <code>ml.m5.large</code> should suffice. There is no default value for
     * <code>InstanceType</code>.</p>
     */
    inline TransformResources& WithInstanceType(const TransformInstanceType& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The ML compute instance type for the transform job. For using built-in
     * algorithms to transform moderately sized datasets, ml.m4.xlarge or
     * <code>ml.m5.large</code> should suffice. There is no default value for
     * <code>InstanceType</code>.</p>
     */
    inline TransformResources& WithInstanceType(TransformInstanceType&& value) { SetInstanceType(std::move(value)); return *this;}


    /**
     * <p>The number of ML compute instances to use in the transform job. For
     * distributed transform, provide a value greater than 1. The default value is
     * <code>1</code>.</p>
     */
    inline int GetInstanceCount() const{ return m_instanceCount; }

    /**
     * <p>The number of ML compute instances to use in the transform job. For
     * distributed transform, provide a value greater than 1. The default value is
     * <code>1</code>.</p>
     */
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }

    /**
     * <p>The number of ML compute instances to use in the transform job. For
     * distributed transform, provide a value greater than 1. The default value is
     * <code>1</code>.</p>
     */
    inline TransformResources& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}

  private:

    TransformInstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet;

    int m_instanceCount;
    bool m_instanceCountHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
