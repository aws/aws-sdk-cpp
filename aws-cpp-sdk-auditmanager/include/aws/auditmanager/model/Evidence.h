/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/auditmanager/model/Resource.h>
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
namespace AuditManager
{
namespace Model
{

  /**
   * <p> A record that contains the information needed to demonstrate compliance with
   * the requirements specified by a control. Examples of evidence include change
   * activity triggered by a user, or a system configuration snapshot. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/Evidence">AWS
   * API Reference</a></p>
   */
  class AWS_AUDITMANAGER_API Evidence
  {
  public:
    Evidence();
    Evidence(Aws::Utils::Json::JsonView jsonValue);
    Evidence& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The data source from which the specified evidence was collected. </p>
     */
    inline const Aws::String& GetDataSource() const{ return m_dataSource; }

    /**
     * <p> The data source from which the specified evidence was collected. </p>
     */
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }

    /**
     * <p> The data source from which the specified evidence was collected. </p>
     */
    inline void SetDataSource(const Aws::String& value) { m_dataSourceHasBeenSet = true; m_dataSource = value; }

    /**
     * <p> The data source from which the specified evidence was collected. </p>
     */
    inline void SetDataSource(Aws::String&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::move(value); }

    /**
     * <p> The data source from which the specified evidence was collected. </p>
     */
    inline void SetDataSource(const char* value) { m_dataSourceHasBeenSet = true; m_dataSource.assign(value); }

    /**
     * <p> The data source from which the specified evidence was collected. </p>
     */
    inline Evidence& WithDataSource(const Aws::String& value) { SetDataSource(value); return *this;}

    /**
     * <p> The data source from which the specified evidence was collected. </p>
     */
    inline Evidence& WithDataSource(Aws::String&& value) { SetDataSource(std::move(value)); return *this;}

    /**
     * <p> The data source from which the specified evidence was collected. </p>
     */
    inline Evidence& WithDataSource(const char* value) { SetDataSource(value); return *this;}


    /**
     * <p> The identifier for the specified AWS account. </p>
     */
    inline const Aws::String& GetEvidenceAwsAccountId() const{ return m_evidenceAwsAccountId; }

    /**
     * <p> The identifier for the specified AWS account. </p>
     */
    inline bool EvidenceAwsAccountIdHasBeenSet() const { return m_evidenceAwsAccountIdHasBeenSet; }

    /**
     * <p> The identifier for the specified AWS account. </p>
     */
    inline void SetEvidenceAwsAccountId(const Aws::String& value) { m_evidenceAwsAccountIdHasBeenSet = true; m_evidenceAwsAccountId = value; }

    /**
     * <p> The identifier for the specified AWS account. </p>
     */
    inline void SetEvidenceAwsAccountId(Aws::String&& value) { m_evidenceAwsAccountIdHasBeenSet = true; m_evidenceAwsAccountId = std::move(value); }

    /**
     * <p> The identifier for the specified AWS account. </p>
     */
    inline void SetEvidenceAwsAccountId(const char* value) { m_evidenceAwsAccountIdHasBeenSet = true; m_evidenceAwsAccountId.assign(value); }

    /**
     * <p> The identifier for the specified AWS account. </p>
     */
    inline Evidence& WithEvidenceAwsAccountId(const Aws::String& value) { SetEvidenceAwsAccountId(value); return *this;}

    /**
     * <p> The identifier for the specified AWS account. </p>
     */
    inline Evidence& WithEvidenceAwsAccountId(Aws::String&& value) { SetEvidenceAwsAccountId(std::move(value)); return *this;}

    /**
     * <p> The identifier for the specified AWS account. </p>
     */
    inline Evidence& WithEvidenceAwsAccountId(const char* value) { SetEvidenceAwsAccountId(value); return *this;}


    /**
     * <p> The timestamp that represents when the evidence was collected. </p>
     */
    inline const Aws::Utils::DateTime& GetTime() const{ return m_time; }

    /**
     * <p> The timestamp that represents when the evidence was collected. </p>
     */
    inline bool TimeHasBeenSet() const { return m_timeHasBeenSet; }

    /**
     * <p> The timestamp that represents when the evidence was collected. </p>
     */
    inline void SetTime(const Aws::Utils::DateTime& value) { m_timeHasBeenSet = true; m_time = value; }

    /**
     * <p> The timestamp that represents when the evidence was collected. </p>
     */
    inline void SetTime(Aws::Utils::DateTime&& value) { m_timeHasBeenSet = true; m_time = std::move(value); }

