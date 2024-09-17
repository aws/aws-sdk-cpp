/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/internetmonitor/InternetMonitor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/internetmonitor/model/TriangulationEventType.h>
#include <aws/internetmonitor/model/Network.h>
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
namespace InternetMonitor
{
namespace Model
{

  /**
   * <p>Information about the network impairment for a specific network measured by
   * Amazon CloudWatch Internet Monitor.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/internetmonitor-2021-06-03/NetworkImpairment">AWS
   * API Reference</a></p>
   */
  class NetworkImpairment
  {
  public:
    AWS_INTERNETMONITOR_API NetworkImpairment();
    AWS_INTERNETMONITOR_API NetworkImpairment(Aws::Utils::Json::JsonView jsonValue);
    AWS_INTERNETMONITOR_API NetworkImpairment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INTERNETMONITOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The networks that could be impacted by a network impairment event.</p>
     */
    inline const Aws::Vector<Network>& GetNetworks() const{ return m_networks; }
    inline bool NetworksHasBeenSet() const { return m_networksHasBeenSet; }
    inline void SetNetworks(const Aws::Vector<Network>& value) { m_networksHasBeenSet = true; m_networks = value; }
    inline void SetNetworks(Aws::Vector<Network>&& value) { m_networksHasBeenSet = true; m_networks = std::move(value); }
    inline NetworkImpairment& WithNetworks(const Aws::Vector<Network>& value) { SetNetworks(value); return *this;}
    inline NetworkImpairment& WithNetworks(Aws::Vector<Network>&& value) { SetNetworks(std::move(value)); return *this;}
    inline NetworkImpairment& AddNetworks(const Network& value) { m_networksHasBeenSet = true; m_networks.push_back(value); return *this; }
    inline NetworkImpairment& AddNetworks(Network&& value) { m_networksHasBeenSet = true; m_networks.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The combination of the Autonomous System Number (ASN) of the network and the
     * name of the network.</p>
     */
    inline const Aws::Vector<Network>& GetAsPath() const{ return m_asPath; }
    inline bool AsPathHasBeenSet() const { return m_asPathHasBeenSet; }
    inline void SetAsPath(const Aws::Vector<Network>& value) { m_asPathHasBeenSet = true; m_asPath = value; }
    inline void SetAsPath(Aws::Vector<Network>&& value) { m_asPathHasBeenSet = true; m_asPath = std::move(value); }
    inline NetworkImpairment& WithAsPath(const Aws::Vector<Network>& value) { SetAsPath(value); return *this;}
    inline NetworkImpairment& WithAsPath(Aws::Vector<Network>&& value) { SetAsPath(std::move(value)); return *this;}
    inline NetworkImpairment& AddAsPath(const Network& value) { m_asPathHasBeenSet = true; m_asPath.push_back(value); return *this; }
    inline NetworkImpairment& AddAsPath(Network&& value) { m_asPathHasBeenSet = true; m_asPath.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of network impairment.</p>
     */
    inline const TriangulationEventType& GetNetworkEventType() const{ return m_networkEventType; }
    inline bool NetworkEventTypeHasBeenSet() const { return m_networkEventTypeHasBeenSet; }
    inline void SetNetworkEventType(const TriangulationEventType& value) { m_networkEventTypeHasBeenSet = true; m_networkEventType = value; }
    inline void SetNetworkEventType(TriangulationEventType&& value) { m_networkEventTypeHasBeenSet = true; m_networkEventType = std::move(value); }
    inline NetworkImpairment& WithNetworkEventType(const TriangulationEventType& value) { SetNetworkEventType(value); return *this;}
    inline NetworkImpairment& WithNetworkEventType(TriangulationEventType&& value) { SetNetworkEventType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Network> m_networks;
    bool m_networksHasBeenSet = false;

    Aws::Vector<Network> m_asPath;
    bool m_asPathHasBeenSet = false;

    TriangulationEventType m_networkEventType;
    bool m_networkEventTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
