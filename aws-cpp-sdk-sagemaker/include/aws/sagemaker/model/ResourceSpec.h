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
#include <aws/sagemaker/model/AppInstanceType.h>
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
   * <p>The instance type and quantity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ResourceSpec">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API ResourceSpec
  {
  public:
    ResourceSpec();
    ResourceSpec(Aws::Utils::Json::JsonView jsonValue);
    ResourceSpec& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the environment.</p>
     */
    inline const Aws::String& GetEnvironmentArn() const{ return m_environmentArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the environment.</p>
     */
    inline bool EnvironmentArnHasBeenSet() const { return m_environmentArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the environment.</p>
     */
    inline void SetEnvironmentArn(const Aws::String& value) { m_environmentArnHasBeenSet = true; m_environmentArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the environment.</p>
     */
    inline void SetEnvironmentArn(Aws::String&& value) { m_environmentArnHasBeenSet = true; m_environmentArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the environment.</p>
     */
    inline void SetEnvironmentArn(const char* value) { m_environmentArnHasBeenSet = true; m_environmentArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the environment.</p>
     */
    inline ResourceSpec& WithEnvironmentArn(const Aws::String& value) { SetEnvironmentArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the environment.</p>
     */
    inline ResourceSpec& WithEnvironmentArn(Aws::String&& value) { SetEnvironmentArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the environment.</p>
     */
    inline ResourceSpec& WithEnvironmentArn(const char* value) { SetEnvironmentArn(value); return *this;}


    /**
     * <p>The instance type.</p>
     */
    inline const AppInstanceType& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The instance type.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The instance type.</p>
     */
    inline void SetInstanceType(const AppInstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The instance type.</p>
     */
    inline void SetInstanceType(AppInstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The instance type.</p>
     */
    inline ResourceSpec& WithInstanceType(const AppInstanceType& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance type.</p>
     */
    inline ResourceSpec& WithInstanceType(AppInstanceType&& value) { SetInstanceType(std::move(value)); return *this;}

  private:

    Aws::String m_environmentArn;
    bool m_environmentArnHasBeenSet;

    AppInstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
