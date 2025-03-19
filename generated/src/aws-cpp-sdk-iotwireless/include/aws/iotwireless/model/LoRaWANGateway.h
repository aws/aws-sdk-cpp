/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotwireless/model/Beaconing.h>
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
namespace IoTWireless
{
namespace Model
{

  /**
   * <p>LoRaWANGateway object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/LoRaWANGateway">AWS
   * API Reference</a></p>
   */
  class LoRaWANGateway
  {
  public:
    AWS_IOTWIRELESS_API LoRaWANGateway() = default;
    AWS_IOTWIRELESS_API LoRaWANGateway(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API LoRaWANGateway& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The gateway's EUI value.</p>
     */
    inline const Aws::String& GetGatewayEui() const { return m_gatewayEui; }
    inline bool GatewayEuiHasBeenSet() const { return m_gatewayEuiHasBeenSet; }
    template<typename GatewayEuiT = Aws::String>
    void SetGatewayEui(GatewayEuiT&& value) { m_gatewayEuiHasBeenSet = true; m_gatewayEui = std::forward<GatewayEuiT>(value); }
    template<typename GatewayEuiT = Aws::String>
    LoRaWANGateway& WithGatewayEui(GatewayEuiT&& value) { SetGatewayEui(std::forward<GatewayEuiT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The frequency band (RFRegion) value.</p>
     */
    inline const Aws::String& GetRfRegion() const { return m_rfRegion; }
    inline bool RfRegionHasBeenSet() const { return m_rfRegionHasBeenSet; }
    template<typename RfRegionT = Aws::String>
    void SetRfRegion(RfRegionT&& value) { m_rfRegionHasBeenSet = true; m_rfRegion = std::forward<RfRegionT>(value); }
    template<typename RfRegionT = Aws::String>
    LoRaWANGateway& WithRfRegion(RfRegionT&& value) { SetRfRegion(std::forward<RfRegionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::Vector<Aws::String>>& GetJoinEuiFilters() const { return m_joinEuiFilters; }
    inline bool JoinEuiFiltersHasBeenSet() const { return m_joinEuiFiltersHasBeenSet; }
    template<typename JoinEuiFiltersT = Aws::Vector<Aws::Vector<Aws::String>>>
    void SetJoinEuiFilters(JoinEuiFiltersT&& value) { m_joinEuiFiltersHasBeenSet = true; m_joinEuiFilters = std::forward<JoinEuiFiltersT>(value); }
    template<typename JoinEuiFiltersT = Aws::Vector<Aws::Vector<Aws::String>>>
    LoRaWANGateway& WithJoinEuiFilters(JoinEuiFiltersT&& value) { SetJoinEuiFilters(std::forward<JoinEuiFiltersT>(value)); return *this;}
    template<typename JoinEuiFiltersT = Aws::Vector<Aws::String>>
    LoRaWANGateway& AddJoinEuiFilters(JoinEuiFiltersT&& value) { m_joinEuiFiltersHasBeenSet = true; m_joinEuiFilters.emplace_back(std::forward<JoinEuiFiltersT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetNetIdFilters() const { return m_netIdFilters; }
    inline bool NetIdFiltersHasBeenSet() const { return m_netIdFiltersHasBeenSet; }
    template<typename NetIdFiltersT = Aws::Vector<Aws::String>>
    void SetNetIdFilters(NetIdFiltersT&& value) { m_netIdFiltersHasBeenSet = true; m_netIdFilters = std::forward<NetIdFiltersT>(value); }
    template<typename NetIdFiltersT = Aws::Vector<Aws::String>>
    LoRaWANGateway& WithNetIdFilters(NetIdFiltersT&& value) { SetNetIdFilters(std::forward<NetIdFiltersT>(value)); return *this;}
    template<typename NetIdFiltersT = Aws::String>
    LoRaWANGateway& AddNetIdFilters(NetIdFiltersT&& value) { m_netIdFiltersHasBeenSet = true; m_netIdFilters.emplace_back(std::forward<NetIdFiltersT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<int>& GetSubBands() const { return m_subBands; }
    inline bool SubBandsHasBeenSet() const { return m_subBandsHasBeenSet; }
    template<typename SubBandsT = Aws::Vector<int>>
    void SetSubBands(SubBandsT&& value) { m_subBandsHasBeenSet = true; m_subBands = std::forward<SubBandsT>(value); }
    template<typename SubBandsT = Aws::Vector<int>>
    LoRaWANGateway& WithSubBands(SubBandsT&& value) { SetSubBands(std::forward<SubBandsT>(value)); return *this;}
    inline LoRaWANGateway& AddSubBands(int value) { m_subBandsHasBeenSet = true; m_subBands.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Beaconing object information, which consists of the data rate and frequency
     * parameters.</p>
     */
    inline const Beaconing& GetBeaconing() const { return m_beaconing; }
    inline bool BeaconingHasBeenSet() const { return m_beaconingHasBeenSet; }
    template<typename BeaconingT = Beaconing>
    void SetBeaconing(BeaconingT&& value) { m_beaconingHasBeenSet = true; m_beaconing = std::forward<BeaconingT>(value); }
    template<typename BeaconingT = Beaconing>
    LoRaWANGateway& WithBeaconing(BeaconingT&& value) { SetBeaconing(std::forward<BeaconingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The MaxEIRP value.</p>
     */
    inline double GetMaxEirp() const { return m_maxEirp; }
    inline bool MaxEirpHasBeenSet() const { return m_maxEirpHasBeenSet; }
    inline void SetMaxEirp(double value) { m_maxEirpHasBeenSet = true; m_maxEirp = value; }
    inline LoRaWANGateway& WithMaxEirp(double value) { SetMaxEirp(value); return *this;}
    ///@}
  private:

    Aws::String m_gatewayEui;
    bool m_gatewayEuiHasBeenSet = false;

    Aws::String m_rfRegion;
    bool m_rfRegionHasBeenSet = false;

    Aws::Vector<Aws::Vector<Aws::String>> m_joinEuiFilters;
    bool m_joinEuiFiltersHasBeenSet = false;

    Aws::Vector<Aws::String> m_netIdFilters;
    bool m_netIdFiltersHasBeenSet = false;

    Aws::Vector<int> m_subBands;
    bool m_subBandsHasBeenSet = false;

    Beaconing m_beaconing;
    bool m_beaconingHasBeenSet = false;

    double m_maxEirp{0.0};
    bool m_maxEirpHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
