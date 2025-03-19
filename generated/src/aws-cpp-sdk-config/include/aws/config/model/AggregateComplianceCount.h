/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/ComplianceSummary.h>
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
   * <p>Returns the number of compliant and noncompliant rules for one or more
   * accounts and regions in an aggregator.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/AggregateComplianceCount">AWS
   * API Reference</a></p>
   */
  class AggregateComplianceCount
  {
  public:
    AWS_CONFIGSERVICE_API AggregateComplianceCount() = default;
    AWS_CONFIGSERVICE_API AggregateComplianceCount(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API AggregateComplianceCount& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The 12-digit account ID or region based on the GroupByKey value.</p>
     */
    inline const Aws::String& GetGroupName() const { return m_groupName; }
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }
    template<typename GroupNameT = Aws::String>
    void SetGroupName(GroupNameT&& value) { m_groupNameHasBeenSet = true; m_groupName = std::forward<GroupNameT>(value); }
    template<typename GroupNameT = Aws::String>
    AggregateComplianceCount& WithGroupName(GroupNameT&& value) { SetGroupName(std::forward<GroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of compliant and noncompliant Config rules.</p>
     */
    inline const ComplianceSummary& GetComplianceSummary() const { return m_complianceSummary; }
    inline bool ComplianceSummaryHasBeenSet() const { return m_complianceSummaryHasBeenSet; }
    template<typename ComplianceSummaryT = ComplianceSummary>
    void SetComplianceSummary(ComplianceSummaryT&& value) { m_complianceSummaryHasBeenSet = true; m_complianceSummary = std::forward<ComplianceSummaryT>(value); }
    template<typename ComplianceSummaryT = ComplianceSummary>
    AggregateComplianceCount& WithComplianceSummary(ComplianceSummaryT&& value) { SetComplianceSummary(std::forward<ComplianceSummaryT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    ComplianceSummary m_complianceSummary;
    bool m_complianceSummaryHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
