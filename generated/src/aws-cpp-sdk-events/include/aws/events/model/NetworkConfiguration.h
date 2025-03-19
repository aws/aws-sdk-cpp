/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class NetworkConfiguration
  {
  public:
    AWS_CLOUDWATCHEVENTS_API NetworkConfiguration() = default;
    AWS_CLOUDWATCHEVENTS_API NetworkConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVENTS_API NetworkConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Use this structure to specify the VPC subnets and security groups for the
     * task, and whether a public IP address is to be used. This structure is relevant
     * only for ECS tasks that use the <code>awsvpc</code> network mode.</p>
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
} // namespace CloudWatchEvents
} // namespace Aws
