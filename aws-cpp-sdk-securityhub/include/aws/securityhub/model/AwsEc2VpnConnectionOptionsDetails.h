/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsEc2VpnConnectionOptionsTunnelOptionsDetails.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>VPN connection options.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2VpnConnectionOptionsDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2VpnConnectionOptionsDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2VpnConnectionOptionsDetails();
    AWS_SECURITYHUB_API AwsEc2VpnConnectionOptionsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2VpnConnectionOptionsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Whether the VPN connection uses static routes only.</p>
     */
    inline bool GetStaticRoutesOnly() const{ return m_staticRoutesOnly; }

    /**
     * <p>Whether the VPN connection uses static routes only.</p>
     */
    inline bool StaticRoutesOnlyHasBeenSet() const { return m_staticRoutesOnlyHasBeenSet; }

    /**
     * <p>Whether the VPN connection uses static routes only.</p>
     */
    inline void SetStaticRoutesOnly(bool value) { m_staticRoutesOnlyHasBeenSet = true; m_staticRoutesOnly = value; }

    /**
     * <p>Whether the VPN connection uses static routes only.</p>
     */
    inline AwsEc2VpnConnectionOptionsDetails& WithStaticRoutesOnly(bool value) { SetStaticRoutesOnly(value); return *this;}


    /**
     * <p>The VPN tunnel options.</p>
     */
    inline const Aws::Vector<AwsEc2VpnConnectionOptionsTunnelOptionsDetails>& GetTunnelOptions() const{ return m_tunnelOptions; }

    /**
     * <p>The VPN tunnel options.</p>
     */
    inline bool TunnelOptionsHasBeenSet() const { return m_tunnelOptionsHasBeenSet; }

    /**
     * <p>The VPN tunnel options.</p>
     */
    inline void SetTunnelOptions(const Aws::Vector<AwsEc2VpnConnectionOptionsTunnelOptionsDetails>& value) { m_tunnelOptionsHasBeenSet = true; m_tunnelOptions = value; }

    /**
     * <p>The VPN tunnel options.</p>
     */
    inline void SetTunnelOptions(Aws::Vector<AwsEc2VpnConnectionOptionsTunnelOptionsDetails>&& value) { m_tunnelOptionsHasBeenSet = true; m_tunnelOptions = std::move(value); }

    /**
     * <p>The VPN tunnel options.</p>
     */
    inline AwsEc2VpnConnectionOptionsDetails& WithTunnelOptions(const Aws::Vector<AwsEc2VpnConnectionOptionsTunnelOptionsDetails>& value) { SetTunnelOptions(value); return *this;}

    /**
     * <p>The VPN tunnel options.</p>
     */
    inline AwsEc2VpnConnectionOptionsDetails& WithTunnelOptions(Aws::Vector<AwsEc2VpnConnectionOptionsTunnelOptionsDetails>&& value) { SetTunnelOptions(std::move(value)); return *this;}

    /**
     * <p>The VPN tunnel options.</p>
     */
    inline AwsEc2VpnConnectionOptionsDetails& AddTunnelOptions(const AwsEc2VpnConnectionOptionsTunnelOptionsDetails& value) { m_tunnelOptionsHasBeenSet = true; m_tunnelOptions.push_back(value); return *this; }

    /**
     * <p>The VPN tunnel options.</p>
     */
    inline AwsEc2VpnConnectionOptionsDetails& AddTunnelOptions(AwsEc2VpnConnectionOptionsTunnelOptionsDetails&& value) { m_tunnelOptionsHasBeenSet = true; m_tunnelOptions.push_back(std::move(value)); return *this; }

  private:

    bool m_staticRoutesOnly;
    bool m_staticRoutesOnlyHasBeenSet = false;

    Aws::Vector<AwsEc2VpnConnectionOptionsTunnelOptionsDetails> m_tunnelOptions;
    bool m_tunnelOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
