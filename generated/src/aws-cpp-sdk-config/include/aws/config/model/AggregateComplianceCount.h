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
    AWS_CONFIGSERVICE_API AggregateComplianceCount();
    AWS_CONFIGSERVICE_API AggregateComplianceCount(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API AggregateComplianceCount& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The 12-digit account ID or region based on the GroupByKey value.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p>The 12-digit account ID or region based on the GroupByKey value.</p>
     */
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }

    /**
     * <p>The 12-digit account ID or region based on the GroupByKey value.</p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>The 12-digit account ID or region based on the GroupByKey value.</p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }

    /**
     * <p>The 12-digit account ID or region based on the GroupByKey value.</p>
     */
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }

    /**
     * <p>The 12-digit account ID or region based on the GroupByKey value.</p>
     */
    inline AggregateComplianceCount& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p>The 12-digit account ID or region based on the GroupByKey value.</p>
     */
    inline AggregateComplianceCount& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}

    /**
     * <p>The 12-digit account ID or region based on the GroupByKey value.</p>
     */
    inline AggregateComplianceCount& WithGroupName(const char* value) { SetGroupName(value); return *this;}


    /**
     * <p>The number of compliant and noncompliant Config rules.</p>
     */
    inline const ComplianceSummary& GetComplianceSummary() const{ return m_complianceSummary; }

    /**
     * <p>The number of compliant and noncompliant Config rules.</p>
     */
    inline bool ComplianceSummaryHasBeenSet() const { return m_complianceSummaryHasBeenSet; }

    /**
     * <p>The number of compliant and noncompliant Config rules.</p>
     */
    inline void SetComplianceSummary(const ComplianceSummary& value) { m_complianceSummaryHasBeenSet = true; m_complianceSummary = value; }

    /**
     * <p>The number of compliant and noncompliant Config rules.</p>
     */
    inline void SetComplianceSummary(ComplianceSummary&& value) { m_complianceSummaryHasBeenSet = true; m_complianceSummary = std::move(value); }

    /**
     * <p>The number of compliant and noncompliant Config rules.</p>
     */
    inline AggregateComplianceCount& WithComplianceSummary(const ComplianceSummary& value) { SetComplianceSummary(value); return *this;}

    /**
     * <p>The number of compliant and noncompliant Config rules.</p>
     */
    inline AggregateComplianceCount& WithComplianceSummary(ComplianceSummary&& value) { SetComplianceSummary(std::move(value)); return *this;}

  private:

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    ComplianceSummary m_complianceSummary;
    bool m_complianceSummaryHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
