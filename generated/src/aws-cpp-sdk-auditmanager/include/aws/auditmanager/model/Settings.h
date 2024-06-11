/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/auditmanager/model/AssessmentReportsDestination.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/auditmanager/model/EvidenceFinderEnablement.h>
#include <aws/auditmanager/model/DeregistrationPolicy.h>
#include <aws/auditmanager/model/DefaultExportDestination.h>
#include <aws/auditmanager/model/Role.h>
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
   * <p> The settings object that holds all supported Audit Manager settings.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/Settings">AWS
   * API Reference</a></p>
   */
  class Settings
  {
  public:
    AWS_AUDITMANAGER_API Settings();
    AWS_AUDITMANAGER_API Settings(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Settings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Specifies whether Organizations is enabled. </p>
     */
    inline bool GetIsAwsOrgEnabled() const{ return m_isAwsOrgEnabled; }
    inline bool IsAwsOrgEnabledHasBeenSet() const { return m_isAwsOrgEnabledHasBeenSet; }
    inline void SetIsAwsOrgEnabled(bool value) { m_isAwsOrgEnabledHasBeenSet = true; m_isAwsOrgEnabled = value; }
    inline Settings& WithIsAwsOrgEnabled(bool value) { SetIsAwsOrgEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The designated Amazon Simple Notification Service (Amazon SNS) topic. </p>
     */
    inline const Aws::String& GetSnsTopic() const{ return m_snsTopic; }
    inline bool SnsTopicHasBeenSet() const { return m_snsTopicHasBeenSet; }
    inline void SetSnsTopic(const Aws::String& value) { m_snsTopicHasBeenSet = true; m_snsTopic = value; }
    inline void SetSnsTopic(Aws::String&& value) { m_snsTopicHasBeenSet = true; m_snsTopic = std::move(value); }
    inline void SetSnsTopic(const char* value) { m_snsTopicHasBeenSet = true; m_snsTopic.assign(value); }
    inline Settings& WithSnsTopic(const Aws::String& value) { SetSnsTopic(value); return *this;}
    inline Settings& WithSnsTopic(Aws::String&& value) { SetSnsTopic(std::move(value)); return *this;}
    inline Settings& WithSnsTopic(const char* value) { SetSnsTopic(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default S3 destination bucket for storing assessment reports.</p>
     */
    inline const AssessmentReportsDestination& GetDefaultAssessmentReportsDestination() const{ return m_defaultAssessmentReportsDestination; }
    inline bool DefaultAssessmentReportsDestinationHasBeenSet() const { return m_defaultAssessmentReportsDestinationHasBeenSet; }
    inline void SetDefaultAssessmentReportsDestination(const AssessmentReportsDestination& value) { m_defaultAssessmentReportsDestinationHasBeenSet = true; m_defaultAssessmentReportsDestination = value; }
    inline void SetDefaultAssessmentReportsDestination(AssessmentReportsDestination&& value) { m_defaultAssessmentReportsDestinationHasBeenSet = true; m_defaultAssessmentReportsDestination = std::move(value); }
    inline Settings& WithDefaultAssessmentReportsDestination(const AssessmentReportsDestination& value) { SetDefaultAssessmentReportsDestination(value); return *this;}
    inline Settings& WithDefaultAssessmentReportsDestination(AssessmentReportsDestination&& value) { SetDefaultAssessmentReportsDestination(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The designated default audit owners. </p>
     */
    inline const Aws::Vector<Role>& GetDefaultProcessOwners() const{ return m_defaultProcessOwners; }
    inline bool DefaultProcessOwnersHasBeenSet() const { return m_defaultProcessOwnersHasBeenSet; }
    inline void SetDefaultProcessOwners(const Aws::Vector<Role>& value) { m_defaultProcessOwnersHasBeenSet = true; m_defaultProcessOwners = value; }
    inline void SetDefaultProcessOwners(Aws::Vector<Role>&& value) { m_defaultProcessOwnersHasBeenSet = true; m_defaultProcessOwners = std::move(value); }
    inline Settings& WithDefaultProcessOwners(const Aws::Vector<Role>& value) { SetDefaultProcessOwners(value); return *this;}
    inline Settings& WithDefaultProcessOwners(Aws::Vector<Role>&& value) { SetDefaultProcessOwners(std::move(value)); return *this;}
    inline Settings& AddDefaultProcessOwners(const Role& value) { m_defaultProcessOwnersHasBeenSet = true; m_defaultProcessOwners.push_back(value); return *this; }
    inline Settings& AddDefaultProcessOwners(Role&& value) { m_defaultProcessOwnersHasBeenSet = true; m_defaultProcessOwners.push_back(std::move(value)); return *this; }
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
    inline Settings& WithKmsKey(const Aws::String& value) { SetKmsKey(value); return *this;}
    inline Settings& WithKmsKey(Aws::String&& value) { SetKmsKey(std::move(value)); return *this;}
    inline Settings& WithKmsKey(const char* value) { SetKmsKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current evidence finder status and event data store details.</p>
     */
    inline const EvidenceFinderEnablement& GetEvidenceFinderEnablement() const{ return m_evidenceFinderEnablement; }
    inline bool EvidenceFinderEnablementHasBeenSet() const { return m_evidenceFinderEnablementHasBeenSet; }
    inline void SetEvidenceFinderEnablement(const EvidenceFinderEnablement& value) { m_evidenceFinderEnablementHasBeenSet = true; m_evidenceFinderEnablement = value; }
    inline void SetEvidenceFinderEnablement(EvidenceFinderEnablement&& value) { m_evidenceFinderEnablementHasBeenSet = true; m_evidenceFinderEnablement = std::move(value); }
    inline Settings& WithEvidenceFinderEnablement(const EvidenceFinderEnablement& value) { SetEvidenceFinderEnablement(value); return *this;}
    inline Settings& WithEvidenceFinderEnablement(EvidenceFinderEnablement&& value) { SetEvidenceFinderEnablement(std::move(value)); return *this;}
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
    inline Settings& WithDeregistrationPolicy(const DeregistrationPolicy& value) { SetDeregistrationPolicy(value); return *this;}
    inline Settings& WithDeregistrationPolicy(DeregistrationPolicy&& value) { SetDeregistrationPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default S3 destination bucket for storing evidence finder exports.</p>
     */
    inline const DefaultExportDestination& GetDefaultExportDestination() const{ return m_defaultExportDestination; }
    inline bool DefaultExportDestinationHasBeenSet() const { return m_defaultExportDestinationHasBeenSet; }
    inline void SetDefaultExportDestination(const DefaultExportDestination& value) { m_defaultExportDestinationHasBeenSet = true; m_defaultExportDestination = value; }
    inline void SetDefaultExportDestination(DefaultExportDestination&& value) { m_defaultExportDestinationHasBeenSet = true; m_defaultExportDestination = std::move(value); }
    inline Settings& WithDefaultExportDestination(const DefaultExportDestination& value) { SetDefaultExportDestination(value); return *this;}
    inline Settings& WithDefaultExportDestination(DefaultExportDestination&& value) { SetDefaultExportDestination(std::move(value)); return *this;}
    ///@}
  private:

    bool m_isAwsOrgEnabled;
    bool m_isAwsOrgEnabledHasBeenSet = false;

    Aws::String m_snsTopic;
    bool m_snsTopicHasBeenSet = false;

    AssessmentReportsDestination m_defaultAssessmentReportsDestination;
    bool m_defaultAssessmentReportsDestinationHasBeenSet = false;

    Aws::Vector<Role> m_defaultProcessOwners;
    bool m_defaultProcessOwnersHasBeenSet = false;

    Aws::String m_kmsKey;
    bool m_kmsKeyHasBeenSet = false;

    EvidenceFinderEnablement m_evidenceFinderEnablement;
    bool m_evidenceFinderEnablementHasBeenSet = false;

    DeregistrationPolicy m_deregistrationPolicy;
    bool m_deregistrationPolicyHasBeenSet = false;

    DefaultExportDestination m_defaultExportDestination;
    bool m_defaultExportDestinationHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
