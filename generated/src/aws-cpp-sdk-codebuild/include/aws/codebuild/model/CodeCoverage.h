/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace CodeBuild {
namespace Model {

/**
 * <p>Contains code coverage report information.</p> <p>Line coverage measures how
 * many statements your tests cover. A statement is a single instruction, not
 * including comments, conditionals, etc.</p> <p>Branch coverage determines if your
 * tests cover every possible branch of a control structure, such as an
 * <code>if</code> or <code>case</code> statement.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/CodeCoverage">AWS
 * API Reference</a></p>
 */
class CodeCoverage {
 public:
  AWS_CODEBUILD_API CodeCoverage() = default;
  AWS_CODEBUILD_API CodeCoverage(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CODEBUILD_API CodeCoverage& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CODEBUILD_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The identifier of the code coverage report.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  CodeCoverage& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the report.</p>
   */
  inline const Aws::String& GetReportARN() const { return m_reportARN; }
  inline bool ReportARNHasBeenSet() const { return m_reportARNHasBeenSet; }
  template <typename ReportARNT = Aws::String>
  void SetReportARN(ReportARNT&& value) {
    m_reportARNHasBeenSet = true;
    m_reportARN = std::forward<ReportARNT>(value);
  }
  template <typename ReportARNT = Aws::String>
  CodeCoverage& WithReportARN(ReportARNT&& value) {
    SetReportARN(std::forward<ReportARNT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The path of the test report file.</p>
   */
  inline const Aws::String& GetFilePath() const { return m_filePath; }
  inline bool FilePathHasBeenSet() const { return m_filePathHasBeenSet; }
  template <typename FilePathT = Aws::String>
  void SetFilePath(FilePathT&& value) {
    m_filePathHasBeenSet = true;
    m_filePath = std::forward<FilePathT>(value);
  }
  template <typename FilePathT = Aws::String>
  CodeCoverage& WithFilePath(FilePathT&& value) {
    SetFilePath(std::forward<FilePathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The percentage of lines that are covered by your tests.</p>
   */
  inline double GetLineCoveragePercentage() const { return m_lineCoveragePercentage; }
  inline bool LineCoveragePercentageHasBeenSet() const { return m_lineCoveragePercentageHasBeenSet; }
  inline void SetLineCoveragePercentage(double value) {
    m_lineCoveragePercentageHasBeenSet = true;
    m_lineCoveragePercentage = value;
  }
  inline CodeCoverage& WithLineCoveragePercentage(double value) {
    SetLineCoveragePercentage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of lines that are covered by your tests.</p>
   */
  inline int64_t GetLinesCovered() const { return m_linesCovered; }
  inline bool LinesCoveredHasBeenSet() const { return m_linesCoveredHasBeenSet; }
  inline void SetLinesCovered(int64_t value) {
    m_linesCoveredHasBeenSet = true;
    m_linesCovered = value;
  }
  inline CodeCoverage& WithLinesCovered(int64_t value) {
    SetLinesCovered(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of lines that are not covered by your tests.</p>
   */
  inline int64_t GetLinesMissed() const { return m_linesMissed; }
  inline bool LinesMissedHasBeenSet() const { return m_linesMissedHasBeenSet; }
  inline void SetLinesMissed(int64_t value) {
    m_linesMissedHasBeenSet = true;
    m_linesMissed = value;
  }
  inline CodeCoverage& WithLinesMissed(int64_t value) {
    SetLinesMissed(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The percentage of branches that are covered by your tests.</p>
   */
  inline double GetBranchCoveragePercentage() const { return m_branchCoveragePercentage; }
  inline bool BranchCoveragePercentageHasBeenSet() const { return m_branchCoveragePercentageHasBeenSet; }
  inline void SetBranchCoveragePercentage(double value) {
    m_branchCoveragePercentageHasBeenSet = true;
    m_branchCoveragePercentage = value;
  }
  inline CodeCoverage& WithBranchCoveragePercentage(double value) {
    SetBranchCoveragePercentage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of conditional branches that are covered by your tests.</p>
   */
  inline int64_t GetBranchesCovered() const { return m_branchesCovered; }
  inline bool BranchesCoveredHasBeenSet() const { return m_branchesCoveredHasBeenSet; }
  inline void SetBranchesCovered(int64_t value) {
    m_branchesCoveredHasBeenSet = true;
    m_branchesCovered = value;
  }
  inline CodeCoverage& WithBranchesCovered(int64_t value) {
    SetBranchesCovered(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of conditional branches that are not covered by your tests.</p>
   */
  inline int64_t GetBranchesMissed() const { return m_branchesMissed; }
  inline bool BranchesMissedHasBeenSet() const { return m_branchesMissedHasBeenSet; }
  inline void SetBranchesMissed(int64_t value) {
    m_branchesMissedHasBeenSet = true;
    m_branchesMissed = value;
  }
  inline CodeCoverage& WithBranchesMissed(int64_t value) {
    SetBranchesMissed(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the tests were run.</p>
   */
  inline const Aws::Utils::DateTime& GetExpired() const { return m_expired; }
  inline bool ExpiredHasBeenSet() const { return m_expiredHasBeenSet; }
  template <typename ExpiredT = Aws::Utils::DateTime>
  void SetExpired(ExpiredT&& value) {
    m_expiredHasBeenSet = true;
    m_expired = std::forward<ExpiredT>(value);
  }
  template <typename ExpiredT = Aws::Utils::DateTime>
  CodeCoverage& WithExpired(ExpiredT&& value) {
    SetExpired(std::forward<ExpiredT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  Aws::String m_reportARN;

  Aws::String m_filePath;

  double m_lineCoveragePercentage{0.0};

  int64_t m_linesCovered{0};

  int64_t m_linesMissed{0};

  double m_branchCoveragePercentage{0.0};

  int64_t m_branchesCovered{0};

  int64_t m_branchesMissed{0};

  Aws::Utils::DateTime m_expired{};
  bool m_idHasBeenSet = false;
  bool m_reportARNHasBeenSet = false;
  bool m_filePathHasBeenSet = false;
  bool m_lineCoveragePercentageHasBeenSet = false;
  bool m_linesCoveredHasBeenSet = false;
  bool m_linesMissedHasBeenSet = false;
  bool m_branchCoveragePercentageHasBeenSet = false;
  bool m_branchesCoveredHasBeenSet = false;
  bool m_branchesMissedHasBeenSet = false;
  bool m_expiredHasBeenSet = false;
};

}  // namespace Model
}  // namespace CodeBuild
}  // namespace Aws
