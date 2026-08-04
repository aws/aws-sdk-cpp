/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/AggregationStatusEnum.h>
#include <aws/ec2/model/ApplicationStatusCheckEnum.h>
#include <aws/ec2/model/ApplicationStatusReason.h>

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
 * <p>Describes the details of an application status check for an
 * instance.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ApplicationStatusDetail">AWS
 * API Reference</a></p>
 */
class ApplicationStatusDetail {
 public:
  AWS_EC2_API ApplicationStatusDetail() = default;
  AWS_EC2_API ApplicationStatusDetail(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API ApplicationStatusDetail& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

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
  ApplicationStatusDetail& WithApplicationStatusCheckId(ApplicationStatusCheckIdT&& value) {
    SetApplicationStatusCheckId(std::forward<ApplicationStatusCheckIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the check was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetCheckUpdateTime() const { return m_checkUpdateTime; }
  inline bool CheckUpdateTimeHasBeenSet() const { return m_checkUpdateTimeHasBeenSet; }
  template <typename CheckUpdateTimeT = Aws::Utils::DateTime>
  void SetCheckUpdateTime(CheckUpdateTimeT&& value) {
    m_checkUpdateTimeHasBeenSet = true;
    m_checkUpdateTime = std::forward<CheckUpdateTimeT>(value);
  }
  template <typename CheckUpdateTimeT = Aws::Utils::DateTime>
  ApplicationStatusDetail& WithCheckUpdateTime(CheckUpdateTimeT&& value) {
    SetCheckUpdateTime(std::forward<CheckUpdateTimeT>(value));
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
  inline ApplicationStatusDetail& WithAggregation(AggregationStatusEnum value) {
    SetAggregation(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the individual application status check. Possible values:</p>
   * <ul> <li> <p> <code>passed</code> – The check reached its success threshold.</p>
   * </li> <li> <p> <code>failed</code> – The check reached its failure
   * threshold.</p> </li> <li> <p> <code>initializing</code> – The check is
   * initializing or has not reached a success or failure threshold.</p> </li> <li>
   * <p> <code>insufficient-data</code> – The check does not have enough data to
   * determine a result.</p> </li> <li> <p> <code>not-applicable</code> – The check
   * does not apply to the instance.</p> </li> </ul> <p>This value reflects the check
   * result and is not affected by aggregation or suppression.</p>
   */
  inline ApplicationStatusCheckEnum GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ApplicationStatusCheckEnum value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ApplicationStatusDetail& WithStatus(ApplicationStatusCheckEnum value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time of the last status update for this check.</p>
   */
  inline const Aws::Utils::DateTime& GetStatusTimeStamp() const { return m_statusTimeStamp; }
  inline bool StatusTimeStampHasBeenSet() const { return m_statusTimeStampHasBeenSet; }
  template <typename StatusTimeStampT = Aws::Utils::DateTime>
  void SetStatusTimeStamp(StatusTimeStampT&& value) {
    m_statusTimeStampHasBeenSet = true;
    m_statusTimeStamp = std::forward<StatusTimeStampT>(value);
  }
  template <typename StatusTimeStampT = Aws::Utils::DateTime>
  ApplicationStatusDetail& WithStatusTimeStamp(StatusTimeStampT&& value) {
    SetStatusTimeStamp(std::forward<StatusTimeStampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the current status started for this check.</p>
   */
  inline const Aws::Utils::DateTime& GetStatusSince() const { return m_statusSince; }
  inline bool StatusSinceHasBeenSet() const { return m_statusSinceHasBeenSet; }
  template <typename StatusSinceT = Aws::Utils::DateTime>
  void SetStatusSince(StatusSinceT&& value) {
    m_statusSinceHasBeenSet = true;
    m_statusSince = std::forward<StatusSinceT>(value);
  }
  template <typename StatusSinceT = Aws::Utils::DateTime>
  ApplicationStatusDetail& WithStatusSince(StatusSinceT&& value) {
    SetStatusSince(std::forward<StatusSinceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason for the current status.</p>
   */
  inline const ApplicationStatusReason& GetReason() const { return m_reason; }
  inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
  template <typename ReasonT = ApplicationStatusReason>
  void SetReason(ReasonT&& value) {
    m_reasonHasBeenSet = true;
    m_reason = std::forward<ReasonT>(value);
  }
  template <typename ReasonT = ApplicationStatusReason>
  ApplicationStatusDetail& WithReason(ReasonT&& value) {
    SetReason(std::forward<ReasonT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_applicationStatusCheckId;

  Aws::Utils::DateTime m_checkUpdateTime{};

  AggregationStatusEnum m_aggregation{AggregationStatusEnum::NOT_SET};

  ApplicationStatusCheckEnum m_status{ApplicationStatusCheckEnum::NOT_SET};

  Aws::Utils::DateTime m_statusTimeStamp{};

  Aws::Utils::DateTime m_statusSince{};

  ApplicationStatusReason m_reason;
  bool m_applicationStatusCheckIdHasBeenSet = false;
  bool m_checkUpdateTimeHasBeenSet = false;
  bool m_aggregationHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_statusTimeStampHasBeenSet = false;
  bool m_statusSinceHasBeenSet = false;
  bool m_reasonHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
