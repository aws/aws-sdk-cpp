/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/SummaryStatus.h>

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
 * <p>Provides a summary of the performance status check results for an
 * instance.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/PerformanceStatusSummary">AWS
 * API Reference</a></p>
 */
class PerformanceStatusSummary {
 public:
  AWS_EC2_API PerformanceStatusSummary() = default;
  AWS_EC2_API PerformanceStatusSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API PerformanceStatusSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The current status.</p>
   */
  inline SummaryStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(SummaryStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline PerformanceStatusSummary& WithStatus(SummaryStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the performance status became impaired.</p>
   */
  inline const Aws::Utils::DateTime& GetImpairedSince() const { return m_impairedSince; }
  inline bool ImpairedSinceHasBeenSet() const { return m_impairedSinceHasBeenSet; }
  template <typename ImpairedSinceT = Aws::Utils::DateTime>
  void SetImpairedSince(ImpairedSinceT&& value) {
    m_impairedSinceHasBeenSet = true;
    m_impairedSince = std::forward<ImpairedSinceT>(value);
  }
  template <typename ImpairedSinceT = Aws::Utils::DateTime>
  PerformanceStatusSummary& WithImpairedSince(ImpairedSinceT&& value) {
    SetImpairedSince(std::forward<ImpairedSinceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The recommended action to remediate the impaired instance, if one is
   * available. This value is returned only when the instance is impaired.</p>
   */
  inline const Aws::String& GetRemediation() const { return m_remediation; }
  inline bool RemediationHasBeenSet() const { return m_remediationHasBeenSet; }
  template <typename RemediationT = Aws::String>
  void SetRemediation(RemediationT&& value) {
    m_remediationHasBeenSet = true;
    m_remediation = std::forward<RemediationT>(value);
  }
  template <typename RemediationT = Aws::String>
  PerformanceStatusSummary& WithRemediation(RemediationT&& value) {
    SetRemediation(std::forward<RemediationT>(value));
    return *this;
  }
  ///@}
 private:
  SummaryStatus m_status{SummaryStatus::NOT_SET};

  Aws::Utils::DateTime m_impairedSince{};

  Aws::String m_remediation;
  bool m_statusHasBeenSet = false;
  bool m_impairedSinceHasBeenSet = false;
  bool m_remediationHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
