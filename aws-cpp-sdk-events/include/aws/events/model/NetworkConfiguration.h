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
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/events/model/AwsVpcConfiguration.h>
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
namespace CloudWatchEvents
{
namespace Model
{

  /**
   * <p>This structure specifies the network configuration for an ECS
   * task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/NetworkConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDWATCHEVENTS_API NetworkConfiguration
  {
  public:
    NetworkConfiguration();
    NetworkConfiguration(Aws::Utils::Json::JsonView jsonValue);
    NetworkConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Use this structure to specify the VPC subnets and security groups for the
     * task and whether a public IP address is to be used. This structure is relevant
     * only for ECS tasks that use the <code>awsvpc</code> network mode.</p>
     */
    inline const AwsVpcConfiguration& GetAwsvpcConfiguration() const{ return m_awsvpcConfiguration; }

    /**
     * <p>Use this structure to specify the VPC subnets and security groups for the
     * task and whether a public IP address is to be used. This structure is relevant
     * only for ECS tasks that use the <code>awsvpc</code> network mode.</p>
     */
    inline bool AwsvpcConfigurationHasBeenSet() const { return m_awsvpcConfigurationHasBeenSet; }

    /**
     * <p>Use this structure to specify the VPC subnets and security groups for the
     * task and whether a public IP address is to be used. This structure is relevant
     * only for ECS tasks that use the <code>awsvpc</code> network mode.</p>
     */
    inline void SetAwsvpcConfiguration(const AwsVpcConfiguration& value) { m_awsvpcConfigurationHasBeenSet = true; m_awsvpcConfiguration = value; }

    /**
     * <p>Use this structure to specify the VPC subnets and security groups for the
     * task and whether a public IP address is to be used. This structure is relevant
     * only for ECS tasks that use the <code>awsvpc</code> network mode.</p>
     */
    inline void SetAwsvpcConfiguration(AwsVpcConfiguration&& value) { m_awsvpcConfigurationHasBeenSet = true; m_awsvpcConfiguration = std::move(value); }

    /**
     * <p>Use this structure to specify the VPC subnets and security groups for the
     * task and whether a public IP address is to be used. This structure is relevant
     * only for ECS tasks that use the <code>awsvpc</code> network mode.</p>
     */
    inline NetworkConfiguration& WithAwsvpcConfiguration(const AwsVpcConfiguration& value) { SetAwsvpcConfiguration(value); return *this;}

    /**
     * <p>Use this structure to specify the VPC subnets and security groups for the
     * task and whether a public IP address is to be used. This structure is relevant
     * only for ECS tasks that use the <code>awsvpc</code> network mode.</p>
     */
    inline NetworkConfiguration& WithAwsvpcConfiguration(AwsVpcConfiguration&& value) { SetAwsvpcConfiguration(std::move(value)); return *this;}

  private:

    AwsVpcConfiguration m_awsvpcConfiguration;
    bool m_awsvpcConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
