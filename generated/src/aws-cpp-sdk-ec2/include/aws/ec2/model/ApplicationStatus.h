/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/ApplicationStatusDetail.h>
#include <aws/ec2/model/ApplicationStatusEnum.h>

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
 * <p>Describes the application-level health status for an instance.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ApplicationStatus">AWS
 * API Reference</a></p>
 */
class ApplicationStatus {
 public:
  AWS_EC2_API ApplicationStatus() = default;
  AWS_EC2_API ApplicationStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API ApplicationStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The current instance-level application status. This status is derived from
   * application status checks with <code>Aggregation</code> set to
   * <code>included</code>. Possible values:</p> <ul> <li> <p> <code>ok</code> – All
   * included checks passed.</p> </li> <li> <p> <code>impaired</code> – At least one
   * included check failed.</p> </li> <li> <p> <code>initializing</code> – At least
   * one included check is initializing, and no included check is impaired.</p> </li>
   * <li> <p> <code>insufficient-data</code> – At least one included check has
   * insufficient data, and no included check is impaired or initializing.</p> </li>
   * <li> <p> <code>not-applicable</code> – No checks with <code>Aggregation</code>
   * set to <code>included</code> apply to the instance.</p> </li> <li> <p>
   * <code>suppressed</code> – Application status reporting is suppressed for the
   * instance.</p> </li> </ul> <p>Checks with <code>Aggregation</code> set to
   * <code>excluded</code> do not affect this value.</p>
   */
  inline ApplicationStatusEnum GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ApplicationStatusEnum value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ApplicationStatus& WithStatus(ApplicationStatusEnum value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time of the last status update.</p>
   */
  inline const Aws::Utils::DateTime& GetStatusTimeStamp() const { return m_statusTimeStamp; }
  inline bool StatusTimeStampHasBeenSet() const { return m_statusTimeStampHasBeenSet; }
  template <typename StatusTimeStampT = Aws::Utils::DateTime>
  void SetStatusTimeStamp(StatusTimeStampT&& value) {
    m_statusTimeStampHasBeenSet = true;
    m_statusTimeStamp = std::forward<StatusTimeStampT>(value);
  }
  template <typename StatusTimeStampT = Aws::Utils::DateTime>
  ApplicationStatus& WithStatusTimeStamp(StatusTimeStampT&& value) {
    SetStatusTimeStamp(std::forward<StatusTimeStampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the current status started.</p>
   */
  inline const Aws::Utils::DateTime& GetStatusSince() const { return m_statusSince; }
  inline bool StatusSinceHasBeenSet() const { return m_statusSinceHasBeenSet; }
  template <typename StatusSinceT = Aws::Utils::DateTime>
  void SetStatusSince(StatusSinceT&& value) {
    m_statusSinceHasBeenSet = true;
    m_statusSince = std::forward<StatusSinceT>(value);
  }
  template <typename StatusSinceT = Aws::Utils::DateTime>
  ApplicationStatus& WithStatusSince(StatusSinceT&& value) {
    SetStatusSince(std::forward<StatusSinceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when application status reporting resumes after
   * suppression.</p>
   */
  inline const Aws::Utils::DateTime& GetResumeAt() const { return m_resumeAt; }
  inline bool ResumeAtHasBeenSet() const { return m_resumeAtHasBeenSet; }
  template <typename ResumeAtT = Aws::Utils::DateTime>
  void SetResumeAt(ResumeAtT&& value) {
    m_resumeAtHasBeenSet = true;
    m_resumeAt = std::forward<ResumeAtT>(value);
  }
  template <typename ResumeAtT = Aws::Utils::DateTime>
  ApplicationStatus& WithResumeAt(ResumeAtT&& value) {
    SetResumeAt(std::forward<ResumeAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about the application status checks for the instance.</p>
   */
  inline const Aws::Vector<ApplicationStatusDetail>& GetDetails() const { return m_details; }
  inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }
  template <typename DetailsT = Aws::Vector<ApplicationStatusDetail>>
  void SetDetails(DetailsT&& value) {
    m_detailsHasBeenSet = true;
    m_details = std::forward<DetailsT>(value);
  }
  template <typename DetailsT = Aws::Vector<ApplicationStatusDetail>>
  ApplicationStatus& WithDetails(DetailsT&& value) {
    SetDetails(std::forward<DetailsT>(value));
    return *this;
  }
  template <typename DetailsT = ApplicationStatusDetail>
  ApplicationStatus& AddDetails(DetailsT&& value) {
    m_detailsHasBeenSet = true;
    m_details.emplace_back(std::forward<DetailsT>(value));
    return *this;
  }
  ///@}
 private:
  ApplicationStatusEnum m_status{ApplicationStatusEnum::NOT_SET};

  Aws::Utils::DateTime m_statusTimeStamp{};

  Aws::Utils::DateTime m_statusSince{};

  Aws::Utils::DateTime m_resumeAt{};

  Aws::Vector<ApplicationStatusDetail> m_details;
  bool m_statusHasBeenSet = false;
  bool m_statusTimeStampHasBeenSet = false;
  bool m_statusSinceHasBeenSet = false;
  bool m_resumeAtHasBeenSet = false;
  bool m_detailsHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
