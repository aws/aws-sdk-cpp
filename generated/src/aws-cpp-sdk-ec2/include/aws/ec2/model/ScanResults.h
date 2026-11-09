/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/SeverityLabel.h>

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
 * <p>The Amazon Inspector scan results for an AMI. This information is present
 * only for AMIs that Amazon Inspector has scanned.</p> <p>When you share an AMI
 * with other accounts, organizations, or organizational units (OUs), or make it
 * public, its scan results are available to the accounts that can use the AMI.</p>
 * <p>The fix-available dates are specific to the AMI. Each date reflects when a
 * fix became available for a finding on that AMI, not when the vendor released the
 * fix. As a result, a date can be later than the vendor's release date, and AMIs
 * with the same vulnerability can have different dates.</p><p><h3>See Also:</h3>
 * <a href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ScanResults">AWS
 * API Reference</a></p>
 */
class ScanResults {
 public:
  AWS_EC2_API ScanResults() = default;
  AWS_EC2_API ScanResults(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API ScanResults& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The highest severity among the AMI's Amazon Inspector findings, whether or
   * not a fix is available.</p> <p>The valid values are the following Amazon
   * Inspector severity levels, which correspond to CVSS score ranges:</p> <ul> <li>
   * <p> <code>informational</code> - CVSS score of 0.</p> </li> <li> <p>
   * <code>low</code> - CVSS score of 0.1 to 3.9.</p> </li> <li> <p>
   * <code>medium</code> - CVSS score of 4.0 to 6.9.</p> </li> <li> <p>
   * <code>high</code> - CVSS score of 7.0 to 8.9.</p> </li> <li> <p>
   * <code>critical</code> - CVSS score of 9.0 to 10.0.</p> </li> </ul> <p>For more
   * information, see <a
   * href="https://docs.aws.amazon.com/inspector/latest/user/findings-understanding-severity.html#findings-understanding-package-score">Software
   * package vulnerability severity</a> in the <i>Amazon Inspector User
   * Guide</i>.</p> <p>This value is present only if the AMI has at least one
   * finding.</p>
   */
  inline SeverityLabel GetHighestFindingSeverityLabel() const { return m_highestFindingSeverityLabel; }
  inline bool HighestFindingSeverityLabelHasBeenSet() const { return m_highestFindingSeverityLabelHasBeenSet; }
  inline void SetHighestFindingSeverityLabel(SeverityLabel value) {
    m_highestFindingSeverityLabelHasBeenSet = true;
    m_highestFindingSeverityLabel = value;
  }
  inline ScanResults& WithHighestFindingSeverityLabel(SeverityLabel value) {
    SetHighestFindingSeverityLabel(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time, in the ISO 8601 format in the UTC time zone
   * (YYYY-MM-DDThh:mm:ss.sssZ), of the most recent Amazon Inspector scan of the
   * AMI.</p>
   */
  inline const Aws::Utils::DateTime& GetFindingScanDate() const { return m_findingScanDate; }
  inline bool FindingScanDateHasBeenSet() const { return m_findingScanDateHasBeenSet; }
  template <typename FindingScanDateT = Aws::Utils::DateTime>
  void SetFindingScanDate(FindingScanDateT&& value) {
    m_findingScanDateHasBeenSet = true;
    m_findingScanDate = std::forward<FindingScanDateT>(value);
  }
  template <typename FindingScanDateT = Aws::Utils::DateTime>
  ScanResults& WithFindingScanDate(FindingScanDateT&& value) {
    SetFindingScanDate(std::forward<FindingScanDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The earliest date and time, in the ISO 8601 format in the UTC time zone
   * (YYYY-MM-DDThh:mm:ss.sssZ), at which Amazon Inspector reported a fix as
   * available for an <code>informational</code> severity finding on the AMI. This
   * value is present only if the AMI has at least one <code>informational</code>
   * severity finding with a fix available. Amazon Inspector recomputes this value on
   * each scan.</p>
   */
  inline const Aws::Utils::DateTime& GetInformationalFixAvailableSince() const { return m_informationalFixAvailableSince; }
  inline bool InformationalFixAvailableSinceHasBeenSet() const { return m_informationalFixAvailableSinceHasBeenSet; }
  template <typename InformationalFixAvailableSinceT = Aws::Utils::DateTime>
  void SetInformationalFixAvailableSince(InformationalFixAvailableSinceT&& value) {
    m_informationalFixAvailableSinceHasBeenSet = true;
    m_informationalFixAvailableSince = std::forward<InformationalFixAvailableSinceT>(value);
  }
  template <typename InformationalFixAvailableSinceT = Aws::Utils::DateTime>
  ScanResults& WithInformationalFixAvailableSince(InformationalFixAvailableSinceT&& value) {
    SetInformationalFixAvailableSince(std::forward<InformationalFixAvailableSinceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The earliest date and time, in the ISO 8601 format in the UTC time zone
   * (YYYY-MM-DDThh:mm:ss.sssZ), at which Amazon Inspector reported a fix as
   * available for a <code>low</code> severity finding on the AMI. This value is
   * present only if the AMI has at least one <code>low</code> severity finding with
   * a fix available. Amazon Inspector recomputes this value on each scan.</p>
   */
  inline const Aws::Utils::DateTime& GetLowFixAvailableSince() const { return m_lowFixAvailableSince; }
  inline bool LowFixAvailableSinceHasBeenSet() const { return m_lowFixAvailableSinceHasBeenSet; }
  template <typename LowFixAvailableSinceT = Aws::Utils::DateTime>
  void SetLowFixAvailableSince(LowFixAvailableSinceT&& value) {
    m_lowFixAvailableSinceHasBeenSet = true;
    m_lowFixAvailableSince = std::forward<LowFixAvailableSinceT>(value);
  }
  template <typename LowFixAvailableSinceT = Aws::Utils::DateTime>
  ScanResults& WithLowFixAvailableSince(LowFixAvailableSinceT&& value) {
    SetLowFixAvailableSince(std::forward<LowFixAvailableSinceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The earliest date and time, in the ISO 8601 format in the UTC time zone
   * (YYYY-MM-DDThh:mm:ss.sssZ), at which Amazon Inspector reported a fix as
   * available for a <code>medium</code> severity finding on the AMI. This value is
   * present only if the AMI has at least one <code>medium</code> severity finding
   * with a fix available. Amazon Inspector recomputes this value on each scan.</p>
   */
  inline const Aws::Utils::DateTime& GetMediumFixAvailableSince() const { return m_mediumFixAvailableSince; }
  inline bool MediumFixAvailableSinceHasBeenSet() const { return m_mediumFixAvailableSinceHasBeenSet; }
  template <typename MediumFixAvailableSinceT = Aws::Utils::DateTime>
  void SetMediumFixAvailableSince(MediumFixAvailableSinceT&& value) {
    m_mediumFixAvailableSinceHasBeenSet = true;
    m_mediumFixAvailableSince = std::forward<MediumFixAvailableSinceT>(value);
  }
  template <typename MediumFixAvailableSinceT = Aws::Utils::DateTime>
  ScanResults& WithMediumFixAvailableSince(MediumFixAvailableSinceT&& value) {
    SetMediumFixAvailableSince(std::forward<MediumFixAvailableSinceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The earliest date and time, in the ISO 8601 format in the UTC time zone
   * (YYYY-MM-DDThh:mm:ss.sssZ), at which Amazon Inspector reported a fix as
   * available for a <code>high</code> severity finding on the AMI. This value is
   * present only if the AMI has at least one <code>high</code> severity finding with
   * a fix available. Amazon Inspector recomputes this value on each scan.</p>
   */
  inline const Aws::Utils::DateTime& GetHighFixAvailableSince() const { return m_highFixAvailableSince; }
  inline bool HighFixAvailableSinceHasBeenSet() const { return m_highFixAvailableSinceHasBeenSet; }
  template <typename HighFixAvailableSinceT = Aws::Utils::DateTime>
  void SetHighFixAvailableSince(HighFixAvailableSinceT&& value) {
    m_highFixAvailableSinceHasBeenSet = true;
    m_highFixAvailableSince = std::forward<HighFixAvailableSinceT>(value);
  }
  template <typename HighFixAvailableSinceT = Aws::Utils::DateTime>
  ScanResults& WithHighFixAvailableSince(HighFixAvailableSinceT&& value) {
    SetHighFixAvailableSince(std::forward<HighFixAvailableSinceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The earliest date and time, in the ISO 8601 format in the UTC time zone
   * (YYYY-MM-DDThh:mm:ss.sssZ), at which Amazon Inspector reported a fix as
   * available for a <code>critical</code> severity finding on the AMI. This value is
   * present only if the AMI has at least one <code>critical</code> severity finding
   * with a fix available. Amazon Inspector recomputes this value on each scan.</p>
   */
  inline const Aws::Utils::DateTime& GetCriticalFixAvailableSince() const { return m_criticalFixAvailableSince; }
  inline bool CriticalFixAvailableSinceHasBeenSet() const { return m_criticalFixAvailableSinceHasBeenSet; }
  template <typename CriticalFixAvailableSinceT = Aws::Utils::DateTime>
  void SetCriticalFixAvailableSince(CriticalFixAvailableSinceT&& value) {
    m_criticalFixAvailableSinceHasBeenSet = true;
    m_criticalFixAvailableSince = std::forward<CriticalFixAvailableSinceT>(value);
  }
  template <typename CriticalFixAvailableSinceT = Aws::Utils::DateTime>
  ScanResults& WithCriticalFixAvailableSince(CriticalFixAvailableSinceT&& value) {
    SetCriticalFixAvailableSince(std::forward<CriticalFixAvailableSinceT>(value));
    return *this;
  }
  ///@}
 private:
  SeverityLabel m_highestFindingSeverityLabel{SeverityLabel::NOT_SET};

  Aws::Utils::DateTime m_findingScanDate{};

  Aws::Utils::DateTime m_informationalFixAvailableSince{};

  Aws::Utils::DateTime m_lowFixAvailableSince{};

  Aws::Utils::DateTime m_mediumFixAvailableSince{};

  Aws::Utils::DateTime m_highFixAvailableSince{};

  Aws::Utils::DateTime m_criticalFixAvailableSince{};
  bool m_highestFindingSeverityLabelHasBeenSet = false;
  bool m_findingScanDateHasBeenSet = false;
  bool m_informationalFixAvailableSinceHasBeenSet = false;
  bool m_lowFixAvailableSinceHasBeenSet = false;
  bool m_mediumFixAvailableSinceHasBeenSet = false;
  bool m_highFixAvailableSinceHasBeenSet = false;
  bool m_criticalFixAvailableSinceHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
