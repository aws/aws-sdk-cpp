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


    /**
     * <p> Specifies whether Organizations is enabled. </p>
     */
    inline bool GetIsAwsOrgEnabled() const{ return m_isAwsOrgEnabled; }

    /**
     * <p> Specifies whether Organizations is enabled. </p>
     */
    inline bool IsAwsOrgEnabledHasBeenSet() const { return m_isAwsOrgEnabledHasBeenSet; }

    /**
     * <p> Specifies whether Organizations is enabled. </p>
     */
    inline void SetIsAwsOrgEnabled(bool value) { m_isAwsOrgEnabledHasBeenSet = true; m_isAwsOrgEnabled = value; }

    /**
     * <p> Specifies whether Organizations is enabled. </p>
     */
    inline Settings& WithIsAwsOrgEnabled(bool value) { SetIsAwsOrgEnabled(value); return *this;}


    /**
     * <p> The designated Amazon Simple Notification Service (Amazon SNS) topic. </p>
     */
    inline const Aws::String& GetSnsTopic() const{ return m_snsTopic; }

    /**
     * <p> The designated Amazon Simple Notification Service (Amazon SNS) topic. </p>
     */
    inline bool SnsTopicHasBeenSet() const { return m_snsTopicHasBeenSet; }

    /**
     * <p> The designated Amazon Simple Notification Service (Amazon SNS) topic. </p>
     */
    inline void SetSnsTopic(const Aws::String& value) { m_snsTopicHasBeenSet = true; m_snsTopic = value; }

    /**
     * <p> The designated Amazon Simple Notification Service (Amazon SNS) topic. </p>
     */
    inline void SetSnsTopic(Aws::String&& value) { m_snsTopicHasBeenSet = true; m_snsTopic = std::move(value); }

    /**
     * <p> The designated Amazon Simple Notification Service (Amazon SNS) topic. </p>
     */
    inline void SetSnsTopic(const char* value) { m_snsTopicHasBeenSet = true; m_snsTopic.assign(value); }

    /**
     * <p> The designated Amazon Simple Notification Service (Amazon SNS) topic. </p>
     */
    inline Settings& WithSnsTopic(const Aws::String& value) { SetSnsTopic(value); return *this;}

    /**
     * <p> The designated Amazon Simple Notification Service (Amazon SNS) topic. </p>
     */
    inline Settings& WithSnsTopic(Aws::String&& value) { SetSnsTopic(std::move(value)); return *this;}

    /**
     * <p> The designated Amazon Simple Notification Service (Amazon SNS) topic. </p>
     */
    inline Settings& WithSnsTopic(const char* value) { SetSnsTopic(value); return *this;}


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
    inline Settings& WithDefaultAssessmentReportsDestination(const AssessmentReportsDestination& value) { SetDefaultAssessmentReportsDestination(value); return *this;}

    /**
     * <p> The default storage destination for assessment reports. </p>
     */
    inline Settings& WithDefaultAssessmentReportsDestination(AssessmentReportsDestination&& value) { SetDefaultAssessmentReportsDestination(std::move(value)); return *this;}


    /**
     * <p> The designated default audit owners. </p>
     */
    inline const Aws::Vector<Role>& GetDefaultProcessOwners() const{ return m_defaultProcessOwners; }

    /**
     * <p> The designated default audit owners. </p>
     */
    inline bool DefaultProcessOwnersHasBeenSet() const { return m_defaultProcessOwnersHasBeenSet; }

    /**
     * <p> The designated default audit owners. </p>
     */
    inline void SetDefaultProcessOwners(const Aws::Vector<Role>& value) { m_defaultProcessOwnersHasBeenSet = true; m_defaultProcessOwners = value; }

    /**
     * <p> The designated default audit owners. </p>
     */
    inline void SetDefaultProcessOwners(Aws::Vector<Role>&& value) { m_defaultProcessOwnersHasBeenSet = true; m_defaultProcessOwners = std::move(value); }

    /**
     * <p> The designated default audit owners. </p>
     */
    inline Settings& WithDefaultProcessOwners(const Aws::Vector<Role>& value) { SetDefaultProcessOwners(value); return *this;}

    /**
     * <p> The designated default audit owners. </p>
     */
    inline Settings& WithDefaultProcessOwners(Aws::Vector<Role>&& value) { SetDefaultProcessOwners(std::move(value)); return *this;}

    /**
     * <p> The designated default audit owners. </p>
     */
    inline Settings& AddDefaultProcessOwners(const Role& value) { m_defaultProcessOwnersHasBeenSet = true; m_defaultProcessOwners.push_back(value); return *this; }

    /**
     * <p> The designated default audit owners. </p>
     */
    inline Settings& AddDefaultProcessOwners(Role&& value) { m_defaultProcessOwnersHasBeenSet = true; m_defaultProcessOwners.push_back(std::move(value)); return *this; }


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
    inline Settings& WithKmsKey(const Aws::String& value) { SetKmsKey(value); return *this;}

    /**
     * <p> The KMS key details. </p>
     */
    inline Settings& WithKmsKey(Aws::String&& value) { SetKmsKey(std::move(value)); return *this;}

    /**
     * <p> The KMS key details. </p>
     */
    inline Settings& WithKmsKey(const char* value) { SetKmsKey(value); return *this;}


    /**
     * <p>The current evidence finder status and event data store details.</p>
     */
    inline const EvidenceFinderEnablement& GetEvidenceFinderEnablement() const{ return m_evidenceFinderEnablement; }

    /**
     * <p>The current evidence finder status and event data store details.</p>
     */
    inline bool EvidenceFinderEnablementHasBeenSet() const { return m_evidenceFinderEnablementHasBeenSet; }

    /**
     * <p>The current evidence finder status and event data store details.</p>
     */
    inline void SetEvidenceFinderEnablement(const EvidenceFinderEnablement& value) { m_evidenceFinderEnablementHasBeenSet = true; m_evidenceFinderEnablement = value; }

    /**
     * <p>The current evidence finder status and event data store details.</p>
     */
    inline void SetEvidenceFinderEnablement(EvidenceFinderEnablement&& value) { m_evidenceFinderEnablementHasBeenSet = true; m_evidenceFinderEnablement = std::move(value); }

    /**
     * <p>The current evidence finder status and event data store details.</p>
     */
    inline Settings& WithEvidenceFinderEnablement(const EvidenceFinderEnablement& value) { SetEvidenceFinderEnablement(value); return *this;}

    /**
     * <p>The current evidence finder status and event data store details.</p>
     */
    inline Settings& WithEvidenceFinderEnablement(EvidenceFinderEnablement&& value) { SetEvidenceFinderEnablement(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
