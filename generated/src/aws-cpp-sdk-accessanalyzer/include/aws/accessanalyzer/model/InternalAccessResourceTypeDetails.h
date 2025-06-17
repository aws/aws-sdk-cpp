/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>

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
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>Contains information about the total number of active, archived, and resolved
   * findings for a resource type of an internal access analyzer.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/InternalAccessResourceTypeDetails">AWS
   * API Reference</a></p>
   */
  class InternalAccessResourceTypeDetails
  {
  public:
    AWS_ACCESSANALYZER_API InternalAccessResourceTypeDetails() = default;
    AWS_ACCESSANALYZER_API InternalAccessResourceTypeDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API InternalAccessResourceTypeDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The total number of active findings for the resource type in the internal
     * access analyzer.</p>
     */
    inline int GetTotalActiveFindings() const { return m_totalActiveFindings; }
    inline bool TotalActiveFindingsHasBeenSet() const { return m_totalActiveFindingsHasBeenSet; }
    inline void SetTotalActiveFindings(int value) { m_totalActiveFindingsHasBeenSet = true; m_totalActiveFindings = value; }
    inline InternalAccessResourceTypeDetails& WithTotalActiveFindings(int value) { SetTotalActiveFindings(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of resolved findings for the resource type in the internal
     * access analyzer.</p>
     */
    inline int GetTotalResolvedFindings() const { return m_totalResolvedFindings; }
    inline bool TotalResolvedFindingsHasBeenSet() const { return m_totalResolvedFindingsHasBeenSet; }
    inline void SetTotalResolvedFindings(int value) { m_totalResolvedFindingsHasBeenSet = true; m_totalResolvedFindings = value; }
    inline InternalAccessResourceTypeDetails& WithTotalResolvedFindings(int value) { SetTotalResolvedFindings(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of archived findings for the resource type in the internal
     * access analyzer.</p>
     */
    inline int GetTotalArchivedFindings() const { return m_totalArchivedFindings; }
    inline bool TotalArchivedFindingsHasBeenSet() const { return m_totalArchivedFindingsHasBeenSet; }
    inline void SetTotalArchivedFindings(int value) { m_totalArchivedFindingsHasBeenSet = true; m_totalArchivedFindings = value; }
    inline InternalAccessResourceTypeDetails& WithTotalArchivedFindings(int value) { SetTotalArchivedFindings(value); return *this;}
    ///@}
  private:

    int m_totalActiveFindings{0};
    bool m_totalActiveFindingsHasBeenSet = false;

    int m_totalResolvedFindings{0};
    bool m_totalResolvedFindingsHasBeenSet = false;

    int m_totalArchivedFindings{0};
    bool m_totalArchivedFindingsHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
