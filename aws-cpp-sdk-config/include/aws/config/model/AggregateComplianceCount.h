/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_CONFIGSERVICE_API AggregateComplianceCount
  {
  public:
    AggregateComplianceCount();
    AggregateComplianceCount(Aws::Utils::Json::JsonView jsonValue);
    AggregateComplianceCount& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
     * <p>The number of compliant and noncompliant AWS Config rules.</p>
     */
    inline const ComplianceSummary& GetComplianceSummary() const{ return m_complianceSummary; }

    /**
     * <p>The number of compliant and noncompliant AWS Config rules.</p>
     */
    inline bool ComplianceSummaryHasBeenSet() const { return m_complianceSummaryHasBeenSet; }

    /**
     * <p>The number of compliant and noncompliant AWS Config rules.</p>
     */
    inline void SetComplianceSummary(const ComplianceSummary& value) { m_complianceSummaryHasBeenSet = true; m_complianceSummary = value; }

    /**
     * <p>The number of compliant and noncompliant AWS Config rules.</p>
     */
    inline void SetComplianceSummary(ComplianceSummary&& value) { m_complianceSummaryHasBeenSet = true; m_complianceSummary = std::move(value); }

    /**
     * <p>The number of compliant and noncompliant AWS Config rules.</p>
     */
    inline AggregateComplianceCount& WithComplianceSummary(const ComplianceSummary& value) { SetComplianceSummary(value); return *this;}

    /**
     * <p>The number of compliant and noncompliant AWS Config rules.</p>
     */
    inline AggregateComplianceCount& WithComplianceSummary(ComplianceSummary&& value) { SetComplianceSummary(std::move(value)); return *this;}

  private:

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet;

    ComplianceSummary m_complianceSummary;
    bool m_complianceSummaryHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
