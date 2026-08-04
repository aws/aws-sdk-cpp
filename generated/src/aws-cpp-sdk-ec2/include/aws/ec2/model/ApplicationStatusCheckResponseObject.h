/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/AggregationStatusEnum.h>
#include <aws/ec2/model/CustomTagKeyValueResponsePair.h>
#include <aws/ec2/model/HealthCheckPathResponseObject.h>
#include <aws/ec2/model/IpScopeEnum.h>
#include <aws/ec2/model/IpVersionEnum.h>
#include <aws/ec2/model/NetworkProtocolEnum.h>
#include <aws/ec2/model/Tag.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace EC2 {
namespace Model {

/**
 * <p>Describes an application status check.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ApplicationStatusCheckResponseObject">AWS
 * API Reference</a></p>
 */
class ApplicationStatusCheckResponseObject {
 public:
  AWS_EC2_API ApplicationStatusCheckResponseObject() = default;
  AWS_EC2_API ApplicationStatusCheckResponseObject(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API ApplicationStatusCheckResponseObject& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The ID of the application status check.</p>
   */
  inline const Aws::String& GetApplicationStatusCheckId() const { return m_applicationStatusCheckId; }
  inline bool ApplicationStatusCheckIdHasBeenSet() const { return m_applicationStatusCheckIdHasBeenSet; }
  template <typename ApplicationStatusCheckIdT = Aws::String>
  void SetApplicationStatusCheckId(ApplicationStatusCheckIdT&& value) {
    m_applicationStatusCheckIdHasBeenSet = true;
    m_applicationStatusCheckId = std::forward<ApplicationStatusCheckIdT>(value);
  }
  template <typename ApplicationStatusCheckIdT = Aws::String>
  ApplicationStatusCheckResponseObject& WithApplicationStatusCheckId(ApplicationStatusCheckIdT&& value) {
    SetApplicationStatusCheckId(std::forward<ApplicationStatusCheckIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The aggregation setting for the application status check. When set to
   * <code>included</code>, the result of this check contributes to the
   * instance-level application status. When set to <code>excluded</code>, the check
   * runs independently and does not affect the instance-level status.</p>
   */
  inline AggregationStatusEnum GetAggregation() const { return m_aggregation; }
  inline bool AggregationHasBeenSet() const { return m_aggregationHasBeenSet; }
  inline void SetAggregation(AggregationStatusEnum value) {
    m_aggregationHasBeenSet = true;
    m_aggregation = value;
  }
  inline ApplicationStatusCheckResponseObject& WithAggregation(AggregationStatusEnum value) {
    SetAggregation(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The health check paths for the application status check.</p>
   */
  inline const Aws::Vector<HealthCheckPathResponseObject>& GetHealthCheckPaths() const { return m_healthCheckPaths; }
  inline bool HealthCheckPathsHasBeenSet() const { return m_healthCheckPathsHasBeenSet; }
  template <typename HealthCheckPathsT = Aws::Vector<HealthCheckPathResponseObject>>
  void SetHealthCheckPaths(HealthCheckPathsT&& value) {
    m_healthCheckPathsHasBeenSet = true;
    m_healthCheckPaths = std::forward<HealthCheckPathsT>(value);
  }
  template <typename HealthCheckPathsT = Aws::Vector<HealthCheckPathResponseObject>>
  ApplicationStatusCheckResponseObject& WithHealthCheckPaths(HealthCheckPathsT&& value) {
    SetHealthCheckPaths(std::forward<HealthCheckPathsT>(value));
    return *this;
  }
  template <typename HealthCheckPathsT = HealthCheckPathResponseObject>
  ApplicationStatusCheckResponseObject& AddHealthCheckPaths(HealthCheckPathsT&& value) {
    m_healthCheckPathsHasBeenSet = true;
    m_healthCheckPaths.emplace_back(std::forward<HealthCheckPathsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The protocol used for the health check.</p>
   */
  inline NetworkProtocolEnum GetProtocol() const { return m_protocol; }
  inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
  inline void SetProtocol(NetworkProtocolEnum value) {
    m_protocolHasBeenSet = true;
    m_protocol = value;
  }
  inline ApplicationStatusCheckResponseObject& WithProtocol(NetworkProtocolEnum value) {
    SetProtocol(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The port used for the health check.</p>
   */
  inline int GetPort() const { return m_port; }
  inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
  inline void SetPort(int value) {
    m_portHasBeenSet = true;
    m_port = value;
  }
  inline ApplicationStatusCheckResponseObject& WithPort(int value) {
    SetPort(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL path used for the health check HTTP request.</p>
   */
  inline const Aws::String& GetPath() const { return m_path; }
  inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
  template <typename PathT = Aws::String>
  void SetPath(PathT&& value) {
    m_pathHasBeenSet = true;
    m_path = std::forward<PathT>(value);
  }
  template <typename PathT = Aws::String>
  ApplicationStatusCheckResponseObject& WithPath(PathT&& value) {
    SetPath(std::forward<PathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The index of the network device used for the health check. The value is
   * greater than or equal to 0.</p>
   */
  inline int GetDeviceIndex() const { return m_deviceIndex; }
  inline bool DeviceIndexHasBeenSet() const { return m_deviceIndexHasBeenSet; }
  inline void SetDeviceIndex(int value) {
    m_deviceIndexHasBeenSet = true;
    m_deviceIndex = value;
  }
  inline ApplicationStatusCheckResponseObject& WithDeviceIndex(int value) {
    SetDeviceIndex(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IP version used for the health check.</p>
   */
  inline IpVersionEnum GetIpVersion() const { return m_ipVersion; }
  inline bool IpVersionHasBeenSet() const { return m_ipVersionHasBeenSet; }
  inline void SetIpVersion(IpVersionEnum value) {
    m_ipVersionHasBeenSet = true;
    m_ipVersion = value;
  }
  inline ApplicationStatusCheckResponseObject& WithIpVersion(IpVersionEnum value) {
    SetIpVersion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IP scope used for the health check.</p>
   */
  inline IpScopeEnum GetIpScope() const { return m_ipScope; }
  inline bool IpScopeHasBeenSet() const { return m_ipScopeHasBeenSet; }
  inline void SetIpScope(IpScopeEnum value) {
    m_ipScopeHasBeenSet = true;
    m_ipScope = value;
  }
  inline ApplicationStatusCheckResponseObject& WithIpScope(IpScopeEnum value) {
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
  inline ApplicationStatusCheckResponseObject& WithInterval(int value) {
    SetInterval(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The amount of time, in seconds, to wait for a health check response. Valid
   * values: 1 to 30.</p>
   */
  inline int GetTimeout() const { return m_timeout; }
  inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }
  inline void SetTimeout(int value) {
    m_timeoutHasBeenSet = true;
    m_timeout = value;
  }
  inline ApplicationStatusCheckResponseObject& WithTimeout(int value) {
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
  inline ApplicationStatusCheckResponseObject& WithFailureThreshold(int value) {
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
  inline ApplicationStatusCheckResponseObject& WithSuccessThreshold(int value) {
    SetSuccessThreshold(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The comma-separated list of individual HTTP status codes or ranges that
   * indicate a successful health check response.</p>
   */
  inline const Aws::String& GetStatusCodeMatcher() const { return m_statusCodeMatcher; }
  inline bool StatusCodeMatcherHasBeenSet() const { return m_statusCodeMatcherHasBeenSet; }
  template <typename StatusCodeMatcherT = Aws::String>
  void SetStatusCodeMatcher(StatusCodeMatcherT&& value) {
    m_statusCodeMatcherHasBeenSet = true;
    m_statusCodeMatcher = std::forward<StatusCodeMatcherT>(value);
  }
  template <typename StatusCodeMatcherT = Aws::String>
  ApplicationStatusCheckResponseObject& WithStatusCodeMatcher(StatusCodeMatcherT&& value) {
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
  inline ApplicationStatusCheckResponseObject& WithInitializationGracePeriodSeconds(int value) {
    SetInitializationGracePeriodSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the application status check was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
  inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
  template <typename LastUpdatedAtT = Aws::Utils::DateTime>
  void SetLastUpdatedAt(LastUpdatedAtT&& value) {
    m_lastUpdatedAtHasBeenSet = true;
    m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value);
  }
  template <typename LastUpdatedAtT = Aws::Utils::DateTime>
  ApplicationStatusCheckResponseObject& WithLastUpdatedAt(LastUpdatedAtT&& value) {
    SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html">tags</a>
   * associated with the application status check. Instances with these tags are
   * automatically monitored by this check.</p>
   */
  inline const Aws::Vector<CustomTagKeyValueResponsePair>& GetTargetTagAssociations() const { return m_targetTagAssociations; }
  inline bool TargetTagAssociationsHasBeenSet() const { return m_targetTagAssociationsHasBeenSet; }
  template <typename TargetTagAssociationsT = Aws::Vector<CustomTagKeyValueResponsePair>>
  void SetTargetTagAssociations(TargetTagAssociationsT&& value) {
    m_targetTagAssociationsHasBeenSet = true;
    m_targetTagAssociations = std::forward<TargetTagAssociationsT>(value);
  }
  template <typename TargetTagAssociationsT = Aws::Vector<CustomTagKeyValueResponsePair>>
  ApplicationStatusCheckResponseObject& WithTargetTagAssociations(TargetTagAssociationsT&& value) {
    SetTargetTagAssociations(std::forward<TargetTagAssociationsT>(value));
    return *this;
  }
  template <typename TargetTagAssociationsT = CustomTagKeyValueResponsePair>
  ApplicationStatusCheckResponseObject& AddTargetTagAssociations(TargetTagAssociationsT&& value) {
    m_targetTagAssociationsHasBeenSet = true;
    m_targetTagAssociations.emplace_back(std::forward<TargetTagAssociationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags assigned to the application status check.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  ApplicationStatusCheckResponseObject& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  ApplicationStatusCheckResponseObject& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the application status check was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  ApplicationStatusCheckResponseObject& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the application status check was last modified.</p>
   */
  inline const Aws::Utils::DateTime& GetModifyTime() const { return m_modifyTime; }
  inline bool ModifyTimeHasBeenSet() const { return m_modifyTimeHasBeenSet; }
  template <typename ModifyTimeT = Aws::Utils::DateTime>
  void SetModifyTime(ModifyTimeT&& value) {
    m_modifyTimeHasBeenSet = true;
    m_modifyTime = std::forward<ModifyTimeT>(value);
  }
  template <typename ModifyTimeT = Aws::Utils::DateTime>
  ApplicationStatusCheckResponseObject& WithModifyTime(ModifyTimeT&& value) {
    SetModifyTime(std::forward<ModifyTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the application status check was deleted.</p>
   */
  inline const Aws::Utils::DateTime& GetDeletionTime() const { return m_deletionTime; }
  inline bool DeletionTimeHasBeenSet() const { return m_deletionTimeHasBeenSet; }
  template <typename DeletionTimeT = Aws::Utils::DateTime>
  void SetDeletionTime(DeletionTimeT&& value) {
    m_deletionTimeHasBeenSet = true;
    m_deletionTime = std::forward<DeletionTimeT>(value);
  }
  template <typename DeletionTimeT = Aws::Utils::DateTime>
  ApplicationStatusCheckResponseObject& WithDeletionTime(DeletionTimeT&& value) {
    SetDeletionTime(std::forward<DeletionTimeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_applicationStatusCheckId;

  AggregationStatusEnum m_aggregation{AggregationStatusEnum::NOT_SET};

  Aws::Vector<HealthCheckPathResponseObject> m_healthCheckPaths;

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

  Aws::Utils::DateTime m_lastUpdatedAt{};

  Aws::Vector<CustomTagKeyValueResponsePair> m_targetTagAssociations;

  Aws::Vector<Tag> m_tags;

  Aws::Utils::DateTime m_creationTime{};

  Aws::Utils::DateTime m_modifyTime{};

  Aws::Utils::DateTime m_deletionTime{};
  bool m_applicationStatusCheckIdHasBeenSet = false;
  bool m_aggregationHasBeenSet = false;
  bool m_healthCheckPathsHasBeenSet = false;
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
  bool m_lastUpdatedAtHasBeenSet = false;
  bool m_targetTagAssociationsHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
  bool m_modifyTimeHasBeenSet = false;
  bool m_deletionTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
