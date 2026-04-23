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
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/AwsVpcConfiguration.h>
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
namespace ECS
{
namespace Model
{

  /**
   * <p>An object representing the network configuration for a task or
   * service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/NetworkConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_ECS_API NetworkConfiguration
  {
  public:
    NetworkConfiguration();
    NetworkConfiguration(Aws::Utils::Json::JsonView jsonValue);
    NetworkConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The VPC subnets and security groups associated with a task.</p> <note> <p>All
     * specified subnets and security groups must be from the same VPC.</p> </note>
     */
    inline const AwsVpcConfiguration& GetAwsvpcConfiguration() const{ return m_awsvpcConfiguration; }

    /**
     * <p>The VPC subnets and security groups associated with a task.</p> <note> <p>All
     * specified subnets and security groups must be from the same VPC.</p> </note>
     */
    inline bool AwsvpcConfigurationHasBeenSet() const { return m_awsvpcConfigurationHasBeenSet; }

    /**
     * <p>The VPC subnets and security groups associated with a task.</p> <note> <p>All
     * specified subnets and security groups must be from the same VPC.</p> </note>
     */
    inline void SetAwsvpcConfiguration(const AwsVpcConfiguration& value) { m_awsvpcConfigurationHasBeenSet = true; m_awsvpcConfiguration = value; }

    /**
     * <p>The VPC subnets and security groups associated with a task.</p> <note> <p>All
     * specified subnets and security groups must be from the same VPC.</p> </note>
     */
    inline void SetAwsvpcConfiguration(AwsVpcConfiguration&& value) { m_awsvpcConfigurationHasBeenSet = true; m_awsvpcConfiguration = std::move(value); }

    /**
     * <p>The VPC subnets and security groups associated with a task.</p> <note> <p>All
     * specified subnets and security groups must be from the same VPC.</p> </note>
     */
    inline NetworkConfiguration& WithAwsvpcConfiguration(const AwsVpcConfiguration& value) { SetAwsvpcConfiguration(value); return *this;}

    /**
     * <p>The VPC subnets and security groups associated with a task.</p> <note> <p>All
     * specified subnets and security groups must be from the same VPC.</p> </note>
     */
    inline NetworkConfiguration& WithAwsvpcConfiguration(AwsVpcConfiguration&& value) { SetAwsvpcConfiguration(std::move(value)); return *this;}

  private:

    AwsVpcConfiguration m_awsvpcConfiguration;
    bool m_awsvpcConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
