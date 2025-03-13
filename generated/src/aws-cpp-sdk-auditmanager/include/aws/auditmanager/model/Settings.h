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
    AWS_AUDITMANAGER_API Settings() = default;
    AWS_AUDITMANAGER_API Settings(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Settings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Specifies whether Organizations is enabled. </p>
     */
    inline bool GetIsAwsOrgEnabled() const { return m_isAwsOrgEnabled; }
    inline bool IsAwsOrgEnabledHasBeenSet() const { return m_isAwsOrgEnabledHasBeenSet; }
    inline void SetIsAwsOrgEnabled(bool value) { m_isAwsOrgEnabledHasBeenSet = true; m_isAwsOrgEnabled = value; }
    inline Settings& WithIsAwsOrgEnabled(bool value) { SetIsAwsOrgEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The designated Amazon Simple Notification Service (Amazon SNS) topic. </p>
     */
    inline const Aws::String& GetSnsTopic() const { return m_snsTopic; }
    inline bool SnsTopicHasBeenSet() const { return m_snsTopicHasBeenSet; }
    template<typename SnsTopicT = Aws::String>
    void SetSnsTopic(SnsTopicT&& value) { m_snsTopicHasBeenSet = true; m_snsTopic = std::forward<SnsTopicT>(value); }
    template<typename SnsTopicT = Aws::String>
    Settings& WithSnsTopic(SnsTopicT&& value) { SetSnsTopic(std::forward<SnsTopicT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default S3 destination bucket for storing assessment reports.</p>
     */
    inline const AssessmentReportsDestination& GetDefaultAssessmentReportsDestination() const { return m_defaultAssessmentReportsDestination; }
    inline bool DefaultAssessmentReportsDestinationHasBeenSet() const { return m_defaultAssessmentReportsDestinationHasBeenSet; }
    template<typename DefaultAssessmentReportsDestinationT = AssessmentReportsDestination>
    void SetDefaultAssessmentReportsDestination(DefaultAssessmentReportsDestinationT&& value) { m_defaultAssessmentReportsDestinationHasBeenSet = true; m_defaultAssessmentReportsDestination = std::forward<DefaultAssessmentReportsDestinationT>(value); }
    template<typename DefaultAssessmentReportsDestinationT = AssessmentReportsDestination>
    Settings& WithDefaultAssessmentReportsDestination(DefaultAssessmentReportsDestinationT&& value) { SetDefaultAssessmentReportsDestination(std::forward<DefaultAssessmentReportsDestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The designated default audit owners. </p>
     */
    inline const Aws::Vector<Role>& GetDefaultProcessOwners() const { return m_defaultProcessOwners; }
    inline bool DefaultProcessOwnersHasBeenSet() const { return m_defaultProcessOwnersHasBeenSet; }
    template<typename DefaultProcessOwnersT = Aws::Vector<Role>>
    void SetDefaultProcessOwners(DefaultProcessOwnersT&& value) { m_defaultProcessOwnersHasBeenSet = true; m_defaultProcessOwners = std::forward<DefaultProcessOwnersT>(value); }
    template<typename DefaultProcessOwnersT = Aws::Vector<Role>>
    Settings& WithDefaultProcessOwners(DefaultProcessOwnersT&& value) { SetDefaultProcessOwners(std::forward<DefaultProcessOwnersT>(value)); return *this;}
    template<typename DefaultProcessOwnersT = Role>
    Settings& AddDefaultProcessOwners(DefaultProcessOwnersT&& value) { m_defaultProcessOwnersHasBeenSet = true; m_defaultProcessOwners.emplace_back(std::forward<DefaultProcessOwnersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The KMS key details. </p>
     */
    inline const Aws::String& GetKmsKey() const { return m_kmsKey; }
    inline bool KmsKeyHasBeenSet() const { return m_kmsKeyHasBeenSet; }
    template<typename KmsKeyT = Aws::String>
    void SetKmsKey(KmsKeyT&& value) { m_kmsKeyHasBeenSet = true; m_kmsKey = std::forward<KmsKeyT>(value); }
    template<typename KmsKeyT = Aws::String>
    Settings& WithKmsKey(KmsKeyT&& value) { SetKmsKey(std::forward<KmsKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current evidence finder status and event data store details.</p>
     */
    inline const EvidenceFinderEnablement& GetEvidenceFinderEnablement() const { return m_evidenceFinderEnablement; }
    inline bool EvidenceFinderEnablementHasBeenSet() const { return m_evidenceFinderEnablementHasBeenSet; }
    template<typename EvidenceFinderEnablementT = EvidenceFinderEnablement>
    void SetEvidenceFinderEnablement(EvidenceFinderEnablementT&& value) { m_evidenceFinderEnablementHasBeenSet = true; m_evidenceFinderEnablement = std::forward<EvidenceFinderEnablementT>(value); }
    template<typename EvidenceFinderEnablementT = EvidenceFinderEnablement>
    Settings& WithEvidenceFinderEnablement(EvidenceFinderEnablementT&& value) { SetEvidenceFinderEnablement(std::forward<EvidenceFinderEnablementT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deregistration policy for your Audit Manager data. You can use this
     * attribute to determine how your data is handled when you deregister Audit
     * Manager.</p>
     */
    inline const DeregistrationPolicy& GetDeregistrationPolicy() const { return m_deregistrationPolicy; }
    inline bool DeregistrationPolicyHasBeenSet() const { return m_deregistrationPolicyHasBeenSet; }
    template<typename DeregistrationPolicyT = DeregistrationPolicy>
    void SetDeregistrationPolicy(DeregistrationPolicyT&& value) { m_deregistrationPolicyHasBeenSet = true; m_deregistrationPolicy = std::forward<DeregistrationPolicyT>(value); }
    template<typename DeregistrationPolicyT = DeregistrationPolicy>
    Settings& WithDeregistrationPolicy(DeregistrationPolicyT&& value) { SetDeregistrationPolicy(std::forward<DeregistrationPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default S3 destination bucket for storing evidence finder exports.</p>
     */
    inline const DefaultExportDestination& GetDefaultExportDestination() const { return m_defaultExportDestination; }
    inline bool DefaultExportDestinationHasBeenSet() const { return m_defaultExportDestinationHasBeenSet; }
    template<typename DefaultExportDestinationT = DefaultExportDestination>
    void SetDefaultExportDestination(DefaultExportDestinationT&& value) { m_defaultExportDestinationHasBeenSet = true; m_defaultExportDestination = std::forward<DefaultExportDestinationT>(value); }
    template<typename DefaultExportDestinationT = DefaultExportDestination>
    Settings& WithDefaultExportDestination(DefaultExportDestinationT&& value) { SetDefaultExportDestination(std::forward<DefaultExportDestinationT>(value)); return *this;}
    ///@}
  private:

    bool m_isAwsOrgEnabled{false};
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
