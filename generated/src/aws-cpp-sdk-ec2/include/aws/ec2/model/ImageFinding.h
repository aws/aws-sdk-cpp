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
 * <p>Describes an Amazon Inspector vulnerability finding for an AMI.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ImageFinding">AWS
 * API Reference</a></p>
 */
class ImageFinding {
 public:
  AWS_EC2_API ImageFinding() = default;
  AWS_EC2_API ImageFinding(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API ImageFinding& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>Specifies whether a fix is available for the finding. This value is
   * <code>true</code> when Amazon Inspector reports a full or partial fix for the
   * finding.</p>
   */
  inline bool GetFixAvailable() const { return m_fixAvailable; }
  inline bool FixAvailableHasBeenSet() const { return m_fixAvailableHasBeenSet; }
  inline void SetFixAvailable(bool value) {
    m_fixAvailableHasBeenSet = true;
    m_fixAvailable = value;
  }
  inline ImageFinding& WithFixAvailable(bool value) {
    SetFixAvailable(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Inspector score for the finding.</p>
   */
  inline double GetScore() const { return m_score; }
  inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }
  inline void SetScore(double value) {
    m_scoreHasBeenSet = true;
    m_score = value;
  }
  inline ImageFinding& WithScore(double value) {
    SetScore(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time, in the ISO 8601 format in the UTC time zone
   * (YYYY-MM-DDThh:mm:ss.sssZ), when Amazon Inspector first observed the
   * finding.</p>
   */
  inline const Aws::Utils::DateTime& GetFirstObservedAt() const { return m_firstObservedAt; }
  inline bool FirstObservedAtHasBeenSet() const { return m_firstObservedAtHasBeenSet; }
  template <typename FirstObservedAtT = Aws::Utils::DateTime>
  void SetFirstObservedAt(FirstObservedAtT&& value) {
    m_firstObservedAtHasBeenSet = true;
    m_firstObservedAt = std::forward<FirstObservedAtT>(value);
  }
  template <typename FirstObservedAtT = Aws::Utils::DateTime>
  ImageFinding& WithFirstObservedAt(FirstObservedAtT&& value) {
    SetFirstObservedAt(std::forward<FirstObservedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time, in the ISO 8601 format in the UTC time zone
   * (YYYY-MM-DDThh:mm:ss.sssZ), when Amazon Inspector last updated the finding.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  ImageFinding& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The title of the finding.</p>
   */
  inline const Aws::String& GetTitle() const { return m_title; }
  inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
  template <typename TitleT = Aws::String>
  void SetTitle(TitleT&& value) {
    m_titleHasBeenSet = true;
    m_title = std::forward<TitleT>(value);
  }
  template <typename TitleT = Aws::String>
  ImageFinding& WithTitle(TitleT&& value) {
    SetTitle(std::forward<TitleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The file paths in the AMI that are affected by the finding. Amazon EC2
   * returns up to 10 file paths for each finding.</p>
   */
  inline const Aws::Vector<Aws::String>& GetPaths() const { return m_paths; }
  inline bool PathsHasBeenSet() const { return m_pathsHasBeenSet; }
  template <typename PathsT = Aws::Vector<Aws::String>>
  void SetPaths(PathsT&& value) {
    m_pathsHasBeenSet = true;
    m_paths = std::forward<PathsT>(value);
  }
  template <typename PathsT = Aws::Vector<Aws::String>>
  ImageFinding& WithPaths(PathsT&& value) {
    SetPaths(std::forward<PathsT>(value));
    return *this;
  }
  template <typename PathsT = Aws::String>
  ImageFinding& AddPaths(PathsT&& value) {
    m_pathsHasBeenSet = true;
    m_paths.emplace_back(std::forward<PathsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The severity of the finding.</p> <p>The valid values are the following Amazon
   * Inspector severity levels, which correspond to CVSS score ranges:</p> <ul> <li>
   * <p> <code>informational</code> - CVSS score of 0.</p> </li> <li> <p>
   * <code>low</code> - CVSS score of 0.1 to 3.9.</p> </li> <li> <p>
   * <code>medium</code> - CVSS score of 4.0 to 6.9.</p> </li> <li> <p>
   * <code>high</code> - CVSS score of 7.0 to 8.9.</p> </li> <li> <p>
   * <code>critical</code> - CVSS score of 9.0 to 10.0.</p> </li> </ul> <p>For more
   * information, see <a
   * href="https://docs.aws.amazon.com/inspector/latest/user/findings-understanding-severity.html#findings-understanding-package-score">Software
   * package vulnerability severity</a> in the <i>Amazon Inspector User
   * Guide</i>.</p>
   */
  inline SeverityLabel GetSeverityLabel() const { return m_severityLabel; }
  inline bool SeverityLabelHasBeenSet() const { return m_severityLabelHasBeenSet; }
  inline void SetSeverityLabel(SeverityLabel value) {
    m_severityLabelHasBeenSet = true;
    m_severityLabel = value;
  }
  inline ImageFinding& WithSeverityLabel(SeverityLabel value) {
    SetSeverityLabel(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the Amazon EBS snapshot of the AMI in which the finding was
   * detected.</p>
   */
  inline const Aws::String& GetSnapshotId() const { return m_snapshotId; }
  inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }
  template <typename SnapshotIdT = Aws::String>
  void SetSnapshotId(SnapshotIdT&& value) {
    m_snapshotIdHasBeenSet = true;
    m_snapshotId = std::forward<SnapshotIdT>(value);
  }
  template <typename SnapshotIdT = Aws::String>
  ImageFinding& WithSnapshotId(SnapshotIdT&& value) {
    SetSnapshotId(std::forward<SnapshotIdT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_fixAvailable{false};

  double m_score{0.0};

  Aws::Utils::DateTime m_firstObservedAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_title;

  Aws::Vector<Aws::String> m_paths;

  SeverityLabel m_severityLabel{SeverityLabel::NOT_SET};

  Aws::String m_snapshotId;
  bool m_fixAvailableHasBeenSet = false;
  bool m_scoreHasBeenSet = false;
  bool m_firstObservedAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_titleHasBeenSet = false;
  bool m_pathsHasBeenSet = false;
  bool m_severityLabelHasBeenSet = false;
  bool m_snapshotIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
