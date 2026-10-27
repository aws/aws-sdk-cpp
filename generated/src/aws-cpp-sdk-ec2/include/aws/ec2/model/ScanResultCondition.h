/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
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
 * <p>The Amazon Inspector scan-result criteria that an AMI must meet to be
 * allowed. The criteria can limit the highest finding severity. They can also
 * limit, for each severity, the days since Amazon Inspector reported a fix as
 * available.</p> <p>The severity limit applies to all findings, whether or not a
 * fix is available. The day limits for each severity apply only to findings that
 * have a fix available. A scanned AMI that has no fix-available finding of a given
 * severity meets that severity's day limit. AMIs that Amazon Inspector has not
 * scanned are not allowed when you specify this condition.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ScanResultCondition">AWS
 * API Reference</a></p>
 */
class ScanResultCondition {
 public:
  AWS_EC2_API ScanResultCondition() = default;
  AWS_EC2_API ScanResultCondition(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API ScanResultCondition& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The maximum number of days that have elapsed since Amazon Inspector last
   * scanned the AMI. For example, a value of <code>7</code> allows AMIs that were
   * scanned within the last 7 days. AMIs that Amazon Inspector has not scanned are
   * not allowed.</p> <p>Constraints: Minimum value of 0. Maximum value of
   * 2147483647.</p>
   */
  inline int GetMaxDaysSinceLastFindingScan() const { return m_maxDaysSinceLastFindingScan; }
  inline bool MaxDaysSinceLastFindingScanHasBeenSet() const { return m_maxDaysSinceLastFindingScanHasBeenSet; }
  inline void SetMaxDaysSinceLastFindingScan(int value) {
    m_maxDaysSinceLastFindingScanHasBeenSet = true;
    m_maxDaysSinceLastFindingScan = value;
  }
  inline ScanResultCondition& WithMaxDaysSinceLastFindingScan(int value) {
    SetMaxDaysSinceLastFindingScan(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum severity that an AMI's Amazon Inspector findings can have for the
   * AMI to be allowed. Findings count whether or not a fix is available. For
   * example, a value of <code>medium</code> allows AMIs whose highest severity is
   * <code>informational</code>, <code>low</code>, or <code>medium</code>.</p> <p>The
   * valid values are the following Amazon Inspector severity levels, which
   * correspond to CVSS score ranges:</p> <ul> <li> <p> <code>informational</code> -
   * CVSS score of 0.</p> </li> <li> <p> <code>low</code> - CVSS score of 0.1 to
   * 3.9.</p> </li> <li> <p> <code>medium</code> - CVSS score of 4.0 to 6.9.</p>
   * </li> <li> <p> <code>high</code> - CVSS score of 7.0 to 8.9.</p> </li> <li> <p>
   * <code>critical</code> - CVSS score of 9.0 to 10.0.</p> </li> </ul> <p>For more
   * information, see <a
   * href="https://docs.aws.amazon.com/inspector/latest/user/findings-understanding-severity.html#findings-understanding-package-score">Software
   * package vulnerability severity</a> in the <i>Amazon Inspector User
   * Guide</i>.</p> <p>A scanned AMI that has no findings meets this limit.</p>
   * <p>AMIs that Amazon Inspector has not scanned are not allowed when you specify
   * this condition.</p>
   */
  inline SeverityLabel GetMaximumSeverityLabel() const { return m_maximumSeverityLabel; }
  inline bool MaximumSeverityLabelHasBeenSet() const { return m_maximumSeverityLabelHasBeenSet; }
  inline void SetMaximumSeverityLabel(SeverityLabel value) {
    m_maximumSeverityLabelHasBeenSet = true;
    m_maximumSeverityLabel = value;
  }
  inline ScanResultCondition& WithMaximumSeverityLabel(SeverityLabel value) {
    SetMaximumSeverityLabel(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of days since Amazon Inspector reported a fix as available
   * for an <code>informational</code> severity finding on the AMI. For example, a
   * value of <code>7</code> does not allow an AMI if Amazon Inspector reported such
   * a fix more than 7 days ago.</p> <p>A scanned AMI that has no
   * <code>informational</code> severity finding with a fix available meets this
   * limit. AMIs that Amazon Inspector has not scanned are not allowed.</p>
   * <p>Constraints: Minimum value of 0. Maximum value of 2147483647.</p>
   */
  inline int GetMaxDaysSinceInformationalFixAvailable() const { return m_maxDaysSinceInformationalFixAvailable; }
  inline bool MaxDaysSinceInformationalFixAvailableHasBeenSet() const { return m_maxDaysSinceInformationalFixAvailableHasBeenSet; }
  inline void SetMaxDaysSinceInformationalFixAvailable(int value) {
    m_maxDaysSinceInformationalFixAvailableHasBeenSet = true;
    m_maxDaysSinceInformationalFixAvailable = value;
  }
  inline ScanResultCondition& WithMaxDaysSinceInformationalFixAvailable(int value) {
    SetMaxDaysSinceInformationalFixAvailable(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of days since Amazon Inspector reported a fix as available
   * for a <code>low</code> severity finding on the AMI. For example, a value of
   * <code>7</code> does not allow an AMI if Amazon Inspector reported such a fix
   * more than 7 days ago.</p> <p>A scanned AMI that has no <code>low</code> severity
   * finding with a fix available meets this limit. AMIs that Amazon Inspector has
   * not scanned are not allowed.</p> <p>Constraints: Minimum value of 0. Maximum
   * value of 2147483647.</p>
   */
  inline int GetMaxDaysSinceLowFixAvailable() const { return m_maxDaysSinceLowFixAvailable; }
  inline bool MaxDaysSinceLowFixAvailableHasBeenSet() const { return m_maxDaysSinceLowFixAvailableHasBeenSet; }
  inline void SetMaxDaysSinceLowFixAvailable(int value) {
    m_maxDaysSinceLowFixAvailableHasBeenSet = true;
    m_maxDaysSinceLowFixAvailable = value;
  }
  inline ScanResultCondition& WithMaxDaysSinceLowFixAvailable(int value) {
    SetMaxDaysSinceLowFixAvailable(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of days since Amazon Inspector reported a fix as available
   * for a <code>medium</code> severity finding on the AMI. For example, a value of
   * <code>7</code> does not allow an AMI if Amazon Inspector reported such a fix
   * more than 7 days ago.</p> <p>A scanned AMI that has no <code>medium</code>
   * severity finding with a fix available meets this limit. AMIs that Amazon
   * Inspector has not scanned are not allowed.</p> <p>Constraints: Minimum value of
   * 0. Maximum value of 2147483647.</p>
   */
  inline int GetMaxDaysSinceMediumFixAvailable() const { return m_maxDaysSinceMediumFixAvailable; }
  inline bool MaxDaysSinceMediumFixAvailableHasBeenSet() const { return m_maxDaysSinceMediumFixAvailableHasBeenSet; }
  inline void SetMaxDaysSinceMediumFixAvailable(int value) {
    m_maxDaysSinceMediumFixAvailableHasBeenSet = true;
    m_maxDaysSinceMediumFixAvailable = value;
  }
  inline ScanResultCondition& WithMaxDaysSinceMediumFixAvailable(int value) {
    SetMaxDaysSinceMediumFixAvailable(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of days since Amazon Inspector reported a fix as available
   * for a <code>high</code> severity finding on the AMI. For example, a value of
   * <code>7</code> does not allow an AMI if Amazon Inspector reported such a fix
   * more than 7 days ago.</p> <p>A scanned AMI that has no <code>high</code>
   * severity finding with a fix available meets this limit. AMIs that Amazon
   * Inspector has not scanned are not allowed.</p> <p>Constraints: Minimum value of
   * 0. Maximum value of 2147483647.</p>
   */
  inline int GetMaxDaysSinceHighFixAvailable() const { return m_maxDaysSinceHighFixAvailable; }
  inline bool MaxDaysSinceHighFixAvailableHasBeenSet() const { return m_maxDaysSinceHighFixAvailableHasBeenSet; }
  inline void SetMaxDaysSinceHighFixAvailable(int value) {
    m_maxDaysSinceHighFixAvailableHasBeenSet = true;
    m_maxDaysSinceHighFixAvailable = value;
  }
  inline ScanResultCondition& WithMaxDaysSinceHighFixAvailable(int value) {
    SetMaxDaysSinceHighFixAvailable(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of days since Amazon Inspector reported a fix as available
   * for a <code>critical</code> severity finding on the AMI. For example, a value of
   * <code>7</code> does not allow an AMI if Amazon Inspector reported such a fix
   * more than 7 days ago.</p> <p>A scanned AMI that has no <code>critical</code>
   * severity finding with a fix available meets this limit. AMIs that Amazon
   * Inspector has not scanned are not allowed.</p> <p>Constraints: Minimum value of
   * 0. Maximum value of 2147483647.</p>
   */
  inline int GetMaxDaysSinceCriticalFixAvailable() const { return m_maxDaysSinceCriticalFixAvailable; }
  inline bool MaxDaysSinceCriticalFixAvailableHasBeenSet() const { return m_maxDaysSinceCriticalFixAvailableHasBeenSet; }
  inline void SetMaxDaysSinceCriticalFixAvailable(int value) {
    m_maxDaysSinceCriticalFixAvailableHasBeenSet = true;
    m_maxDaysSinceCriticalFixAvailable = value;
  }
  inline ScanResultCondition& WithMaxDaysSinceCriticalFixAvailable(int value) {
    SetMaxDaysSinceCriticalFixAvailable(value);
    return *this;
  }
  ///@}
 private:
  int m_maxDaysSinceLastFindingScan{0};

  SeverityLabel m_maximumSeverityLabel{SeverityLabel::NOT_SET};

  int m_maxDaysSinceInformationalFixAvailable{0};

  int m_maxDaysSinceLowFixAvailable{0};

  int m_maxDaysSinceMediumFixAvailable{0};

  int m_maxDaysSinceHighFixAvailable{0};

  int m_maxDaysSinceCriticalFixAvailable{0};
  bool m_maxDaysSinceLastFindingScanHasBeenSet = false;
  bool m_maximumSeverityLabelHasBeenSet = false;
  bool m_maxDaysSinceInformationalFixAvailableHasBeenSet = false;
  bool m_maxDaysSinceLowFixAvailableHasBeenSet = false;
  bool m_maxDaysSinceMediumFixAvailableHasBeenSet = false;
  bool m_maxDaysSinceHighFixAvailableHasBeenSet = false;
  bool m_maxDaysSinceCriticalFixAvailableHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
