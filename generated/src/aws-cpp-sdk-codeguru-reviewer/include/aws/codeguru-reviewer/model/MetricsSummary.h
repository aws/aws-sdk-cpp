/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CodeGuruReviewer
{
namespace Model
{

  /**
   * <p>Information about metrics summaries.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/MetricsSummary">AWS
   * API Reference</a></p>
   */
  class MetricsSummary
  {
  public:
    AWS_CODEGURUREVIEWER_API MetricsSummary();
    AWS_CODEGURUREVIEWER_API MetricsSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUREVIEWER_API MetricsSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUREVIEWER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Lines of code metered in the code review. For the initial code review pull
     * request and all subsequent revisions, this includes all lines of code in the
     * files added to the pull request. In subsequent revisions, for files that already
     * existed in the pull request, this includes only the changed lines of code. In
     * both cases, this does not include non-code lines such as comments and import
     * statements. For example, if you submit a pull request containing 5 files, each
     * with 500 lines of code, and in a subsequent revision you added a new file with
     * 200 lines of code, and also modified a total of 25 lines across the initial 5
     * files, <code>MeteredLinesOfCodeCount</code> includes the first 5 files (5 * 500
     * = 2,500 lines), the new file (200 lines) and the 25 changed lines of code for a
     * total of 2,725 lines of code.</p>
     */
    inline long long GetMeteredLinesOfCodeCount() const{ return m_meteredLinesOfCodeCount; }

    /**
     * <p>Lines of code metered in the code review. For the initial code review pull
     * request and all subsequent revisions, this includes all lines of code in the
     * files added to the pull request. In subsequent revisions, for files that already
     * existed in the pull request, this includes only the changed lines of code. In
     * both cases, this does not include non-code lines such as comments and import
     * statements. For example, if you submit a pull request containing 5 files, each
     * with 500 lines of code, and in a subsequent revision you added a new file with
     * 200 lines of code, and also modified a total of 25 lines across the initial 5
     * files, <code>MeteredLinesOfCodeCount</code> includes the first 5 files (5 * 500
     * = 2,500 lines), the new file (200 lines) and the 25 changed lines of code for a
     * total of 2,725 lines of code.</p>
     */
    inline bool MeteredLinesOfCodeCountHasBeenSet() const { return m_meteredLinesOfCodeCountHasBeenSet; }

    /**
     * <p>Lines of code metered in the code review. For the initial code review pull
     * request and all subsequent revisions, this includes all lines of code in the
     * files added to the pull request. In subsequent revisions, for files that already
     * existed in the pull request, this includes only the changed lines of code. In
     * both cases, this does not include non-code lines such as comments and import
     * statements. For example, if you submit a pull request containing 5 files, each
     * with 500 lines of code, and in a subsequent revision you added a new file with
     * 200 lines of code, and also modified a total of 25 lines across the initial 5
     * files, <code>MeteredLinesOfCodeCount</code> includes the first 5 files (5 * 500
     * = 2,500 lines), the new file (200 lines) and the 25 changed lines of code for a
     * total of 2,725 lines of code.</p>
     */
    inline void SetMeteredLinesOfCodeCount(long long value) { m_meteredLinesOfCodeCountHasBeenSet = true; m_meteredLinesOfCodeCount = value; }

    /**
     * <p>Lines of code metered in the code review. For the initial code review pull
     * request and all subsequent revisions, this includes all lines of code in the
     * files added to the pull request. In subsequent revisions, for files that already
     * existed in the pull request, this includes only the changed lines of code. In
     * both cases, this does not include non-code lines such as comments and import
     * statements. For example, if you submit a pull request containing 5 files, each
     * with 500 lines of code, and in a subsequent revision you added a new file with
     * 200 lines of code, and also modified a total of 25 lines across the initial 5
     * files, <code>MeteredLinesOfCodeCount</code> includes the first 5 files (5 * 500
     * = 2,500 lines), the new file (200 lines) and the 25 changed lines of code for a
     * total of 2,725 lines of code.</p>
     */
    inline MetricsSummary& WithMeteredLinesOfCodeCount(long long value) { SetMeteredLinesOfCodeCount(value); return *this;}


    /**
     * <p>Lines of code suppressed in the code review based on the
     * <code>excludeFiles</code> element in the <code>aws-codeguru-reviewer.yml</code>
     * file. For full repository analyses, this number includes all lines of code in
     * the files that are suppressed. For pull requests, this number only includes the
     * <i>changed</i> lines of code that are suppressed. In both cases, this number
     * does not include non-code lines such as comments and import statements. For
     * example, if you initiate a full repository analysis on a repository containing 5
     * files, each file with 100 lines of code, and 2 files are listed as excluded in
     * the <code>aws-codeguru-reviewer.yml</code> file, then
     * <code>SuppressedLinesOfCodeCount</code> returns 200 (2 * 100) as the total
     * number of lines of code suppressed. However, if you submit a pull request for
     * the same repository, then <code>SuppressedLinesOfCodeCount</code> only includes
     * the lines in the 2 files that changed. If only 1 of the 2 files changed in the
     * pull request, then <code>SuppressedLinesOfCodeCount</code> returns 100 (1 * 100)
     * as the total number of lines of code suppressed.</p>
     */
    inline long long GetSuppressedLinesOfCodeCount() const{ return m_suppressedLinesOfCodeCount; }

    /**
     * <p>Lines of code suppressed in the code review based on the
     * <code>excludeFiles</code> element in the <code>aws-codeguru-reviewer.yml</code>
     * file. For full repository analyses, this number includes all lines of code in
     * the files that are suppressed. For pull requests, this number only includes the
     * <i>changed</i> lines of code that are suppressed. In both cases, this number
     * does not include non-code lines such as comments and import statements. For
     * example, if you initiate a full repository analysis on a repository containing 5
     * files, each file with 100 lines of code, and 2 files are listed as excluded in
     * the <code>aws-codeguru-reviewer.yml</code> file, then
     * <code>SuppressedLinesOfCodeCount</code> returns 200 (2 * 100) as the total
     * number of lines of code suppressed. However, if you submit a pull request for
     * the same repository, then <code>SuppressedLinesOfCodeCount</code> only includes
     * the lines in the 2 files that changed. If only 1 of the 2 files changed in the
     * pull request, then <code>SuppressedLinesOfCodeCount</code> returns 100 (1 * 100)
     * as the total number of lines of code suppressed.</p>
     */
    inline bool SuppressedLinesOfCodeCountHasBeenSet() const { return m_suppressedLinesOfCodeCountHasBeenSet; }

    /**
     * <p>Lines of code suppressed in the code review based on the
     * <code>excludeFiles</code> element in the <code>aws-codeguru-reviewer.yml</code>
     * file. For full repository analyses, this number includes all lines of code in
     * the files that are suppressed. For pull requests, this number only includes the
     * <i>changed</i> lines of code that are suppressed. In both cases, this number
     * does not include non-code lines such as comments and import statements. For
     * example, if you initiate a full repository analysis on a repository containing 5
     * files, each file with 100 lines of code, and 2 files are listed as excluded in
     * the <code>aws-codeguru-reviewer.yml</code> file, then
     * <code>SuppressedLinesOfCodeCount</code> returns 200 (2 * 100) as the total
     * number of lines of code suppressed. However, if you submit a pull request for
     * the same repository, then <code>SuppressedLinesOfCodeCount</code> only includes
     * the lines in the 2 files that changed. If only 1 of the 2 files changed in the
     * pull request, then <code>SuppressedLinesOfCodeCount</code> returns 100 (1 * 100)
     * as the total number of lines of code suppressed.</p>
     */
    inline void SetSuppressedLinesOfCodeCount(long long value) { m_suppressedLinesOfCodeCountHasBeenSet = true; m_suppressedLinesOfCodeCount = value; }

    /**
     * <p>Lines of code suppressed in the code review based on the
     * <code>excludeFiles</code> element in the <code>aws-codeguru-reviewer.yml</code>
     * file. For full repository analyses, this number includes all lines of code in
     * the files that are suppressed. For pull requests, this number only includes the
     * <i>changed</i> lines of code that are suppressed. In both cases, this number
     * does not include non-code lines such as comments and import statements. For
     * example, if you initiate a full repository analysis on a repository containing 5
     * files, each file with 100 lines of code, and 2 files are listed as excluded in
     * the <code>aws-codeguru-reviewer.yml</code> file, then
     * <code>SuppressedLinesOfCodeCount</code> returns 200 (2 * 100) as the total
     * number of lines of code suppressed. However, if you submit a pull request for
     * the same repository, then <code>SuppressedLinesOfCodeCount</code> only includes
     * the lines in the 2 files that changed. If only 1 of the 2 files changed in the
     * pull request, then <code>SuppressedLinesOfCodeCount</code> returns 100 (1 * 100)
     * as the total number of lines of code suppressed.</p>
     */
    inline MetricsSummary& WithSuppressedLinesOfCodeCount(long long value) { SetSuppressedLinesOfCodeCount(value); return *this;}


    /**
     * <p>Total number of recommendations found in the code review.</p>
     */
    inline long long GetFindingsCount() const{ return m_findingsCount; }

    /**
     * <p>Total number of recommendations found in the code review.</p>
     */
    inline bool FindingsCountHasBeenSet() const { return m_findingsCountHasBeenSet; }

    /**
     * <p>Total number of recommendations found in the code review.</p>
     */
    inline void SetFindingsCount(long long value) { m_findingsCountHasBeenSet = true; m_findingsCount = value; }

    /**
     * <p>Total number of recommendations found in the code review.</p>
     */
    inline MetricsSummary& WithFindingsCount(long long value) { SetFindingsCount(value); return *this;}

  private:

    long long m_meteredLinesOfCodeCount;
    bool m_meteredLinesOfCodeCountHasBeenSet = false;

    long long m_suppressedLinesOfCodeCount;
    bool m_suppressedLinesOfCodeCountHasBeenSet = false;

    long long m_findingsCount;
    bool m_findingsCountHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
