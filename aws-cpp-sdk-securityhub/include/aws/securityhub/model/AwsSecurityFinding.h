/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
#include <aws/securityhub/model/Workflow.h>
#include <aws/securityhub/model/RecordState.h>
#include <aws/securityhub/model/Note.h>
#include <aws/securityhub/model/PatchSummary.h>
#include <aws/securityhub/model/Action.h>
#include <aws/securityhub/model/FindingProviderFields.h>
#include <aws/securityhub/model/Malware.h>
#include <aws/securityhub/model/NetworkPathComponent.h>
#include <aws/securityhub/model/Threat.h>
#include <aws/securityhub/model/ThreatIntelIndicator.h>
#include <aws/securityhub/model/Resource.h>
#include <aws/securityhub/model/RelatedFinding.h>
#include <aws/securityhub/model/Vulnerability.h>
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
   * <p>Provides a consistent format for Security Hub findings.
   * <code>AwsSecurityFinding</code> format allows you to share findings between
   * Amazon Web Services security services and third-party solutions.</p>  <p>A
   * finding is a potential security issue generated either by Amazon Web Services
   * services or by the integrated third-party solutions and standards checks.</p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsSecurityFinding">AWS
   * API Reference</a></p>
   */
  class AwsSecurityFinding
  {
  public:
    AWS_SECURITYHUB_API AwsSecurityFinding();
    AWS_SECURITYHUB_API AwsSecurityFinding(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsSecurityFinding& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


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
     * <p>The ARN generated by Security Hub that uniquely identifies a product that
     * generates findings. This can be the ARN for a third-party product that is
     * integrated with Security Hub, or the ARN for a custom integration.</p>
     */
    inline const Aws::String& GetProductArn() const{ return m_productArn; }

    /**
     * <p>The ARN generated by Security Hub that uniquely identifies a product that
     * generates findings. This can be the ARN for a third-party product that is
     * integrated with Security Hub, or the ARN for a custom integration.</p>
     */
    inline bool ProductArnHasBeenSet() const { return m_productArnHasBeenSet; }

    /**
     * <p>The ARN generated by Security Hub that uniquely identifies a product that
     * generates findings. This can be the ARN for a third-party product that is
     * integrated with Security Hub, or the ARN for a custom integration.</p>
     */
    inline void SetProductArn(const Aws::String& value) { m_productArnHasBeenSet = true; m_productArn = value; }

    /**
     * <p>The ARN generated by Security Hub that uniquely identifies a product that
     * generates findings. This can be the ARN for a third-party product that is
     * integrated with Security Hub, or the ARN for a custom integration.</p>
     */
    inline void SetProductArn(Aws::String&& value) { m_productArnHasBeenSet = true; m_productArn = std::move(value); }

    /**
     * <p>The ARN generated by Security Hub that uniquely identifies a product that
     * generates findings. This can be the ARN for a third-party product that is
     * integrated with Security Hub, or the ARN for a custom integration.</p>
     */
    inline void SetProductArn(const char* value) { m_productArnHasBeenSet = true; m_productArn.assign(value); }

    /**
     * <p>The ARN generated by Security Hub that uniquely identifies a product that
     * generates findings. This can be the ARN for a third-party product that is
     * integrated with Security Hub, or the ARN for a custom integration.</p>
     */
    inline AwsSecurityFinding& WithProductArn(const Aws::String& value) { SetProductArn(value); return *this;}

    /**
     * <p>The ARN generated by Security Hub that uniquely identifies a product that
     * generates findings. This can be the ARN for a third-party product that is
     * integrated with Security Hub, or the ARN for a custom integration.</p>
     */
    inline AwsSecurityFinding& WithProductArn(Aws::String&& value) { SetProductArn(std::move(value)); return *this;}

    /**
     * <p>The ARN generated by Security Hub that uniquely identifies a product that
     * generates findings. This can be the ARN for a third-party product that is
     * integrated with Security Hub, or the ARN for a custom integration.</p>
     */
    inline AwsSecurityFinding& WithProductArn(const char* value) { SetProductArn(value); return *this;}


    /**
     * <p>The name of the product that generated the finding.</p> <p>Security Hub
     * populates this attribute automatically for each finding. You cannot update this
     * attribute with <code>BatchImportFindings</code> or
     * <code>BatchUpdateFindings</code>. The exception to this is a custom
     * integration.</p> <p>When you use the Security Hub console or API to filter
     * findings by product name, you use this attribute.</p>
     */
    inline const Aws::String& GetProductName() const{ return m_productName; }

    /**
     * <p>The name of the product that generated the finding.</p> <p>Security Hub
     * populates this attribute automatically for each finding. You cannot update this
     * attribute with <code>BatchImportFindings</code> or
     * <code>BatchUpdateFindings</code>. The exception to this is a custom
     * integration.</p> <p>When you use the Security Hub console or API to filter
     * findings by product name, you use this attribute.</p>
     */
    inline bool ProductNameHasBeenSet() const { return m_productNameHasBeenSet; }

    /**
     * <p>The name of the product that generated the finding.</p> <p>Security Hub
     * populates this attribute automatically for each finding. You cannot update this
     * attribute with <code>BatchImportFindings</code> or
     * <code>BatchUpdateFindings</code>. The exception to this is a custom
     * integration.</p> <p>When you use the Security Hub console or API to filter
     * findings by product name, you use this attribute.</p>
     */
    inline void SetProductName(const Aws::String& value) { m_productNameHasBeenSet = true; m_productName = value; }

    /**
     * <p>The name of the product that generated the finding.</p> <p>Security Hub
     * populates this attribute automatically for each finding. You cannot update this
     * attribute with <code>BatchImportFindings</code> or
     * <code>BatchUpdateFindings</code>. The exception to this is a custom
     * integration.</p> <p>When you use the Security Hub console or API to filter
     * findings by product name, you use this attribute.</p>
     */
    inline void SetProductName(Aws::String&& value) { m_productNameHasBeenSet = true; m_productName = std::move(value); }

    /**
     * <p>The name of the product that generated the finding.</p> <p>Security Hub
     * populates this attribute automatically for each finding. You cannot update this
     * attribute with <code>BatchImportFindings</code> or
     * <code>BatchUpdateFindings</code>. The exception to this is a custom
     * integration.</p> <p>When you use the Security Hub console or API to filter
     * findings by product name, you use this attribute.</p>
     */
    inline void SetProductName(const char* value) { m_productNameHasBeenSet = true; m_productName.assign(value); }

    /**
     * <p>The name of the product that generated the finding.</p> <p>Security Hub
     * populates this attribute automatically for each finding. You cannot update this
     * attribute with <code>BatchImportFindings</code> or
     * <code>BatchUpdateFindings</code>. The exception to this is a custom
     * integration.</p> <p>When you use the Security Hub console or API to filter
     * findings by product name, you use this attribute.</p>
     */
    inline AwsSecurityFinding& WithProductName(const Aws::String& value) { SetProductName(value); return *this;}

    /**
     * <p>The name of the product that generated the finding.</p> <p>Security Hub
     * populates this attribute automatically for each finding. You cannot update this
     * attribute with <code>BatchImportFindings</code> or
     * <code>BatchUpdateFindings</code>. The exception to this is a custom
     * integration.</p> <p>When you use the Security Hub console or API to filter
     * findings by product name, you use this attribute.</p>
     */
    inline AwsSecurityFinding& WithProductName(Aws::String&& value) { SetProductName(std::move(value)); return *this;}

    /**
     * <p>The name of the product that generated the finding.</p> <p>Security Hub
     * populates this attribute automatically for each finding. You cannot update this
     * attribute with <code>BatchImportFindings</code> or
     * <code>BatchUpdateFindings</code>. The exception to this is a custom
     * integration.</p> <p>When you use the Security Hub console or API to filter
     * findings by product name, you use this attribute.</p>
     */
    inline AwsSecurityFinding& WithProductName(const char* value) { SetProductName(value); return *this;}


    /**
     * <p>The name of the company for the product that generated the finding.</p>
     * <p>Security Hub populates this attribute automatically for each finding. You
     * cannot update this attribute with <code>BatchImportFindings</code> or
     * <code>BatchUpdateFindings</code>. The exception to this is a custom
     * integration.</p> <p>When you use the Security Hub console or API to filter
     * findings by company name, you use this attribute.</p>
     */
    inline const Aws::String& GetCompanyName() const{ return m_companyName; }

    /**
     * <p>The name of the company for the product that generated the finding.</p>
     * <p>Security Hub populates this attribute automatically for each finding. You
     * cannot update this attribute with <code>BatchImportFindings</code> or
     * <code>BatchUpdateFindings</code>. The exception to this is a custom
     * integration.</p> <p>When you use the Security Hub console or API to filter
     * findings by company name, you use this attribute.</p>
     */
    inline bool CompanyNameHasBeenSet() const { return m_companyNameHasBeenSet; }

    /**
     * <p>The name of the company for the product that generated the finding.</p>
     * <p>Security Hub populates this attribute automatically for each finding. You
     * cannot update this attribute with <code>BatchImportFindings</code> or
     * <code>BatchUpdateFindings</code>. The exception to this is a custom
     * integration.</p> <p>When you use the Security Hub console or API to filter
     * findings by company name, you use this attribute.</p>
     */
    inline void SetCompanyName(const Aws::String& value) { m_companyNameHasBeenSet = true; m_companyName = value; }

    /**
     * <p>The name of the company for the product that generated the finding.</p>
     * <p>Security Hub populates this attribute automatically for each finding. You
     * cannot update this attribute with <code>BatchImportFindings</code> or
     * <code>BatchUpdateFindings</code>. The exception to this is a custom
     * integration.</p> <p>When you use the Security Hub console or API to filter
     * findings by company name, you use this attribute.</p>
     */
    inline void SetCompanyName(Aws::String&& value) { m_companyNameHasBeenSet = true; m_companyName = std::move(value); }

    /**
     * <p>The name of the company for the product that generated the finding.</p>
     * <p>Security Hub populates this attribute automatically for each finding. You
     * cannot update this attribute with <code>BatchImportFindings</code> or
     * <code>BatchUpdateFindings</code>. The exception to this is a custom
     * integration.</p> <p>When you use the Security Hub console or API to filter
     * findings by company name, you use this attribute.</p>
     */
    inline void SetCompanyName(const char* value) { m_companyNameHasBeenSet = true; m_companyName.assign(value); }

    /**
     * <p>The name of the company for the product that generated the finding.</p>
     * <p>Security Hub populates this attribute automatically for each finding. You
     * cannot update this attribute with <code>BatchImportFindings</code> or
     * <code>BatchUpdateFindings</code>. The exception to this is a custom
     * integration.</p> <p>When you use the Security Hub console or API to filter
     * findings by company name, you use this attribute.</p>
     */
    inline AwsSecurityFinding& WithCompanyName(const Aws::String& value) { SetCompanyName(value); return *this;}

    /**
     * <p>The name of the company for the product that generated the finding.</p>
     * <p>Security Hub populates this attribute automatically for each finding. You
     * cannot update this attribute with <code>BatchImportFindings</code> or
     * <code>BatchUpdateFindings</code>. The exception to this is a custom
     * integration.</p> <p>When you use the Security Hub console or API to filter
     * findings by company name, you use this attribute.</p>
     */
    inline AwsSecurityFinding& WithCompanyName(Aws::String&& value) { SetCompanyName(std::move(value)); return *this;}

    /**
     * <p>The name of the company for the product that generated the finding.</p>
     * <p>Security Hub populates this attribute automatically for each finding. You
     * cannot update this attribute with <code>BatchImportFindings</code> or
     * <code>BatchUpdateFindings</code>. The exception to this is a custom
     * integration.</p> <p>When you use the Security Hub console or API to filter
     * findings by company name, you use this attribute.</p>
     */
    inline AwsSecurityFinding& WithCompanyName(const char* value) { SetCompanyName(value); return *this;}


    /**
     * <p>The Region from which the finding was generated.</p> <p>Security Hub
     * populates this attribute automatically for each finding. You cannot update it
     * using <code>BatchImportFindings</code> or <code>BatchUpdateFindings</code>.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The Region from which the finding was generated.</p> <p>Security Hub
     * populates this attribute automatically for each finding. You cannot update it
     * using <code>BatchImportFindings</code> or <code>BatchUpdateFindings</code>.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>The Region from which the finding was generated.</p> <p>Security Hub
     * populates this attribute automatically for each finding. You cannot update it
     * using <code>BatchImportFindings</code> or <code>BatchUpdateFindings</code>.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The Region from which the finding was generated.</p> <p>Security Hub
     * populates this attribute automatically for each finding. You cannot update it
     * using <code>BatchImportFindings</code> or <code>BatchUpdateFindings</code>.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The Region from which the finding was generated.</p> <p>Security Hub
     * populates this attribute automatically for each finding. You cannot update it
     * using <code>BatchImportFindings</code> or <code>BatchUpdateFindings</code>.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>The Region from which the finding was generated.</p> <p>Security Hub
     * populates this attribute automatically for each finding. You cannot update it
     * using <code>BatchImportFindings</code> or <code>BatchUpdateFindings</code>.</p>
     */
    inline AwsSecurityFinding& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The Region from which the finding was generated.</p> <p>Security Hub
     * populates this attribute automatically for each finding. You cannot update it
     * using <code>BatchImportFindings</code> or <code>BatchUpdateFindings</code>.</p>
     */
    inline AwsSecurityFinding& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The Region from which the finding was generated.</p> <p>Security Hub
     * populates this attribute automatically for each finding. You cannot update it
     * using <code>BatchImportFindings</code> or <code>BatchUpdateFindings</code>.</p>
     */
    inline AwsSecurityFinding& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>The identifier for the solution-specific component (a discrete unit of logic)
     * that generated a finding. In various security-findings providers' solutions,
     * this generator can be called a rule, a check, a detector, a plugin, etc. </p>
     */
    inline const Aws::String& GetGeneratorId() const{ return m_generatorId; }

    /**
     * <p>The identifier for the solution-specific component (a discrete unit of logic)
     * that generated a finding. In various security-findings providers' solutions,
     * this generator can be called a rule, a check, a detector, a plugin, etc. </p>
     */
    inline bool GeneratorIdHasBeenSet() const { return m_generatorIdHasBeenSet; }

    /**
     * <p>The identifier for the solution-specific component (a discrete unit of logic)
     * that generated a finding. In various security-findings providers' solutions,
     * this generator can be called a rule, a check, a detector, a plugin, etc. </p>
     */
    inline void SetGeneratorId(const Aws::String& value) { m_generatorIdHasBeenSet = true; m_generatorId = value; }

    /**
     * <p>The identifier for the solution-specific component (a discrete unit of logic)
     * that generated a finding. In various security-findings providers' solutions,
     * this generator can be called a rule, a check, a detector, a plugin, etc. </p>
     */
    inline void SetGeneratorId(Aws::String&& value) { m_generatorIdHasBeenSet = true; m_generatorId = std::move(value); }

    /**
     * <p>The identifier for the solution-specific component (a discrete unit of logic)
     * that generated a finding. In various security-findings providers' solutions,
     * this generator can be called a rule, a check, a detector, a plugin, etc. </p>
     */
    inline void SetGeneratorId(const char* value) { m_generatorIdHasBeenSet = true; m_generatorId.assign(value); }

    /**
     * <p>The identifier for the solution-specific component (a discrete unit of logic)
     * that generated a finding. In various security-findings providers' solutions,
     * this generator can be called a rule, a check, a detector, a plugin, etc. </p>
     */
    inline AwsSecurityFinding& WithGeneratorId(const Aws::String& value) { SetGeneratorId(value); return *this;}

    /**
     * <p>The identifier for the solution-specific component (a discrete unit of logic)
     * that generated a finding. In various security-findings providers' solutions,
     * this generator can be called a rule, a check, a detector, a plugin, etc. </p>
     */
    inline AwsSecurityFinding& WithGeneratorId(Aws::String&& value) { SetGeneratorId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the solution-specific component (a discrete unit of logic)
     * that generated a finding. In various security-findings providers' solutions,
     * this generator can be called a rule, a check, a detector, a plugin, etc. </p>
     */
    inline AwsSecurityFinding& WithGeneratorId(const char* value) { SetGeneratorId(value); return *this;}


    /**
     * <p>The Amazon Web Services account ID that a finding is generated in.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The Amazon Web Services account ID that a finding is generated in.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID that a finding is generated in.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The Amazon Web Services account ID that a finding is generated in.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID that a finding is generated in.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID that a finding is generated in.</p>
     */
    inline AwsSecurityFinding& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID that a finding is generated in.</p>
     */
    inline AwsSecurityFinding& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID that a finding is generated in.</p>
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
     * <p>Indicates when the security-findings provider first observed the potential
     * security issue that a finding captured.</p> <p>Uses the <code>date-time</code>
     * format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline const Aws::String& GetFirstObservedAt() const{ return m_firstObservedAt; }

    /**
     * <p>Indicates when the security-findings provider first observed the potential
     * security issue that a finding captured.</p> <p>Uses the <code>date-time</code>
     * format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline bool FirstObservedAtHasBeenSet() const { return m_firstObservedAtHasBeenSet; }

    /**
     * <p>Indicates when the security-findings provider first observed the potential
     * security issue that a finding captured.</p> <p>Uses the <code>date-time</code>
     * format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetFirstObservedAt(const Aws::String& value) { m_firstObservedAtHasBeenSet = true; m_firstObservedAt = value; }

    /**
     * <p>Indicates when the security-findings provider first observed the potential
     * security issue that a finding captured.</p> <p>Uses the <code>date-time</code>
     * format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetFirstObservedAt(Aws::String&& value) { m_firstObservedAtHasBeenSet = true; m_firstObservedAt = std::move(value); }

    /**
     * <p>Indicates when the security-findings provider first observed the potential
     * security issue that a finding captured.</p> <p>Uses the <code>date-time</code>
     * format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetFirstObservedAt(const char* value) { m_firstObservedAtHasBeenSet = true; m_firstObservedAt.assign(value); }

    /**
     * <p>Indicates when the security-findings provider first observed the potential
     * security issue that a finding captured.</p> <p>Uses the <code>date-time</code>
     * format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsSecurityFinding& WithFirstObservedAt(const Aws::String& value) { SetFirstObservedAt(value); return *this;}

    /**
     * <p>Indicates when the security-findings provider first observed the potential
     * security issue that a finding captured.</p> <p>Uses the <code>date-time</code>
     * format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsSecurityFinding& WithFirstObservedAt(Aws::String&& value) { SetFirstObservedAt(std::move(value)); return *this;}

    /**
     * <p>Indicates when the security-findings provider first observed the potential
     * security issue that a finding captured.</p> <p>Uses the <code>date-time</code>
     * format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsSecurityFinding& WithFirstObservedAt(const char* value) { SetFirstObservedAt(value); return *this;}


    /**
     * <p>Indicates when the security-findings provider most recently observed the
     * potential security issue that a finding captured.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline const Aws::String& GetLastObservedAt() const{ return m_lastObservedAt; }

    /**
     * <p>Indicates when the security-findings provider most recently observed the
     * potential security issue that a finding captured.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline bool LastObservedAtHasBeenSet() const { return m_lastObservedAtHasBeenSet; }

    /**
     * <p>Indicates when the security-findings provider most recently observed the
     * potential security issue that a finding captured.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetLastObservedAt(const Aws::String& value) { m_lastObservedAtHasBeenSet = true; m_lastObservedAt = value; }

    /**
     * <p>Indicates when the security-findings provider most recently observed the
     * potential security issue that a finding captured.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetLastObservedAt(Aws::String&& value) { m_lastObservedAtHasBeenSet = true; m_lastObservedAt = std::move(value); }

    /**
     * <p>Indicates when the security-findings provider most recently observed the
     * potential security issue that a finding captured.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetLastObservedAt(const char* value) { m_lastObservedAtHasBeenSet = true; m_lastObservedAt.assign(value); }

    /**
     * <p>Indicates when the security-findings provider most recently observed the
     * potential security issue that a finding captured.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsSecurityFinding& WithLastObservedAt(const Aws::String& value) { SetLastObservedAt(value); return *this;}

    /**
     * <p>Indicates when the security-findings provider most recently observed the
     * potential security issue that a finding captured.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsSecurityFinding& WithLastObservedAt(Aws::String&& value) { SetLastObservedAt(std::move(value)); return *this;}

    /**
     * <p>Indicates when the security-findings provider most recently observed the
     * potential security issue that a finding captured.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsSecurityFinding& WithLastObservedAt(const char* value) { SetLastObservedAt(value); return *this;}


    /**
     * <p>Indicates when the security-findings provider created the potential security
     * issue that a finding captured.</p> <p>Uses the <code>date-time</code> format
     * specified in <a href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339
     * section 5.6, Internet Date/Time Format</a>. The value cannot contain spaces. For
     * example, <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline const Aws::String& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>Indicates when the security-findings provider created the potential security
     * issue that a finding captured.</p> <p>Uses the <code>date-time</code> format
     * specified in <a href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339
     * section 5.6, Internet Date/Time Format</a>. The value cannot contain spaces. For
     * example, <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>Indicates when the security-findings provider created the potential security
     * issue that a finding captured.</p> <p>Uses the <code>date-time</code> format
     * specified in <a href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339
     * section 5.6, Internet Date/Time Format</a>. The value cannot contain spaces. For
     * example, <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetCreatedAt(const Aws::String& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>Indicates when the security-findings provider created the potential security
     * issue that a finding captured.</p> <p>Uses the <code>date-time</code> format
     * specified in <a href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339
     * section 5.6, Internet Date/Time Format</a>. The value cannot contain spaces. For
     * example, <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetCreatedAt(Aws::String&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>Indicates when the security-findings provider created the potential security
     * issue that a finding captured.</p> <p>Uses the <code>date-time</code> format
     * specified in <a href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339
     * section 5.6, Internet Date/Time Format</a>. The value cannot contain spaces. For
     * example, <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetCreatedAt(const char* value) { m_createdAtHasBeenSet = true; m_createdAt.assign(value); }

    /**
     * <p>Indicates when the security-findings provider created the potential security
     * issue that a finding captured.</p> <p>Uses the <code>date-time</code> format
     * specified in <a href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339
     * section 5.6, Internet Date/Time Format</a>. The value cannot contain spaces. For
     * example, <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsSecurityFinding& WithCreatedAt(const Aws::String& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>Indicates when the security-findings provider created the potential security
     * issue that a finding captured.</p> <p>Uses the <code>date-time</code> format
     * specified in <a href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339
     * section 5.6, Internet Date/Time Format</a>. The value cannot contain spaces. For
     * example, <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsSecurityFinding& WithCreatedAt(Aws::String&& value) { SetCreatedAt(std::move(value)); return *this;}

    /**
     * <p>Indicates when the security-findings provider created the potential security
     * issue that a finding captured.</p> <p>Uses the <code>date-time</code> format
     * specified in <a href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339
     * section 5.6, Internet Date/Time Format</a>. The value cannot contain spaces. For
     * example, <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsSecurityFinding& WithCreatedAt(const char* value) { SetCreatedAt(value); return *this;}


    /**
     * <p>Indicates when the security-findings provider last updated the finding
     * record.</p> <p>Uses the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline const Aws::String& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>Indicates when the security-findings provider last updated the finding
     * record.</p> <p>Uses the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>Indicates when the security-findings provider last updated the finding
     * record.</p> <p>Uses the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetUpdatedAt(const Aws::String& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>Indicates when the security-findings provider last updated the finding
     * record.</p> <p>Uses the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetUpdatedAt(Aws::String&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>Indicates when the security-findings provider last updated the finding
     * record.</p> <p>Uses the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetUpdatedAt(const char* value) { m_updatedAtHasBeenSet = true; m_updatedAt.assign(value); }

    /**
     * <p>Indicates when the security-findings provider last updated the finding
     * record.</p> <p>Uses the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsSecurityFinding& WithUpdatedAt(const Aws::String& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>Indicates when the security-findings provider last updated the finding
     * record.</p> <p>Uses the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsSecurityFinding& WithUpdatedAt(Aws::String&& value) { SetUpdatedAt(std::move(value)); return *this;}

    /**
     * <p>Indicates when the security-findings provider last updated the finding
     * record.</p> <p>Uses the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
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
     * identify.</p> <p>Confidence is scored on a 0-100 basis using a ratio scale,
     * where 0 means zero percent confidence and 100 means 100 percent confidence.</p>
     */
    inline int GetConfidence() const{ return m_confidence; }

    /**
     * <p>A finding's confidence. Confidence is defined as the likelihood that a
     * finding accurately identifies the behavior or issue that it was intended to
     * identify.</p> <p>Confidence is scored on a 0-100 basis using a ratio scale,
     * where 0 means zero percent confidence and 100 means 100 percent confidence.</p>
     */
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }

    /**
     * <p>A finding's confidence. Confidence is defined as the likelihood that a
     * finding accurately identifies the behavior or issue that it was intended to
     * identify.</p> <p>Confidence is scored on a 0-100 basis using a ratio scale,
     * where 0 means zero percent confidence and 100 means 100 percent confidence.</p>
     */
    inline void SetConfidence(int value) { m_confidenceHasBeenSet = true; m_confidence = value; }

    /**
     * <p>A finding's confidence. Confidence is defined as the likelihood that a
     * finding accurately identifies the behavior or issue that it was intended to
     * identify.</p> <p>Confidence is scored on a 0-100 basis using a ratio scale,
     * where 0 means zero percent confidence and 100 means 100 percent confidence.</p>
     */
    inline AwsSecurityFinding& WithConfidence(int value) { SetConfidence(value); return *this;}


    /**
     * <p>The level of importance assigned to the resources associated with the
     * finding.</p> <p>A score of 0 means that the underlying resources have no
     * criticality, and a score of 100 is reserved for the most critical resources.</p>
     */
    inline int GetCriticality() const{ return m_criticality; }

    /**
     * <p>The level of importance assigned to the resources associated with the
     * finding.</p> <p>A score of 0 means that the underlying resources have no
     * criticality, and a score of 100 is reserved for the most critical resources.</p>
     */
    inline bool CriticalityHasBeenSet() const { return m_criticalityHasBeenSet; }

    /**
     * <p>The level of importance assigned to the resources associated with the
     * finding.</p> <p>A score of 0 means that the underlying resources have no
     * criticality, and a score of 100 is reserved for the most critical resources.</p>
     */
    inline void SetCriticality(int value) { m_criticalityHasBeenSet = true; m_criticality = value; }

    /**
     * <p>The level of importance assigned to the resources associated with the
     * finding.</p> <p>A score of 0 means that the underlying resources have no
     * criticality, and a score of 100 is reserved for the most critical resources.</p>
     */
    inline AwsSecurityFinding& WithCriticality(int value) { SetCriticality(value); return *this;}


    /**
     * <p>A finding's title.</p>  <p>In this release, <code>Title</code> is a
     * required property.</p> 
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * <p>A finding's title.</p>  <p>In this release, <code>Title</code> is a
     * required property.</p> 
     */
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    /**
     * <p>A finding's title.</p>  <p>In this release, <code>Title</code> is a
     * required property.</p> 
     */
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p>A finding's title.</p>  <p>In this release, <code>Title</code> is a
     * required property.</p> 
     */
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * <p>A finding's title.</p>  <p>In this release, <code>Title</code> is a
     * required property.</p> 
     */
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }

    /**
     * <p>A finding's title.</p>  <p>In this release, <code>Title</code> is a
     * required property.</p> 
     */
    inline AwsSecurityFinding& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * <p>A finding's title.</p>  <p>In this release, <code>Title</code> is a
     * required property.</p> 
     */
    inline AwsSecurityFinding& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * <p>A finding's title.</p>  <p>In this release, <code>Title</code> is a
     * required property.</p> 
     */
    inline AwsSecurityFinding& WithTitle(const char* value) { SetTitle(value); return *this;}


    /**
     * <p>A finding's description.</p>  <p>In this release,
     * <code>Description</code> is a required property.</p> 
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A finding's description.</p>  <p>In this release,
     * <code>Description</code> is a required property.</p> 
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A finding's description.</p>  <p>In this release,
     * <code>Description</code> is a required property.</p> 
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A finding's description.</p>  <p>In this release,
     * <code>Description</code> is a required property.</p> 
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A finding's description.</p>  <p>In this release,
     * <code>Description</code> is a required property.</p> 
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A finding's description.</p>  <p>In this release,
     * <code>Description</code> is a required property.</p> 
     */
    inline AwsSecurityFinding& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A finding's description.</p>  <p>In this release,
     * <code>Description</code> is a required property.</p> 
     */
    inline AwsSecurityFinding& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A finding's description.</p>  <p>In this release,
     * <code>Description</code> is a required property.</p> 
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
     * <code>AwsSecurityFinding</code> format.</p> <p>Can contain up to 50 key-value
     * pairs. For each key-value pair, the key can contain up to 128 characters, and
     * the value can contain up to 2048 characters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetProductFields() const{ return m_productFields; }

    /**
     * <p>A data type where security-findings providers can include additional
     * solution-specific details that aren't part of the defined
     * <code>AwsSecurityFinding</code> format.</p> <p>Can contain up to 50 key-value
     * pairs. For each key-value pair, the key can contain up to 128 characters, and
     * the value can contain up to 2048 characters.</p>
     */
    inline bool ProductFieldsHasBeenSet() const { return m_productFieldsHasBeenSet; }

    /**
     * <p>A data type where security-findings providers can include additional
     * solution-specific details that aren't part of the defined
     * <code>AwsSecurityFinding</code> format.</p> <p>Can contain up to 50 key-value
     * pairs. For each key-value pair, the key can contain up to 128 characters, and
     * the value can contain up to 2048 characters.</p>
     */
    inline void SetProductFields(const Aws::Map<Aws::String, Aws::String>& value) { m_productFieldsHasBeenSet = true; m_productFields = value; }

    /**
     * <p>A data type where security-findings providers can include additional
     * solution-specific details that aren't part of the defined
     * <code>AwsSecurityFinding</code> format.</p> <p>Can contain up to 50 key-value
     * pairs. For each key-value pair, the key can contain up to 128 characters, and
     * the value can contain up to 2048 characters.</p>
     */
    inline void SetProductFields(Aws::Map<Aws::String, Aws::String>&& value) { m_productFieldsHasBeenSet = true; m_productFields = std::move(value); }

    /**
     * <p>A data type where security-findings providers can include additional
     * solution-specific details that aren't part of the defined
     * <code>AwsSecurityFinding</code> format.</p> <p>Can contain up to 50 key-value
     * pairs. For each key-value pair, the key can contain up to 128 characters, and
     * the value can contain up to 2048 characters.</p>
     */
    inline AwsSecurityFinding& WithProductFields(const Aws::Map<Aws::String, Aws::String>& value) { SetProductFields(value); return *this;}

    /**
     * <p>A data type where security-findings providers can include additional
     * solution-specific details that aren't part of the defined
     * <code>AwsSecurityFinding</code> format.</p> <p>Can contain up to 50 key-value
     * pairs. For each key-value pair, the key can contain up to 128 characters, and
     * the value can contain up to 2048 characters.</p>
     */
    inline AwsSecurityFinding& WithProductFields(Aws::Map<Aws::String, Aws::String>&& value) { SetProductFields(std::move(value)); return *this;}

    /**
     * <p>A data type where security-findings providers can include additional
     * solution-specific details that aren't part of the defined
     * <code>AwsSecurityFinding</code> format.</p> <p>Can contain up to 50 key-value
     * pairs. For each key-value pair, the key can contain up to 128 characters, and
     * the value can contain up to 2048 characters.</p>
     */
    inline AwsSecurityFinding& AddProductFields(const Aws::String& key, const Aws::String& value) { m_productFieldsHasBeenSet = true; m_productFields.emplace(key, value); return *this; }

    /**
     * <p>A data type where security-findings providers can include additional
     * solution-specific details that aren't part of the defined
     * <code>AwsSecurityFinding</code> format.</p> <p>Can contain up to 50 key-value
     * pairs. For each key-value pair, the key can contain up to 128 characters, and
     * the value can contain up to 2048 characters.</p>
     */
    inline AwsSecurityFinding& AddProductFields(Aws::String&& key, const Aws::String& value) { m_productFieldsHasBeenSet = true; m_productFields.emplace(std::move(key), value); return *this; }

    /**
     * <p>A data type where security-findings providers can include additional
     * solution-specific details that aren't part of the defined
     * <code>AwsSecurityFinding</code> format.</p> <p>Can contain up to 50 key-value
     * pairs. For each key-value pair, the key can contain up to 128 characters, and
     * the value can contain up to 2048 characters.</p>
     */
    inline AwsSecurityFinding& AddProductFields(const Aws::String& key, Aws::String&& value) { m_productFieldsHasBeenSet = true; m_productFields.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A data type where security-findings providers can include additional
     * solution-specific details that aren't part of the defined
     * <code>AwsSecurityFinding</code> format.</p> <p>Can contain up to 50 key-value
     * pairs. For each key-value pair, the key can contain up to 128 characters, and
     * the value can contain up to 2048 characters.</p>
     */
    inline AwsSecurityFinding& AddProductFields(Aws::String&& key, Aws::String&& value) { m_productFieldsHasBeenSet = true; m_productFields.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A data type where security-findings providers can include additional
     * solution-specific details that aren't part of the defined
     * <code>AwsSecurityFinding</code> format.</p> <p>Can contain up to 50 key-value
     * pairs. For each key-value pair, the key can contain up to 128 characters, and
     * the value can contain up to 2048 characters.</p>
     */
    inline AwsSecurityFinding& AddProductFields(const char* key, Aws::String&& value) { m_productFieldsHasBeenSet = true; m_productFields.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A data type where security-findings providers can include additional
     * solution-specific details that aren't part of the defined
     * <code>AwsSecurityFinding</code> format.</p> <p>Can contain up to 50 key-value
     * pairs. For each key-value pair, the key can contain up to 128 characters, and
     * the value can contain up to 2048 characters.</p>
     */
    inline AwsSecurityFinding& AddProductFields(Aws::String&& key, const char* value) { m_productFieldsHasBeenSet = true; m_productFields.emplace(std::move(key), value); return *this; }

    /**
     * <p>A data type where security-findings providers can include additional
     * solution-specific details that aren't part of the defined
     * <code>AwsSecurityFinding</code> format.</p> <p>Can contain up to 50 key-value
     * pairs. For each key-value pair, the key can contain up to 128 characters, and
     * the value can contain up to 2048 characters.</p>
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
     * <p>Provides information about a network path that is relevant to a finding. Each
     * entry under <code>NetworkPath</code> represents a component of that path.</p>
     */
    inline const Aws::Vector<NetworkPathComponent>& GetNetworkPath() const{ return m_networkPath; }

    /**
     * <p>Provides information about a network path that is relevant to a finding. Each
     * entry under <code>NetworkPath</code> represents a component of that path.</p>
     */
    inline bool NetworkPathHasBeenSet() const { return m_networkPathHasBeenSet; }

    /**
     * <p>Provides information about a network path that is relevant to a finding. Each
     * entry under <code>NetworkPath</code> represents a component of that path.</p>
     */
    inline void SetNetworkPath(const Aws::Vector<NetworkPathComponent>& value) { m_networkPathHasBeenSet = true; m_networkPath = value; }

    /**
     * <p>Provides information about a network path that is relevant to a finding. Each
     * entry under <code>NetworkPath</code> represents a component of that path.</p>
     */
    inline void SetNetworkPath(Aws::Vector<NetworkPathComponent>&& value) { m_networkPathHasBeenSet = true; m_networkPath = std::move(value); }

    /**
     * <p>Provides information about a network path that is relevant to a finding. Each
     * entry under <code>NetworkPath</code> represents a component of that path.</p>
     */
    inline AwsSecurityFinding& WithNetworkPath(const Aws::Vector<NetworkPathComponent>& value) { SetNetworkPath(value); return *this;}

    /**
     * <p>Provides information about a network path that is relevant to a finding. Each
     * entry under <code>NetworkPath</code> represents a component of that path.</p>
     */
    inline AwsSecurityFinding& WithNetworkPath(Aws::Vector<NetworkPathComponent>&& value) { SetNetworkPath(std::move(value)); return *this;}

    /**
     * <p>Provides information about a network path that is relevant to a finding. Each
     * entry under <code>NetworkPath</code> represents a component of that path.</p>
     */
    inline AwsSecurityFinding& AddNetworkPath(const NetworkPathComponent& value) { m_networkPathHasBeenSet = true; m_networkPath.push_back(value); return *this; }

    /**
     * <p>Provides information about a network path that is relevant to a finding. Each
     * entry under <code>NetworkPath</code> represents a component of that path.</p>
     */
    inline AwsSecurityFinding& AddNetworkPath(NetworkPathComponent&& value) { m_networkPathHasBeenSet = true; m_networkPath.push_back(std::move(value)); return *this; }


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
     * <p>Details about the threat detected in a security finding and the file paths
     * that were affected by the threat. </p>
     */
    inline const Aws::Vector<Threat>& GetThreats() const{ return m_threats; }

    /**
     * <p>Details about the threat detected in a security finding and the file paths
     * that were affected by the threat. </p>
     */
    inline bool ThreatsHasBeenSet() const { return m_threatsHasBeenSet; }

    /**
     * <p>Details about the threat detected in a security finding and the file paths
     * that were affected by the threat. </p>
     */
    inline void SetThreats(const Aws::Vector<Threat>& value) { m_threatsHasBeenSet = true; m_threats = value; }

    /**
     * <p>Details about the threat detected in a security finding and the file paths
     * that were affected by the threat. </p>
     */
    inline void SetThreats(Aws::Vector<Threat>&& value) { m_threatsHasBeenSet = true; m_threats = std::move(value); }

    /**
     * <p>Details about the threat detected in a security finding and the file paths
     * that were affected by the threat. </p>
     */
    inline AwsSecurityFinding& WithThreats(const Aws::Vector<Threat>& value) { SetThreats(value); return *this;}

    /**
     * <p>Details about the threat detected in a security finding and the file paths
     * that were affected by the threat. </p>
     */
    inline AwsSecurityFinding& WithThreats(Aws::Vector<Threat>&& value) { SetThreats(std::move(value)); return *this;}

    /**
     * <p>Details about the threat detected in a security finding and the file paths
     * that were affected by the threat. </p>
     */
    inline AwsSecurityFinding& AddThreats(const Threat& value) { m_threatsHasBeenSet = true; m_threats.push_back(value); return *this; }

    /**
     * <p>Details about the threat detected in a security finding and the file paths
     * that were affected by the threat. </p>
     */
    inline AwsSecurityFinding& AddThreats(Threat&& value) { m_threatsHasBeenSet = true; m_threats.push_back(std::move(value)); return *this; }


    /**
     * <p>Threat intelligence details related to a finding.</p>
     */
    inline const Aws::Vector<ThreatIntelIndicator>& GetThreatIntelIndicators() const{ return m_threatIntelIndicators; }

    /**
     * <p>Threat intelligence details related to a finding.</p>
     */
    inline bool ThreatIntelIndicatorsHasBeenSet() const { return m_threatIntelIndicatorsHasBeenSet; }

    /**
     * <p>Threat intelligence details related to a finding.</p>
     */
    inline void SetThreatIntelIndicators(const Aws::Vector<ThreatIntelIndicator>& value) { m_threatIntelIndicatorsHasBeenSet = true; m_threatIntelIndicators = value; }

    /**
     * <p>Threat intelligence details related to a finding.</p>
     */
    inline void SetThreatIntelIndicators(Aws::Vector<ThreatIntelIndicator>&& value) { m_threatIntelIndicatorsHasBeenSet = true; m_threatIntelIndicators = std::move(value); }

    /**
     * <p>Threat intelligence details related to a finding.</p>
     */
    inline AwsSecurityFinding& WithThreatIntelIndicators(const Aws::Vector<ThreatIntelIndicator>& value) { SetThreatIntelIndicators(value); return *this;}

    /**
     * <p>Threat intelligence details related to a finding.</p>
     */
    inline AwsSecurityFinding& WithThreatIntelIndicators(Aws::Vector<ThreatIntelIndicator>&& value) { SetThreatIntelIndicators(std::move(value)); return *this;}

    /**
     * <p>Threat intelligence details related to a finding.</p>
     */
    inline AwsSecurityFinding& AddThreatIntelIndicators(const ThreatIntelIndicator& value) { m_threatIntelIndicatorsHasBeenSet = true; m_threatIntelIndicators.push_back(value); return *this; }

    /**
     * <p>Threat intelligence details related to a finding.</p>
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
     * check run against a specific rule in a supported security standard, such as CIS
     * Amazon Web Services Foundations. Contains security standard-related finding
     * details.</p>
     */
    inline const Compliance& GetCompliance() const{ return m_compliance; }

    /**
     * <p>This data type is exclusive to findings that are generated as the result of a
     * check run against a specific rule in a supported security standard, such as CIS
     * Amazon Web Services Foundations. Contains security standard-related finding
     * details.</p>
     */
    inline bool ComplianceHasBeenSet() const { return m_complianceHasBeenSet; }

    /**
     * <p>This data type is exclusive to findings that are generated as the result of a
     * check run against a specific rule in a supported security standard, such as CIS
     * Amazon Web Services Foundations. Contains security standard-related finding
     * details.</p>
     */
    inline void SetCompliance(const Compliance& value) { m_complianceHasBeenSet = true; m_compliance = value; }

    /**
     * <p>This data type is exclusive to findings that are generated as the result of a
     * check run against a specific rule in a supported security standard, such as CIS
     * Amazon Web Services Foundations. Contains security standard-related finding
     * details.</p>
     */
    inline void SetCompliance(Compliance&& value) { m_complianceHasBeenSet = true; m_compliance = std::move(value); }

    /**
     * <p>This data type is exclusive to findings that are generated as the result of a
     * check run against a specific rule in a supported security standard, such as CIS
     * Amazon Web Services Foundations. Contains security standard-related finding
     * details.</p>
     */
    inline AwsSecurityFinding& WithCompliance(const Compliance& value) { SetCompliance(value); return *this;}

    /**
     * <p>This data type is exclusive to findings that are generated as the result of a
     * check run against a specific rule in a supported security standard, such as CIS
     * Amazon Web Services Foundations. Contains security standard-related finding
     * details.</p>
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
     * <p>Provides information about the status of the investigation into a
     * finding.</p>
     */
    inline const Workflow& GetWorkflow() const{ return m_workflow; }

    /**
     * <p>Provides information about the status of the investigation into a
     * finding.</p>
     */
    inline bool WorkflowHasBeenSet() const { return m_workflowHasBeenSet; }

    /**
     * <p>Provides information about the status of the investigation into a
     * finding.</p>
     */
    inline void SetWorkflow(const Workflow& value) { m_workflowHasBeenSet = true; m_workflow = value; }

    /**
     * <p>Provides information about the status of the investigation into a
     * finding.</p>
     */
    inline void SetWorkflow(Workflow&& value) { m_workflowHasBeenSet = true; m_workflow = std::move(value); }

    /**
     * <p>Provides information about the status of the investigation into a
     * finding.</p>
     */
    inline AwsSecurityFinding& WithWorkflow(const Workflow& value) { SetWorkflow(value); return *this;}

    /**
     * <p>Provides information about the status of the investigation into a
     * finding.</p>
     */
    inline AwsSecurityFinding& WithWorkflow(Workflow&& value) { SetWorkflow(std::move(value)); return *this;}


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


    /**
     * <p>Provides a list of vulnerabilities associated with the findings.</p>
     */
    inline const Aws::Vector<Vulnerability>& GetVulnerabilities() const{ return m_vulnerabilities; }

    /**
     * <p>Provides a list of vulnerabilities associated with the findings.</p>
     */
    inline bool VulnerabilitiesHasBeenSet() const { return m_vulnerabilitiesHasBeenSet; }

    /**
     * <p>Provides a list of vulnerabilities associated with the findings.</p>
     */
    inline void SetVulnerabilities(const Aws::Vector<Vulnerability>& value) { m_vulnerabilitiesHasBeenSet = true; m_vulnerabilities = value; }

    /**
     * <p>Provides a list of vulnerabilities associated with the findings.</p>
     */
    inline void SetVulnerabilities(Aws::Vector<Vulnerability>&& value) { m_vulnerabilitiesHasBeenSet = true; m_vulnerabilities = std::move(value); }

    /**
     * <p>Provides a list of vulnerabilities associated with the findings.</p>
     */
    inline AwsSecurityFinding& WithVulnerabilities(const Aws::Vector<Vulnerability>& value) { SetVulnerabilities(value); return *this;}

    /**
     * <p>Provides a list of vulnerabilities associated with the findings.</p>
     */
    inline AwsSecurityFinding& WithVulnerabilities(Aws::Vector<Vulnerability>&& value) { SetVulnerabilities(std::move(value)); return *this;}

    /**
     * <p>Provides a list of vulnerabilities associated with the findings.</p>
     */
    inline AwsSecurityFinding& AddVulnerabilities(const Vulnerability& value) { m_vulnerabilitiesHasBeenSet = true; m_vulnerabilities.push_back(value); return *this; }

    /**
     * <p>Provides a list of vulnerabilities associated with the findings.</p>
     */
    inline AwsSecurityFinding& AddVulnerabilities(Vulnerability&& value) { m_vulnerabilitiesHasBeenSet = true; m_vulnerabilities.push_back(std::move(value)); return *this; }


    /**
     * <p>Provides an overview of the patch compliance status for an instance against a
     * selected compliance standard.</p>
     */
    inline const PatchSummary& GetPatchSummary() const{ return m_patchSummary; }

    /**
     * <p>Provides an overview of the patch compliance status for an instance against a
     * selected compliance standard.</p>
     */
    inline bool PatchSummaryHasBeenSet() const { return m_patchSummaryHasBeenSet; }

    /**
     * <p>Provides an overview of the patch compliance status for an instance against a
     * selected compliance standard.</p>
     */
    inline void SetPatchSummary(const PatchSummary& value) { m_patchSummaryHasBeenSet = true; m_patchSummary = value; }

    /**
     * <p>Provides an overview of the patch compliance status for an instance against a
     * selected compliance standard.</p>
     */
    inline void SetPatchSummary(PatchSummary&& value) { m_patchSummaryHasBeenSet = true; m_patchSummary = std::move(value); }

    /**
     * <p>Provides an overview of the patch compliance status for an instance against a
     * selected compliance standard.</p>
     */
    inline AwsSecurityFinding& WithPatchSummary(const PatchSummary& value) { SetPatchSummary(value); return *this;}

    /**
     * <p>Provides an overview of the patch compliance status for an instance against a
     * selected compliance standard.</p>
     */
    inline AwsSecurityFinding& WithPatchSummary(PatchSummary&& value) { SetPatchSummary(std::move(value)); return *this;}


    /**
     * <p>Provides details about an action that affects or that was taken on a
     * resource.</p>
     */
    inline const Action& GetAction() const{ return m_action; }

    /**
     * <p>Provides details about an action that affects or that was taken on a
     * resource.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>Provides details about an action that affects or that was taken on a
     * resource.</p>
     */
    inline void SetAction(const Action& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>Provides details about an action that affects or that was taken on a
     * resource.</p>
     */
    inline void SetAction(Action&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>Provides details about an action that affects or that was taken on a
     * resource.</p>
     */
    inline AwsSecurityFinding& WithAction(const Action& value) { SetAction(value); return *this;}

    /**
     * <p>Provides details about an action that affects or that was taken on a
     * resource.</p>
     */
    inline AwsSecurityFinding& WithAction(Action&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>In a <code>BatchImportFindings</code> request, finding providers use
     * <code>FindingProviderFields</code> to provide and update their own values for
     * confidence, criticality, related findings, severity, and types.</p>
     */
    inline const FindingProviderFields& GetFindingProviderFields() const{ return m_findingProviderFields; }

    /**
     * <p>In a <code>BatchImportFindings</code> request, finding providers use
     * <code>FindingProviderFields</code> to provide and update their own values for
     * confidence, criticality, related findings, severity, and types.</p>
     */
    inline bool FindingProviderFieldsHasBeenSet() const { return m_findingProviderFieldsHasBeenSet; }

    /**
     * <p>In a <code>BatchImportFindings</code> request, finding providers use
     * <code>FindingProviderFields</code> to provide and update their own values for
     * confidence, criticality, related findings, severity, and types.</p>
     */
    inline void SetFindingProviderFields(const FindingProviderFields& value) { m_findingProviderFieldsHasBeenSet = true; m_findingProviderFields = value; }

    /**
     * <p>In a <code>BatchImportFindings</code> request, finding providers use
     * <code>FindingProviderFields</code> to provide and update their own values for
     * confidence, criticality, related findings, severity, and types.</p>
     */
    inline void SetFindingProviderFields(FindingProviderFields&& value) { m_findingProviderFieldsHasBeenSet = true; m_findingProviderFields = std::move(value); }

    /**
     * <p>In a <code>BatchImportFindings</code> request, finding providers use
     * <code>FindingProviderFields</code> to provide and update their own values for
     * confidence, criticality, related findings, severity, and types.</p>
     */
    inline AwsSecurityFinding& WithFindingProviderFields(const FindingProviderFields& value) { SetFindingProviderFields(value); return *this;}

    /**
     * <p>In a <code>BatchImportFindings</code> request, finding providers use
     * <code>FindingProviderFields</code> to provide and update their own values for
     * confidence, criticality, related findings, severity, and types.</p>
     */
    inline AwsSecurityFinding& WithFindingProviderFields(FindingProviderFields&& value) { SetFindingProviderFields(std::move(value)); return *this;}


    /**
     * <p>Indicates whether the finding is a sample finding.</p>
     */
    inline bool GetSample() const{ return m_sample; }

    /**
     * <p>Indicates whether the finding is a sample finding.</p>
     */
    inline bool SampleHasBeenSet() const { return m_sampleHasBeenSet; }

    /**
     * <p>Indicates whether the finding is a sample finding.</p>
     */
    inline void SetSample(bool value) { m_sampleHasBeenSet = true; m_sample = value; }

    /**
     * <p>Indicates whether the finding is a sample finding.</p>
     */
    inline AwsSecurityFinding& WithSample(bool value) { SetSample(value); return *this;}

  private:

    Aws::String m_schemaVersion;
    bool m_schemaVersionHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_productArn;
    bool m_productArnHasBeenSet = false;

    Aws::String m_productName;
    bool m_productNameHasBeenSet = false;

    Aws::String m_companyName;
    bool m_companyNameHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::String m_generatorId;
    bool m_generatorIdHasBeenSet = false;

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_types;
    bool m_typesHasBeenSet = false;

    Aws::String m_firstObservedAt;
    bool m_firstObservedAtHasBeenSet = false;

    Aws::String m_lastObservedAt;
    bool m_lastObservedAtHasBeenSet = false;

    Aws::String m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Severity m_severity;
    bool m_severityHasBeenSet = false;

    int m_confidence;
    bool m_confidenceHasBeenSet = false;

    int m_criticality;
    bool m_criticalityHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Remediation m_remediation;
    bool m_remediationHasBeenSet = false;

    Aws::String m_sourceUrl;
    bool m_sourceUrlHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_productFields;
    bool m_productFieldsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_userDefinedFields;
    bool m_userDefinedFieldsHasBeenSet = false;

    Aws::Vector<Malware> m_malware;
    bool m_malwareHasBeenSet = false;

    Network m_network;
    bool m_networkHasBeenSet = false;

    Aws::Vector<NetworkPathComponent> m_networkPath;
    bool m_networkPathHasBeenSet = false;

    ProcessDetails m_process;
    bool m_processHasBeenSet = false;

    Aws::Vector<Threat> m_threats;
    bool m_threatsHasBeenSet = false;

    Aws::Vector<ThreatIntelIndicator> m_threatIntelIndicators;
    bool m_threatIntelIndicatorsHasBeenSet = false;

    Aws::Vector<Resource> m_resources;
    bool m_resourcesHasBeenSet = false;

    Compliance m_compliance;
    bool m_complianceHasBeenSet = false;

    VerificationState m_verificationState;
    bool m_verificationStateHasBeenSet = false;

    WorkflowState m_workflowState;
    bool m_workflowStateHasBeenSet = false;

    Workflow m_workflow;
    bool m_workflowHasBeenSet = false;

    RecordState m_recordState;
    bool m_recordStateHasBeenSet = false;

    Aws::Vector<RelatedFinding> m_relatedFindings;
    bool m_relatedFindingsHasBeenSet = false;

    Note m_note;
    bool m_noteHasBeenSet = false;

    Aws::Vector<Vulnerability> m_vulnerabilities;
    bool m_vulnerabilitiesHasBeenSet = false;

    PatchSummary m_patchSummary;
    bool m_patchSummaryHasBeenSet = false;

    Action m_action;
    bool m_actionHasBeenSet = false;

    FindingProviderFields m_findingProviderFields;
    bool m_findingProviderFieldsHasBeenSet = false;

    bool m_sample;
    bool m_sampleHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
