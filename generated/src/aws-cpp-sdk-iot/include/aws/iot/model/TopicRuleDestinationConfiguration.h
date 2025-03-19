/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/HttpUrlDestinationConfiguration.h>
#include <aws/iot/model/VpcDestinationConfiguration.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Configuration of the topic rule destination.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/TopicRuleDestinationConfiguration">AWS
   * API Reference</a></p>
   */
  class TopicRuleDestinationConfiguration
  {
  public:
    AWS_IOT_API TopicRuleDestinationConfiguration() = default;
    AWS_IOT_API TopicRuleDestinationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API TopicRuleDestinationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Configuration of the HTTP URL.</p>
     */
    inline const HttpUrlDestinationConfiguration& GetHttpUrlConfiguration() const { return m_httpUrlConfiguration; }
    inline bool HttpUrlConfigurationHasBeenSet() const { return m_httpUrlConfigurationHasBeenSet; }
    template<typename HttpUrlConfigurationT = HttpUrlDestinationConfiguration>
    void SetHttpUrlConfiguration(HttpUrlConfigurationT&& value) { m_httpUrlConfigurationHasBeenSet = true; m_httpUrlConfiguration = std::forward<HttpUrlConfigurationT>(value); }
    template<typename HttpUrlConfigurationT = HttpUrlDestinationConfiguration>
    TopicRuleDestinationConfiguration& WithHttpUrlConfiguration(HttpUrlConfigurationT&& value) { SetHttpUrlConfiguration(std::forward<HttpUrlConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration of the virtual private cloud (VPC) connection.</p>
     */
    inline const VpcDestinationConfiguration& GetVpcConfiguration() const { return m_vpcConfiguration; }
    inline bool VpcConfigurationHasBeenSet() const { return m_vpcConfigurationHasBeenSet; }
    template<typename VpcConfigurationT = VpcDestinationConfiguration>
    void SetVpcConfiguration(VpcConfigurationT&& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = std::forward<VpcConfigurationT>(value); }
    template<typename VpcConfigurationT = VpcDestinationConfiguration>
    TopicRuleDestinationConfiguration& WithVpcConfiguration(VpcConfigurationT&& value) { SetVpcConfiguration(std::forward<VpcConfigurationT>(value)); return *this;}
    ///@}
  private:

    HttpUrlDestinationConfiguration m_httpUrlConfiguration;
    bool m_httpUrlConfigurationHasBeenSet = false;

    VpcDestinationConfiguration m_vpcConfiguration;
    bool m_vpcConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
