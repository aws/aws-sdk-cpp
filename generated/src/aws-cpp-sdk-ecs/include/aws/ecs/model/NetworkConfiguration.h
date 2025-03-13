/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>The network configuration for a task or service.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/NetworkConfiguration">AWS
   * API Reference</a></p>
   */
  class NetworkConfiguration
  {
  public:
    AWS_ECS_API NetworkConfiguration() = default;
    AWS_ECS_API NetworkConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API NetworkConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The VPC subnets and security groups that are associated with a task.</p>
     *  <p>All specified subnets and security groups must be from the same
     * VPC.</p> 
     */
    inline const AwsVpcConfiguration& GetAwsvpcConfiguration() const { return m_awsvpcConfiguration; }
    inline bool AwsvpcConfigurationHasBeenSet() const { return m_awsvpcConfigurationHasBeenSet; }
    template<typename AwsvpcConfigurationT = AwsVpcConfiguration>
    void SetAwsvpcConfiguration(AwsvpcConfigurationT&& value) { m_awsvpcConfigurationHasBeenSet = true; m_awsvpcConfiguration = std::forward<AwsvpcConfigurationT>(value); }
    template<typename AwsvpcConfigurationT = AwsVpcConfiguration>
    NetworkConfiguration& WithAwsvpcConfiguration(AwsvpcConfigurationT&& value) { SetAwsvpcConfiguration(std::forward<AwsvpcConfigurationT>(value)); return *this;}
    ///@}
  private:

    AwsVpcConfiguration m_awsvpcConfiguration;
    bool m_awsvpcConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