    /**
     * <p> The timestamp that represents when the evidence was collected. </p>
     */
    inline Evidence& WithTime(const Aws::Utils::DateTime& value) { SetTime(value); return *this;}

    /**
     * <p> The timestamp that represents when the evidence was collected. </p>
     */
    inline Evidence& WithTime(Aws::Utils::DateTime&& value) { SetTime(std::move(value)); return *this;}


    /**
     * <p> The AWS service from which the evidence is collected. </p>
     */
    inline const Aws::String& GetEventSource() const{ return m_eventSource; }

    /**
     * <p> The AWS service from which the evidence is collected. </p>
     */
    inline bool EventSourceHasBeenSet() const { return m_eventSourceHasBeenSet; }

    /**
     * <p> The AWS service from which the evidence is collected. </p>
     */
    inline void SetEventSource(const Aws::String& value) { m_eventSourceHasBeenSet = true; m_eventSource = value; }

    /**
     * <p> The AWS service from which the evidence is collected. </p>
     */
    inline void SetEventSource(Aws::String&& value) { m_eventSourceHasBeenSet = true; m_eventSource = std::move(value); }

    /**
     * <p> The AWS service from which the evidence is collected. </p>
     */
    inline void SetEventSource(const char* value) { m_eventSourceHasBeenSet = true; m_eventSource.assign(value); }

    /**
     * <p> The AWS service from which the evidence is collected. </p>
     */
    inline Evidence& WithEventSource(const Aws::String& value) { SetEventSource(value); return *this;}

    /**
     * <p> The AWS service from which the evidence is collected. </p>
     */
    inline Evidence& WithEventSource(Aws::String&& value) { SetEventSource(std::move(value)); return *this;}

    /**
     * <p> The AWS service from which the evidence is collected. </p>
     */
    inline Evidence& WithEventSource(const char* value) { SetEventSource(value); return *this;}


    /**
     * <p> The name of the specified evidence event. </p>
     */
    inline const Aws::String& GetEventName() const{ return m_eventName; }

    /**
     * <p> The name of the specified evidence event. </p>
     */
    inline bool EventNameHasBeenSet() const { return m_eventNameHasBeenSet; }

    /**
     * <p> The name of the specified evidence event. </p>
     */
    inline void SetEventName(const Aws::String& value) { m_eventNameHasBeenSet = true; m_eventName = value; }

    /**
     * <p> The name of the specified evidence event. </p>
     */
    inline void SetEventName(Aws::String&& value) { m_eventNameHasBeenSet = true; m_eventName = std::move(value); }

    /**
     * <p> The name of the specified evidence event. </p>
     */
    inline void SetEventName(const char* value) { m_eventNameHasBeenSet = true; m_eventName.assign(value); }

    /**
     * <p> The name of the specified evidence event. </p>
     */
    inline Evidence& WithEventName(const Aws::String& value) { SetEventName(value); return *this;}

    /**
     * <p> The name of the specified evidence event. </p>
     */
    inline Evidence& WithEventName(Aws::String&& value) { SetEventName(std::move(value)); return *this;}

    /**
     * <p> The name of the specified evidence event. </p>
     */
    inline Evidence& WithEventName(const char* value) { SetEventName(value); return *this;}


    /**
     * <p> The type of automated evidence. </p>
     */
    inline const Aws::String& GetEvidenceByType() const{ return m_evidenceByType; }

    /**
     * <p> The type of automated evidence. </p>
     */
    inline bool EvidenceByTypeHasBeenSet() const { return m_evidenceByTypeHasBeenSet; }

    /**
     * <p> The type of automated evidence. </p>
     */
    inline void SetEvidenceByType(const Aws::String& value) { m_evidenceByTypeHasBeenSet = true; m_evidenceByType = value; }

    /**
     * <p> The type of automated evidence. </p>
     */
    inline void SetEvidenceByType(Aws::String&& value) { m_evidenceByTypeHasBeenSet = true; m_evidenceByType = std::move(value); }

    /**
     * <p> The type of automated evidence. </p>
     */
    inline void SetEvidenceByType(const char* value) { m_evidenceByTypeHasBeenSet = true; m_evidenceByType.assign(value); }

    /**
     * <p> The type of automated evidence. </p>
     */
    inline Evidence& WithEvidenceByType(const Aws::String& value) { SetEvidenceByType(value); return *this;}

