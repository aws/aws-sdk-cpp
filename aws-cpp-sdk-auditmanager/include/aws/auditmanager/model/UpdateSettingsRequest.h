/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/auditmanager/AuditManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/auditmanager/model/AssessmentReportsDestination.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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


    /**
     * <p> The Amazon Simple Notification Service (Amazon SNS) topic that Audit Manager
     * sends notifications to. </p>
     */
    inline const Aws::String& GetSnsTopic() const{ return m_snsTopic; }

    /**
     * <p> The Amazon Simple Notification Service (Amazon SNS) topic that Audit Manager
     * sends notifications to. </p>
     */
    inline bool SnsTopicHasBeenSet() const { return m_snsTopicHasBeenSet; }

    /**
     * <p> The Amazon Simple Notification Service (Amazon SNS) topic that Audit Manager
     * sends notifications to. </p>
     */
    inline void SetSnsTopic(const Aws::String& value) { m_snsTopicHasBeenSet = true; m_snsTopic = value; }

    /**
     * <p> The Amazon Simple Notification Service (Amazon SNS) topic that Audit Manager
     * sends notifications to. </p>
     */
    inline void SetSnsTopic(Aws::String&& value) { m_snsTopicHasBeenSet = true; m_snsTopic = std::move(value); }

    /**
     * <p> The Amazon Simple Notification Service (Amazon SNS) topic that Audit Manager
     * sends notifications to. </p>
     */
    inline void SetSnsTopic(const char* value) { m_snsTopicHasBeenSet = true; m_snsTopic.assign(value); }

    /**
     * <p> The Amazon Simple Notification Service (Amazon SNS) topic that Audit Manager
     * sends notifications to. </p>
     */
    inline UpdateSettingsRequest& WithSnsTopic(const Aws::String& value) { SetSnsTopic(value); return *this;}

    /**
     * <p> The Amazon Simple Notification Service (Amazon SNS) topic that Audit Manager
     * sends notifications to. </p>
     */
    inline UpdateSettingsRequest& WithSnsTopic(Aws::String&& value) { SetSnsTopic(std::move(value)); return *this;}

    /**
     * <p> The Amazon Simple Notification Service (Amazon SNS) topic that Audit Manager
     * sends notifications to. </p>
     */
    inline UpdateSettingsRequest& WithSnsTopic(const char* value) { SetSnsTopic(value); return *this;}


    /**
     * <p> The default storage destination for assessment reports. </p>
     */
    inline const AssessmentReportsDestination& GetDefaultAssessmentReportsDestination() const{ return m_defaultAssessmentReportsDestination; }

    /**
     * <p> The default storage destination for assessment reports. </p>
     */
    inline bool DefaultAssessmentReportsDestinationHasBeenSet() const { return m_defaultAssessmentReportsDestinationHasBeenSet; }

    /**
     * <p> The default storage destination for assessment reports. </p>
     */
    inline void SetDefaultAssessmentReportsDestination(const AssessmentReportsDestination& value) { m_defaultAssessmentReportsDestinationHasBeenSet = true; m_defaultAssessmentReportsDestination = value; }

    /**
     * <p> The default storage destination for assessment reports. </p>
     */
    inline void SetDefaultAssessmentReportsDestination(AssessmentReportsDestination&& value) { m_defaultAssessmentReportsDestinationHasBeenSet = true; m_defaultAssessmentReportsDestination = std::move(value); }

    /**
     * <p> The default storage destination for assessment reports. </p>
     */
    inline UpdateSettingsRequest& WithDefaultAssessmentReportsDestination(const AssessmentReportsDestination& value) { SetDefaultAssessmentReportsDestination(value); return *this;}

    /**
     * <p> The default storage destination for assessment reports. </p>
     */
    inline UpdateSettingsRequest& WithDefaultAssessmentReportsDestination(AssessmentReportsDestination&& value) { SetDefaultAssessmentReportsDestination(std::move(value)); return *this;}


    /**
     * <p> A list of the default audit owners. </p>
     */
    inline const Aws::Vector<Role>& GetDefaultProcessOwners() const{ return m_defaultProcessOwners; }

    /**
     * <p> A list of the default audit owners. </p>
     */
    inline bool DefaultProcessOwnersHasBeenSet() const { return m_defaultProcessOwnersHasBeenSet; }

    /**
     * <p> A list of the default audit owners. </p>
     */
    inline void SetDefaultProcessOwners(const Aws::Vector<Role>& value) { m_defaultProcessOwnersHasBeenSet = true; m_defaultProcessOwners = value; }

    /**
     * <p> A list of the default audit owners. </p>
     */
    inline void SetDefaultProcessOwners(Aws::Vector<Role>&& value) { m_defaultProcessOwnersHasBeenSet = true; m_defaultProcessOwners = std::move(value); }

    /**
     * <p> A list of the default audit owners. </p>
     */
    inline UpdateSettingsRequest& WithDefaultProcessOwners(const Aws::Vector<Role>& value) { SetDefaultProcessOwners(value); return *this;}

    /**
     * <p> A list of the default audit owners. </p>
     */
    inline UpdateSettingsRequest& WithDefaultProcessOwners(Aws::Vector<Role>&& value) { SetDefaultProcessOwners(std::move(value)); return *this;}

    /**
     * <p> A list of the default audit owners. </p>
     */
    inline UpdateSettingsRequest& AddDefaultProcessOwners(const Role& value) { m_defaultProcessOwnersHasBeenSet = true; m_defaultProcessOwners.push_back(value); return *this; }

    /**
     * <p> A list of the default audit owners. </p>
     */
    inline UpdateSettingsRequest& AddDefaultProcessOwners(Role&& value) { m_defaultProcessOwnersHasBeenSet = true; m_defaultProcessOwners.push_back(std::move(value)); return *this; }


    /**
     * <p> The KMS key details. </p>
     */
    inline const Aws::String& GetKmsKey() const{ return m_kmsKey; }

    /**
     * <p> The KMS key details. </p>
     */
    inline bool KmsKeyHasBeenSet() const { return m_kmsKeyHasBeenSet; }

    /**
     * <p> The KMS key details. </p>
     */
    inline void SetKmsKey(const Aws::String& value) { m_kmsKeyHasBeenSet = true; m_kmsKey = value; }

    /**
     * <p> The KMS key details. </p>
     */
    inline void SetKmsKey(Aws::String&& value) { m_kmsKeyHasBeenSet = true; m_kmsKey = std::move(value); }

    /**
     * <p> The KMS key details. </p>
     */
    inline void SetKmsKey(const char* value) { m_kmsKeyHasBeenSet = true; m_kmsKey.assign(value); }

    /**
     * <p> The KMS key details. </p>
     */
    inline UpdateSettingsRequest& WithKmsKey(const Aws::String& value) { SetKmsKey(value); return *this;}

    /**
     * <p> The KMS key details. </p>
     */
    inline UpdateSettingsRequest& WithKmsKey(Aws::String&& value) { SetKmsKey(std::move(value)); return *this;}

    /**
     * <p> The KMS key details. </p>
     */
    inline UpdateSettingsRequest& WithKmsKey(const char* value) { SetKmsKey(value); return *this;}


    /**
     * <p>Specifies whether the evidence finder feature is enabled. Change this
     * attribute to enable or disable evidence finder.</p>  <p>When you use
     * this attribute to disable evidence finder, Audit Manager deletes the event data
     * store that’s used to query your evidence data. As a result, you can’t re-enable
     * evidence finder and use the feature again. Your only alternative is to <a
     * href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/API_DeregisterAccount.html">deregister</a>
     * and then <a
     * href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/API_RegisterAccount.html">re-register</a>
     * Audit Manager. </p> <p>Disabling evidence finder is permanent, so consider this
     * decision carefully before you proceed. If you’re using Audit Manager as a
     * delegated administrator, keep in mind that this action applies to all member
     * accounts in your organization.</p> 
     */
    inline bool GetEvidenceFinderEnabled() const{ return m_evidenceFinderEnabled; }

    /**
     * <p>Specifies whether the evidence finder feature is enabled. Change this
     * attribute to enable or disable evidence finder.</p>  <p>When you use
     * this attribute to disable evidence finder, Audit Manager deletes the event data
     * store that’s used to query your evidence data. As a result, you can’t re-enable
     * evidence finder and use the feature again. Your only alternative is to <a
     * href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/API_DeregisterAccount.html">deregister</a>
     * and then <a
     * href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/API_RegisterAccount.html">re-register</a>
     * Audit Manager. </p> <p>Disabling evidence finder is permanent, so consider this
     * decision carefully before you proceed. If you’re using Audit Manager as a
     * delegated administrator, keep in mind that this action applies to all member
     * accounts in your organization.</p> 
     */
    inline bool EvidenceFinderEnabledHasBeenSet() const { return m_evidenceFinderEnabledHasBeenSet; }

    /**
     * <p>Specifies whether the evidence finder feature is enabled. Change this
     * attribute to enable or disable evidence finder.</p>  <p>When you use
     * this attribute to disable evidence finder, Audit Manager deletes the event data
     * store that’s used to query your evidence data. As a result, you can’t re-enable
     * evidence finder and use the feature again. Your only alternative is to <a
     * href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/API_DeregisterAccount.html">deregister</a>
     * and then <a
     * href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/API_RegisterAccount.html">re-register</a>
     * Audit Manager. </p> <p>Disabling evidence finder is permanent, so consider this
     * decision carefully before you proceed. If you’re using Audit Manager as a
     * delegated administrator, keep in mind that this action applies to all member
     * accounts in your organization.</p> 
     */
    inline void SetEvidenceFinderEnabled(bool value) { m_evidenceFinderEnabledHasBeenSet = true; m_evidenceFinderEnabled = value; }

    /**
     * <p>Specifies whether the evidence finder feature is enabled. Change this
     * attribute to enable or disable evidence finder.</p>  <p>When you use
     * this attribute to disable evidence finder, Audit Manager deletes the event data
     * store that’s used to query your evidence data. As a result, you can’t re-enable
     * evidence finder and use the feature again. Your only alternative is to <a
     * href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/API_DeregisterAccount.html">deregister</a>
     * and then <a
     * href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/API_RegisterAccount.html">re-register</a>
     * Audit Manager. </p> <p>Disabling evidence finder is permanent, so consider this
     * decision carefully before you proceed. If you’re using Audit Manager as a
     * delegated administrator, keep in mind that this action applies to all member
     * accounts in your organization.</p> 
     */
    inline UpdateSettingsRequest& WithEvidenceFinderEnabled(bool value) { SetEvidenceFinderEnabled(value); return *this;}

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
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
