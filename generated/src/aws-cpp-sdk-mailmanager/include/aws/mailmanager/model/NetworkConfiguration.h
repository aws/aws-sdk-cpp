/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/model/PublicNetworkConfiguration.h>
#include <aws/mailmanager/model/PrivateNetworkConfiguration.h>
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
namespace MailManager
{
namespace Model
{

  /**
   * <p>The network type (IPv4-only, Dual-Stack, PrivateLink) of the ingress endpoint
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/NetworkConfiguration">AWS
   * API Reference</a></p>
   */
  class NetworkConfiguration
  {
  public:
    AWS_MAILMANAGER_API NetworkConfiguration() = default;
    AWS_MAILMANAGER_API NetworkConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API NetworkConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the network configuration for the public ingress point.</p>
     */
    inline const PublicNetworkConfiguration& GetPublicNetworkConfiguration() const { return m_publicNetworkConfiguration; }
    inline bool PublicNetworkConfigurationHasBeenSet() const { return m_publicNetworkConfigurationHasBeenSet; }
    template<typename PublicNetworkConfigurationT = PublicNetworkConfiguration>
    void SetPublicNetworkConfiguration(PublicNetworkConfigurationT&& value) { m_publicNetworkConfigurationHasBeenSet = true; m_publicNetworkConfiguration = std::forward<PublicNetworkConfigurationT>(value); }
    template<typename PublicNetworkConfigurationT = PublicNetworkConfiguration>
    NetworkConfiguration& WithPublicNetworkConfiguration(PublicNetworkConfigurationT&& value) { SetPublicNetworkConfiguration(std::forward<PublicNetworkConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the network configuration for the private ingress point.</p>
     */
    inline const PrivateNetworkConfiguration& GetPrivateNetworkConfiguration() const { return m_privateNetworkConfiguration; }
    inline bool PrivateNetworkConfigurationHasBeenSet() const { return m_privateNetworkConfigurationHasBeenSet; }
    template<typename PrivateNetworkConfigurationT = PrivateNetworkConfiguration>
    void SetPrivateNetworkConfiguration(PrivateNetworkConfigurationT&& value) { m_privateNetworkConfigurationHasBeenSet = true; m_privateNetworkConfiguration = std::forward<PrivateNetworkConfigurationT>(value); }
    template<typename PrivateNetworkConfigurationT = PrivateNetworkConfiguration>
    NetworkConfiguration& WithPrivateNetworkConfiguration(PrivateNetworkConfigurationT&& value) { SetPrivateNetworkConfiguration(std::forward<PrivateNetworkConfigurationT>(value)); return *this;}
    ///@}
  private:

    PublicNetworkConfiguration m_publicNetworkConfiguration;
    bool m_publicNetworkConfigurationHasBeenSet = false;

    PrivateNetworkConfiguration m_privateNetworkConfiguration;
    bool m_privateNetworkConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
