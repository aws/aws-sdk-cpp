/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Contains details of the highest severity threat detected during scan and
   * number of infected files.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/HighestSeverityThreatDetails">AWS
   * API Reference</a></p>
   */
  class HighestSeverityThreatDetails
  {
  public:
    AWS_GUARDDUTY_API HighestSeverityThreatDetails() = default;
    AWS_GUARDDUTY_API HighestSeverityThreatDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API HighestSeverityThreatDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Severity level of the highest severity threat detected.</p>
     */
    inline const Aws::String& GetSeverity() const { return m_severity; }
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
    template<typename SeverityT = Aws::String>
    void SetSeverity(SeverityT&& value) { m_severityHasBeenSet = true; m_severity = std::forward<SeverityT>(value); }
    template<typename SeverityT = Aws::String>
    HighestSeverityThreatDetails& WithSeverity(SeverityT&& value) { SetSeverity(std::forward<SeverityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Threat name of the highest severity threat detected as part of the malware
     * scan.</p>
     */
    inline const Aws::String& GetThreatName() const { return m_threatName; }
    inline bool ThreatNameHasBeenSet() const { return m_threatNameHasBeenSet; }
    template<typename ThreatNameT = Aws::String>
    void SetThreatName(ThreatNameT&& value) { m_threatNameHasBeenSet = true; m_threatName = std::forward<ThreatNameT>(value); }
    template<typename ThreatNameT = Aws::String>
    HighestSeverityThreatDetails& WithThreatName(ThreatNameT&& value) { SetThreatName(std::forward<ThreatNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Total number of infected files with the highest severity threat detected.</p>
     */
    inline int GetCount() const { return m_count; }
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }
    inline HighestSeverityThreatDetails& WithCount(int value) { SetCount(value); return *this;}
    ///@}
  private:

    Aws::String m_severity;
    bool m_severityHasBeenSet = false;

    Aws::String m_threatName;
    bool m_threatNameHasBeenSet = false;

    int m_count{0};
    bool m_countHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
