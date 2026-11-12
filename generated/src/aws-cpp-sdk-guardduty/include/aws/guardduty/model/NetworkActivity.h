/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/DnsContext.h>
#include <aws/guardduty/model/Enrichment.h>
#include <aws/guardduty/model/NetworkAnomaly.h>
#include <aws/guardduty/model/NetworkCounts.h>
#include <aws/guardduty/model/NetworkPorts.h>
#include <aws/guardduty/model/NetworkTraffic.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GuardDuty {
namespace Model {

/**
 * <p>Contains details about network activity.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/NetworkActivity">AWS
 * API Reference</a></p>
 */
class NetworkActivity {
 public:
  AWS_GUARDDUTY_API NetworkActivity() = default;
  AWS_GUARDDUTY_API NetworkActivity(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API NetworkActivity& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The network protocol of the activity.</p>
   */
  inline const Aws::String& GetProtocol() const { return m_protocol; }
  inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
  template <typename ProtocolT = Aws::String>
  void SetProtocol(ProtocolT&& value) {
    m_protocolHasBeenSet = true;
    m_protocol = std::forward<ProtocolT>(value);
  }
  template <typename ProtocolT = Aws::String>
  NetworkActivity& WithProtocol(ProtocolT&& value) {
    SetProtocol(std::forward<ProtocolT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The direction of the network connection, such as inbound or outbound.</p>
   */
  inline const Aws::String& GetDirection() const { return m_direction; }
  inline bool DirectionHasBeenSet() const { return m_directionHasBeenSet; }
  template <typename DirectionT = Aws::String>
  void SetDirection(DirectionT&& value) {
    m_directionHasBeenSet = true;
    m_direction = std::forward<DirectionT>(value);
  }
  template <typename DirectionT = Aws::String>
  NetworkActivity& WithDirection(DirectionT&& value) {
    SetDirection(std::forward<DirectionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The method that the network activity used.</p>
   */
  inline const Aws::String& GetMethod() const { return m_method; }
  inline bool MethodHasBeenSet() const { return m_methodHasBeenSet; }
  template <typename MethodT = Aws::String>
  void SetMethod(MethodT&& value) {
    m_methodHasBeenSet = true;
    m_method = std::forward<MethodT>(value);
  }
  template <typename MethodT = Aws::String>
  NetworkActivity& WithMethod(MethodT&& value) {
    SetMethod(std::forward<MethodT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the network connection was blocked.</p>
   */
  inline const Aws::String& GetBlocked() const { return m_blocked; }
  inline bool BlockedHasBeenSet() const { return m_blockedHasBeenSet; }
  template <typename BlockedT = Aws::String>
  void SetBlocked(BlockedT&& value) {
    m_blockedHasBeenSet = true;
    m_blocked = std::forward<BlockedT>(value);
  }
  template <typename BlockedT = Aws::String>
  NetworkActivity& WithBlocked(BlockedT&& value) {
    SetBlocked(std::forward<BlockedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The platform on which the network activity was observed.</p>
   */
  inline const Aws::String& GetPlatform() const { return m_platform; }
  inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
  template <typename PlatformT = Aws::String>
  void SetPlatform(PlatformT&& value) {
    m_platformHasBeenSet = true;
    m_platform = std::forward<PlatformT>(value);
  }
  template <typename PlatformT = Aws::String>
  NetworkActivity& WithPlatform(PlatformT&& value) {
    SetPlatform(std::forward<PlatformT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ports that the network activity involved.</p>
   */
  inline const NetworkPorts& GetPorts() const { return m_ports; }
  inline bool PortsHasBeenSet() const { return m_portsHasBeenSet; }
  template <typename PortsT = NetworkPorts>
  void SetPorts(PortsT&& value) {
    m_portsHasBeenSet = true;
    m_ports = std::forward<PortsT>(value);
  }
  template <typename PortsT = NetworkPorts>
  NetworkActivity& WithPorts(PortsT&& value) {
    SetPorts(std::forward<PortsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The amount of data that the network activity transferred.</p>
   */
  inline const NetworkTraffic& GetTraffic() const { return m_traffic; }
  inline bool TrafficHasBeenSet() const { return m_trafficHasBeenSet; }
  template <typename TrafficT = NetworkTraffic>
  void SetTraffic(TrafficT&& value) {
    m_trafficHasBeenSet = true;
    m_traffic = std::forward<TrafficT>(value);
  }
  template <typename TrafficT = NetworkTraffic>
  NetworkActivity& WithTraffic(TrafficT&& value) {
    SetTraffic(std::forward<TrafficT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about how the network activity deviates from normal behavior.</p>
   */
  inline const NetworkAnomaly& GetAnomaly() const { return m_anomaly; }
  inline bool AnomalyHasBeenSet() const { return m_anomalyHasBeenSet; }
  template <typename AnomalyT = NetworkAnomaly>
  void SetAnomaly(AnomalyT&& value) {
    m_anomalyHasBeenSet = true;
    m_anomaly = std::forward<AnomalyT>(value);
  }
  template <typename AnomalyT = NetworkAnomaly>
  NetworkActivity& WithAnomaly(AnomalyT&& value) {
    SetAnomaly(std::forward<AnomalyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>DNS details about the network activity.</p>
   */
  inline const DnsContext& GetDns() const { return m_dns; }
  inline bool DnsHasBeenSet() const { return m_dnsHasBeenSet; }
  template <typename DnsT = DnsContext>
  void SetDns(DnsT&& value) {
    m_dnsHasBeenSet = true;
    m_dns = std::forward<DnsT>(value);
  }
  template <typename DnsT = DnsContext>
  NetworkActivity& WithDns(DnsT&& value) {
    SetDns(std::forward<DnsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Counts that describe the network activity, such as the number of requests or
   * connection attempts.</p>
   */
  inline const NetworkCounts& GetCounts() const { return m_counts; }
  inline bool CountsHasBeenSet() const { return m_countsHasBeenSet; }
  template <typename CountsT = NetworkCounts>
  void SetCounts(CountsT&& value) {
    m_countsHasBeenSet = true;
    m_counts = std::forward<CountsT>(value);
  }
  template <typename CountsT = NetworkCounts>
  NetworkActivity& WithCounts(CountsT&& value) {
    SetCounts(std::forward<CountsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional context about the network activity, such as geolocation and threat
   * intelligence information.</p>
   */
  inline const Enrichment& GetEnrichment() const { return m_enrichment; }
  inline bool EnrichmentHasBeenSet() const { return m_enrichmentHasBeenSet; }
  template <typename EnrichmentT = Enrichment>
  void SetEnrichment(EnrichmentT&& value) {
    m_enrichmentHasBeenSet = true;
    m_enrichment = std::forward<EnrichmentT>(value);
  }
  template <typename EnrichmentT = Enrichment>
  NetworkActivity& WithEnrichment(EnrichmentT&& value) {
    SetEnrichment(std::forward<EnrichmentT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_protocol;

  Aws::String m_direction;

  Aws::String m_method;

  Aws::String m_blocked;

  Aws::String m_platform;

  NetworkPorts m_ports;

  NetworkTraffic m_traffic;

  NetworkAnomaly m_anomaly;

  DnsContext m_dns;

  NetworkCounts m_counts;

  Enrichment m_enrichment;
  bool m_protocolHasBeenSet = false;
  bool m_directionHasBeenSet = false;
  bool m_methodHasBeenSet = false;
  bool m_blockedHasBeenSet = false;
  bool m_platformHasBeenSet = false;
  bool m_portsHasBeenSet = false;
  bool m_trafficHasBeenSet = false;
  bool m_anomalyHasBeenSet = false;
  bool m_dnsHasBeenSet = false;
  bool m_countsHasBeenSet = false;
  bool m_enrichmentHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
