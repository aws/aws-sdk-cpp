﻿/**
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
    AWS_CONFIGSERVICE_API ComplianceSummary() = default;
    AWS_CONFIGSERVICE_API ComplianceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API ComplianceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of Config rules or Amazon Web Services resources that are
     * compliant, up to a maximum of 25 for rules and 100 for resources.</p>
     */
    inline const ComplianceContributorCount& GetCompliantResourceCount() const { return m_compliantResourceCount; }
    inline bool CompliantResourceCountHasBeenSet() const { return m_compliantResourceCountHasBeenSet; }
    template<typename CompliantResourceCountT = ComplianceContributorCount>
    void SetCompliantResourceCount(CompliantResourceCountT&& value) { m_compliantResourceCountHasBeenSet = true; m_compliantResourceCount = std::forward<CompliantResourceCountT>(value); }
    template<typename CompliantResourceCountT = ComplianceContributorCount>
    ComplianceSummary& WithCompliantResourceCount(CompliantResourceCountT&& value) { SetCompliantResourceCount(std::forward<CompliantResourceCountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of Config rules or Amazon Web Services resources that are
     * noncompliant, up to a maximum of 25 for rules and 100 for resources.</p>
     */
    inline const ComplianceContributorCount& GetNonCompliantResourceCount() const { return m_nonCompliantResourceCount; }
    inline bool NonCompliantResourceCountHasBeenSet() const { return m_nonCompliantResourceCountHasBeenSet; }
    template<typename NonCompliantResourceCountT = ComplianceContributorCount>
    void SetNonCompliantResourceCount(NonCompliantResourceCountT&& value) { m_nonCompliantResourceCountHasBeenSet = true; m_nonCompliantResourceCount = std::forward<NonCompliantResourceCountT>(value); }
    template<typename NonCompliantResourceCountT = ComplianceContributorCount>
    ComplianceSummary& WithNonCompliantResourceCount(NonCompliantResourceCountT&& value) { SetNonCompliantResourceCount(std::forward<NonCompliantResourceCountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that Config created the compliance summary.</p>
     */
    inline const Aws::Utils::DateTime& GetComplianceSummaryTimestamp() const { return m_complianceSummaryTimestamp; }
    inline bool ComplianceSummaryTimestampHasBeenSet() const { return m_complianceSummaryTimestampHasBeenSet; }
    template<typename ComplianceSummaryTimestampT = Aws::Utils::DateTime>
    void SetComplianceSummaryTimestamp(ComplianceSummaryTimestampT&& value) { m_complianceSummaryTimestampHasBeenSet = true; m_complianceSummaryTimestamp = std::forward<ComplianceSummaryTimestampT>(value); }
    template<typename ComplianceSummaryTimestampT = Aws::Utils::DateTime>
    ComplianceSummary& WithComplianceSummaryTimestamp(ComplianceSummaryTimestampT&& value) { SetComplianceSummaryTimestamp(std::forward<ComplianceSummaryTimestampT>(value)); return *this;}
    ///@}
  private:

    ComplianceContributorCount m_compliantResourceCount;
    bool m_compliantResourceCountHasBeenSet = false;

    ComplianceContributorCount m_nonCompliantResourceCount;
    bool m_nonCompliantResourceCountHasBeenSet = false;

    Aws::Utils::DateTime m_complianceSummaryTimestamp{};
    bool m_complianceSummaryTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
