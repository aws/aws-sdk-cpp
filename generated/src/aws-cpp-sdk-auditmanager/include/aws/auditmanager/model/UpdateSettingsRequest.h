﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/auditmanager/AuditManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/auditmanager/model/AssessmentReportsDestination.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/auditmanager/model/DeregistrationPolicy.h>
#include <aws/auditmanager/model/DefaultExportDestination.h>
#include <aws/auditmanager/model/Role.h>
#include <utility>

namespace Aws
{
namespace AuditManager
{
namespace Model
{

  /**
   */
  class UpdateSettingsRequest : public AuditManagerRequest
  {
  public:
    AWS_AUDITMANAGER_API UpdateSettingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSettings"; }

    AWS_AUDITMANAGER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The Amazon Simple Notification Service (Amazon SNS) topic that Audit Manager
     * sends notifications to. </p>
     */
    inline const Aws::String& GetSnsTopic() const{ return m_snsTopic; }
    inline bool SnsTopicHasBeenSet() const { return m_snsTopicHasBeenSet; }
    inline void SetSnsTopic(const Aws::String& value) { m_snsTopicHasBeenSet = true; m_snsTopic = value; }
    inline void SetSnsTopic(Aws::String&& value) { m_snsTopicHasBeenSet = true; m_snsTopic = std::move(value); }
    inline void SetSnsTopic(const char* value) { m_snsTopicHasBeenSet = true; m_snsTopic.assign(value); }
    inline UpdateSettingsRequest& WithSnsTopic(const Aws::String& value) { SetSnsTopic(value); return *this;}
    inline UpdateSettingsRequest& WithSnsTopic(Aws::String&& value) { SetSnsTopic(std::move(value)); return *this;}
    inline UpdateSettingsRequest& WithSnsTopic(const char* value) { SetSnsTopic(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The default S3 destination bucket for storing assessment reports. </p>
     */
    inline const AssessmentReportsDestination& GetDefaultAssessmentReportsDestination() const{ return m_defaultAssessmentReportsDestination; }
    inline bool DefaultAssessmentReportsDestinationHasBeenSet() const { return m_defaultAssessmentReportsDestinationHasBeenSet; }
    inline void SetDefaultAssessmentReportsDestination(const AssessmentReportsDestination& value) { m_defaultAssessmentReportsDestinationHasBeenSet = true; m_defaultAssessmentReportsDestination = value; }
    inline void SetDefaultAssessmentReportsDestination(AssessmentReportsDestination&& value) { m_defaultAssessmentReportsDestinationHasBeenSet = true; m_defaultAssessmentReportsDestination = std::move(value); }
    inline UpdateSettingsRequest& WithDefaultAssessmentReportsDestination(const AssessmentReportsDestination& value) { SetDefaultAssessmentReportsDestination(value); return *this;}
    inline UpdateSettingsRequest& WithDefaultAssessmentReportsDestination(AssessmentReportsDestination&& value) { SetDefaultAssessmentReportsDestination(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of the default audit owners. </p>
     */
    inline const Aws::Vector<Role>& GetDefaultProcessOwners() const{ return m_defaultProcessOwners; }
    inline bool DefaultProcessOwnersHasBeenSet() const { return m_defaultProcessOwnersHasBeenSet; }
    inline void SetDefaultProcessOwners(const Aws::Vector<Role>& value) { m_defaultProcessOwnersHasBeenSet = true; m_defaultProcessOwners = value; }
    inline void SetDefaultProcessOwners(Aws::Vector<Role>&& value) { m_defaultProcessOwnersHasBeenSet = true; m_defaultProcessOwners = std::move(value); }
    inline UpdateSettingsRequest& WithDefaultProcessOwners(const Aws::Vector<Role>& value) { SetDefaultProcessOwners(value); return *this;}
    inline UpdateSettingsRequest& WithDefaultProcessOwners(Aws::Vector<Role>&& value) { SetDefaultProcessOwners(std::move(value)); return *this;}
    inline UpdateSettingsRequest& AddDefaultProcessOwners(const Role& value) { m_defaultProcessOwnersHasBeenSet = true; m_defaultProcessOwners.push_back(value); return *this; }
    inline UpdateSettingsRequest& AddDefaultProcessOwners(Role&& value) { m_defaultProcessOwnersHasBeenSet = true; m_defaultProcessOwners.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The KMS key details. </p>
     */
    inline const Aws::String& GetKmsKey() const{ return m_kmsKey; }
    inline bool KmsKeyHasBeenSet() const { return m_kmsKeyHasBeenSet; }
    inline void SetKmsKey(const Aws::String& value) { m_kmsKeyHasBeenSet = true; m_kmsKey = value; }
    inline void SetKmsKey(Aws::String&& value) { m_kmsKeyHasBeenSet = true; m_kmsKey = std::move(value); }
    inline void SetKmsKey(const char* value) { m_kmsKeyHasBeenSet = true; m_kmsKey.assign(value); }
    inline UpdateSettingsRequest& WithKmsKey(const Aws::String& value) { SetKmsKey(value); return *this;}
    inline UpdateSettingsRequest& WithKmsKey(Aws::String&& value) { SetKmsKey(std::move(value)); return *this;}
    inline UpdateSettingsRequest& WithKmsKey(const char* value) { SetKmsKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the evidence finder feature is enabled. Change this
     * attribute to enable or disable evidence finder.</p>  <p>When you use
     * this attribute to disable evidence finder, Audit Manager deletes the event data
     * store that’s used to query your evidence data. As a result, you can’t re-enable
     * evidence finder and use the feature again. Your only alternative is to <a
     * href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/API_DeregisterAccount.html">deregister</a>
     * and then <a
     * href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/API_RegisterAccount.html">re-register</a>
     * Audit Manager. </p> 
     */
    inline bool GetEvidenceFinderEnabled() const{ return m_evidenceFinderEnabled; }
    inline bool EvidenceFinderEnabledHasBeenSet() const { return m_evidenceFinderEnabledHasBeenSet; }
    inline void SetEvidenceFinderEnabled(bool value) { m_evidenceFinderEnabledHasBeenSet = true; m_evidenceFinderEnabled = value; }
    inline UpdateSettingsRequest& WithEvidenceFinderEnabled(bool value) { SetEvidenceFinderEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deregistration policy for your Audit Manager data. You can use this
     * attribute to determine how your data is handled when you deregister Audit
     * Manager.</p>
     */
    inline const DeregistrationPolicy& GetDeregistrationPolicy() const{ return m_deregistrationPolicy; }
    inline bool DeregistrationPolicyHasBeenSet() const { return m_deregistrationPolicyHasBeenSet; }
    inline void SetDeregistrationPolicy(const DeregistrationPolicy& value) { m_deregistrationPolicyHasBeenSet = true; m_deregistrationPolicy = value; }
    inline void SetDeregistrationPolicy(DeregistrationPolicy&& value) { m_deregistrationPolicyHasBeenSet = true; m_deregistrationPolicy = std::move(value); }
    inline UpdateSettingsRequest& WithDeregistrationPolicy(const DeregistrationPolicy& value) { SetDeregistrationPolicy(value); return *this;}
    inline UpdateSettingsRequest& WithDeregistrationPolicy(DeregistrationPolicy&& value) { SetDeregistrationPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The default S3 destination bucket for storing evidence finder exports. </p>
     */
    inline const DefaultExportDestination& GetDefaultExportDestination() const{ return m_defaultExportDestination; }
    inline bool DefaultExportDestinationHasBeenSet() const { return m_defaultExportDestinationHasBeenSet; }
    inline void SetDefaultExportDestination(const DefaultExportDestination& value) { m_defaultExportDestinationHasBeenSet = true; m_defaultExportDestination = value; }
    inline void SetDefaultExportDestination(DefaultExportDestination&& value) { m_defaultExportDestinationHasBeenSet = true; m_defaultExportDestination = std::move(value); }
    inline UpdateSettingsRequest& WithDefaultExportDestination(const DefaultExportDestination& value) { SetDefaultExportDestination(value); return *this;}
    inline UpdateSettingsRequest& WithDefaultExportDestination(DefaultExportDestination&& value) { SetDefaultExportDestination(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_snsTopic;
    bool m_snsTopicHasBeenSet = false;

    AssessmentReportsDestination m_defaultAssessmentReportsDestination;
    bool m_defaultAssessmentReportsDestinationHasBeenSet = false;

    Aws::Vector<Role> m_defaultProcessOwners;
    bool m_defaultProcessOwnersHasBeenSet = false;

    Aws::String m_kmsKey;
    bool m_kmsKeyHasBeenSet = false;

    bool m_evidenceFinderEnabled;
    bool m_evidenceFinderEnabledHasBeenSet = false;

    DeregistrationPolicy m_deregistrationPolicy;
    bool m_deregistrationPolicyHasBeenSet = false;

    DefaultExportDestination m_defaultExportDestination;
    bool m_defaultExportDestinationHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
