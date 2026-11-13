/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/crt/cbor/Cbor.h>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace CodeBuild {
namespace Model {

/**
 * <p>Contains a summary of a code coverage report.</p> <p>Line coverage measures
 * how many statements your tests cover. A statement is a single instruction, not
 * including comments, conditionals, etc.</p> <p>Branch coverage determines if your
 * tests cover every possible branch of a control structure, such as an
 * <code>if</code> or <code>case</code> statement.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/CodeCoverageReportSummary">AWS
 * API Reference</a></p>
 */
class CodeCoverageReportSummary {
 public:
  AWS_CODEBUILD_API CodeCoverageReportSummary() = default;
  AWS_CODEBUILD_API CodeCoverageReportSummary(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CODEBUILD_API CodeCoverageReportSummary& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CODEBUILD_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

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
  inline CodeCoverageReportSummary& WithLineCoveragePercentage(double value) {
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
  inline CodeCoverageReportSummary& WithLinesCovered(int64_t value) {
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
  inline CodeCoverageReportSummary& WithLinesMissed(int64_t value) {
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
  inline CodeCoverageReportSummary& WithBranchCoveragePercentage(double value) {
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
  inline CodeCoverageReportSummary& WithBranchesCovered(int64_t value) {
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
  inline CodeCoverageReportSummary& WithBranchesMissed(int64_t value) {
    SetBranchesMissed(value);
    return *this;
  }
  ///@}
 private:
  double m_lineCoveragePercentage{0.0};

  int64_t m_linesCovered{0};

  int64_t m_linesMissed{0};

  double m_branchCoveragePercentage{0.0};

  int64_t m_branchesCovered{0};

  int64_t m_branchesMissed{0};
  bool m_lineCoveragePercentageHasBeenSet = false;
  bool m_linesCoveredHasBeenSet = false;
  bool m_linesMissedHasBeenSet = false;
  bool m_branchCoveragePercentageHasBeenSet = false;
  bool m_branchesCoveredHasBeenSet = false;
  bool m_branchesMissedHasBeenSet = false;
};

}  // namespace Model
}  // namespace CodeBuild
}  // namespace Aws
