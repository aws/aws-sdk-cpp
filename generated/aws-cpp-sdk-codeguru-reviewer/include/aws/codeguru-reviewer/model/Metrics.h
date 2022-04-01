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
     * <p> <code>MeteredLinesOfCode</code> is the number of lines of code in the
     * repository where the code review happened. This does not include non-code lines
     * such as comments and blank lines. </p>
     */
    inline long long GetMeteredLinesOfCodeCount() const{ return m_meteredLinesOfCodeCount; }

    /**
     * <p> <code>MeteredLinesOfCode</code> is the number of lines of code in the
     * repository where the code review happened. This does not include non-code lines
     * such as comments and blank lines. </p>
     */
    inline bool MeteredLinesOfCodeCountHasBeenSet() const { return m_meteredLinesOfCodeCountHasBeenSet; }

    /**
     * <p> <code>MeteredLinesOfCode</code> is the number of lines of code in the
     * repository where the code review happened. This does not include non-code lines
     * such as comments and blank lines. </p>
     */
    inline void SetMeteredLinesOfCodeCount(long long value) { m_meteredLinesOfCodeCountHasBeenSet = true; m_meteredLinesOfCodeCount = value; }

    /**
     * <p> <code>MeteredLinesOfCode</code> is the number of lines of code in the
     * repository where the code review happened. This does not include non-code lines
     * such as comments and blank lines. </p>
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
