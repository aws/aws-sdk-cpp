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
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/Severity.h>
#include <aws/securityhub/model/Remediation.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/securityhub/model/Network.h>
#include <aws/securityhub/model/ProcessDetails.h>
#include <aws/securityhub/model/Compliance.h>
#include <aws/securityhub/model/VerificationState.h>
#include <aws/securityhub/model/WorkflowState.h>
#include <aws/securityhub/model/RecordState.h>
#include <aws/securityhub/model/Note.h>
#include <aws/securityhub/model/Malware.h>
#include <aws/securityhub/model/ThreatIntelIndicator.h>
#include <aws/securityhub/model/Resource.h>
#include <aws/securityhub/model/RelatedFinding.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Provides consistent format for the contents of the Security Hub-aggregated
   * findings. <code>AwsSecurityFinding</code> format enables you to share findings
   * between AWS security services and third-party solutions, and compliance
   * checks.</p> <note> <p>A finding is a potential security issue generated either
   * by AWS services (Amazon GuardDuty, Amazon Inspector, and Amazon Macie) or by the
   * integrated third-party solutions and compliance checks.</p> </note><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsSecurityFinding">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API AwsSecurityFinding
  {
  public:
    AwsSecurityFinding();
    AwsSecurityFinding(Aws::Utils::Json::JsonView jsonValue);
    AwsSecurityFinding& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The schema version that a finding is formatted for.</p>
     */
    inline const Aws::String& GetSchemaVersion() const{ return m_schemaVersion; }

    /**
     * <p>The schema version that a finding is formatted for.</p>
     */
    inline bool SchemaVersionHasBeenSet() const { return m_schemaVersionHasBeenSet; }

    /**
     * <p>The schema version that a finding is formatted for.</p>
     */
    inline void SetSchemaVersion(const Aws::String& value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = value; }

    /**
     * <p>The schema version that a finding is formatted for.</p>
     */
    inline void SetSchemaVersion(Aws::String&& value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = std::move(value); }

    /**
     * <p>The schema version that a finding is formatted for.</p>
     */
    inline void SetSchemaVersion(const char* value) { m_schemaVersionHasBeenSet = true; m_schemaVersion.assign(value); }

    /**
     * <p>The schema version that a finding is formatted for.</p>
     */
    inline AwsSecurityFinding& WithSchemaVersion(const Aws::String& value) { SetSchemaVersion(value); return *this;}

    /**
     * <p>The schema version that a finding is formatted for.</p>
     */
    inline AwsSecurityFinding& WithSchemaVersion(Aws::String&& value) { SetSchemaVersion(std::move(value)); return *this;}

    /**
     * <p>The schema version that a finding is formatted for.</p>
     */
    inline AwsSecurityFinding& WithSchemaVersion(const char* value) { SetSchemaVersion(value); return *this;}


    /**
     * <p>The security findings provider-specific identifier for a finding.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The security findings provider-specific identifier for a finding.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The security findings provider-specific identifier for a finding.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The security findings provider-specific identifier for a finding.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The security findings provider-specific identifier for a finding.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The security findings provider-specific identifier for a finding.</p>
     */
    inline AwsSecurityFinding& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The security findings provider-specific identifier for a finding.</p>
     */
    inline AwsSecurityFinding& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The security findings provider-specific identifier for a finding.</p>
     */
    inline AwsSecurityFinding& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The ARN generated by Security Hub that uniquely identifies a third-party
     * company (security-findings provider) after this provider's product (solution
     * that generates findings) is registered with Security Hub. </p>
     */
    inline const Aws::String& GetProductArn() const{ return m_productArn; }

    /**
     * <p>The ARN generated by Security Hub that uniquely identifies a third-party
     * company (security-findings provider) after this provider's product (solution
     * that generates findings) is registered with Security Hub. </p>
     */
    inline bool ProductArnHasBeenSet() const { return m_productArnHasBeenSet; }

    /**
     * <p>The ARN generated by Security Hub that uniquely identifies a third-party
     * company (security-findings provider) after this provider's product (solution
     * that generates findings) is registered with Security Hub. </p>
     */
    inline void SetProductArn(const Aws::String& value) { m_productArnHasBeenSet = true; m_productArn = value; }

    /**
     * <p>The ARN generated by Security Hub that uniquely identifies a third-party
     * company (security-findings provider) after this provider's product (solution
     * that generates findings) is registered with Security Hub. </p>
     */
    inline void SetProductArn(Aws::String&& value) { m_productArnHasBeenSet = true; m_productArn = std::move(value); }

    /**
     * <p>The ARN generated by Security Hub that uniquely identifies a third-party
     * company (security-findings provider) after this provider's product (solution
     * that generates findings) is registered with Security Hub. </p>
     */
    inline void SetProductArn(const char* value) { m_productArnHasBeenSet = true; m_productArn.assign(value); }

    /**
     * <p>The ARN generated by Security Hub that uniquely identifies a third-party
     * company (security-findings provider) after this provider's product (solution
     * that generates findings) is registered with Security Hub. </p>
     */
    inline AwsSecurityFinding& WithProductArn(const Aws::String& value) { SetProductArn(value); return *this;}

    /**
     * <p>The ARN generated by Security Hub that uniquely identifies a third-party
     * company (security-findings provider) after this provider's product (solution
     * that generates findings) is registered with Security Hub. </p>
     */
    inline AwsSecurityFinding& WithProductArn(Aws::String&& value) { SetProductArn(std::move(value)); return *this;}

    /**
     * <p>The ARN generated by Security Hub that uniquely identifies a third-party
     * company (security-findings provider) after this provider's product (solution
     * that generates findings) is registered with Security Hub. </p>
     */
    inline AwsSecurityFinding& WithProductArn(const char* value) { SetProductArn(value); return *this;}


    /**
     * <p>The identifier for the solution-specific component (a discrete unit of logic)
     * that generated a finding. In various security-findings providers' solutions,
     * this generator can be called a rule, a check, a detector, a plug-in, etc. </p>
     */
    inline const Aws::String& GetGeneratorId() const{ return m_generatorId; }

    /**
     * <p>The identifier for the solution-specific component (a discrete unit of logic)
     * that generated a finding. In various security-findings providers' solutions,
     * this generator can be called a rule, a check, a detector, a plug-in, etc. </p>
     */
    inline bool GeneratorIdHasBeenSet() const { return m_generatorIdHasBeenSet; }

    /**
     * <p>The identifier for the solution-specific component (a discrete unit of logic)
     * that generated a finding. In various security-findings providers' solutions,
     * this generator can be called a rule, a check, a detector, a plug-in, etc. </p>
     */
    inline void SetGeneratorId(const Aws::String& value) { m_generatorIdHasBeenSet = true; m_generatorId = value; }

    /**
     * <p>The identifier for the solution-specific component (a discrete unit of logic)
     * that generated a finding. In various security-findings providers' solutions,
     * this generator can be called a rule, a check, a detector, a plug-in, etc. </p>
     */
    inline void SetGeneratorId(Aws::String&& value) { m_generatorIdHasBeenSet = true; m_generatorId = std::move(value); }

    /**
     * <p>The identifier for the solution-specific component (a discrete unit of logic)
     * that generated a finding. In various security-findings providers' solutions,
     * this generator can be called a rule, a check, a detector, a plug-in, etc. </p>
     */
    inline void SetGeneratorId(const char* value) { m_generatorIdHasBeenSet = true; m_generatorId.assign(value); }

    /**
     * <p>The identifier for the solution-specific component (a discrete unit of logic)
     * that generated a finding. In various security-findings providers' solutions,
     * this generator can be called a rule, a check, a detector, a plug-in, etc. </p>
     */
    inline AwsSecurityFinding& WithGeneratorId(const Aws::String& value) { SetGeneratorId(value); return *this;}

    /**
     * <p>The identifier for the solution-specific component (a discrete unit of logic)
     * that generated a finding. In various security-findings providers' solutions,
     * this generator can be called a rule, a check, a detector, a plug-in, etc. </p>
     */
    inline AwsSecurityFinding& WithGeneratorId(Aws::String&& value) { SetGeneratorId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the solution-specific component (a discrete unit of logic)
     * that generated a finding. In various security-findings providers' solutions,
     * this generator can be called a rule, a check, a detector, a plug-in, etc. </p>
     */
    inline AwsSecurityFinding& WithGeneratorId(const char* value) { SetGeneratorId(value); return *this;}


    /**
     * <p>The AWS account ID that a finding is generated in.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The AWS account ID that a finding is generated in.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The AWS account ID that a finding is generated in.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The AWS account ID that a finding is generated in.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The AWS account ID that a finding is generated in.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The AWS account ID that a finding is generated in.</p>
     */
    inline AwsSecurityFinding& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The AWS account ID that a finding is generated in.</p>
     */
    inline AwsSecurityFinding& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The AWS account ID that a finding is generated in.</p>
     */
    inline AwsSecurityFinding& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>One or more finding types in the format of
     * <code>namespace/category/classifier</code> that classify a finding.</p> <p>Valid
     * namespace values are: Software and Configuration Checks | TTPs | Effects |
     * Unusual Behaviors | Sensitive Data Identifications</p>
     */
    inline const Aws::Vector<Aws::String>& GetTypes() const{ return m_types; }

    /**
     * <p>One or more finding types in the format of
     * <code>namespace/category/classifier</code> that classify a finding.</p> <p>Valid
     * namespace values are: Software and Configuration Checks | TTPs | Effects |
     * Unusual Behaviors | Sensitive Data Identifications</p>
     */
    inline bool TypesHasBeenSet() const { return m_typesHasBeenSet; }

    /**
     * <p>One or more finding types in the format of
     * <code>namespace/category/classifier</code> that classify a finding.</p> <p>Valid
     * namespace values are: Software and Configuration Checks | TTPs | Effects |
     * Unusual Behaviors | Sensitive Data Identifications</p>
     */
    inline void SetTypes(const Aws::Vector<Aws::String>& value) { m_typesHasBeenSet = true; m_types = value; }

    /**
     * <p>One or more finding types in the format of
     * <code>namespace/category/classifier</code> that classify a finding.</p> <p>Valid
     * namespace values are: Software and Configuration Checks | TTPs | Effects |
     * Unusual Behaviors | Sensitive Data Identifications</p>
     */
    inline void SetTypes(Aws::Vector<Aws::String>&& value) { m_typesHasBeenSet = true; m_types = std::move(value); }

    /**
     * <p>One or more finding types in the format of
     * <code>namespace/category/classifier</code> that classify a finding.</p> <p>Valid
     * namespace values are: Software and Configuration Checks | TTPs | Effects |
     * Unusual Behaviors | Sensitive Data Identifications</p>
     */
    inline AwsSecurityFinding& WithTypes(const Aws::Vector<Aws::String>& value) { SetTypes(value); return *this;}

    /**
     * <p>One or more finding types in the format of
     * <code>namespace/category/classifier</code> that classify a finding.</p> <p>Valid
     * namespace values are: Software and Configuration Checks | TTPs | Effects |
     * Unusual Behaviors | Sensitive Data Identifications</p>
     */
    inline AwsSecurityFinding& WithTypes(Aws::Vector<Aws::String>&& value) { SetTypes(std::move(value)); return *this;}

    /**
     * <p>One or more finding types in the format of
     * <code>namespace/category/classifier</code> that classify a finding.</p> <p>Valid
     * namespace values are: Software and Configuration Checks | TTPs | Effects |
     * Unusual Behaviors | Sensitive Data Identifications</p>
     */
    inline AwsSecurityFinding& AddTypes(const Aws::String& value) { m_typesHasBeenSet = true; m_types.push_back(value); return *this; }

    /**
     * <p>One or more finding types in the format of
     * <code>namespace/category/classifier</code> that classify a finding.</p> <p>Valid
     * namespace values are: Software and Configuration Checks | TTPs | Effects |
     * Unusual Behaviors | Sensitive Data Identifications</p>
     */
    inline AwsSecurityFinding& AddTypes(Aws::String&& value) { m_typesHasBeenSet = true; m_types.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more finding types in the format of
     * <code>namespace/category/classifier</code> that classify a finding.</p> <p>Valid
     * namespace values are: Software and Configuration Checks | TTPs | Effects |
     * Unusual Behaviors | Sensitive Data Identifications</p>
     */
    inline AwsSecurityFinding& AddTypes(const char* value) { m_typesHasBeenSet = true; m_types.push_back(value); return *this; }


    /**
     * <p>An ISO8601-formatted timestamp that indicates when the security-findings
     * provider first observed the potential security issue that a finding
     * captured.</p>
     */
    inline const Aws::String& GetFirstObservedAt() const{ return m_firstObservedAt; }

    /**
     * <p>An ISO8601-formatted timestamp that indicates when the security-findings
     * provider first observed the potential security issue that a finding
     * captured.</p>
     */
    inline bool FirstObservedAtHasBeenSet() const { return m_firstObservedAtHasBeenSet; }

    /**
     * <p>An ISO8601-formatted timestamp that indicates when the security-findings
     * provider first observed the potential security issue that a finding
     * captured.</p>
     */
    inline void SetFirstObservedAt(const Aws::String& value) { m_firstObservedAtHasBeenSet = true; m_firstObservedAt = value; }

    /**
     * <p>An ISO8601-formatted timestamp that indicates when the security-findings
     * provider first observed the potential security issue that a finding
     * captured.</p>
     */
    inline void SetFirstObservedAt(Aws::String&& value) { m_firstObservedAtHasBeenSet = true; m_firstObservedAt = std::move(value); }

    /**
     * <p>An ISO8601-formatted timestamp that indicates when the security-findings
     * provider first observed the potential security issue that a finding
     * captured.</p>
     */
    inline void SetFirstObservedAt(const char* value) { m_firstObservedAtHasBeenSet = true; m_firstObservedAt.assign(value); }

    /**
     * <p>An ISO8601-formatted timestamp that indicates when the security-findings
     * provider first observed the potential security issue that a finding
     * captured.</p>
     */
    inline AwsSecurityFinding& WithFirstObservedAt(const Aws::String& value) { SetFirstObservedAt(value); return *this;}

    /**
     * <p>An ISO8601-formatted timestamp that indicates when the security-findings
     * provider first observed the potential security issue that a finding
     * captured.</p>
     */
    inline AwsSecurityFinding& WithFirstObservedAt(Aws::String&& value) { SetFirstObservedAt(std::move(value)); return *this;}

    /**
     * <p>An ISO8601-formatted timestamp that indicates when the security-findings
     * provider first observed the potential security issue that a finding
     * captured.</p>
     */
    inline AwsSecurityFinding& WithFirstObservedAt(const char* value) { SetFirstObservedAt(value); return *this;}


    /**
     * <p>An ISO8601-formatted timestamp that indicates when the security-findings
     * provider most recently observed the potential security issue that a finding
     * captured.</p>
     */
    inline const Aws::String& GetLastObservedAt() const{ return m_lastObservedAt; }

    /**
     * <p>An ISO8601-formatted timestamp that indicates when the security-findings
     * provider most recently observed the potential security issue that a finding
     * captured.</p>
     */
    inline bool LastObservedAtHasBeenSet() const { return m_lastObservedAtHasBeenSet; }

    /**
     * <p>An ISO8601-formatted timestamp that indicates when the security-findings
     * provider most recently observed the potential security issue that a finding
     * captured.</p>
     */
    inline void SetLastObservedAt(const Aws::String& value) { m_lastObservedAtHasBeenSet = true; m_lastObservedAt = value; }

    /**
     * <p>An ISO8601-formatted timestamp that indicates when the security-findings
     * provider most recently observed the potential security issue that a finding
     * captured.</p>
     */
    inline void SetLastObservedAt(Aws::String&& value) { m_lastObservedAtHasBeenSet = true; m_lastObservedAt = std::move(value); }

    /**
     * <p>An ISO8601-formatted timestamp that indicates when the security-findings
     * provider most recently observed the potential security issue that a finding
     * captured.</p>
     */
    inline void SetLastObservedAt(const char* value) { m_lastObservedAtHasBeenSet = true; m_lastObservedAt.assign(value); }

    /**
     * <p>An ISO8601-formatted timestamp that indicates when the security-findings
     * provider most recently observed the potential security issue that a finding
     * captured.</p>
     */
    inline AwsSecurityFinding& WithLastObservedAt(const Aws::String& value) { SetLastObservedAt(value); return *this;}

    /**
     * <p>An ISO8601-formatted timestamp that indicates when the security-findings
     * provider most recently observed the potential security issue that a finding
     * captured.</p>
     */
    inline AwsSecurityFinding& WithLastObservedAt(Aws::String&& value) { SetLastObservedAt(std::move(value)); return *this;}

    /**
     * <p>An ISO8601-formatted timestamp that indicates when the security-findings
     * provider most recently observed the potential security issue that a finding
     * captured.</p>
     */
    inline AwsSecurityFinding& WithLastObservedAt(const char* value) { SetLastObservedAt(value); return *this;}


    /**
     * <p>An ISO8601-formatted timestamp that indicates when the security-findings
     * provider created the potential security issue that a finding captured.</p>
     */
    inline const Aws::String& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>An ISO8601-formatted timestamp that indicates when the security-findings
     * provider created the potential security issue that a finding captured.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>An ISO8601-formatted timestamp that indicates when the security-findings
     * provider created the potential security issue that a finding captured.</p>
     */
    inline void SetCreatedAt(const Aws::String& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>An ISO8601-formatted timestamp that indicates when the security-findings
     * provider created the potential security issue that a finding captured.</p>
     */
    inline void SetCreatedAt(Aws::String&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>An ISO8601-formatted timestamp that indicates when the security-findings
     * provider created the potential security issue that a finding captured.</p>
     */
    inline void SetCreatedAt(const char* value) { m_createdAtHasBeenSet = true; m_createdAt.assign(value); }

    /**
     * <p>An ISO8601-formatted timestamp that indicates when the security-findings
     * provider created the potential security issue that a finding captured.</p>
     */
    inline AwsSecurityFinding& WithCreatedAt(const Aws::String& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>An ISO8601-formatted timestamp that indicates when the security-findings
     * provider created the potential security issue that a finding captured.</p>
     */
    inline AwsSecurityFinding& WithCreatedAt(Aws::String&& value) { SetCreatedAt(std::move(value)); return *this;}

    /**
     * <p>An ISO8601-formatted timestamp that indicates when the security-findings
     * provider created the potential security issue that a finding captured.</p>
     */
    inline AwsSecurityFinding& WithCreatedAt(const char* value) { SetCreatedAt(value); return *this;}


    /**
     * <p>An ISO8601-formatted timestamp that indicates when the security-findings
     * provider last updated the finding record. </p>
     */
    inline const Aws::String& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>An ISO8601-formatted timestamp that indicates when the security-findings
     * provider last updated the finding record. </p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>An ISO8601-formatted timestamp that indicates when the security-findings
     * provider last updated the finding record. </p>
     */
    inline void SetUpdatedAt(const Aws::String& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>An ISO8601-formatted timestamp that indicates when the security-findings
     * provider last updated the finding record. </p>
     */
    inline void SetUpdatedAt(Aws::String&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>An ISO8601-formatted timestamp that indicates when the security-findings
     * provider last updated the finding record. </p>
     */
    inline void SetUpdatedAt(const char* value) { m_updatedAtHasBeenSet = true; m_updatedAt.assign(value); }

    /**
     * <p>An ISO8601-formatted timestamp that indicates when the security-findings
     * provider last updated the finding record. </p>
     */
    inline AwsSecurityFinding& WithUpdatedAt(const Aws::String& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>An ISO8601-formatted timestamp that indicates when the security-findings
     * provider last updated the finding record. </p>
     */
    inline AwsSecurityFinding& WithUpdatedAt(Aws::String&& value) { SetUpdatedAt(std::move(value)); return *this;}

    /**
     * <p>An ISO8601-formatted timestamp that indicates when the security-findings
     * provider last updated the finding record. </p>
     */
    inline AwsSecurityFinding& WithUpdatedAt(const char* value) { SetUpdatedAt(value); return *this;}


    /**
     * <p>A finding's severity.</p>
     */
    inline const Severity& GetSeverity() const{ return m_severity; }

    /**
     * <p>A finding's severity.</p>
     */
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }

    /**
     * <p>A finding's severity.</p>
     */
    inline void SetSeverity(const Severity& value) { m_severityHasBeenSet = true; m_severity = value; }

    /**
     * <p>A finding's severity.</p>
     */
    inline void SetSeverity(Severity&& value) { m_severityHasBeenSet = true; m_severity = std::move(value); }

    /**
     * <p>A finding's severity.</p>
     */
    inline AwsSecurityFinding& WithSeverity(const Severity& value) { SetSeverity(value); return *this;}

    /**
     * <p>A finding's severity.</p>
     */
    inline AwsSecurityFinding& WithSeverity(Severity&& value) { SetSeverity(std::move(value)); return *this;}


    /**
     * <p>A finding's confidence. Confidence is defined as the likelihood that a
     * finding accurately identifies the behavior or issue that it was intended to
     * identify. Confidence is scored on a 0-100 basis using a ratio scale, where 0
     * means zero percent confidence and 100 means 100 percent confidence.</p>
     */
    inline int GetConfidence() const{ return m_confidence; }

    /**
     * <p>A finding's confidence. Confidence is defined as the likelihood that a
     * finding accurately identifies the behavior or issue that it was intended to
     * identify. Confidence is scored on a 0-100 basis using a ratio scale, where 0
     * means zero percent confidence and 100 means 100 percent confidence.</p>
     */
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }

    /**
     * <p>A finding's confidence. Confidence is defined as the likelihood that a
     * finding accurately identifies the behavior or issue that it was intended to
     * identify. Confidence is scored on a 0-100 basis using a ratio scale, where 0
     * means zero percent confidence and 100 means 100 percent confidence.</p>
     */
    inline void SetConfidence(int value) { m_confidenceHasBeenSet = true; m_confidence = value; }

    /**
     * <p>A finding's confidence. Confidence is defined as the likelihood that a
     * finding accurately identifies the behavior or issue that it was intended to
     * identify. Confidence is scored on a 0-100 basis using a ratio scale, where 0
     * means zero percent confidence and 100 means 100 percent confidence.</p>
     */
    inline AwsSecurityFinding& WithConfidence(int value) { SetConfidence(value); return *this;}


    /**
     * <p>The level of importance assigned to the resources associated with the
     * finding. A score of 0 means that the underlying resources have no criticality,
     * and a score of 100 is reserved for the most critical resources.</p>
     */
    inline int GetCriticality() const{ return m_criticality; }

    /**
     * <p>The level of importance assigned to the resources associated with the
     * finding. A score of 0 means that the underlying resources have no criticality,
     * and a score of 100 is reserved for the most critical resources.</p>
     */
    inline bool CriticalityHasBeenSet() const { return m_criticalityHasBeenSet; }

    /**
     * <p>The level of importance assigned to the resources associated with the
     * finding. A score of 0 means that the underlying resources have no criticality,
     * and a score of 100 is reserved for the most critical resources.</p>
     */
    inline void SetCriticality(int value) { m_criticalityHasBeenSet = true; m_criticality = value; }

    /**
     * <p>The level of importance assigned to the resources associated with the
     * finding. A score of 0 means that the underlying resources have no criticality,
     * and a score of 100 is reserved for the most critical resources.</p>
     */
    inline AwsSecurityFinding& WithCriticality(int value) { SetCriticality(value); return *this;}


    /**
     * <p>A finding's title.</p> <note> <p>In this release, <code>Title</code> is a
     * required property.</p> </note>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * <p>A finding's title.</p> <note> <p>In this release, <code>Title</code> is a
     * required property.</p> </note>
     */
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    /**
     * <p>A finding's title.</p> <note> <p>In this release, <code>Title</code> is a
     * required property.</p> </note>
     */
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p>A finding's title.</p> <note> <p>In this release, <code>Title</code> is a
     * required property.</p> </note>
     */
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * <p>A finding's title.</p> <note> <p>In this release, <code>Title</code> is a
     * required property.</p> </note>
     */
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }

    /**
     * <p>A finding's title.</p> <note> <p>In this release, <code>Title</code> is a
     * required property.</p> </note>
     */
    inline AwsSecurityFinding& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * <p>A finding's title.</p> <note> <p>In this release, <code>Title</code> is a
     * required property.</p> </note>
     */
    inline AwsSecurityFinding& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * <p>A finding's title.</p> <note> <p>In this release, <code>Title</code> is a
     * required property.</p> </note>
     */
    inline AwsSecurityFinding& WithTitle(const char* value) { SetTitle(value); return *this;}


    /**
     * <p>A finding's description.</p> <note> <p>In this release,
     * <code>Description</code> is a required property.</p> </note>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A finding's description.</p> <note> <p>In this release,
     * <code>Description</code> is a required property.</p> </note>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A finding's description.</p> <note> <p>In this release,
     * <code>Description</code> is a required property.</p> </note>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A finding's description.</p> <note> <p>In this release,
     * <code>Description</code> is a required property.</p> </note>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A finding's description.</p> <note> <p>In this release,
     * <code>Description</code> is a required property.</p> </note>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A finding's description.</p> <note> <p>In this release,
     * <code>Description</code> is a required property.</p> </note>
     */
    inline AwsSecurityFinding& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A finding's description.</p> <note> <p>In this release,
     * <code>Description</code> is a required property.</p> </note>
     */
    inline AwsSecurityFinding& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A finding's description.</p> <note> <p>In this release,
     * <code>Description</code> is a required property.</p> </note>
     */
    inline AwsSecurityFinding& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A data type that describes the remediation options for a finding.</p>
     */
    inline const Remediation& GetRemediation() const{ return m_remediation; }

    /**
     * <p>A data type that describes the remediation options for a finding.</p>
     */
    inline bool RemediationHasBeenSet() const { return m_remediationHasBeenSet; }

    /**
     * <p>A data type that describes the remediation options for a finding.</p>
     */
    inline void SetRemediation(const Remediation& value) { m_remediationHasBeenSet = true; m_remediation = value; }

    /**
     * <p>A data type that describes the remediation options for a finding.</p>
     */
    inline void SetRemediation(Remediation&& value) { m_remediationHasBeenSet = true; m_remediation = std::move(value); }

    /**
     * <p>A data type that describes the remediation options for a finding.</p>
     */
    inline AwsSecurityFinding& WithRemediation(const Remediation& value) { SetRemediation(value); return *this;}

    /**
     * <p>A data type that describes the remediation options for a finding.</p>
     */
    inline AwsSecurityFinding& WithRemediation(Remediation&& value) { SetRemediation(std::move(value)); return *this;}


    /**
     * <p>A URL that links to a page about the current finding in the security-findings
     * provider's solution.</p>
     */
    inline const Aws::String& GetSourceUrl() const{ return m_sourceUrl; }

    /**
     * <p>A URL that links to a page about the current finding in the security-findings
     * provider's solution.</p>
     */
    inline bool SourceUrlHasBeenSet() const { return m_sourceUrlHasBeenSet; }

    /**
     * <p>A URL that links to a page about the current finding in the security-findings
     * provider's solution.</p>
     */
    inline void SetSourceUrl(const Aws::String& value) { m_sourceUrlHasBeenSet = true; m_sourceUrl = value; }

    /**
     * <p>A URL that links to a page about the current finding in the security-findings
     * provider's solution.</p>
     */
    inline void SetSourceUrl(Aws::String&& value) { m_sourceUrlHasBeenSet = true; m_sourceUrl = std::move(value); }

    /**
     * <p>A URL that links to a page about the current finding in the security-findings
     * provider's solution.</p>
     */
    inline void SetSourceUrl(const char* value) { m_sourceUrlHasBeenSet = true; m_sourceUrl.assign(value); }

    /**
     * <p>A URL that links to a page about the current finding in the security-findings
     * provider's solution.</p>
     */
    inline AwsSecurityFinding& WithSourceUrl(const Aws::String& value) { SetSourceUrl(value); return *this;}

    /**
     * <p>A URL that links to a page about the current finding in the security-findings
     * provider's solution.</p>
     */
    inline AwsSecurityFinding& WithSourceUrl(Aws::String&& value) { SetSourceUrl(std::move(value)); return *this;}

    /**
     * <p>A URL that links to a page about the current finding in the security-findings
     * provider's solution.</p>
     */
    inline AwsSecurityFinding& WithSourceUrl(const char* value) { SetSourceUrl(value); return *this;}


    /**
     * <p>A data type where security-findings providers can include additional
     * solution-specific details that aren't part of the defined
     * <code>AwsSecurityFinding</code> format.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetProductFields() const{ return m_productFields; }

    /**
     * <p>A data type where security-findings providers can include additional
     * solution-specific details that aren't part of the defined
     * <code>AwsSecurityFinding</code> format.</p>
     */
    inline bool ProductFieldsHasBeenSet() const { return m_productFieldsHasBeenSet; }

    /**
     * <p>A data type where security-findings providers can include additional
     * solution-specific details that aren't part of the defined
     * <code>AwsSecurityFinding</code> format.</p>
     */
    inline void SetProductFields(const Aws::Map<Aws::String, Aws::String>& value) { m_productFieldsHasBeenSet = true; m_productFields = value; }

    /**
     * <p>A data type where security-findings providers can include additional
     * solution-specific details that aren't part of the defined
     * <code>AwsSecurityFinding</code> format.</p>
     */
    inline void SetProductFields(Aws::Map<Aws::String, Aws::String>&& value) { m_productFieldsHasBeenSet = true; m_productFields = std::move(value); }

    /**
     * <p>A data type where security-findings providers can include additional
     * solution-specific details that aren't part of the defined
     * <code>AwsSecurityFinding</code> format.</p>
     */
    inline AwsSecurityFinding& WithProductFields(const Aws::Map<Aws::String, Aws::String>& value) { SetProductFields(value); return *this;}

    /**
     * <p>A data type where security-findings providers can include additional
     * solution-specific details that aren't part of the defined
     * <code>AwsSecurityFinding</code> format.</p>
     */
    inline AwsSecurityFinding& WithProductFields(Aws::Map<Aws::String, Aws::String>&& value) { SetProductFields(std::move(value)); return *this;}

    /**
     * <p>A data type where security-findings providers can include additional
     * solution-specific details that aren't part of the defined
     * <code>AwsSecurityFinding</code> format.</p>
     */
    inline AwsSecurityFinding& AddProductFields(const Aws::String& key, const Aws::String& value) { m_productFieldsHasBeenSet = true; m_productFields.emplace(key, value); return *this; }

    /**
     * <p>A data type where security-findings providers can include additional
     * solution-specific details that aren't part of the defined
     * <code>AwsSecurityFinding</code> format.</p>
     */
    inline AwsSecurityFinding& AddProductFields(Aws::String&& key, const Aws::String& value) { m_productFieldsHasBeenSet = true; m_productFields.emplace(std::move(key), value); return *this; }

    /**
     * <p>A data type where security-findings providers can include additional
     * solution-specific details that aren't part of the defined
     * <code>AwsSecurityFinding</code> format.</p>
     */
    inline AwsSecurityFinding& AddProductFields(const Aws::String& key, Aws::String&& value) { m_productFieldsHasBeenSet = true; m_productFields.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A data type where security-findings providers can include additional
     * solution-specific details that aren't part of the defined
     * <code>AwsSecurityFinding</code> format.</p>
     */
    inline AwsSecurityFinding& AddProductFields(Aws::String&& key, Aws::String&& value) { m_productFieldsHasBeenSet = true; m_productFields.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A data type where security-findings providers can include additional
     * solution-specific details that aren't part of the defined
     * <code>AwsSecurityFinding</code> format.</p>
     */
    inline AwsSecurityFinding& AddProductFields(const char* key, Aws::String&& value) { m_productFieldsHasBeenSet = true; m_productFields.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A data type where security-findings providers can include additional
     * solution-specific details that aren't part of the defined
     * <code>AwsSecurityFinding</code> format.</p>
     */
    inline AwsSecurityFinding& AddProductFields(Aws::String&& key, const char* value) { m_productFieldsHasBeenSet = true; m_productFields.emplace(std::move(key), value); return *this; }

    /**
     * <p>A data type where security-findings providers can include additional
     * solution-specific details that aren't part of the defined
     * <code>AwsSecurityFinding</code> format.</p>
     */
    inline AwsSecurityFinding& AddProductFields(const char* key, const char* value) { m_productFieldsHasBeenSet = true; m_productFields.emplace(key, value); return *this; }


    /**
     * <p>A list of name/value string pairs associated with the finding. These are
     * custom, user-defined fields added to a finding. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetUserDefinedFields() const{ return m_userDefinedFields; }

    /**
     * <p>A list of name/value string pairs associated with the finding. These are
     * custom, user-defined fields added to a finding. </p>
     */
    inline bool UserDefinedFieldsHasBeenSet() const { return m_userDefinedFieldsHasBeenSet; }

    /**
     * <p>A list of name/value string pairs associated with the finding. These are
     * custom, user-defined fields added to a finding. </p>
     */
    inline void SetUserDefinedFields(const Aws::Map<Aws::String, Aws::String>& value) { m_userDefinedFieldsHasBeenSet = true; m_userDefinedFields = value; }

    /**
     * <p>A list of name/value string pairs associated with the finding. These are
     * custom, user-defined fields added to a finding. </p>
     */
    inline void SetUserDefinedFields(Aws::Map<Aws::String, Aws::String>&& value) { m_userDefinedFieldsHasBeenSet = true; m_userDefinedFields = std::move(value); }

    /**
     * <p>A list of name/value string pairs associated with the finding. These are
     * custom, user-defined fields added to a finding. </p>
     */
    inline AwsSecurityFinding& WithUserDefinedFields(const Aws::Map<Aws::String, Aws::String>& value) { SetUserDefinedFields(value); return *this;}

    /**
     * <p>A list of name/value string pairs associated with the finding. These are
     * custom, user-defined fields added to a finding. </p>
     */
    inline AwsSecurityFinding& WithUserDefinedFields(Aws::Map<Aws::String, Aws::String>&& value) { SetUserDefinedFields(std::move(value)); return *this;}

    /**
     * <p>A list of name/value string pairs associated with the finding. These are
     * custom, user-defined fields added to a finding. </p>
     */
    inline AwsSecurityFinding& AddUserDefinedFields(const Aws::String& key, const Aws::String& value) { m_userDefinedFieldsHasBeenSet = true; m_userDefinedFields.emplace(key, value); return *this; }

    /**
     * <p>A list of name/value string pairs associated with the finding. These are
     * custom, user-defined fields added to a finding. </p>
     */
    inline AwsSecurityFinding& AddUserDefinedFields(Aws::String&& key, const Aws::String& value) { m_userDefinedFieldsHasBeenSet = true; m_userDefinedFields.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of name/value string pairs associated with the finding. These are
     * custom, user-defined fields added to a finding. </p>
     */
    inline AwsSecurityFinding& AddUserDefinedFields(const Aws::String& key, Aws::String&& value) { m_userDefinedFieldsHasBeenSet = true; m_userDefinedFields.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of name/value string pairs associated with the finding. These are
     * custom, user-defined fields added to a finding. </p>
     */
    inline AwsSecurityFinding& AddUserDefinedFields(Aws::String&& key, Aws::String&& value) { m_userDefinedFieldsHasBeenSet = true; m_userDefinedFields.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of name/value string pairs associated with the finding. These are
     * custom, user-defined fields added to a finding. </p>
     */
    inline AwsSecurityFinding& AddUserDefinedFields(const char* key, Aws::String&& value) { m_userDefinedFieldsHasBeenSet = true; m_userDefinedFields.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of name/value string pairs associated with the finding. These are
     * custom, user-defined fields added to a finding. </p>
     */
    inline AwsSecurityFinding& AddUserDefinedFields(Aws::String&& key, const char* value) { m_userDefinedFieldsHasBeenSet = true; m_userDefinedFields.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of name/value string pairs associated with the finding. These are
     * custom, user-defined fields added to a finding. </p>
     */
    inline AwsSecurityFinding& AddUserDefinedFields(const char* key, const char* value) { m_userDefinedFieldsHasBeenSet = true; m_userDefinedFields.emplace(key, value); return *this; }


    /**
     * <p>A list of malware related to a finding.</p>
     */
    inline const Aws::Vector<Malware>& GetMalware() const{ return m_malware; }

    /**
     * <p>A list of malware related to a finding.</p>
     */
    inline bool MalwareHasBeenSet() const { return m_malwareHasBeenSet; }

    /**
     * <p>A list of malware related to a finding.</p>
     */
    inline void SetMalware(const Aws::Vector<Malware>& value) { m_malwareHasBeenSet = true; m_malware = value; }

    /**
     * <p>A list of malware related to a finding.</p>
     */
    inline void SetMalware(Aws::Vector<Malware>&& value) { m_malwareHasBeenSet = true; m_malware = std::move(value); }

    /**
     * <p>A list of malware related to a finding.</p>
     */
    inline AwsSecurityFinding& WithMalware(const Aws::Vector<Malware>& value) { SetMalware(value); return *this;}

    /**
     * <p>A list of malware related to a finding.</p>
     */
    inline AwsSecurityFinding& WithMalware(Aws::Vector<Malware>&& value) { SetMalware(std::move(value)); return *this;}

    /**
     * <p>A list of malware related to a finding.</p>
     */
    inline AwsSecurityFinding& AddMalware(const Malware& value) { m_malwareHasBeenSet = true; m_malware.push_back(value); return *this; }

    /**
     * <p>A list of malware related to a finding.</p>
     */
    inline AwsSecurityFinding& AddMalware(Malware&& value) { m_malwareHasBeenSet = true; m_malware.push_back(std::move(value)); return *this; }


    /**
     * <p>The details of network-related information about a finding.</p>
     */
    inline const Network& GetNetwork() const{ return m_network; }

    /**
     * <p>The details of network-related information about a finding.</p>
     */
    inline bool NetworkHasBeenSet() const { return m_networkHasBeenSet; }

    /**
     * <p>The details of network-related information about a finding.</p>
     */
    inline void SetNetwork(const Network& value) { m_networkHasBeenSet = true; m_network = value; }

    /**
     * <p>The details of network-related information about a finding.</p>
     */
    inline void SetNetwork(Network&& value) { m_networkHasBeenSet = true; m_network = std::move(value); }

    /**
     * <p>The details of network-related information about a finding.</p>
     */
    inline AwsSecurityFinding& WithNetwork(const Network& value) { SetNetwork(value); return *this;}

    /**
     * <p>The details of network-related information about a finding.</p>
     */
    inline AwsSecurityFinding& WithNetwork(Network&& value) { SetNetwork(std::move(value)); return *this;}


    /**
     * <p>The details of process-related information about a finding.</p>
     */
    inline const ProcessDetails& GetProcess() const{ return m_process; }

    /**
     * <p>The details of process-related information about a finding.</p>
     */
    inline bool ProcessHasBeenSet() const { return m_processHasBeenSet; }

    /**
     * <p>The details of process-related information about a finding.</p>
     */
    inline void SetProcess(const ProcessDetails& value) { m_processHasBeenSet = true; m_process = value; }

    /**
     * <p>The details of process-related information about a finding.</p>
     */
    inline void SetProcess(ProcessDetails&& value) { m_processHasBeenSet = true; m_process = std::move(value); }

    /**
     * <p>The details of process-related information about a finding.</p>
     */
    inline AwsSecurityFinding& WithProcess(const ProcessDetails& value) { SetProcess(value); return *this;}

    /**
     * <p>The details of process-related information about a finding.</p>
     */
    inline AwsSecurityFinding& WithProcess(ProcessDetails&& value) { SetProcess(std::move(value)); return *this;}


    /**
     * <p>Threat intel details related to a finding.</p>
     */
    inline const Aws::Vector<ThreatIntelIndicator>& GetThreatIntelIndicators() const{ return m_threatIntelIndicators; }

    /**
     * <p>Threat intel details related to a finding.</p>
     */
    inline bool ThreatIntelIndicatorsHasBeenSet() const { return m_threatIntelIndicatorsHasBeenSet; }

    /**
     * <p>Threat intel details related to a finding.</p>
     */
    inline void SetThreatIntelIndicators(const Aws::Vector<ThreatIntelIndicator>& value) { m_threatIntelIndicatorsHasBeenSet = true; m_threatIntelIndicators = value; }

    /**
     * <p>Threat intel details related to a finding.</p>
     */
    inline void SetThreatIntelIndicators(Aws::Vector<ThreatIntelIndicator>&& value) { m_threatIntelIndicatorsHasBeenSet = true; m_threatIntelIndicators = std::move(value); }

    /**
     * <p>Threat intel details related to a finding.</p>
     */
    inline AwsSecurityFinding& WithThreatIntelIndicators(const Aws::Vector<ThreatIntelIndicator>& value) { SetThreatIntelIndicators(value); return *this;}

    /**
     * <p>Threat intel details related to a finding.</p>
     */
    inline AwsSecurityFinding& WithThreatIntelIndicators(Aws::Vector<ThreatIntelIndicator>&& value) { SetThreatIntelIndicators(std::move(value)); return *this;}

    /**
     * <p>Threat intel details related to a finding.</p>
     */
    inline AwsSecurityFinding& AddThreatIntelIndicators(const ThreatIntelIndicator& value) { m_threatIntelIndicatorsHasBeenSet = true; m_threatIntelIndicators.push_back(value); return *this; }

    /**
     * <p>Threat intel details related to a finding.</p>
     */
    inline AwsSecurityFinding& AddThreatIntelIndicators(ThreatIntelIndicator&& value) { m_threatIntelIndicatorsHasBeenSet = true; m_threatIntelIndicators.push_back(std::move(value)); return *this; }


    /**
     * <p>A set of resource data types that describe the resources that the finding
     * refers to.</p>
     */
    inline const Aws::Vector<Resource>& GetResources() const{ return m_resources; }

    /**
     * <p>A set of resource data types that describe the resources that the finding
     * refers to.</p>
     */
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }

    /**
     * <p>A set of resource data types that describe the resources that the finding
     * refers to.</p>
     */
    inline void SetResources(const Aws::Vector<Resource>& value) { m_resourcesHasBeenSet = true; m_resources = value; }

    /**
     * <p>A set of resource data types that describe the resources that the finding
     * refers to.</p>
     */
    inline void SetResources(Aws::Vector<Resource>&& value) { m_resourcesHasBeenSet = true; m_resources = std::move(value); }

    /**
     * <p>A set of resource data types that describe the resources that the finding
     * refers to.</p>
     */
    inline AwsSecurityFinding& WithResources(const Aws::Vector<Resource>& value) { SetResources(value); return *this;}

    /**
     * <p>A set of resource data types that describe the resources that the finding
     * refers to.</p>
     */
    inline AwsSecurityFinding& WithResources(Aws::Vector<Resource>&& value) { SetResources(std::move(value)); return *this;}

    /**
     * <p>A set of resource data types that describe the resources that the finding
     * refers to.</p>
     */
    inline AwsSecurityFinding& AddResources(const Resource& value) { m_resourcesHasBeenSet = true; m_resources.push_back(value); return *this; }

    /**
     * <p>A set of resource data types that describe the resources that the finding
     * refers to.</p>
     */
    inline AwsSecurityFinding& AddResources(Resource&& value) { m_resourcesHasBeenSet = true; m_resources.push_back(std::move(value)); return *this; }


    /**
     * <p>This data type is exclusive to findings that are generated as the result of a
     * check run against a specific rule in a supported standard (for example, CIS AWS
     * Foundations). Contains compliance-related finding details.</p>
     */
    inline const Compliance& GetCompliance() const{ return m_compliance; }

    /**
     * <p>This data type is exclusive to findings that are generated as the result of a
     * check run against a specific rule in a supported standard (for example, CIS AWS
     * Foundations). Contains compliance-related finding details.</p>
     */
    inline bool ComplianceHasBeenSet() const { return m_complianceHasBeenSet; }

    /**
     * <p>This data type is exclusive to findings that are generated as the result of a
     * check run against a specific rule in a supported standard (for example, CIS AWS
     * Foundations). Contains compliance-related finding details.</p>
     */
    inline void SetCompliance(const Compliance& value) { m_complianceHasBeenSet = true; m_compliance = value; }

    /**
     * <p>This data type is exclusive to findings that are generated as the result of a
     * check run against a specific rule in a supported standard (for example, CIS AWS
     * Foundations). Contains compliance-related finding details.</p>
     */
    inline void SetCompliance(Compliance&& value) { m_complianceHasBeenSet = true; m_compliance = std::move(value); }

    /**
     * <p>This data type is exclusive to findings that are generated as the result of a
     * check run against a specific rule in a supported standard (for example, CIS AWS
     * Foundations). Contains compliance-related finding details.</p>
     */
    inline AwsSecurityFinding& WithCompliance(const Compliance& value) { SetCompliance(value); return *this;}

    /**
     * <p>This data type is exclusive to findings that are generated as the result of a
     * check run against a specific rule in a supported standard (for example, CIS AWS
     * Foundations). Contains compliance-related finding details.</p>
     */
    inline AwsSecurityFinding& WithCompliance(Compliance&& value) { SetCompliance(std::move(value)); return *this;}


    /**
     * <p>Indicates the veracity of a finding. </p>
     */
    inline const VerificationState& GetVerificationState() const{ return m_verificationState; }

    /**
     * <p>Indicates the veracity of a finding. </p>
     */
    inline bool VerificationStateHasBeenSet() const { return m_verificationStateHasBeenSet; }

    /**
     * <p>Indicates the veracity of a finding. </p>
     */
    inline void SetVerificationState(const VerificationState& value) { m_verificationStateHasBeenSet = true; m_verificationState = value; }

    /**
     * <p>Indicates the veracity of a finding. </p>
     */
    inline void SetVerificationState(VerificationState&& value) { m_verificationStateHasBeenSet = true; m_verificationState = std::move(value); }

    /**
     * <p>Indicates the veracity of a finding. </p>
     */
    inline AwsSecurityFinding& WithVerificationState(const VerificationState& value) { SetVerificationState(value); return *this;}

    /**
     * <p>Indicates the veracity of a finding. </p>
     */
    inline AwsSecurityFinding& WithVerificationState(VerificationState&& value) { SetVerificationState(std::move(value)); return *this;}


    /**
     * <p>The workflow state of a finding. </p>
     */
    inline const WorkflowState& GetWorkflowState() const{ return m_workflowState; }

    /**
     * <p>The workflow state of a finding. </p>
     */
    inline bool WorkflowStateHasBeenSet() const { return m_workflowStateHasBeenSet; }

    /**
     * <p>The workflow state of a finding. </p>
     */
    inline void SetWorkflowState(const WorkflowState& value) { m_workflowStateHasBeenSet = true; m_workflowState = value; }

    /**
     * <p>The workflow state of a finding. </p>
     */
    inline void SetWorkflowState(WorkflowState&& value) { m_workflowStateHasBeenSet = true; m_workflowState = std::move(value); }

    /**
     * <p>The workflow state of a finding. </p>
     */
    inline AwsSecurityFinding& WithWorkflowState(const WorkflowState& value) { SetWorkflowState(value); return *this;}

    /**
     * <p>The workflow state of a finding. </p>
     */
    inline AwsSecurityFinding& WithWorkflowState(WorkflowState&& value) { SetWorkflowState(std::move(value)); return *this;}


    /**
     * <p>The record state of a finding.</p>
     */
    inline const RecordState& GetRecordState() const{ return m_recordState; }

    /**
     * <p>The record state of a finding.</p>
     */
    inline bool RecordStateHasBeenSet() const { return m_recordStateHasBeenSet; }

    /**
     * <p>The record state of a finding.</p>
     */
    inline void SetRecordState(const RecordState& value) { m_recordStateHasBeenSet = true; m_recordState = value; }

    /**
     * <p>The record state of a finding.</p>
     */
    inline void SetRecordState(RecordState&& value) { m_recordStateHasBeenSet = true; m_recordState = std::move(value); }

    /**
     * <p>The record state of a finding.</p>
     */
    inline AwsSecurityFinding& WithRecordState(const RecordState& value) { SetRecordState(value); return *this;}

    /**
     * <p>The record state of a finding.</p>
     */
    inline AwsSecurityFinding& WithRecordState(RecordState&& value) { SetRecordState(std::move(value)); return *this;}


    /**
     * <p>A list of related findings.</p>
     */
    inline const Aws::Vector<RelatedFinding>& GetRelatedFindings() const{ return m_relatedFindings; }

    /**
     * <p>A list of related findings.</p>
     */
    inline bool RelatedFindingsHasBeenSet() const { return m_relatedFindingsHasBeenSet; }

    /**
     * <p>A list of related findings.</p>
     */
    inline void SetRelatedFindings(const Aws::Vector<RelatedFinding>& value) { m_relatedFindingsHasBeenSet = true; m_relatedFindings = value; }

    /**
     * <p>A list of related findings.</p>
     */
    inline void SetRelatedFindings(Aws::Vector<RelatedFinding>&& value) { m_relatedFindingsHasBeenSet = true; m_relatedFindings = std::move(value); }

    /**
     * <p>A list of related findings.</p>
     */
    inline AwsSecurityFinding& WithRelatedFindings(const Aws::Vector<RelatedFinding>& value) { SetRelatedFindings(value); return *this;}

    /**
     * <p>A list of related findings.</p>
     */
    inline AwsSecurityFinding& WithRelatedFindings(Aws::Vector<RelatedFinding>&& value) { SetRelatedFindings(std::move(value)); return *this;}

    /**
     * <p>A list of related findings.</p>
     */
    inline AwsSecurityFinding& AddRelatedFindings(const RelatedFinding& value) { m_relatedFindingsHasBeenSet = true; m_relatedFindings.push_back(value); return *this; }

    /**
     * <p>A list of related findings.</p>
     */
    inline AwsSecurityFinding& AddRelatedFindings(RelatedFinding&& value) { m_relatedFindingsHasBeenSet = true; m_relatedFindings.push_back(std::move(value)); return *this; }


    /**
     * <p>A user-defined note added to a finding.</p>
     */
    inline const Note& GetNote() const{ return m_note; }

    /**
     * <p>A user-defined note added to a finding.</p>
     */
    inline bool NoteHasBeenSet() const { return m_noteHasBeenSet; }

    /**
     * <p>A user-defined note added to a finding.</p>
     */
    inline void SetNote(const Note& value) { m_noteHasBeenSet = true; m_note = value; }

    /**
     * <p>A user-defined note added to a finding.</p>
     */
    inline void SetNote(Note&& value) { m_noteHasBeenSet = true; m_note = std::move(value); }

    /**
     * <p>A user-defined note added to a finding.</p>
     */
    inline AwsSecurityFinding& WithNote(const Note& value) { SetNote(value); return *this;}

    /**
     * <p>A user-defined note added to a finding.</p>
     */
    inline AwsSecurityFinding& WithNote(Note&& value) { SetNote(std::move(value)); return *this;}

  private:

    Aws::String m_schemaVersion;
    bool m_schemaVersionHasBeenSet;

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_productArn;
    bool m_productArnHasBeenSet;

    Aws::String m_generatorId;
    bool m_generatorIdHasBeenSet;

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet;

    Aws::Vector<Aws::String> m_types;
    bool m_typesHasBeenSet;

    Aws::String m_firstObservedAt;
    bool m_firstObservedAtHasBeenSet;

    Aws::String m_lastObservedAt;
    bool m_lastObservedAtHasBeenSet;

    Aws::String m_createdAt;
    bool m_createdAtHasBeenSet;

    Aws::String m_updatedAt;
    bool m_updatedAtHasBeenSet;

    Severity m_severity;
    bool m_severityHasBeenSet;

    int m_confidence;
    bool m_confidenceHasBeenSet;

    int m_criticality;
    bool m_criticalityHasBeenSet;

    Aws::String m_title;
    bool m_titleHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Remediation m_remediation;
    bool m_remediationHasBeenSet;

    Aws::String m_sourceUrl;
    bool m_sourceUrlHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_productFields;
    bool m_productFieldsHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_userDefinedFields;
    bool m_userDefinedFieldsHasBeenSet;

    Aws::Vector<Malware> m_malware;
    bool m_malwareHasBeenSet;

    Network m_network;
    bool m_networkHasBeenSet;

    ProcessDetails m_process;
    bool m_processHasBeenSet;

    Aws::Vector<ThreatIntelIndicator> m_threatIntelIndicators;
    bool m_threatIntelIndicatorsHasBeenSet;

    Aws::Vector<Resource> m_resources;
    bool m_resourcesHasBeenSet;

    Compliance m_compliance;
    bool m_complianceHasBeenSet;

    VerificationState m_verificationState;
    bool m_verificationStateHasBeenSet;

    WorkflowState m_workflowState;
    bool m_workflowStateHasBeenSet;

    RecordState m_recordState;
    bool m_recordStateHasBeenSet;

    Aws::Vector<RelatedFinding> m_relatedFindings;
    bool m_relatedFindingsHasBeenSet;

    Note m_note;
    bool m_noteHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
