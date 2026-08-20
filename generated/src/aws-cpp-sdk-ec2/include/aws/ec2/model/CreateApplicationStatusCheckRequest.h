/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/AggregationStatusEnum.h>
#include <aws/ec2/model/HealthCheckPathRequestObject.h>
#include <aws/ec2/model/IpScopeEnum.h>
#include <aws/ec2/model/IpVersionEnum.h>
#include <aws/ec2/model/NetworkProtocolEnum.h>
#include <aws/ec2/model/TagSpecification.h>

#include <utility>

namespace Aws {
namespace EC2 {
namespace Model {

/**
 */
class CreateApplicationStatusCheckRequest : public EC2Request {
 public:
  AWS_EC2_API CreateApplicationStatusCheckRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateApplicationStatusCheck"; }

  AWS_EC2_API Aws::String SerializePayload() const override;

 protected:
  AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>The health check paths to use for the application status check. Health check
   * paths define the network path from a source subnet to one or more destination
   * subnets for cross-Availability Zone or Availability Zone to Local Zone health
   * checking. If omitted, health checks are performed in the same subnet as the
   * instance.</p>
   */
  inline const Aws::Vector<HealthCheckPathRequestObject>& GetHealthCheckPaths() const { return m_healthCheckPaths; }
  inline bool HealthCheckPathsHasBeenSet() const { return m_healthCheckPathsHasBeenSet; }
  template <typename HealthCheckPathsT = Aws::Vector<HealthCheckPathRequestObject>>
  void SetHealthCheckPaths(HealthCheckPathsT&& value) {
    m_healthCheckPathsHasBeenSet = true;
    m_healthCheckPaths = std::forward<HealthCheckPathsT>(value);
  }
  template <typename HealthCheckPathsT = Aws::Vector<HealthCheckPathRequestObject>>
  CreateApplicationStatusCheckRequest& WithHealthCheckPaths(HealthCheckPathsT&& value) {
    SetHealthCheckPaths(std::forward<HealthCheckPathsT>(value));
    return *this;
  }
  template <typename HealthCheckPathsT = HealthCheckPathRequestObject>
  CreateApplicationStatusCheckRequest& AddHealthCheckPaths(HealthCheckPathsT&& value) {
    m_healthCheckPathsHasBeenSet = true;
    m_healthCheckPaths.emplace_back(std::forward<HealthCheckPathsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The aggregation setting for the application status check. When set to
   * <code>included</code>, the result of this check contributes to the
   * instance-level application status reported by
   * <code>DescribeApplicationStatus</code>. When set to <code>excluded</code>, the
   * check runs independently and does not affect the instance-level status. Valid
   * values: <code>included</code> | <code>excluded</code>.</p>
   */
  inline AggregationStatusEnum GetAggregation() const { return m_aggregation; }
  inline bool AggregationHasBeenSet() const { return m_aggregationHasBeenSet; }
  inline void SetAggregation(AggregationStatusEnum value) {
    m_aggregationHasBeenSet = true;
    m_aggregation = value;
  }
  inline CreateApplicationStatusCheckRequest& WithAggregation(AggregationStatusEnum value) {
    SetAggregation(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The protocol to use for the health check. Valid values: <code>http</code> |
   * <code>https</code>.</p>
   */
  inline NetworkProtocolEnum GetProtocol() const { return m_protocol; }
  inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
  inline void SetProtocol(NetworkProtocolEnum value) {
    m_protocolHasBeenSet = true;
    m_protocol = value;
  }
  inline CreateApplicationStatusCheckRequest& WithProtocol(NetworkProtocolEnum value) {
    SetProtocol(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The port to use for the health check. Valid values: 1 to 65535.</p>
   */
  inline int GetPort() const { return m_port; }
  inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
  inline void SetPort(int value) {
    m_portHasBeenSet = true;
    m_port = value;
  }
  inline CreateApplicationStatusCheckRequest& WithPort(int value) {
    SetPort(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL path to use for the health check HTTP request (for example,
   * <code>/health</code> or <code>/status</code>).</p>
   */
  inline const Aws::String& GetPath() const { return m_path; }
  inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
  template <typename PathT = Aws::String>
  void SetPath(PathT&& value) {
    m_pathHasBeenSet = true;
    m_path = std::forward<PathT>(value);
  }
  template <typename PathT = Aws::String>
  CreateApplicationStatusCheckRequest& WithPath(PathT&& value) {
    SetPath(std::forward<PathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The index of the network device to use for the health check. The value must
   * be greater than or equal to 0.</p>
   */
  inline int GetDeviceIndex() const { return m_deviceIndex; }
  inline bool DeviceIndexHasBeenSet() const { return m_deviceIndexHasBeenSet; }
  inline void SetDeviceIndex(int value) {
    m_deviceIndexHasBeenSet = true;
    m_deviceIndex = value;
  }
  inline CreateApplicationStatusCheckRequest& WithDeviceIndex(int value) {
    SetDeviceIndex(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IP version to use for the health check. Valid values: <code>ipv4</code>
   * and <code>ipv6</code>.</p>
   */
  inline IpVersionEnum GetIpVersion() const { return m_ipVersion; }
  inline bool IpVersionHasBeenSet() const { return m_ipVersionHasBeenSet; }
  inline void SetIpVersion(IpVersionEnum value) {
    m_ipVersionHasBeenSet = true;
    m_ipVersion = value;
  }
  inline CreateApplicationStatusCheckRequest& WithIpVersion(IpVersionEnum value) {
    SetIpVersion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IP scope to use for the health check. Valid value:
   * <code>private</code>.</p>
   */
  inline IpScopeEnum GetIpScope() const { return m_ipScope; }
  inline bool IpScopeHasBeenSet() const { return m_ipScopeHasBeenSet; }
  inline void SetIpScope(IpScopeEnum value) {
    m_ipScopeHasBeenSet = true;
    m_ipScope = value;
  }
  inline CreateApplicationStatusCheckRequest& WithIpScope(IpScopeEnum value) {
    SetIpScope(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The interval, in seconds, between health checks. Valid value: 60.</p>
   */
  inline int GetInterval() const { return m_interval; }
  inline bool IntervalHasBeenSet() const { return m_intervalHasBeenSet; }
  inline void SetInterval(int value) {
    m_intervalHasBeenSet = true;
    m_interval = value;
  }
  inline CreateApplicationStatusCheckRequest& WithInterval(int value) {
    SetInterval(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The amount of time, in seconds, to wait for a health check response before
   * considering it failed. Valid values: 1 to 30. The value must be less than
   * <code>Interval</code>.</p>
   */
  inline int GetTimeout() const { return m_timeout; }
  inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }
  inline void SetTimeout(int value) {
    m_timeoutHasBeenSet = true;
    m_timeout = value;
  }
  inline CreateApplicationStatusCheckRequest& WithTimeout(int value) {
    SetTimeout(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of consecutive failed health checks before the application status
   * is considered impaired. The value must be greater than 0.</p>
   */
  inline int GetFailureThreshold() const { return m_failureThreshold; }
  inline bool FailureThresholdHasBeenSet() const { return m_failureThresholdHasBeenSet; }
  inline void SetFailureThreshold(int value) {
    m_failureThresholdHasBeenSet = true;
    m_failureThreshold = value;
  }
  inline CreateApplicationStatusCheckRequest& WithFailureThreshold(int value) {
    SetFailureThreshold(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of consecutive successful health checks before the application
   * status is considered healthy. The value must be greater than 0.</p>
   */
  inline int GetSuccessThreshold() const { return m_successThreshold; }
  inline bool SuccessThresholdHasBeenSet() const { return m_successThresholdHasBeenSet; }
  inline void SetSuccessThreshold(int value) {
    m_successThresholdHasBeenSet = true;
    m_successThreshold = value;
  }
  inline CreateApplicationStatusCheckRequest& WithSuccessThreshold(int value) {
    SetSuccessThreshold(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The HTTP status codes that indicate a successful health check response.
   * Specify a comma-separated list of individual status codes or ranges, for
   * example, <code>200,202,300-399</code>. For a range, the first value must be less
   * than the second value. Maximum length: 64 characters. Default:
   * <code>200</code>.</p>
   */
  inline const Aws::String& GetStatusCodeMatcher() const { return m_statusCodeMatcher; }
  inline bool StatusCodeMatcherHasBeenSet() const { return m_statusCodeMatcherHasBeenSet; }
  template <typename StatusCodeMatcherT = Aws::String>
  void SetStatusCodeMatcher(StatusCodeMatcherT&& value) {
    m_statusCodeMatcherHasBeenSet = true;
    m_statusCodeMatcher = std::forward<StatusCodeMatcherT>(value);
  }
  template <typename StatusCodeMatcherT = Aws::String>
  CreateApplicationStatusCheckRequest& WithStatusCodeMatcher(StatusCodeMatcherT&& value) {
    SetStatusCodeMatcher(std::forward<StatusCodeMatcherT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of seconds to wait before starting health checks after an instance
   * is launched. Valid values: 1 to 600.</p>
   */
  inline int GetInitializationGracePeriodSeconds() const { return m_initializationGracePeriodSeconds; }
  inline bool InitializationGracePeriodSecondsHasBeenSet() const { return m_initializationGracePeriodSecondsHasBeenSet; }
  inline void SetInitializationGracePeriodSeconds(int value) {
    m_initializationGracePeriodSecondsHasBeenSet = true;
    m_initializationGracePeriodSeconds = value;
  }
  inline CreateApplicationStatusCheckRequest& WithInitializationGracePeriodSeconds(int value) {
    SetInitializationGracePeriodSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags to apply to the application status check.</p>
   */
  inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const { return m_tagSpecifications; }
  inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
  template <typename TagSpecificationsT = Aws::Vector<TagSpecification>>
  void SetTagSpecifications(TagSpecificationsT&& value) {
    m_tagSpecificationsHasBeenSet = true;
    m_tagSpecifications = std::forward<TagSpecificationsT>(value);
  }
  template <typename TagSpecificationsT = Aws::Vector<TagSpecification>>
  CreateApplicationStatusCheckRequest& WithTagSpecifications(TagSpecificationsT&& value) {
    SetTagSpecifications(std::forward<TagSpecificationsT>(value));
    return *this;
  }
  template <typename TagSpecificationsT = TagSpecification>
  CreateApplicationStatusCheckRequest& AddTagSpecifications(TagSpecificationsT&& value) {
    m_tagSpecificationsHasBeenSet = true;
    m_tagSpecifications.emplace_back(std::forward<TagSpecificationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure that the
   * operation completes no more than one time. If you retry a request with the same
   * token, the service ignores the request but does not return an error. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
   * idempotency</a>.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateApplicationStatusCheckRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Checks whether you have the required permissions for the operation, without
   * actually making the request, and provides an error response. If you have the
   * required permissions, the error response is <code>DryRunOperation</code>.
   * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
   */
  inline bool GetDryRun() const { return m_dryRun; }
  inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
  inline void SetDryRun(bool value) {
    m_dryRunHasBeenSet = true;
    m_dryRun = value;
  }
  inline CreateApplicationStatusCheckRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<HealthCheckPathRequestObject> m_healthCheckPaths;

  AggregationStatusEnum m_aggregation{AggregationStatusEnum::NOT_SET};

  NetworkProtocolEnum m_protocol{NetworkProtocolEnum::NOT_SET};

  int m_port{0};

  Aws::String m_path;

  int m_deviceIndex{0};

  IpVersionEnum m_ipVersion{IpVersionEnum::NOT_SET};

  IpScopeEnum m_ipScope{IpScopeEnum::NOT_SET};

  int m_interval{0};

  int m_timeout{0};

  int m_failureThreshold{0};

  int m_successThreshold{0};

  Aws::String m_statusCodeMatcher;

  int m_initializationGracePeriodSeconds{0};

  Aws::Vector<TagSpecification> m_tagSpecifications;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  bool m_dryRun{false};
  bool m_healthCheckPathsHasBeenSet = false;
  bool m_aggregationHasBeenSet = false;
  bool m_protocolHasBeenSet = false;
  bool m_portHasBeenSet = false;
  bool m_pathHasBeenSet = false;
  bool m_deviceIndexHasBeenSet = false;
  bool m_ipVersionHasBeenSet = false;
  bool m_ipScopeHasBeenSet = false;
  bool m_intervalHasBeenSet = false;
  bool m_timeoutHasBeenSet = false;
  bool m_failureThresholdHasBeenSet = false;
  bool m_successThresholdHasBeenSet = false;
  bool m_statusCodeMatcherHasBeenSet = false;
  bool m_initializationGracePeriodSecondsHasBeenSet = false;
  bool m_tagSpecificationsHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_dryRunHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
