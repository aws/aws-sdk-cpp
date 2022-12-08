/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/scheduler/Scheduler_EXPORTS.h>
#include <aws/scheduler/model/AwsVpcConfiguration.h>
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
namespace Scheduler
{
namespace Model
{

  /**
   * <p>Specifies the network configuration for an ECS task.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/scheduler-2021-06-30/NetworkConfiguration">AWS
   * API Reference</a></p>
   */
  class NetworkConfiguration
  {
  public:
    AWS_SCHEDULER_API NetworkConfiguration();
    AWS_SCHEDULER_API NetworkConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SCHEDULER_API NetworkConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SCHEDULER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the Amazon VPC subnets and security groups for the task, and
     * whether a public IP address is to be used. This structure is relevant only for
     * ECS tasks that use the awsvpc network mode.</p>
     */
    inline const AwsVpcConfiguration& GetAwsvpcConfiguration() const{ return m_awsvpcConfiguration; }

    /**
     * <p>Specifies the Amazon VPC subnets and security groups for the task, and
     * whether a public IP address is to be used. This structure is relevant only for
     * ECS tasks that use the awsvpc network mode.</p>
     */
    inline bool AwsvpcConfigurationHasBeenSet() const { return m_awsvpcConfigurationHasBeenSet; }

    /**
     * <p>Specifies the Amazon VPC subnets and security groups for the task, and
     * whether a public IP address is to be used. This structure is relevant only for
     * ECS tasks that use the awsvpc network mode.</p>
     */
    inline void SetAwsvpcConfiguration(const AwsVpcConfiguration& value) { m_awsvpcConfigurationHasBeenSet = true; m_awsvpcConfiguration = value; }

    /**
     * <p>Specifies the Amazon VPC subnets and security groups for the task, and
     * whether a public IP address is to be used. This structure is relevant only for
     * ECS tasks that use the awsvpc network mode.</p>
     */
    inline void SetAwsvpcConfiguration(AwsVpcConfiguration&& value) { m_awsvpcConfigurationHasBeenSet = true; m_awsvpcConfiguration = std::move(value); }

    /**
     * <p>Specifies the Amazon VPC subnets and security groups for the task, and
     * whether a public IP address is to be used. This structure is relevant only for
     * ECS tasks that use the awsvpc network mode.</p>
     */
    inline NetworkConfiguration& WithAwsvpcConfiguration(const AwsVpcConfiguration& value) { SetAwsvpcConfiguration(value); return *this;}

    /**
     * <p>Specifies the Amazon VPC subnets and security groups for the task, and
     * whether a public IP address is to be used. This structure is relevant only for
     * ECS tasks that use the awsvpc network mode.</p>
     */
    inline NetworkConfiguration& WithAwsvpcConfiguration(AwsVpcConfiguration&& value) { SetAwsvpcConfiguration(std::move(value)); return *this;}

  private:

    AwsVpcConfiguration m_awsvpcConfiguration;
    bool m_awsvpcConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Scheduler
} // namespace Aws
