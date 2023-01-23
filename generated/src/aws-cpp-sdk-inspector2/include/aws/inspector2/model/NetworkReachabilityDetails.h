/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/NetworkPath.h>
#include <aws/inspector2/model/PortRange.h>
#include <aws/inspector2/model/NetworkProtocol.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>Contains the details of a network reachability finding.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/NetworkReachabilityDetails">AWS
   * API Reference</a></p>
   */
  class NetworkReachabilityDetails
  {
  public:
    AWS_INSPECTOR2_API NetworkReachabilityDetails();
    AWS_INSPECTOR2_API NetworkReachabilityDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API NetworkReachabilityDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An object that contains details about a network path associated with a
     * finding.</p>
     */
    inline const NetworkPath& GetNetworkPath() const{ return m_networkPath; }

    /**
     * <p>An object that contains details about a network path associated with a
     * finding.</p>
     */
    inline bool NetworkPathHasBeenSet() const { return m_networkPathHasBeenSet; }

    /**
     * <p>An object that contains details about a network path associated with a
     * finding.</p>
     */
    inline void SetNetworkPath(const NetworkPath& value) { m_networkPathHasBeenSet = true; m_networkPath = value; }

    /**
     * <p>An object that contains details about a network path associated with a
     * finding.</p>
     */
    inline void SetNetworkPath(NetworkPath&& value) { m_networkPathHasBeenSet = true; m_networkPath = std::move(value); }

    /**
     * <p>An object that contains details about a network path associated with a
     * finding.</p>
     */
    inline NetworkReachabilityDetails& WithNetworkPath(const NetworkPath& value) { SetNetworkPath(value); return *this;}

    /**
     * <p>An object that contains details about a network path associated with a
     * finding.</p>
     */
    inline NetworkReachabilityDetails& WithNetworkPath(NetworkPath&& value) { SetNetworkPath(std::move(value)); return *this;}


    /**
     * <p>An object that contains details about the open port range associated with a
     * finding.</p>
     */
    inline const PortRange& GetOpenPortRange() const{ return m_openPortRange; }

    /**
     * <p>An object that contains details about the open port range associated with a
     * finding.</p>
     */
    inline bool OpenPortRangeHasBeenSet() const { return m_openPortRangeHasBeenSet; }

    /**
     * <p>An object that contains details about the open port range associated with a
     * finding.</p>
     */
    inline void SetOpenPortRange(const PortRange& value) { m_openPortRangeHasBeenSet = true; m_openPortRange = value; }

    /**
     * <p>An object that contains details about the open port range associated with a
     * finding.</p>
     */
    inline void SetOpenPortRange(PortRange&& value) { m_openPortRangeHasBeenSet = true; m_openPortRange = std::move(value); }

    /**
     * <p>An object that contains details about the open port range associated with a
     * finding.</p>
     */
    inline NetworkReachabilityDetails& WithOpenPortRange(const PortRange& value) { SetOpenPortRange(value); return *this;}

    /**
     * <p>An object that contains details about the open port range associated with a
     * finding.</p>
     */
    inline NetworkReachabilityDetails& WithOpenPortRange(PortRange&& value) { SetOpenPortRange(std::move(value)); return *this;}


    /**
     * <p>The protocol associated with a finding.</p>
     */
    inline const NetworkProtocol& GetProtocol() const{ return m_protocol; }

    /**
     * <p>The protocol associated with a finding.</p>
     */
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    /**
     * <p>The protocol associated with a finding.</p>
     */
    inline void SetProtocol(const NetworkProtocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The protocol associated with a finding.</p>
     */
    inline void SetProtocol(NetworkProtocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * <p>The protocol associated with a finding.</p>
     */
    inline NetworkReachabilityDetails& WithProtocol(const NetworkProtocol& value) { SetProtocol(value); return *this;}

    /**
     * <p>The protocol associated with a finding.</p>
     */
    inline NetworkReachabilityDetails& WithProtocol(NetworkProtocol&& value) { SetProtocol(std::move(value)); return *this;}

  private:

    NetworkPath m_networkPath;
    bool m_networkPathHasBeenSet = false;

    PortRange m_openPortRange;
    bool m_openPortRangeHasBeenSet = false;

    NetworkProtocol m_protocol;
    bool m_protocolHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
