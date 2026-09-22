/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/cloudwatchomni/model/EdgeTrafficStats.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace CloudWatchOmni {
namespace Model {

/**
 * <p>Edge attributes promoted out of the flat attribute map onto typed members.
 * Which members are present depends entirely on what produced the edge, so most
 * edges carry only a few of them.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/EdgeProperties">AWS
 * API Reference</a></p>
 */
class EdgeProperties {
 public:
  AWS_CLOUDWATCHOMNI_API EdgeProperties() = default;
  AWS_CLOUDWATCHOMNI_API EdgeProperties(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API EdgeProperties& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The IANA protocol name for the observed network traffic, such as
   * &quot;tcp&quot;.</p>
   */
  inline const Aws::String& GetProtocol() const { return m_protocol; }
  inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
  template <typename ProtocolT = Aws::String>
  void SetProtocol(ProtocolT&& value) {
    m_protocolHasBeenSet = true;
    m_protocol = std::forward<ProtocolT>(value);
  }
  template <typename ProtocolT = Aws::String>
  EdgeProperties& WithProtocol(ProtocolT&& value) {
    SetProtocol(std::forward<ProtocolT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source port of the observed traffic. May be a placeholder when the port
   * is unknown.</p>
   */
  inline const Aws::String& GetSourcePort() const { return m_sourcePort; }
  inline bool SourcePortHasBeenSet() const { return m_sourcePortHasBeenSet; }
  template <typename SourcePortT = Aws::String>
  void SetSourcePort(SourcePortT&& value) {
    m_sourcePortHasBeenSet = true;
    m_sourcePort = std::forward<SourcePortT>(value);
  }
  template <typename SourcePortT = Aws::String>
  EdgeProperties& WithSourcePort(SourcePortT&& value) {
    SetSourcePort(std::forward<SourcePortT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The destination port of the observed traffic. May be a placeholder when the
   * port is unknown.</p>
   */
  inline const Aws::String& GetDestinationPort() const { return m_destinationPort; }
  inline bool DestinationPortHasBeenSet() const { return m_destinationPortHasBeenSet; }
  template <typename DestinationPortT = Aws::String>
  void SetDestinationPort(DestinationPortT&& value) {
    m_destinationPortHasBeenSet = true;
    m_destinationPort = std::forward<DestinationPortT>(value);
  }
  template <typename DestinationPortT = Aws::String>
  EdgeProperties& WithDestinationPort(DestinationPortT&& value) {
    SetDestinationPort(std::forward<DestinationPortT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether the observed network flow was denied. Absent means the edge was not
   * derived from network flow data, which is not the same as allowed.</p>
   */
  inline bool GetBlocked() const { return m_blocked; }
  inline bool BlockedHasBeenSet() const { return m_blockedHasBeenSet; }
  inline void SetBlocked(bool value) {
    m_blockedHasBeenSet = true;
    m_blocked = value;
  }
  inline EdgeProperties& WithBlocked(bool value) {
    SetBlocked(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The error code returned when the call was attempted and refused. Its presence
   * means the edge exists but the dependency is failing.</p>
   */
  inline const Aws::String& GetErrorCode() const { return m_errorCode; }
  inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
  template <typename ErrorCodeT = Aws::String>
  void SetErrorCode(ErrorCodeT&& value) {
    m_errorCodeHasBeenSet = true;
    m_errorCode = std::forward<ErrorCodeT>(value);
  }
  template <typename ErrorCodeT = Aws::String>
  EdgeProperties& WithErrorCode(ErrorCodeT&& value) {
    SetErrorCode(std::forward<ErrorCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The HTTP status code observed on the request. Distinct from errorCode.</p>
   */
  inline const Aws::String& GetHttpStatusCode() const { return m_httpStatusCode; }
  inline bool HttpStatusCodeHasBeenSet() const { return m_httpStatusCodeHasBeenSet; }
  template <typename HttpStatusCodeT = Aws::String>
  void SetHttpStatusCode(HttpStatusCodeT&& value) {
    m_httpStatusCodeHasBeenSet = true;
    m_httpStatusCode = std::forward<HttpStatusCodeT>(value);
  }
  template <typename HttpStatusCodeT = Aws::String>
  EdgeProperties& WithHttpStatusCode(HttpStatusCodeT&& value) {
    SetHttpStatusCode(std::forward<HttpStatusCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The HTTP method observed on the request.</p>
   */
  inline const Aws::String& GetHttpMethod() const { return m_httpMethod; }
  inline bool HttpMethodHasBeenSet() const { return m_httpMethodHasBeenSet; }
  template <typename HttpMethodT = Aws::String>
  void SetHttpMethod(HttpMethodT&& value) {
    m_httpMethodHasBeenSet = true;
    m_httpMethod = std::forward<HttpMethodT>(value);
  }
  template <typename HttpMethodT = Aws::String>
  EdgeProperties& WithHttpMethod(HttpMethodT&& value) {
    SetHttpMethod(std::forward<HttpMethodT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether the caller was an AWS service principal rather than a user or role.
   * Absent means the edge was not derived from a source that reports it.</p>
   */
  inline bool GetServiceInitiated() const { return m_serviceInitiated; }
  inline bool ServiceInitiatedHasBeenSet() const { return m_serviceInitiatedHasBeenSet; }
  inline void SetServiceInitiated(bool value) {
    m_serviceInitiatedHasBeenSet = true;
    m_serviceInitiated = value;
  }
  inline EdgeProperties& WithServiceInitiated(bool value) {
    SetServiceInitiated(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Traffic counters accumulated over the edge's observation window.</p>
   */
  inline const EdgeTrafficStats& GetTrafficStats() const { return m_trafficStats; }
  inline bool TrafficStatsHasBeenSet() const { return m_trafficStatsHasBeenSet; }
  template <typename TrafficStatsT = EdgeTrafficStats>
  void SetTrafficStats(TrafficStatsT&& value) {
    m_trafficStatsHasBeenSet = true;
    m_trafficStats = std::forward<TrafficStatsT>(value);
  }
  template <typename TrafficStatsT = EdgeTrafficStats>
  EdgeProperties& WithTrafficStats(TrafficStatsT&& value) {
    SetTrafficStats(std::forward<TrafficStatsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_protocol;

  Aws::String m_sourcePort;

  Aws::String m_destinationPort;

  bool m_blocked{false};

  Aws::String m_errorCode;

  Aws::String m_httpStatusCode;

  Aws::String m_httpMethod;

  bool m_serviceInitiated{false};

  EdgeTrafficStats m_trafficStats;
  bool m_protocolHasBeenSet = false;
  bool m_sourcePortHasBeenSet = false;
  bool m_destinationPortHasBeenSet = false;
  bool m_blockedHasBeenSet = false;
  bool m_errorCodeHasBeenSet = false;
  bool m_httpStatusCodeHasBeenSet = false;
  bool m_httpMethodHasBeenSet = false;
  bool m_serviceInitiatedHasBeenSet = false;
  bool m_trafficStatsHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
