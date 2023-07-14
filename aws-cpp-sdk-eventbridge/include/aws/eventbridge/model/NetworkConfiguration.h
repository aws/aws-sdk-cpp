﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/eventbridge/model/AwsVpcConfiguration.h>
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
namespace EventBridge
{
namespace Model
{

  /**
   * <p>This structure specifies the network configuration for an ECS
   * task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/NetworkConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_EVENTBRIDGE_API NetworkConfiguration
  {
  public:
    NetworkConfiguration();
    NetworkConfiguration(Aws::Utils::Json::JsonView jsonValue);
    NetworkConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Use this structure to specify the VPC subnets and security groups for the
     * task, and whether a public IP address is to be used. This structure is relevant
     * only for ECS tasks that use the <code>awsvpc</code> network mode.</p>
     */
    inline const AwsVpcConfiguration& GetAwsvpcConfiguration() const{ return m_awsvpcConfiguration; }

    /**
     * <p>Use this structure to specify the VPC subnets and security groups for the
     * task, and whether a public IP address is to be used. This structure is relevant
     * only for ECS tasks that use the <code>awsvpc</code> network mode.</p>
     */
    inline bool AwsvpcConfigurationHasBeenSet() const { return m_awsvpcConfigurationHasBeenSet; }

    /**
     * <p>Use this structure to specify the VPC subnets and security groups for the
     * task, and whether a public IP address is to be used. This structure is relevant
     * only for ECS tasks that use the <code>awsvpc</code> network mode.</p>
     */
    inline void SetAwsvpcConfiguration(const AwsVpcConfiguration& value) { m_awsvpcConfigurationHasBeenSet = true; m_awsvpcConfiguration = value; }

    /**
     * <p>Use this structure to specify the VPC subnets and security groups for the
     * task, and whether a public IP address is to be used. This structure is relevant
     * only for ECS tasks that use the <code>awsvpc</code> network mode.</p>
     */
    inline void SetAwsvpcConfiguration(AwsVpcConfiguration&& value) { m_awsvpcConfigurationHasBeenSet = true; m_awsvpcConfiguration = std::move(value); }

    /**
     * <p>Use this structure to specify the VPC subnets and security groups for the
     * task, and whether a public IP address is to be used. This structure is relevant
     * only for ECS tasks that use the <code>awsvpc</code> network mode.</p>
     */
    inline NetworkConfiguration& WithAwsvpcConfiguration(const AwsVpcConfiguration& value) { SetAwsvpcConfiguration(value); return *this;}

    /**
     * <p>Use this structure to specify the VPC subnets and security groups for the
     * task, and whether a public IP address is to be used. This structure is relevant
     * only for ECS tasks that use the <code>awsvpc</code> network mode.</p>
     */
    inline NetworkConfiguration& WithAwsvpcConfiguration(AwsVpcConfiguration&& value) { SetAwsvpcConfiguration(std::move(value)); return *this;}

  private:

    AwsVpcConfiguration m_awsvpcConfiguration;
    bool m_awsvpcConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
