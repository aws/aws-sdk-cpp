/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Information about severity level for each finding type.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/SeverityStatistics">AWS
   * API Reference</a></p>
   */
  class SeverityStatistics
  {
  public:
    AWS_GUARDDUTY_API SeverityStatistics() = default;
    AWS_GUARDDUTY_API SeverityStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API SeverityStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The timestamp at which a finding type for a specific severity was last
     * generated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastGeneratedAt() const { return m_lastGeneratedAt; }
    inline bool LastGeneratedAtHasBeenSet() const { return m_lastGeneratedAtHasBeenSet; }
    template<typename LastGeneratedAtT = Aws::Utils::DateTime>
    void SetLastGeneratedAt(LastGeneratedAtT&& value) { m_lastGeneratedAtHasBeenSet = true; m_lastGeneratedAt = std::forward<LastGeneratedAtT>(value); }
    template<typename LastGeneratedAtT = Aws::Utils::DateTime>
    SeverityStatistics& WithLastGeneratedAt(LastGeneratedAtT&& value) { SetLastGeneratedAt(std::forward<LastGeneratedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The severity level associated with each finding type.</p>
     */
    inline double GetSeverity() const { return m_severity; }
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
    inline void SetSeverity(double value) { m_severityHasBeenSet = true; m_severity = value; }
    inline SeverityStatistics& WithSeverity(double value) { SetSeverity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of findings associated with this severity.</p>
     */
    inline int GetTotalFindings() const { return m_totalFindings; }
    inline bool TotalFindingsHasBeenSet() const { return m_totalFindingsHasBeenSet; }
    inline void SetTotalFindings(int value) { m_totalFindingsHasBeenSet = true; m_totalFindings = value; }
    inline SeverityStatistics& WithTotalFindings(int value) { SetTotalFindings(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_lastGeneratedAt{};
    bool m_lastGeneratedAtHasBeenSet = false;

    double m_severity{0.0};
    bool m_severityHasBeenSet = false;

    int m_totalFindings{0};
    bool m_totalFindingsHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
