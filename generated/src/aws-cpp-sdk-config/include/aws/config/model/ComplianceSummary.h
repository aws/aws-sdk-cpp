/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/model/ComplianceContributorCount.h>
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
namespace ConfigService
{
namespace Model
{

  /**
   * <p>The number of Config rules or Amazon Web Services resources that are
   * compliant and noncompliant.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ComplianceSummary">AWS
   * API Reference</a></p>
   */
  class ComplianceSummary
  {
  public:
    AWS_CONFIGSERVICE_API ComplianceSummary();
    AWS_CONFIGSERVICE_API ComplianceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API ComplianceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of Config rules or Amazon Web Services resources that are
     * compliant, up to a maximum of 25 for rules and 100 for resources.</p>
     */
    inline const ComplianceContributorCount& GetCompliantResourceCount() const{ return m_compliantResourceCount; }

    /**
     * <p>The number of Config rules or Amazon Web Services resources that are
     * compliant, up to a maximum of 25 for rules and 100 for resources.</p>
     */
    inline bool CompliantResourceCountHasBeenSet() const { return m_compliantResourceCountHasBeenSet; }

    /**
     * <p>The number of Config rules or Amazon Web Services resources that are
     * compliant, up to a maximum of 25 for rules and 100 for resources.</p>
     */
    inline void SetCompliantResourceCount(const ComplianceContributorCount& value) { m_compliantResourceCountHasBeenSet = true; m_compliantResourceCount = value; }

    /**
     * <p>The number of Config rules or Amazon Web Services resources that are
     * compliant, up to a maximum of 25 for rules and 100 for resources.</p>
     */
    inline void SetCompliantResourceCount(ComplianceContributorCount&& value) { m_compliantResourceCountHasBeenSet = true; m_compliantResourceCount = std::move(value); }

    /**
     * <p>The number of Config rules or Amazon Web Services resources that are
     * compliant, up to a maximum of 25 for rules and 100 for resources.</p>
     */
    inline ComplianceSummary& WithCompliantResourceCount(const ComplianceContributorCount& value) { SetCompliantResourceCount(value); return *this;}

    /**
     * <p>The number of Config rules or Amazon Web Services resources that are
     * compliant, up to a maximum of 25 for rules and 100 for resources.</p>
     */
    inline ComplianceSummary& WithCompliantResourceCount(ComplianceContributorCount&& value) { SetCompliantResourceCount(std::move(value)); return *this;}


    /**
     * <p>The number of Config rules or Amazon Web Services resources that are
     * noncompliant, up to a maximum of 25 for rules and 100 for resources.</p>
     */
    inline const ComplianceContributorCount& GetNonCompliantResourceCount() const{ return m_nonCompliantResourceCount; }

    /**
     * <p>The number of Config rules or Amazon Web Services resources that are
     * noncompliant, up to a maximum of 25 for rules and 100 for resources.</p>
     */
    inline bool NonCompliantResourceCountHasBeenSet() const { return m_nonCompliantResourceCountHasBeenSet; }

    /**
     * <p>The number of Config rules or Amazon Web Services resources that are
     * noncompliant, up to a maximum of 25 for rules and 100 for resources.</p>
     */
    inline void SetNonCompliantResourceCount(const ComplianceContributorCount& value) { m_nonCompliantResourceCountHasBeenSet = true; m_nonCompliantResourceCount = value; }

    /**
     * <p>The number of Config rules or Amazon Web Services resources that are
     * noncompliant, up to a maximum of 25 for rules and 100 for resources.</p>
     */
    inline void SetNonCompliantResourceCount(ComplianceContributorCount&& value) { m_nonCompliantResourceCountHasBeenSet = true; m_nonCompliantResourceCount = std::move(value); }

    /**
     * <p>The number of Config rules or Amazon Web Services resources that are
     * noncompliant, up to a maximum of 25 for rules and 100 for resources.</p>
     */
    inline ComplianceSummary& WithNonCompliantResourceCount(const ComplianceContributorCount& value) { SetNonCompliantResourceCount(value); return *this;}

    /**
     * <p>The number of Config rules or Amazon Web Services resources that are
     * noncompliant, up to a maximum of 25 for rules and 100 for resources.</p>
     */
    inline ComplianceSummary& WithNonCompliantResourceCount(ComplianceContributorCount&& value) { SetNonCompliantResourceCount(std::move(value)); return *this;}


    /**
     * <p>The time that Config created the compliance summary.</p>
     */
    inline const Aws::Utils::DateTime& GetComplianceSummaryTimestamp() const{ return m_complianceSummaryTimestamp; }

    /**
     * <p>The time that Config created the compliance summary.</p>
     */
    inline bool ComplianceSummaryTimestampHasBeenSet() const { return m_complianceSummaryTimestampHasBeenSet; }

    /**
     * <p>The time that Config created the compliance summary.</p>
     */
    inline void SetComplianceSummaryTimestamp(const Aws::Utils::DateTime& value) { m_complianceSummaryTimestampHasBeenSet = true; m_complianceSummaryTimestamp = value; }

    /**
     * <p>The time that Config created the compliance summary.</p>
     */
    inline void SetComplianceSummaryTimestamp(Aws::Utils::DateTime&& value) { m_complianceSummaryTimestampHasBeenSet = true; m_complianceSummaryTimestamp = std::move(value); }

    /**
     * <p>The time that Config created the compliance summary.</p>
     */
    inline ComplianceSummary& WithComplianceSummaryTimestamp(const Aws::Utils::DateTime& value) { SetComplianceSummaryTimestamp(value); return *this;}

    /**
     * <p>The time that Config created the compliance summary.</p>
     */
    inline ComplianceSummary& WithComplianceSummaryTimestamp(Aws::Utils::DateTime&& value) { SetComplianceSummaryTimestamp(std::move(value)); return *this;}

  private:

    ComplianceContributorCount m_compliantResourceCount;
    bool m_compliantResourceCountHasBeenSet = false;

    ComplianceContributorCount m_nonCompliantResourceCount;
    bool m_nonCompliantResourceCountHasBeenSet = false;

    Aws::Utils::DateTime m_complianceSummaryTimestamp;
    bool m_complianceSummaryTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
