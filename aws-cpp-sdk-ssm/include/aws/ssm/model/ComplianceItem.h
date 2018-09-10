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
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>Information about the compliance as defined by the resource type. For
   * example, for a patch resource type, <code>Items</code> includes information
   * about the PatchSeverity, Classification, etc.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ComplianceItem">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API ComplianceItem
  {
  public:
    ComplianceItem();
    ComplianceItem(Aws::Utils::Json::JsonView jsonValue);
    ComplianceItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The compliance type. For example, Association (for a State Manager
     * association), Patch, or Custom:<code>string</code> are all valid compliance
     * types.</p>
     */
    inline const Aws::String& GetComplianceType() const{ return m_complianceType; }

    /**
     * <p>The compliance type. For example, Association (for a State Manager
     * association), Patch, or Custom:<code>string</code> are all valid compliance
     * types.</p>
     */
    inline void SetComplianceType(const Aws::String& value) { m_complianceTypeHasBeenSet = true; m_complianceType = value; }

    /**
     * <p>The compliance type. For example, Association (for a State Manager
     * association), Patch, or Custom:<code>string</code> are all valid compliance
     * types.</p>
     */
    inline void SetComplianceType(Aws::String&& value) { m_complianceTypeHasBeenSet = true; m_complianceType = std::move(value); }

    /**
     * <p>The compliance type. For example, Association (for a State Manager
     * association), Patch, or Custom:<code>string</code> are all valid compliance
     * types.</p>
     */
    inline void SetComplianceType(const char* value) { m_complianceTypeHasBeenSet = true; m_complianceType.assign(value); }

    /**
     * <p>The compliance type. For example, Association (for a State Manager
     * association), Patch, or Custom:<code>string</code> are all valid compliance
     * types.</p>
     */
    inline ComplianceItem& WithComplianceType(const Aws::String& value) { SetComplianceType(value); return *this;}

    /**
     * <p>The compliance type. For example, Association (for a State Manager
     * association), Patch, or Custom:<code>string</code> are all valid compliance
     * types.</p>
     */
    inline ComplianceItem& WithComplianceType(Aws::String&& value) { SetComplianceType(std::move(value)); return *this;}

    /**
     * <p>The compliance type. For example, Association (for a State Manager
     * association), Patch, or Custom:<code>string</code> are all valid compliance
     * types.</p>
     */
    inline ComplianceItem& WithComplianceType(const char* value) { SetComplianceType(value); return *this;}


    /**
     * <p>The type of resource. <code>ManagedInstance</code> is currently the only
     * supported resource type.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of resource. <code>ManagedInstance</code> is currently the only
     * supported resource type.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of resource. <code>ManagedInstance</code> is currently the only
     * supported resource type.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of resource. <code>ManagedInstance</code> is currently the only
     * supported resource type.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The type of resource. <code>ManagedInstance</code> is currently the only
     * supported resource type.</p>
     */
    inline ComplianceItem& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of resource. <code>ManagedInstance</code> is currently the only
     * supported resource type.</p>
     */
    inline ComplianceItem& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The type of resource. <code>ManagedInstance</code> is currently the only
     * supported resource type.</p>
     */
    inline ComplianceItem& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * <p>An ID for the resource. For a managed instance, this is the instance ID.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>An ID for the resource. For a managed instance, this is the instance ID.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>An ID for the resource. For a managed instance, this is the instance ID.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>An ID for the resource. For a managed instance, this is the instance ID.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>An ID for the resource. For a managed instance, this is the instance ID.</p>
     */
    inline ComplianceItem& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>An ID for the resource. For a managed instance, this is the instance ID.</p>
     */
    inline ComplianceItem& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>An ID for the resource. For a managed instance, this is the instance ID.</p>
     */
    inline ComplianceItem& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>An ID for the compliance item. For example, if the compliance item is a
     * Windows patch, the ID could be the number of the KB article; for example:
     * KB4010320.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>An ID for the compliance item. For example, if the compliance item is a
     * Windows patch, the ID could be the number of the KB article; for example:
     * KB4010320.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>An ID for the compliance item. For example, if the compliance item is a
     * Windows patch, the ID could be the number of the KB article; for example:
     * KB4010320.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>An ID for the compliance item. For example, if the compliance item is a
     * Windows patch, the ID could be the number of the KB article; for example:
     * KB4010320.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>An ID for the compliance item. For example, if the compliance item is a
     * Windows patch, the ID could be the number of the KB article; for example:
     * KB4010320.</p>
     */
    inline ComplianceItem& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>An ID for the compliance item. For example, if the compliance item is a
     * Windows patch, the ID could be the number of the KB article; for example:
     * KB4010320.</p>
     */
    inline ComplianceItem& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>An ID for the compliance item. For example, if the compliance item is a
     * Windows patch, the ID could be the number of the KB article; for example:
     * KB4010320.</p>
     */
    inline ComplianceItem& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>A title for the compliance item. For example, if the compliance item is a
     * Windows patch, the title could be the title of the KB article for the patch; for
     * example: Security Update for Active Directory Federation Services.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * <p>A title for the compliance item. For example, if the compliance item is a
     * Windows patch, the title could be the title of the KB article for the patch; for
     * example: Security Update for Active Directory Federation Services.</p>
     */
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p>A title for the compliance item. For example, if the compliance item is a
     * Windows patch, the title could be the title of the KB article for the patch; for
     * example: Security Update for Active Directory Federation Services.</p>
     */
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * <p>A title for the compliance item. For example, if the compliance item is a
     * Windows patch, the title could be the title of the KB article for the patch; for
     * example: Security Update for Active Directory Federation Services.</p>
     */
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }

    /**
     * <p>A title for the compliance item. For example, if the compliance item is a
     * Windows patch, the title could be the title of the KB article for the patch; for
     * example: Security Update for Active Directory Federation Services.</p>
     */
    inline ComplianceItem& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * <p>A title for the compliance item. For example, if the compliance item is a
     * Windows patch, the title could be the title of the KB article for the patch; for
     * example: Security Update for Active Directory Federation Services.</p>
     */
    inline ComplianceItem& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * <p>A title for the compliance item. For example, if the compliance item is a
     * Windows patch, the title could be the title of the KB article for the patch; for
     * example: Security Update for Active Directory Federation Services.</p>
     */
    inline ComplianceItem& WithTitle(const char* value) { SetTitle(value); return *this;}


    /**
     * <p>The status of the compliance item. An item is either COMPLIANT or
     * NON_COMPLIANT.</p>
     */
    inline const ComplianceStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the compliance item. An item is either COMPLIANT or
     * NON_COMPLIANT.</p>
     */
    inline void SetStatus(const ComplianceStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the compliance item. An item is either COMPLIANT or
     * NON_COMPLIANT.</p>
     */
    inline void SetStatus(ComplianceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the compliance item. An item is either COMPLIANT or
     * NON_COMPLIANT.</p>
     */
    inline ComplianceItem& WithStatus(const ComplianceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the compliance item. An item is either COMPLIANT or
     * NON_COMPLIANT.</p>
     */
    inline ComplianceItem& WithStatus(ComplianceStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The severity of the compliance status. Severity can be one of the following:
     * Critical, High, Medium, Low, Informational, Unspecified.</p>
     */
    inline const ComplianceSeverity& GetSeverity() const{ return m_severity; }

    /**
     * <p>The severity of the compliance status. Severity can be one of the following:
     * Critical, High, Medium, Low, Informational, Unspecified.</p>
     */
    inline void SetSeverity(const ComplianceSeverity& value) { m_severityHasBeenSet = true; m_severity = value; }

    /**
     * <p>The severity of the compliance status. Severity can be one of the following:
     * Critical, High, Medium, Low, Informational, Unspecified.</p>
     */
    inline void SetSeverity(ComplianceSeverity&& value) { m_severityHasBeenSet = true; m_severity = std::move(value); }

    /**
     * <p>The severity of the compliance status. Severity can be one of the following:
     * Critical, High, Medium, Low, Informational, Unspecified.</p>
     */
    inline ComplianceItem& WithSeverity(const ComplianceSeverity& value) { SetSeverity(value); return *this;}

    /**
     * <p>The severity of the compliance status. Severity can be one of the following:
     * Critical, High, Medium, Low, Informational, Unspecified.</p>
     */
    inline ComplianceItem& WithSeverity(ComplianceSeverity&& value) { SetSeverity(std::move(value)); return *this;}


    /**
     * <p>A summary for the compliance item. The summary includes an execution ID, the
     * execution type (for example, command), and the execution time.</p>
     */
    inline const ComplianceExecutionSummary& GetExecutionSummary() const{ return m_executionSummary; }

    /**
     * <p>A summary for the compliance item. The summary includes an execution ID, the
     * execution type (for example, command), and the execution time.</p>
     */
    inline void SetExecutionSummary(const ComplianceExecutionSummary& value) { m_executionSummaryHasBeenSet = true; m_executionSummary = value; }

    /**
     * <p>A summary for the compliance item. The summary includes an execution ID, the
     * execution type (for example, command), and the execution time.</p>
     */
    inline void SetExecutionSummary(ComplianceExecutionSummary&& value) { m_executionSummaryHasBeenSet = true; m_executionSummary = std::move(value); }

    /**
     * <p>A summary for the compliance item. The summary includes an execution ID, the
     * execution type (for example, command), and the execution time.</p>
     */
    inline ComplianceItem& WithExecutionSummary(const ComplianceExecutionSummary& value) { SetExecutionSummary(value); return *this;}

    /**
     * <p>A summary for the compliance item. The summary includes an execution ID, the
     * execution type (for example, command), and the execution time.</p>
     */
    inline ComplianceItem& WithExecutionSummary(ComplianceExecutionSummary&& value) { SetExecutionSummary(std::move(value)); return *this;}


    /**
     * <p>A "Key": "Value" tag combination for the compliance item.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDetails() const{ return m_details; }

    /**
     * <p>A "Key": "Value" tag combination for the compliance item.</p>
     */
    inline void SetDetails(const Aws::Map<Aws::String, Aws::String>& value) { m_detailsHasBeenSet = true; m_details = value; }

    /**
     * <p>A "Key": "Value" tag combination for the compliance item.</p>
     */
    inline void SetDetails(Aws::Map<Aws::String, Aws::String>&& value) { m_detailsHasBeenSet = true; m_details = std::move(value); }

    /**
     * <p>A "Key": "Value" tag combination for the compliance item.</p>
     */
    inline ComplianceItem& WithDetails(const Aws::Map<Aws::String, Aws::String>& value) { SetDetails(value); return *this;}

    /**
     * <p>A "Key": "Value" tag combination for the compliance item.</p>
     */
    inline ComplianceItem& WithDetails(Aws::Map<Aws::String, Aws::String>&& value) { SetDetails(std::move(value)); return *this;}

    /**
     * <p>A "Key": "Value" tag combination for the compliance item.</p>
     */
    inline ComplianceItem& AddDetails(const Aws::String& key, const Aws::String& value) { m_detailsHasBeenSet = true; m_details.emplace(key, value); return *this; }

    /**
     * <p>A "Key": "Value" tag combination for the compliance item.</p>
     */
    inline ComplianceItem& AddDetails(Aws::String&& key, const Aws::String& value) { m_detailsHasBeenSet = true; m_details.emplace(std::move(key), value); return *this; }

    /**
     * <p>A "Key": "Value" tag combination for the compliance item.</p>
     */
    inline ComplianceItem& AddDetails(const Aws::String& key, Aws::String&& value) { m_detailsHasBeenSet = true; m_details.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A "Key": "Value" tag combination for the compliance item.</p>
     */
    inline ComplianceItem& AddDetails(Aws::String&& key, Aws::String&& value) { m_detailsHasBeenSet = true; m_details.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A "Key": "Value" tag combination for the compliance item.</p>
     */
    inline ComplianceItem& AddDetails(const char* key, Aws::String&& value) { m_detailsHasBeenSet = true; m_details.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A "Key": "Value" tag combination for the compliance item.</p>
     */
    inline ComplianceItem& AddDetails(Aws::String&& key, const char* value) { m_detailsHasBeenSet = true; m_details.emplace(std::move(key), value); return *this; }

    /**
     * <p>A "Key": "Value" tag combination for the compliance item.</p>
     */
    inline ComplianceItem& AddDetails(const char* key, const char* value) { m_detailsHasBeenSet = true; m_details.emplace(key, value); return *this; }

  private:

    Aws::String m_complianceType;
    bool m_complianceTypeHasBeenSet;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet;

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_title;
    bool m_titleHasBeenSet;

    ComplianceStatus m_status;
    bool m_statusHasBeenSet;

    ComplianceSeverity m_severity;
    bool m_severityHasBeenSet;

    ComplianceExecutionSummary m_executionSummary;
    bool m_executionSummaryHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_details;
    bool m_detailsHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
