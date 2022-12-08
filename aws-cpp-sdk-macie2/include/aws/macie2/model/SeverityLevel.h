/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/DataIdentifierSeverity.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Specifies a severity level for findings that a custom data identifier
   * produces. A severity level determines which severity is assigned to the
   * findings, based on the number of occurrences of text that matches the custom
   * data identifier's detection criteria.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/SeverityLevel">AWS
   * API Reference</a></p>
   */
  class SeverityLevel
  {
  public:
    AWS_MACIE2_API SeverityLevel();
    AWS_MACIE2_API SeverityLevel(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API SeverityLevel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The minimum number of occurrences of text that must match the custom data
     * identifier's detection criteria in order to produce a finding with the specified
     * severity (severity).</p>
     */
    inline long long GetOccurrencesThreshold() const{ return m_occurrencesThreshold; }

    /**
     * <p>The minimum number of occurrences of text that must match the custom data
     * identifier's detection criteria in order to produce a finding with the specified
     * severity (severity).</p>
     */
    inline bool OccurrencesThresholdHasBeenSet() const { return m_occurrencesThresholdHasBeenSet; }

    /**
     * <p>The minimum number of occurrences of text that must match the custom data
     * identifier's detection criteria in order to produce a finding with the specified
     * severity (severity).</p>
     */
    inline void SetOccurrencesThreshold(long long value) { m_occurrencesThresholdHasBeenSet = true; m_occurrencesThreshold = value; }

    /**
     * <p>The minimum number of occurrences of text that must match the custom data
     * identifier's detection criteria in order to produce a finding with the specified
     * severity (severity).</p>
     */
    inline SeverityLevel& WithOccurrencesThreshold(long long value) { SetOccurrencesThreshold(value); return *this;}


    /**
     * <p>The severity to assign to a finding: if the number of occurrences is greater
     * than or equal to the specified threshold (occurrencesThreshold); and, if
     * applicable, the number of occurrences is less than the threshold for the next
     * consecutive severity level for the custom data identifier, moving from LOW to
     * HIGH.</p>
     */
    inline const DataIdentifierSeverity& GetSeverity() const{ return m_severity; }

    /**
     * <p>The severity to assign to a finding: if the number of occurrences is greater
     * than or equal to the specified threshold (occurrencesThreshold); and, if
     * applicable, the number of occurrences is less than the threshold for the next
     * consecutive severity level for the custom data identifier, moving from LOW to
     * HIGH.</p>
     */
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }

    /**
     * <p>The severity to assign to a finding: if the number of occurrences is greater
     * than or equal to the specified threshold (occurrencesThreshold); and, if
     * applicable, the number of occurrences is less than the threshold for the next
     * consecutive severity level for the custom data identifier, moving from LOW to
     * HIGH.</p>
     */
    inline void SetSeverity(const DataIdentifierSeverity& value) { m_severityHasBeenSet = true; m_severity = value; }

    /**
     * <p>The severity to assign to a finding: if the number of occurrences is greater
     * than or equal to the specified threshold (occurrencesThreshold); and, if
     * applicable, the number of occurrences is less than the threshold for the next
     * consecutive severity level for the custom data identifier, moving from LOW to
     * HIGH.</p>
     */
    inline void SetSeverity(DataIdentifierSeverity&& value) { m_severityHasBeenSet = true; m_severity = std::move(value); }

    /**
     * <p>The severity to assign to a finding: if the number of occurrences is greater
     * than or equal to the specified threshold (occurrencesThreshold); and, if
     * applicable, the number of occurrences is less than the threshold for the next
     * consecutive severity level for the custom data identifier, moving from LOW to
     * HIGH.</p>
     */
    inline SeverityLevel& WithSeverity(const DataIdentifierSeverity& value) { SetSeverity(value); return *this;}

    /**
     * <p>The severity to assign to a finding: if the number of occurrences is greater
     * than or equal to the specified threshold (occurrencesThreshold); and, if
     * applicable, the number of occurrences is less than the threshold for the next
     * consecutive severity level for the custom data identifier, moving from LOW to
     * HIGH.</p>
     */
    inline SeverityLevel& WithSeverity(DataIdentifierSeverity&& value) { SetSeverity(std::move(value)); return *this;}

  private:

    long long m_occurrencesThreshold;
    bool m_occurrencesThresholdHasBeenSet = false;

    DataIdentifierSeverity m_severity;
    bool m_severityHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
