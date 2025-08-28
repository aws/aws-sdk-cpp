/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/apprunner/model/EgressConfiguration.h>
#include <aws/apprunner/model/IngressConfiguration.h>
#include <aws/apprunner/model/IpAddressType.h>
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
namespace AppRunner
{
namespace Model
{

  /**
   * <p>Describes configuration settings related to network traffic of an App Runner
   * service. Consists of embedded objects for each configurable network
   * feature.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/NetworkConfiguration">AWS
   * API Reference</a></p>
   */
  class NetworkConfiguration
  {
  public:
    AWS_APPRUNNER_API NetworkConfiguration() = default;
    AWS_APPRUNNER_API NetworkConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API NetworkConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Network configuration settings for outbound message traffic.</p>
     */
    inline const EgressConfiguration& GetEgressConfiguration() const { return m_egressConfiguration; }
    inline bool EgressConfigurationHasBeenSet() const { return m_egressConfigurationHasBeenSet; }
    template<typename EgressConfigurationT = EgressConfiguration>
    void SetEgressConfiguration(EgressConfigurationT&& value) { m_egressConfigurationHasBeenSet = true; m_egressConfiguration = std::forward<EgressConfigurationT>(value); }
    template<typename EgressConfigurationT = EgressConfiguration>
    NetworkConfiguration& WithEgressConfiguration(EgressConfigurationT&& value) { SetEgressConfiguration(std::forward<EgressConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Network configuration settings for inbound message traffic.</p>
     */
    inline const IngressConfiguration& GetIngressConfiguration() const { return m_ingressConfiguration; }
    inline bool IngressConfigurationHasBeenSet() const { return m_ingressConfigurationHasBeenSet; }
    template<typename IngressConfigurationT = IngressConfiguration>
    void SetIngressConfiguration(IngressConfigurationT&& value) { m_ingressConfigurationHasBeenSet = true; m_ingressConfiguration = std::forward<IngressConfigurationT>(value); }
    template<typename IngressConfigurationT = IngressConfiguration>
    NetworkConfiguration& WithIngressConfiguration(IngressConfigurationT&& value) { SetIngressConfiguration(std::forward<IngressConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>App Runner provides you with the option to choose between <i>IPv4</i> and
     * <i>dual stack</i> (IPv4 and IPv6). This is an optional parameter. If you do not
     * specify an <code>IpAddressType</code>, it defaults to select IPv4.</p>
     */
    inline IpAddressType GetIpAddressType() const { return m_ipAddressType; }
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }
    inline void SetIpAddressType(IpAddressType value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }
    inline NetworkConfiguration& WithIpAddressType(IpAddressType value) { SetIpAddressType(value); return *this;}
    ///@}
  private:

    EgressConfiguration m_egressConfiguration;
    bool m_egressConfigurationHasBeenSet = false;

    IngressConfiguration m_ingressConfiguration;
    bool m_ingressConfigurationHasBeenSet = false;

    IpAddressType m_ipAddressType{IpAddressType::NOT_SET};
    bool m_ipAddressTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
