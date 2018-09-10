﻿/*
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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/ComplianceStatus.h>
#include <aws/ssm/model/ComplianceSeverity.h>
#include <aws/ssm/model/ComplianceExecutionSummary.h>
#include <aws/ssm/model/CompliantSummary.h>
#include <aws/ssm/model/NonCompliantSummary.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Compliance summary information for a specific resource. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ResourceComplianceSummaryItem">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API ResourceComplianceSummaryItem
  {
  public:
    ResourceComplianceSummaryItem();
    ResourceComplianceSummaryItem(Aws::Utils::Json::JsonView jsonValue);
    ResourceComplianceSummaryItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The compliance type.</p>
     */
    inline const Aws::String& GetComplianceType() const{ return m_complianceType; }

    /**
     * <p>The compliance type.</p>
     */
    inline void SetComplianceType(const Aws::String& value) { m_complianceTypeHasBeenSet = true; m_complianceType = value; }

    /**
     * <p>The compliance type.</p>
     */
    inline void SetComplianceType(Aws::String&& value) { m_complianceTypeHasBeenSet = true; m_complianceType = std::move(value); }

    /**
     * <p>The compliance type.</p>
     */
    inline void SetComplianceType(const char* value) { m_complianceTypeHasBeenSet = true; m_complianceType.assign(value); }

    /**
     * <p>The compliance type.</p>
     */
    inline ResourceComplianceSummaryItem& WithComplianceType(const Aws::String& value) { SetComplianceType(value); return *this;}

    /**
     * <p>The compliance type.</p>
     */
    inline ResourceComplianceSummaryItem& WithComplianceType(Aws::String&& value) { SetComplianceType(std::move(value)); return *this;}

    /**
     * <p>The compliance type.</p>
     */
    inline ResourceComplianceSummaryItem& WithComplianceType(const char* value) { SetComplianceType(value); return *this;}


    /**
     * <p>The resource type.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The resource type.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The resource type.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The resource type.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The resource type.</p>
     */
    inline ResourceComplianceSummaryItem& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The resource type.</p>
     */
    inline ResourceComplianceSummaryItem& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The resource type.</p>
     */
    inline ResourceComplianceSummaryItem& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * <p>The resource ID.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The resource ID.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The resource ID.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The resource ID.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The resource ID.</p>
     */
    inline ResourceComplianceSummaryItem& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The resource ID.</p>
     */
    inline ResourceComplianceSummaryItem& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The resource ID.</p>
     */
    inline ResourceComplianceSummaryItem& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The compliance status for the resource.</p>
     */
    inline const ComplianceStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The compliance status for the resource.</p>
     */
    inline void SetStatus(const ComplianceStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The compliance status for the resource.</p>
     */
    inline void SetStatus(ComplianceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The compliance status for the resource.</p>
     */
    inline ResourceComplianceSummaryItem& WithStatus(const ComplianceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The compliance status for the resource.</p>
     */
    inline ResourceComplianceSummaryItem& WithStatus(ComplianceStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The highest severity item found for the resource. The resource is compliant
     * for this item.</p>
     */
    inline const ComplianceSeverity& GetOverallSeverity() const{ return m_overallSeverity; }

    /**
     * <p>The highest severity item found for the resource. The resource is compliant
     * for this item.</p>
     */
    inline void SetOverallSeverity(const ComplianceSeverity& value) { m_overallSeverityHasBeenSet = true; m_overallSeverity = value; }

    /**
     * <p>The highest severity item found for the resource. The resource is compliant
     * for this item.</p>
     */
    inline void SetOverallSeverity(ComplianceSeverity&& value) { m_overallSeverityHasBeenSet = true; m_overallSeverity = std::move(value); }

    /**
     * <p>The highest severity item found for the resource. The resource is compliant
     * for this item.</p>
     */
    inline ResourceComplianceSummaryItem& WithOverallSeverity(const ComplianceSeverity& value) { SetOverallSeverity(value); return *this;}

    /**
     * <p>The highest severity item found for the resource. The resource is compliant
     * for this item.</p>
     */
    inline ResourceComplianceSummaryItem& WithOverallSeverity(ComplianceSeverity&& value) { SetOverallSeverity(std::move(value)); return *this;}


    /**
     * <p>Information about the execution.</p>
     */
    inline const ComplianceExecutionSummary& GetExecutionSummary() const{ return m_executionSummary; }

    /**
     * <p>Information about the execution.</p>
     */
    inline void SetExecutionSummary(const ComplianceExecutionSummary& value) { m_executionSummaryHasBeenSet = true; m_executionSummary = value; }

    /**
     * <p>Information about the execution.</p>
     */
    inline void SetExecutionSummary(ComplianceExecutionSummary&& value) { m_executionSummaryHasBeenSet = true; m_executionSummary = std::move(value); }

    /**
     * <p>Information about the execution.</p>
     */
    inline ResourceComplianceSummaryItem& WithExecutionSummary(const ComplianceExecutionSummary& value) { SetExecutionSummary(value); return *this;}

    /**
     * <p>Information about the execution.</p>
     */
    inline ResourceComplianceSummaryItem& WithExecutionSummary(ComplianceExecutionSummary&& value) { SetExecutionSummary(std::move(value)); return *this;}


    /**
     * <p>A list of items that are compliant for the resource.</p>
     */
    inline const CompliantSummary& GetCompliantSummary() const{ return m_compliantSummary; }

    /**
     * <p>A list of items that are compliant for the resource.</p>
     */
    inline void SetCompliantSummary(const CompliantSummary& value) { m_compliantSummaryHasBeenSet = true; m_compliantSummary = value; }

    /**
     * <p>A list of items that are compliant for the resource.</p>
     */
    inline void SetCompliantSummary(CompliantSummary&& value) { m_compliantSummaryHasBeenSet = true; m_compliantSummary = std::move(value); }

    /**
     * <p>A list of items that are compliant for the resource.</p>
     */
    inline ResourceComplianceSummaryItem& WithCompliantSummary(const CompliantSummary& value) { SetCompliantSummary(value); return *this;}

    /**
     * <p>A list of items that are compliant for the resource.</p>
     */
    inline ResourceComplianceSummaryItem& WithCompliantSummary(CompliantSummary&& value) { SetCompliantSummary(std::move(value)); return *this;}


    /**
     * <p>A list of items that aren't compliant for the resource.</p>
     */
    inline const NonCompliantSummary& GetNonCompliantSummary() const{ return m_nonCompliantSummary; }

    /**
     * <p>A list of items that aren't compliant for the resource.</p>
     */
    inline void SetNonCompliantSummary(const NonCompliantSummary& value) { m_nonCompliantSummaryHasBeenSet = true; m_nonCompliantSummary = value; }

    /**
     * <p>A list of items that aren't compliant for the resource.</p>
     */
    inline void SetNonCompliantSummary(NonCompliantSummary&& value) { m_nonCompliantSummaryHasBeenSet = true; m_nonCompliantSummary = std::move(value); }

    /**
     * <p>A list of items that aren't compliant for the resource.</p>
     */
    inline ResourceComplianceSummaryItem& WithNonCompliantSummary(const NonCompliantSummary& value) { SetNonCompliantSummary(value); return *this;}

    /**
     * <p>A list of items that aren't compliant for the resource.</p>
     */
    inline ResourceComplianceSummaryItem& WithNonCompliantSummary(NonCompliantSummary&& value) { SetNonCompliantSummary(std::move(value)); return *this;}

  private:

    Aws::String m_complianceType;
    bool m_complianceTypeHasBeenSet;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet;

    ComplianceStatus m_status;
    bool m_statusHasBeenSet;

    ComplianceSeverity m_overallSeverity;
    bool m_overallSeverityHasBeenSet;

    ComplianceExecutionSummary m_executionSummary;
    bool m_executionSummaryHasBeenSet;

    CompliantSummary m_compliantSummary;
    bool m_compliantSummaryHasBeenSet;

    NonCompliantSummary m_nonCompliantSummary;
    bool m_nonCompliantSummaryHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
