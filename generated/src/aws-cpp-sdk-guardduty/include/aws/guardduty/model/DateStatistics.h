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
   * <p>Represents list a map of dates with a count of total findings generated on
   * each date.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DateStatistics">AWS
   * API Reference</a></p>
   */
  class DateStatistics
  {
  public:
    AWS_GUARDDUTY_API DateStatistics() = default;
    AWS_GUARDDUTY_API DateStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API DateStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The timestamp when the total findings count is observed.</p> <p>For example,
     * <code>Date</code> would look like <code>"2024-09-05T17:00:00-07:00"</code>
     * whereas <code>LastGeneratedAt</code> would look like
     * 2024-09-05T17:12:29-07:00".</p>
     */
    inline const Aws::Utils::DateTime& GetDate() const { return m_date; }
    inline bool DateHasBeenSet() const { return m_dateHasBeenSet; }
    template<typename DateT = Aws::Utils::DateTime>
    void SetDate(DateT&& value) { m_dateHasBeenSet = true; m_date = std::forward<DateT>(value); }
    template<typename DateT = Aws::Utils::DateTime>
    DateStatistics& WithDate(DateT&& value) { SetDate(std::forward<DateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the last finding in the findings count, was
     * generated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastGeneratedAt() const { return m_lastGeneratedAt; }
    inline bool LastGeneratedAtHasBeenSet() const { return m_lastGeneratedAtHasBeenSet; }
    template<typename LastGeneratedAtT = Aws::Utils::DateTime>
    void SetLastGeneratedAt(LastGeneratedAtT&& value) { m_lastGeneratedAtHasBeenSet = true; m_lastGeneratedAt = std::forward<LastGeneratedAtT>(value); }
    template<typename LastGeneratedAtT = Aws::Utils::DateTime>
    DateStatistics& WithLastGeneratedAt(LastGeneratedAtT&& value) { SetLastGeneratedAt(std::forward<LastGeneratedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The severity of the findings generated on each date.</p>
     */
    inline double GetSeverity() const { return m_severity; }
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
    inline void SetSeverity(double value) { m_severityHasBeenSet = true; m_severity = value; }
    inline DateStatistics& WithSeverity(double value) { SetSeverity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of findings that were generated per severity level on each
     * date.</p>
     */
    inline int GetTotalFindings() const { return m_totalFindings; }
    inline bool TotalFindingsHasBeenSet() const { return m_totalFindingsHasBeenSet; }
    inline void SetTotalFindings(int value) { m_totalFindingsHasBeenSet = true; m_totalFindings = value; }
    inline DateStatistics& WithTotalFindings(int value) { SetTotalFindings(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_date{};
    bool m_dateHasBeenSet = false;

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