    /**
     * <p> The type of automated evidence. </p>
     */
    inline Evidence& WithEvidenceByType(Aws::String&& value) { SetEvidenceByType(std::move(value)); return *this;}

    /**
     * <p> The type of automated evidence. </p>
     */
    inline Evidence& WithEvidenceByType(const char* value) { SetEvidenceByType(value); return *this;}


    /**
     * <p> The list of resources assessed to generate the evidence. </p>
     */
    inline const Aws::Vector<Resource>& GetResourcesIncluded() const{ return m_resourcesIncluded; }

    /**
     * <p> The list of resources assessed to generate the evidence. </p>
     */
    inline bool ResourcesIncludedHasBeenSet() const { return m_resourcesIncludedHasBeenSet; }

    /**
     * <p> The list of resources assessed to generate the evidence. </p>
     */
    inline void SetResourcesIncluded(const Aws::Vector<Resource>& value) { m_resourcesIncludedHasBeenSet = true; m_resourcesIncluded = value; }

    /**
     * <p> The list of resources assessed to generate the evidence. </p>
     */
    inline void SetResourcesIncluded(Aws::Vector<Resource>&& value) { m_resourcesIncludedHasBeenSet = true; m_resourcesIncluded = std::move(value); }

    /**
     * <p> The list of resources assessed to generate the evidence. </p>
     */
    inline Evidence& WithResourcesIncluded(const Aws::Vector<Resource>& value) { SetResourcesIncluded(value); return *this;}

    /**
     * <p> The list of resources assessed to generate the evidence. </p>
     */
    inline Evidence& WithResourcesIncluded(Aws::Vector<Resource>&& value) { SetResourcesIncluded(std::move(value)); return *this;}

    /**
     * <p> The list of resources assessed to generate the evidence. </p>
     */
    inline Evidence& AddResourcesIncluded(const Resource& value) { m_resourcesIncludedHasBeenSet = true; m_resourcesIncluded.push_back(value); return *this; }

    /**
     * <p> The list of resources assessed to generate the evidence. </p>
     */
    inline Evidence& AddResourcesIncluded(Resource&& value) { m_resourcesIncludedHasBeenSet = true; m_resourcesIncluded.push_back(std::move(value)); return *this; }


    /**
     * <p> The names and values used by the evidence event, including an attribute name
     * (such as <code>allowUsersToChangePassword</code>) and value (such as
     * <code>true</code> or <code>false</code>). </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p> The names and values used by the evidence event, including an attribute name
     * (such as <code>allowUsersToChangePassword</code>) and value (such as
     * <code>true</code> or <code>false</code>). </p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p> The names and values used by the evidence event, including an attribute name
     * (such as <code>allowUsersToChangePassword</code>) and value (such as
     * <code>true</code> or <code>false</code>). </p>
     */
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p> The names and values used by the evidence event, including an attribute name
     * (such as <code>allowUsersToChangePassword</code>) and value (such as
     * <code>true</code> or <code>false</code>). </p>
     */
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p> The names and values used by the evidence event, including an attribute name
     * (such as <code>allowUsersToChangePassword</code>) and value (such as
     * <code>true</code> or <code>false</code>). </p>
     */
    inline Evidence& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p> The names and values used by the evidence event, including an attribute name
     * (such as <code>allowUsersToChangePassword</code>) and value (such as
     * <code>true</code> or <code>false</code>). </p>
     */
    inline Evidence& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p> The names and values used by the evidence event, including an attribute name
     * (such as <code>allowUsersToChangePassword</code>) and value (such as
     * <code>true</code> or <code>false</code>). </p>
     */
    inline Evidence& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

    /**
     * <p> The names and values used by the evidence event, including an attribute name
     * (such as <code>allowUsersToChangePassword</code>) and value (such as
     * <code>true</code> or <code>false</code>). </p>
     */
    inline Evidence& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p> The names and values used by the evidence event, including an attribute name
     * (such as <code>allowUsersToChangePassword</code>) and value (such as
     * <code>true</code> or <code>false</code>). </p>
     */
    inline Evidence& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p> The names and values used by the evidence event, including an attribute name
     * (such as <code>allowUsersToChangePassword</code>) and value (such as
     * <code>true</code> or <code>false</code>). </p>
     */
    inline Evidence& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> The names and values used by the evidence event, including an attribute name
     * (such as <code>allowUsersToChangePassword</code>) and value (such as
     * <code>true</code> or <code>false</code>). </p>
     */
    inline Evidence& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p> The names and values used by the evidence event, including an attribute name
     * (such as <code>allowUsersToChangePassword</code>) and value (such as
     * <code>true</code> or <code>false</code>). </p>
     */
    inline Evidence& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p> The names and values used by the evidence event, including an attribute name
     * (such as <code>allowUsersToChangePassword</code>) and value (such as
     * <code>true</code> or <code>false</code>). </p>
     */
    inline Evidence& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }


