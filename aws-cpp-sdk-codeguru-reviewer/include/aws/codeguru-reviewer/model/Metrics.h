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
   * <p> Information about the statistics from the code review. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/Metrics">AWS
   * API Reference</a></p>
   */
  class AWS_CODEGURUREVIEWER_API Metrics
  {
  public:
    Metrics();
    Metrics(Aws::Utils::Json::JsonView jsonValue);
    Metrics& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Lines of code metered in the code review. For the initial code review pull
     * request and all subsequent revisions, this includes all lines of code in the
     * files added to the pull request. In subsequent revisions, for files that already
     * existed in the pull request, this includes only the changed lines of code. In
     * both cases, this does not include non-code lines such as comments and import
     * statements. For example, if you submit a pull request containing 5 files, each
     * with 500 lines of code, and in a subsequent revision you added a new file with
     * 200 lines of code, and also modified a total of 25 lines across the initial 5
     * files, <code>MeteredLinesOfCodeCount</code> includes the first 5 files (5 * 500
     * = 2,500 lines), the new file (200 lines) and the 25 changed lines of code for a
     * total of 2,725 lines of code. </p>
     */
    inline long long GetMeteredLinesOfCodeCount() const{ return m_meteredLinesOfCodeCount; }

    /**
     * <p> Lines of code metered in the code review. For the initial code review pull
     * request and all subsequent revisions, this includes all lines of code in the
     * files added to the pull request. In subsequent revisions, for files that already
     * existed in the pull request, this includes only the changed lines of code. In
     * both cases, this does not include non-code lines such as comments and import
     * statements. For example, if you submit a pull request containing 5 files, each
     * with 500 lines of code, and in a subsequent revision you added a new file with
     * 200 lines of code, and also modified a total of 25 lines across the initial 5
     * files, <code>MeteredLinesOfCodeCount</code> includes the first 5 files (5 * 500
     * = 2,500 lines), the new file (200 lines) and the 25 changed lines of code for a
     * total of 2,725 lines of code. </p>
     */
    inline bool MeteredLinesOfCodeCountHasBeenSet() const { return m_meteredLinesOfCodeCountHasBeenSet; }

    /**
     * <p> Lines of code metered in the code review. For the initial code review pull
     * request and all subsequent revisions, this includes all lines of code in the
     * files added to the pull request. In subsequent revisions, for files that already
     * existed in the pull request, this includes only the changed lines of code. In
     * both cases, this does not include non-code lines such as comments and import
     * statements. For example, if you submit a pull request containing 5 files, each
     * with 500 lines of code, and in a subsequent revision you added a new file with
     * 200 lines of code, and also modified a total of 25 lines across the initial 5
     * files, <code>MeteredLinesOfCodeCount</code> includes the first 5 files (5 * 500
     * = 2,500 lines), the new file (200 lines) and the 25 changed lines of code for a
     * total of 2,725 lines of code. </p>
     */
    inline void SetMeteredLinesOfCodeCount(long long value) { m_meteredLinesOfCodeCountHasBeenSet = true; m_meteredLinesOfCodeCount = value; }

    /**
     * <p> Lines of code metered in the code review. For the initial code review pull
     * request and all subsequent revisions, this includes all lines of code in the
     * files added to the pull request. In subsequent revisions, for files that already
     * existed in the pull request, this includes only the changed lines of code. In
     * both cases, this does not include non-code lines such as comments and import
     * statements. For example, if you submit a pull request containing 5 files, each
     * with 500 lines of code, and in a subsequent revision you added a new file with
     * 200 lines of code, and also modified a total of 25 lines across the initial 5
     * files, <code>MeteredLinesOfCodeCount</code> includes the first 5 files (5 * 500
     * = 2,500 lines), the new file (200 lines) and the 25 changed lines of code for a
     * total of 2,725 lines of code. </p>
     */
    inline Metrics& WithMeteredLinesOfCodeCount(long long value) { SetMeteredLinesOfCodeCount(value); return *this;}


    /**
     * <p> Total number of recommendations found in the code review. </p>
     */
    inline long long GetFindingsCount() const{ return m_findingsCount; }

    /**
     * <p> Total number of recommendations found in the code review. </p>
     */
    inline bool FindingsCountHasBeenSet() const { return m_findingsCountHasBeenSet; }

    /**
     * <p> Total number of recommendations found in the code review. </p>
     */
    inline void SetFindingsCount(long long value) { m_findingsCountHasBeenSet = true; m_findingsCount = value; }

    /**
     * <p> Total number of recommendations found in the code review. </p>
     */
    inline Metrics& WithFindingsCount(long long value) { SetFindingsCount(value); return *this;}

  private:

    long long m_meteredLinesOfCodeCount;
    bool m_meteredLinesOfCodeCountHasBeenSet;

    long long m_findingsCount;
    bool m_findingsCountHasBeenSet;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
