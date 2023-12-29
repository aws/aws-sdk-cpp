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
    AWS_APPRUNNER_API NetworkConfiguration();
    AWS_APPRUNNER_API NetworkConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API NetworkConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Network configuration settings for outbound message traffic.</p>
     */
    inline const EgressConfiguration& GetEgressConfiguration() const{ return m_egressConfiguration; }

    /**
     * <p>Network configuration settings for outbound message traffic.</p>
     */
    inline bool EgressConfigurationHasBeenSet() const { return m_egressConfigurationHasBeenSet; }

    /**
     * <p>Network configuration settings for outbound message traffic.</p>
     */
    inline void SetEgressConfiguration(const EgressConfiguration& value) { m_egressConfigurationHasBeenSet = true; m_egressConfiguration = value; }

    /**
     * <p>Network configuration settings for outbound message traffic.</p>
     */
    inline void SetEgressConfiguration(EgressConfiguration&& value) { m_egressConfigurationHasBeenSet = true; m_egressConfiguration = std::move(value); }

    /**
     * <p>Network configuration settings for outbound message traffic.</p>
     */
    inline NetworkConfiguration& WithEgressConfiguration(const EgressConfiguration& value) { SetEgressConfiguration(value); return *this;}

    /**
     * <p>Network configuration settings for outbound message traffic.</p>
     */
    inline NetworkConfiguration& WithEgressConfiguration(EgressConfiguration&& value) { SetEgressConfiguration(std::move(value)); return *this;}


    /**
     * <p>Network configuration settings for inbound message traffic.</p>
     */
    inline const IngressConfiguration& GetIngressConfiguration() const{ return m_ingressConfiguration; }

    /**
     * <p>Network configuration settings for inbound message traffic.</p>
     */
    inline bool IngressConfigurationHasBeenSet() const { return m_ingressConfigurationHasBeenSet; }

    /**
     * <p>Network configuration settings for inbound message traffic.</p>
     */
    inline void SetIngressConfiguration(const IngressConfiguration& value) { m_ingressConfigurationHasBeenSet = true; m_ingressConfiguration = value; }

    /**
     * <p>Network configuration settings for inbound message traffic.</p>
     */
    inline void SetIngressConfiguration(IngressConfiguration&& value) { m_ingressConfigurationHasBeenSet = true; m_ingressConfiguration = std::move(value); }

    /**
     * <p>Network configuration settings for inbound message traffic.</p>
     */
    inline NetworkConfiguration& WithIngressConfiguration(const IngressConfiguration& value) { SetIngressConfiguration(value); return *this;}

    /**
     * <p>Network configuration settings for inbound message traffic.</p>
     */
    inline NetworkConfiguration& WithIngressConfiguration(IngressConfiguration&& value) { SetIngressConfiguration(std::move(value)); return *this;}


    /**
     * <p>App Runner provides you with the option to choose between <i>Internet
     * Protocol version 4 (IPv4)</i> and <i>dual stack</i> (IPv4 and IPv6) for your
     * incoming public network configuration. This is an optional parameter. If you do
     * not specify an <code>IpAddressType</code>, it defaults to select IPv4.</p>
     *  <p> Currently, App Runner supports dual stack for only Public endpoint.
     * Only IPv4 is supported for Private endpoint. If you update a service that's
     * using dual-stack Public endpoint to a Private endpoint, your App Runner service
     * will default to support only IPv4 for Private endpoint and fail to receive
     * traffic originating from IPv6 endpoint. </p> 
     */
    inline const IpAddressType& GetIpAddressType() const{ return m_ipAddressType; }

    /**
     * <p>App Runner provides you with the option to choose between <i>Internet
     * Protocol version 4 (IPv4)</i> and <i>dual stack</i> (IPv4 and IPv6) for your
     * incoming public network configuration. This is an optional parameter. If you do
     * not specify an <code>IpAddressType</code>, it defaults to select IPv4.</p>
     *  <p> Currently, App Runner supports dual stack for only Public endpoint.
     * Only IPv4 is supported for Private endpoint. If you update a service that's
     * using dual-stack Public endpoint to a Private endpoint, your App Runner service
     * will default to support only IPv4 for Private endpoint and fail to receive
     * traffic originating from IPv6 endpoint. </p> 
     */
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }

    /**
     * <p>App Runner provides you with the option to choose between <i>Internet
     * Protocol version 4 (IPv4)</i> and <i>dual stack</i> (IPv4 and IPv6) for your
     * incoming public network configuration. This is an optional parameter. If you do
     * not specify an <code>IpAddressType</code>, it defaults to select IPv4.</p>
     *  <p> Currently, App Runner supports dual stack for only Public endpoint.
     * Only IPv4 is supported for Private endpoint. If you update a service that's
     * using dual-stack Public endpoint to a Private endpoint, your App Runner service
     * will default to support only IPv4 for Private endpoint and fail to receive
     * traffic originating from IPv6 endpoint. </p> 
     */
    inline void SetIpAddressType(const IpAddressType& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }

    /**
     * <p>App Runner provides you with the option to choose between <i>Internet
     * Protocol version 4 (IPv4)</i> and <i>dual stack</i> (IPv4 and IPv6) for your
     * incoming public network configuration. This is an optional parameter. If you do
     * not specify an <code>IpAddressType</code>, it defaults to select IPv4.</p>
     *  <p> Currently, App Runner supports dual stack for only Public endpoint.
     * Only IPv4 is supported for Private endpoint. If you update a service that's
     * using dual-stack Public endpoint to a Private endpoint, your App Runner service
     * will default to support only IPv4 for Private endpoint and fail to receive
     * traffic originating from IPv6 endpoint. </p> 
     */
    inline void SetIpAddressType(IpAddressType&& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = std::move(value); }

    /**
     * <p>App Runner provides you with the option to choose between <i>Internet
     * Protocol version 4 (IPv4)</i> and <i>dual stack</i> (IPv4 and IPv6) for your
     * incoming public network configuration. This is an optional parameter. If you do
     * not specify an <code>IpAddressType</code>, it defaults to select IPv4.</p>
     *  <p> Currently, App Runner supports dual stack for only Public endpoint.
     * Only IPv4 is supported for Private endpoint. If you update a service that's
     * using dual-stack Public endpoint to a Private endpoint, your App Runner service
     * will default to support only IPv4 for Private endpoint and fail to receive
     * traffic originating from IPv6 endpoint. </p> 
     */
    inline NetworkConfiguration& WithIpAddressType(const IpAddressType& value) { SetIpAddressType(value); return *this;}

    /**
     * <p>App Runner provides you with the option to choose between <i>Internet
     * Protocol version 4 (IPv4)</i> and <i>dual stack</i> (IPv4 and IPv6) for your
     * incoming public network configuration. This is an optional parameter. If you do
     * not specify an <code>IpAddressType</code>, it defaults to select IPv4.</p>
     *  <p> Currently, App Runner supports dual stack for only Public endpoint.
     * Only IPv4 is supported for Private endpoint. If you update a service that's
     * using dual-stack Public endpoint to a Private endpoint, your App Runner service
     * will default to support only IPv4 for Private endpoint and fail to receive
     * traffic originating from IPv6 endpoint. </p> 
     */
    inline NetworkConfiguration& WithIpAddressType(IpAddressType&& value) { SetIpAddressType(std::move(value)); return *this;}

  private:

    EgressConfiguration m_egressConfiguration;
    bool m_egressConfigurationHasBeenSet = false;

    IngressConfiguration m_ingressConfiguration;
    bool m_ingressConfigurationHasBeenSet = false;

    IpAddressType m_ipAddressType;
    bool m_ipAddressTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