    /**
     * <p> The unique identifier for the IAM user or role associated with the evidence.
     * </p>
     */
    inline const Aws::String& GetIamId() const{ return m_iamId; }

    /**
     * <p> The unique identifier for the IAM user or role associated with the evidence.
     * </p>
     */
    inline bool IamIdHasBeenSet() const { return m_iamIdHasBeenSet; }

    /**
     * <p> The unique identifier for the IAM user or role associated with the evidence.
     * </p>
     */
    inline void SetIamId(const Aws::String& value) { m_iamIdHasBeenSet = true; m_iamId = value; }

    /**
     * <p> The unique identifier for the IAM user or role associated with the evidence.
     * </p>
     */
    inline void SetIamId(Aws::String&& value) { m_iamIdHasBeenSet = true; m_iamId = std::move(value); }

    /**
     * <p> The unique identifier for the IAM user or role associated with the evidence.
     * </p>
     */
    inline void SetIamId(const char* value) { m_iamIdHasBeenSet = true; m_iamId.assign(value); }

    /**
     * <p> The unique identifier for the IAM user or role associated with the evidence.
     * </p>
     */
    inline Evidence& WithIamId(const Aws::String& value) { SetIamId(value); return *this;}

    /**
     * <p> The unique identifier for the IAM user or role associated with the evidence.
     * </p>
     */
    inline Evidence& WithIamId(Aws::String&& value) { SetIamId(std::move(value)); return *this;}

    /**
     * <p> The unique identifier for the IAM user or role associated with the evidence.
     * </p>
     */
    inline Evidence& WithIamId(const char* value) { SetIamId(value); return *this;}


    /**
     * <p> The evaluation status for evidence that falls under the compliance check
     * category. For evidence collected from AWS Security Hub, a <i>Pass</i> or
     * <i>Fail</i> result is shown. For evidence collected from AWS Config, a
     * <i>Compliant</i> or <i>Noncompliant</i> result is shown. </p>
     */
    inline const Aws::String& GetComplianceCheck() const{ return m_complianceCheck; }

    /**
     * <p> The evaluation status for evidence that falls under the compliance check
     * category. For evidence collected from AWS Security Hub, a <i>Pass</i> or
     * <i>Fail</i> result is shown. For evidence collected from AWS Config, a
     * <i>Compliant</i> or <i>Noncompliant</i> result is shown. </p>
     */
    inline bool ComplianceCheckHasBeenSet() const { return m_complianceCheckHasBeenSet; }

    /**
     * <p> The evaluation status for evidence that falls under the compliance check
     * category. For evidence collected from AWS Security Hub, a <i>Pass</i> or
     * <i>Fail</i> result is shown. For evidence collected from AWS Config, a
     * <i>Compliant</i> or <i>Noncompliant</i> result is shown. </p>
     */
    inline void SetComplianceCheck(const Aws::String& value) { m_complianceCheckHasBeenSet = true; m_complianceCheck = value; }

    /**
     * <p> The evaluation status for evidence that falls under the compliance check
     * category. For evidence collected from AWS Security Hub, a <i>Pass</i> or
     * <i>Fail</i> result is shown. For evidence collected from AWS Config, a
     * <i>Compliant</i> or <i>Noncompliant</i> result is shown. </p>
     */
    inline void SetComplianceCheck(Aws::String&& value) { m_complianceCheckHasBeenSet = true; m_complianceCheck = std::move(value); }

    /**
     * <p> The evaluation status for evidence that falls under the compliance check
     * category. For evidence collected from AWS Security Hub, a <i>Pass</i> or
     * <i>Fail</i> result is shown. For evidence collected from AWS Config, a
     * <i>Compliant</i> or <i>Noncompliant</i> result is shown. </p>
     */
    inline void SetComplianceCheck(const char* value) { m_complianceCheckHasBeenSet = true; m_complianceCheck.assign(value); }

