/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/model/ConformancePackComplianceType.h>
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
namespace ConfigService
{
namespace Model
{

  /**
   * <p>Provides the number of compliant and noncompliant rules within a conformance
   * pack. Also provides the compliance status of the conformance pack and the total
   * rule count which includes compliant rules, noncompliant rules, and rules that
   * cannot be evaluated due to insufficient data.</p> <p>A conformance pack is
   * compliant if all of the rules in a conformance packs are compliant. It is
   * noncompliant if any of the rules are not compliant. The compliance status of a
   * conformance pack is INSUFFICIENT_DATA only if all rules within a conformance
   * pack cannot be evaluated due to insufficient data. If some of the rules in a
   * conformance pack are compliant but the compliance status of other rules in that
   * same conformance pack is INSUFFICIENT_DATA, the conformance pack shows
   * compliant.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/AggregateConformancePackCompliance">AWS
   * API Reference</a></p>
   */
  class AggregateConformancePackCompliance
  {
  public:
    AWS_CONFIGSERVICE_API AggregateConformancePackCompliance();
    AWS_CONFIGSERVICE_API AggregateConformancePackCompliance(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API AggregateConformancePackCompliance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The compliance status of the conformance pack.</p>
     */
    inline const ConformancePackComplianceType& GetComplianceType() const{ return m_complianceType; }

    /**
     * <p>The compliance status of the conformance pack.</p>
     */
    inline bool ComplianceTypeHasBeenSet() const { return m_complianceTypeHasBeenSet; }

    /**
     * <p>The compliance status of the conformance pack.</p>
     */
    inline void SetComplianceType(const ConformancePackComplianceType& value) { m_complianceTypeHasBeenSet = true; m_complianceType = value; }

    /**
     * <p>The compliance status of the conformance pack.</p>
     */
    inline void SetComplianceType(ConformancePackComplianceType&& value) { m_complianceTypeHasBeenSet = true; m_complianceType = std::move(value); }

    /**
     * <p>The compliance status of the conformance pack.</p>
     */
    inline AggregateConformancePackCompliance& WithComplianceType(const ConformancePackComplianceType& value) { SetComplianceType(value); return *this;}

    /**
     * <p>The compliance status of the conformance pack.</p>
     */
    inline AggregateConformancePackCompliance& WithComplianceType(ConformancePackComplianceType&& value) { SetComplianceType(std::move(value)); return *this;}


    /**
     * <p>The number of compliant Config Rules.</p>
     */
    inline int GetCompliantRuleCount() const{ return m_compliantRuleCount; }

    /**
     * <p>The number of compliant Config Rules.</p>
     */
    inline bool CompliantRuleCountHasBeenSet() const { return m_compliantRuleCountHasBeenSet; }

    /**
     * <p>The number of compliant Config Rules.</p>
     */
    inline void SetCompliantRuleCount(int value) { m_compliantRuleCountHasBeenSet = true; m_compliantRuleCount = value; }

    /**
     * <p>The number of compliant Config Rules.</p>
     */
    inline AggregateConformancePackCompliance& WithCompliantRuleCount(int value) { SetCompliantRuleCount(value); return *this;}


    /**
     * <p>The number of noncompliant Config Rules.</p>
     */
    inline int GetNonCompliantRuleCount() const{ return m_nonCompliantRuleCount; }

    /**
     * <p>The number of noncompliant Config Rules.</p>
     */
    inline bool NonCompliantRuleCountHasBeenSet() const { return m_nonCompliantRuleCountHasBeenSet; }

    /**
     * <p>The number of noncompliant Config Rules.</p>
     */
    inline void SetNonCompliantRuleCount(int value) { m_nonCompliantRuleCountHasBeenSet = true; m_nonCompliantRuleCount = value; }

    /**
     * <p>The number of noncompliant Config Rules.</p>
     */
    inline AggregateConformancePackCompliance& WithNonCompliantRuleCount(int value) { SetNonCompliantRuleCount(value); return *this;}


    /**
     * <p>Total number of compliant rules, noncompliant rules, and the rules that do
     * not have any applicable resources to evaluate upon resulting in insufficient
     * data.</p>
     */
    inline int GetTotalRuleCount() const{ return m_totalRuleCount; }

    /**
     * <p>Total number of compliant rules, noncompliant rules, and the rules that do
     * not have any applicable resources to evaluate upon resulting in insufficient
     * data.</p>
     */
    inline bool TotalRuleCountHasBeenSet() const { return m_totalRuleCountHasBeenSet; }

    /**
     * <p>Total number of compliant rules, noncompliant rules, and the rules that do
     * not have any applicable resources to evaluate upon resulting in insufficient
     * data.</p>
     */
    inline void SetTotalRuleCount(int value) { m_totalRuleCountHasBeenSet = true; m_totalRuleCount = value; }

    /**
     * <p>Total number of compliant rules, noncompliant rules, and the rules that do
     * not have any applicable resources to evaluate upon resulting in insufficient
     * data.</p>
     */
    inline AggregateConformancePackCompliance& WithTotalRuleCount(int value) { SetTotalRuleCount(value); return *this;}

  private:

    ConformancePackComplianceType m_complianceType;
    bool m_complianceTypeHasBeenSet = false;

    int m_compliantRuleCount;
    bool m_compliantRuleCountHasBeenSet = false;

    int m_nonCompliantRuleCount;
    bool m_nonCompliantRuleCountHasBeenSet = false;

    int m_totalRuleCount;
    bool m_totalRuleCountHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
