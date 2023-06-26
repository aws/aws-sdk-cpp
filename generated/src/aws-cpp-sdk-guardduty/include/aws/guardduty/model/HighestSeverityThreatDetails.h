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
    AWS_GUARDDUTY_API HighestSeverityThreatDetails();
    AWS_GUARDDUTY_API HighestSeverityThreatDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API HighestSeverityThreatDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Severity level of the highest severity threat detected.</p>
     */
    inline const Aws::String& GetSeverity() const{ return m_severity; }

    /**
     * <p>Severity level of the highest severity threat detected.</p>
     */
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }

    /**
     * <p>Severity level of the highest severity threat detected.</p>
     */
    inline void SetSeverity(const Aws::String& value) { m_severityHasBeenSet = true; m_severity = value; }

    /**
     * <p>Severity level of the highest severity threat detected.</p>
     */
    inline void SetSeverity(Aws::String&& value) { m_severityHasBeenSet = true; m_severity = std::move(value); }

    /**
     * <p>Severity level of the highest severity threat detected.</p>
     */
    inline void SetSeverity(const char* value) { m_severityHasBeenSet = true; m_severity.assign(value); }

    /**
     * <p>Severity level of the highest severity threat detected.</p>
     */
    inline HighestSeverityThreatDetails& WithSeverity(const Aws::String& value) { SetSeverity(value); return *this;}

    /**
     * <p>Severity level of the highest severity threat detected.</p>
     */
    inline HighestSeverityThreatDetails& WithSeverity(Aws::String&& value) { SetSeverity(std::move(value)); return *this;}

    /**
     * <p>Severity level of the highest severity threat detected.</p>
     */
    inline HighestSeverityThreatDetails& WithSeverity(const char* value) { SetSeverity(value); return *this;}


    /**
     * <p>Threat name of the highest severity threat detected as part of the malware
     * scan.</p>
     */
    inline const Aws::String& GetThreatName() const{ return m_threatName; }

    /**
     * <p>Threat name of the highest severity threat detected as part of the malware
     * scan.</p>
     */
    inline bool ThreatNameHasBeenSet() const { return m_threatNameHasBeenSet; }

    /**
     * <p>Threat name of the highest severity threat detected as part of the malware
     * scan.</p>
     */
    inline void SetThreatName(const Aws::String& value) { m_threatNameHasBeenSet = true; m_threatName = value; }

    /**
     * <p>Threat name of the highest severity threat detected as part of the malware
     * scan.</p>
     */
    inline void SetThreatName(Aws::String&& value) { m_threatNameHasBeenSet = true; m_threatName = std::move(value); }

    /**
     * <p>Threat name of the highest severity threat detected as part of the malware
     * scan.</p>
     */
    inline void SetThreatName(const char* value) { m_threatNameHasBeenSet = true; m_threatName.assign(value); }

    /**
     * <p>Threat name of the highest severity threat detected as part of the malware
     * scan.</p>
     */
    inline HighestSeverityThreatDetails& WithThreatName(const Aws::String& value) { SetThreatName(value); return *this;}

    /**
     * <p>Threat name of the highest severity threat detected as part of the malware
     * scan.</p>
     */
    inline HighestSeverityThreatDetails& WithThreatName(Aws::String&& value) { SetThreatName(std::move(value)); return *this;}

    /**
     * <p>Threat name of the highest severity threat detected as part of the malware
     * scan.</p>
     */
    inline HighestSeverityThreatDetails& WithThreatName(const char* value) { SetThreatName(value); return *this;}


    /**
     * <p>Total number of infected files with the highest severity threat detected.</p>
     */
    inline int GetCount() const{ return m_count; }

    /**
     * <p>Total number of infected files with the highest severity threat detected.</p>
     */
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }

    /**
     * <p>Total number of infected files with the highest severity threat detected.</p>
     */
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p>Total number of infected files with the highest severity threat detected.</p>
     */
    inline HighestSeverityThreatDetails& WithCount(int value) { SetCount(value); return *this;}

  private:

    Aws::String m_severity;
    bool m_severityHasBeenSet = false;

    Aws::String m_threatName;
    bool m_threatNameHasBeenSet = false;

    int m_count;
    bool m_countHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