    /**
     * <p> The evaluation status for evidence that falls under the compliance check
     * category. For evidence collected from AWS Security Hub, a <i>Pass</i> or
     * <i>Fail</i> result is shown. For evidence collected from AWS Config, a
     * <i>Compliant</i> or <i>Noncompliant</i> result is shown. </p>
     */
    inline Evidence& WithComplianceCheck(const Aws::String& value) { SetComplianceCheck(value); return *this;}

    /**
     * <p> The evaluation status for evidence that falls under the compliance check
     * category. For evidence collected from AWS Security Hub, a <i>Pass</i> or
     * <i>Fail</i> result is shown. For evidence collected from AWS Config, a
     * <i>Compliant</i> or <i>Noncompliant</i> result is shown. </p>
     */
    inline Evidence& WithComplianceCheck(Aws::String&& value) { SetComplianceCheck(std::move(value)); return *this;}

    /**
     * <p> The evaluation status for evidence that falls under the compliance check
     * category. For evidence collected from AWS Security Hub, a <i>Pass</i> or
     * <i>Fail</i> result is shown. For evidence collected from AWS Config, a
     * <i>Compliant</i> or <i>Noncompliant</i> result is shown. </p>
     */
    inline Evidence& WithComplianceCheck(const char* value) { SetComplianceCheck(value); return *this;}


    /**
     * <p> The AWS account from which the evidence is collected, and its AWS
     * organization path. </p>
     */
    inline const Aws::String& GetAwsOrganization() const{ return m_awsOrganization; }

    /**
     * <p> The AWS account from which the evidence is collected, and its AWS
     * organization path. </p>
     */
    inline bool AwsOrganizationHasBeenSet() const { return m_awsOrganizationHasBeenSet; }

    /**
     * <p> The AWS account from which the evidence is collected, and its AWS
     * organization path. </p>
     */
    inline void SetAwsOrganization(const Aws::String& value) { m_awsOrganizationHasBeenSet = true; m_awsOrganization = value; }

    /**
     * <p> The AWS account from which the evidence is collected, and its AWS
     * organization path. </p>
     */
    inline void SetAwsOrganization(Aws::String&& value) { m_awsOrganizationHasBeenSet = true; m_awsOrganization = std::move(value); }

    /**
     * <p> The AWS account from which the evidence is collected, and its AWS
     * organization path. </p>
     */
    inline void SetAwsOrganization(const char* value) { m_awsOrganizationHasBeenSet = true; m_awsOrganization.assign(value); }

    /**
     * <p> The AWS account from which the evidence is collected, and its AWS
     * organization path. </p>
     */
    inline Evidence& WithAwsOrganization(const Aws::String& value) { SetAwsOrganization(value); return *this;}

    /**
     * <p> The AWS account from which the evidence is collected, and its AWS
     * organization path. </p>
     */
    inline Evidence& WithAwsOrganization(Aws::String&& value) { SetAwsOrganization(std::move(value)); return *this;}

    /**
     * <p> The AWS account from which the evidence is collected, and its AWS
     * organization path. </p>
     */
    inline Evidence& WithAwsOrganization(const char* value) { SetAwsOrganization(value); return *this;}


    /**
     * <p> The identifier for the specified AWS account. </p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p> The identifier for the specified AWS account. </p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p> The identifier for the specified AWS account. </p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p> The identifier for the specified AWS account. </p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p> The identifier for the specified AWS account. </p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p> The identifier for the specified AWS account. </p>
     */
    inline Evidence& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p> The identifier for the specified AWS account. </p>
     */
    inline Evidence& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p> The identifier for the specified AWS account. </p>
     */
    inline Evidence& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p> The identifier for the folder in which the evidence is stored. </p>
     */
    inline const Aws::String& GetEvidenceFolderId() const{ return m_evidenceFolderId; }

    /**
     * <p> The identifier for the folder in which the evidence is stored. </p>
     */
    inline bool EvidenceFolderIdHasBeenSet() const { return m_evidenceFolderIdHasBeenSet; }

    /**
     * <p> The identifier for the folder in which the evidence is stored. </p>
     */
    inline void SetEvidenceFolderId(const Aws::String& value) { m_evidenceFolderIdHasBeenSet = true; m_evidenceFolderId = value; }

    /**
     * <p> The identifier for the folder in which the evidence is stored. </p>
     */
    inline void SetEvidenceFolderId(Aws::String&& value) { m_evidenceFolderIdHasBeenSet = true; m_evidenceFolderId = std::move(value); }

    /**
     * <p> The identifier for the folder in which the evidence is stored. </p>
     */
    inline void SetEvidenceFolderId(const char* value) { m_evidenceFolderIdHasBeenSet = true; m_evidenceFolderId.assign(value); }

    /**
     * <p> The identifier for the folder in which the evidence is stored. </p>
     */
    inline Evidence& WithEvidenceFolderId(const Aws::String& value) { SetEvidenceFolderId(value); return *this;}

    /**
     * <p> The identifier for the folder in which the evidence is stored. </p>
     */
    inline Evidence& WithEvidenceFolderId(Aws::String&& value) { SetEvidenceFolderId(std::move(value)); return *this;}

    /**
     * <p> The identifier for the folder in which the evidence is stored. </p>
     */
    inline Evidence& WithEvidenceFolderId(const char* value) { SetEvidenceFolderId(value); return *this;}


    /**
     * <p> The identifier for the evidence. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p> The identifier for the evidence. </p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p> The identifier for the evidence. </p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p> The identifier for the evidence. </p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p> The identifier for the evidence. </p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p> The identifier for the evidence. </p>
     */
    inline Evidence& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p> The identifier for the evidence. </p>
     */
    inline Evidence& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p> The identifier for the evidence. </p>
     */
    inline Evidence& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p> Specifies whether the evidence is inclded in the assessment report. </p>
     */
    inline const Aws::String& GetAssessmentReportSelection() const{ return m_assessmentReportSelection; }

    /**
     * <p> Specifies whether the evidence is inclded in the assessment report. </p>
     */
    inline bool AssessmentReportSelectionHasBeenSet() const { return m_assessmentReportSelectionHasBeenSet; }

    /**
     * <p> Specifies whether the evidence is inclded in the assessment report. </p>
     */
    inline void SetAssessmentReportSelection(const Aws::String& value) { m_assessmentReportSelectionHasBeenSet = true; m_assessmentReportSelection = value; }

    /**
     * <p> Specifies whether the evidence is inclded in the assessment report. </p>
     */
    inline void SetAssessmentReportSelection(Aws::String&& value) { m_assessmentReportSelectionHasBeenSet = true; m_assessmentReportSelection = std::move(value); }

    /**
     * <p> Specifies whether the evidence is inclded in the assessment report. </p>
     */
    inline void SetAssessmentReportSelection(const char* value) { m_assessmentReportSelectionHasBeenSet = true; m_assessmentReportSelection.assign(value); }

    /**
     * <p> Specifies whether the evidence is inclded in the assessment report. </p>
     */
    inline Evidence& WithAssessmentReportSelection(const Aws::String& value) { SetAssessmentReportSelection(value); return *this;}

    /**
     * <p> Specifies whether the evidence is inclded in the assessment report. </p>
     */
    inline Evidence& WithAssessmentReportSelection(Aws::String&& value) { SetAssessmentReportSelection(std::move(value)); return *this;}

    /**
     * <p> Specifies whether the evidence is inclded in the assessment report. </p>
     */
    inline Evidence& WithAssessmentReportSelection(const char* value) { SetAssessmentReportSelection(value); return *this;}

  private:

    Aws::String m_dataSource;
    bool m_dataSourceHasBeenSet;

    Aws::String m_evidenceAwsAccountId;
    bool m_evidenceAwsAccountIdHasBeenSet;

    Aws::Utils::DateTime m_time;
    bool m_timeHasBeenSet;

    Aws::String m_eventSource;
    bool m_eventSourceHasBeenSet;

    Aws::String m_eventName;
    bool m_eventNameHasBeenSet;

    Aws::String m_evidenceByType;
    bool m_evidenceByTypeHasBeenSet;

    Aws::Vector<Resource> m_resourcesIncluded;
    bool m_resourcesIncludedHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet;

    Aws::String m_iamId;
    bool m_iamIdHasBeenSet;

    Aws::String m_complianceCheck;
    bool m_complianceCheckHasBeenSet;

    Aws::String m_awsOrganization;
    bool m_awsOrganizationHasBeenSet;

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet;

    Aws::String m_evidenceFolderId;
    bool m_evidenceFolderIdHasBeenSet;

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_assessmentReportSelection;
    bool m_assessmentReportSelectionHasBeenSet;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
