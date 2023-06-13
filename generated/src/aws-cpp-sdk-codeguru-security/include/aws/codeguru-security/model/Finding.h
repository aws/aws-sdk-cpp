/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-security/CodeGuruSecurity_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codeguru-security/model/Remediation.h>
#include <aws/codeguru-security/model/Resource.h>
#include <aws/codeguru-security/model/Severity.h>
#include <aws/codeguru-security/model/Status.h>
#include <aws/codeguru-security/model/Vulnerability.h>
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
namespace CodeGuruSecurity
{
namespace Model
{

  /**
   * <p>Information about a finding that was detected in your code.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-security-2018-05-10/Finding">AWS
   * API Reference</a></p>
   */
  class Finding
  {
  public:
    AWS_CODEGURUSECURITY_API Finding();
    AWS_CODEGURUSECURITY_API Finding(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUSECURITY_API Finding& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUSECURITY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The time when the finding was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time when the finding was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The time when the finding was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The time when the finding was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The time when the finding was created.</p>
     */
    inline Finding& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time when the finding was created.</p>
     */
    inline Finding& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>A description of the finding.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the finding.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the finding.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the finding.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the finding.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the finding.</p>
     */
    inline Finding& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the finding.</p>
     */
    inline Finding& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the finding.</p>
     */
    inline Finding& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The identifier for the detector that detected the finding in your code. A
     * detector is a defined rule based on industry standards and AWS best practices.
     * </p>
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * <p>The identifier for the detector that detected the finding in your code. A
     * detector is a defined rule based on industry standards and AWS best practices.
     * </p>
     */
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }

    /**
     * <p>The identifier for the detector that detected the finding in your code. A
     * detector is a defined rule based on industry standards and AWS best practices.
     * </p>
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }

    /**
     * <p>The identifier for the detector that detected the finding in your code. A
     * detector is a defined rule based on industry standards and AWS best practices.
     * </p>
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }

    /**
     * <p>The identifier for the detector that detected the finding in your code. A
     * detector is a defined rule based on industry standards and AWS best practices.
     * </p>
     */
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }

    /**
     * <p>The identifier for the detector that detected the finding in your code. A
     * detector is a defined rule based on industry standards and AWS best practices.
     * </p>
     */
    inline Finding& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * <p>The identifier for the detector that detected the finding in your code. A
     * detector is a defined rule based on industry standards and AWS best practices.
     * </p>
     */
    inline Finding& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the detector that detected the finding in your code. A
     * detector is a defined rule based on industry standards and AWS best practices.
     * </p>
     */
    inline Finding& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}


    /**
     * <p>The name of the detector that identified the security vulnerability in your
     * code. </p>
     */
    inline const Aws::String& GetDetectorName() const{ return m_detectorName; }

    /**
     * <p>The name of the detector that identified the security vulnerability in your
     * code. </p>
     */
    inline bool DetectorNameHasBeenSet() const { return m_detectorNameHasBeenSet; }

    /**
     * <p>The name of the detector that identified the security vulnerability in your
     * code. </p>
     */
    inline void SetDetectorName(const Aws::String& value) { m_detectorNameHasBeenSet = true; m_detectorName = value; }

    /**
     * <p>The name of the detector that identified the security vulnerability in your
     * code. </p>
     */
    inline void SetDetectorName(Aws::String&& value) { m_detectorNameHasBeenSet = true; m_detectorName = std::move(value); }

    /**
     * <p>The name of the detector that identified the security vulnerability in your
     * code. </p>
     */
    inline void SetDetectorName(const char* value) { m_detectorNameHasBeenSet = true; m_detectorName.assign(value); }

    /**
     * <p>The name of the detector that identified the security vulnerability in your
     * code. </p>
     */
    inline Finding& WithDetectorName(const Aws::String& value) { SetDetectorName(value); return *this;}

    /**
     * <p>The name of the detector that identified the security vulnerability in your
     * code. </p>
     */
    inline Finding& WithDetectorName(Aws::String&& value) { SetDetectorName(std::move(value)); return *this;}

    /**
     * <p>The name of the detector that identified the security vulnerability in your
     * code. </p>
     */
    inline Finding& WithDetectorName(const char* value) { SetDetectorName(value); return *this;}


    /**
     * <p>One or more tags or categorizations that are associated with a detector.
     * These tags are defined by type, programming language, or other classification
     * such as maintainability or consistency.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDetectorTags() const{ return m_detectorTags; }

    /**
     * <p>One or more tags or categorizations that are associated with a detector.
     * These tags are defined by type, programming language, or other classification
     * such as maintainability or consistency.</p>
     */
    inline bool DetectorTagsHasBeenSet() const { return m_detectorTagsHasBeenSet; }

    /**
     * <p>One or more tags or categorizations that are associated with a detector.
     * These tags are defined by type, programming language, or other classification
     * such as maintainability or consistency.</p>
     */
    inline void SetDetectorTags(const Aws::Vector<Aws::String>& value) { m_detectorTagsHasBeenSet = true; m_detectorTags = value; }

    /**
     * <p>One or more tags or categorizations that are associated with a detector.
     * These tags are defined by type, programming language, or other classification
     * such as maintainability or consistency.</p>
     */
    inline void SetDetectorTags(Aws::Vector<Aws::String>&& value) { m_detectorTagsHasBeenSet = true; m_detectorTags = std::move(value); }

    /**
     * <p>One or more tags or categorizations that are associated with a detector.
     * These tags are defined by type, programming language, or other classification
     * such as maintainability or consistency.</p>
     */
    inline Finding& WithDetectorTags(const Aws::Vector<Aws::String>& value) { SetDetectorTags(value); return *this;}

    /**
     * <p>One or more tags or categorizations that are associated with a detector.
     * These tags are defined by type, programming language, or other classification
     * such as maintainability or consistency.</p>
     */
    inline Finding& WithDetectorTags(Aws::Vector<Aws::String>&& value) { SetDetectorTags(std::move(value)); return *this;}

    /**
     * <p>One or more tags or categorizations that are associated with a detector.
     * These tags are defined by type, programming language, or other classification
     * such as maintainability or consistency.</p>
     */
    inline Finding& AddDetectorTags(const Aws::String& value) { m_detectorTagsHasBeenSet = true; m_detectorTags.push_back(value); return *this; }

    /**
     * <p>One or more tags or categorizations that are associated with a detector.
     * These tags are defined by type, programming language, or other classification
     * such as maintainability or consistency.</p>
     */
    inline Finding& AddDetectorTags(Aws::String&& value) { m_detectorTagsHasBeenSet = true; m_detectorTags.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more tags or categorizations that are associated with a detector.
     * These tags are defined by type, programming language, or other classification
     * such as maintainability or consistency.</p>
     */
    inline Finding& AddDetectorTags(const char* value) { m_detectorTagsHasBeenSet = true; m_detectorTags.push_back(value); return *this; }


    /**
     * <p>The identifier for the component that generated a finding such as
     * AWSCodeGuruSecurity or AWSInspector.</p>
     */
    inline const Aws::String& GetGeneratorId() const{ return m_generatorId; }

    /**
     * <p>The identifier for the component that generated a finding such as
     * AWSCodeGuruSecurity or AWSInspector.</p>
     */
    inline bool GeneratorIdHasBeenSet() const { return m_generatorIdHasBeenSet; }

    /**
     * <p>The identifier for the component that generated a finding such as
     * AWSCodeGuruSecurity or AWSInspector.</p>
     */
    inline void SetGeneratorId(const Aws::String& value) { m_generatorIdHasBeenSet = true; m_generatorId = value; }

    /**
     * <p>The identifier for the component that generated a finding such as
     * AWSCodeGuruSecurity or AWSInspector.</p>
     */
    inline void SetGeneratorId(Aws::String&& value) { m_generatorIdHasBeenSet = true; m_generatorId = std::move(value); }

    /**
     * <p>The identifier for the component that generated a finding such as
     * AWSCodeGuruSecurity or AWSInspector.</p>
     */
    inline void SetGeneratorId(const char* value) { m_generatorIdHasBeenSet = true; m_generatorId.assign(value); }

    /**
     * <p>The identifier for the component that generated a finding such as
     * AWSCodeGuruSecurity or AWSInspector.</p>
     */
    inline Finding& WithGeneratorId(const Aws::String& value) { SetGeneratorId(value); return *this;}

    /**
     * <p>The identifier for the component that generated a finding such as
     * AWSCodeGuruSecurity or AWSInspector.</p>
     */
    inline Finding& WithGeneratorId(Aws::String&& value) { SetGeneratorId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the component that generated a finding such as
     * AWSCodeGuruSecurity or AWSInspector.</p>
     */
    inline Finding& WithGeneratorId(const char* value) { SetGeneratorId(value); return *this;}


    /**
     * <p>The identifier for a finding.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier for a finding.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier for a finding.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier for a finding.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier for a finding.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier for a finding.</p>
     */
    inline Finding& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier for a finding.</p>
     */
    inline Finding& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier for a finding.</p>
     */
    inline Finding& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>An object that contains the details about how to remediate a finding.</p>
     */
    inline const Remediation& GetRemediation() const{ return m_remediation; }

    /**
     * <p>An object that contains the details about how to remediate a finding.</p>
     */
    inline bool RemediationHasBeenSet() const { return m_remediationHasBeenSet; }

    /**
     * <p>An object that contains the details about how to remediate a finding.</p>
     */
    inline void SetRemediation(const Remediation& value) { m_remediationHasBeenSet = true; m_remediation = value; }

    /**
     * <p>An object that contains the details about how to remediate a finding.</p>
     */
    inline void SetRemediation(Remediation&& value) { m_remediationHasBeenSet = true; m_remediation = std::move(value); }

    /**
     * <p>An object that contains the details about how to remediate a finding.</p>
     */
    inline Finding& WithRemediation(const Remediation& value) { SetRemediation(value); return *this;}

    /**
     * <p>An object that contains the details about how to remediate a finding.</p>
     */
    inline Finding& WithRemediation(Remediation&& value) { SetRemediation(std::move(value)); return *this;}


    /**
     * <p>The resource where Amazon CodeGuru Security detected a finding.</p>
     */
    inline const Resource& GetResource() const{ return m_resource; }

    /**
     * <p>The resource where Amazon CodeGuru Security detected a finding.</p>
     */
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }

    /**
     * <p>The resource where Amazon CodeGuru Security detected a finding.</p>
     */
    inline void SetResource(const Resource& value) { m_resourceHasBeenSet = true; m_resource = value; }

    /**
     * <p>The resource where Amazon CodeGuru Security detected a finding.</p>
     */
    inline void SetResource(Resource&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }

    /**
     * <p>The resource where Amazon CodeGuru Security detected a finding.</p>
     */
    inline Finding& WithResource(const Resource& value) { SetResource(value); return *this;}

    /**
     * <p>The resource where Amazon CodeGuru Security detected a finding.</p>
     */
    inline Finding& WithResource(Resource&& value) { SetResource(std::move(value)); return *this;}


    /**
     * <p>The identifier for the rule that generated the finding.</p>
     */
    inline const Aws::String& GetRuleId() const{ return m_ruleId; }

    /**
     * <p>The identifier for the rule that generated the finding.</p>
     */
    inline bool RuleIdHasBeenSet() const { return m_ruleIdHasBeenSet; }

    /**
     * <p>The identifier for the rule that generated the finding.</p>
     */
    inline void SetRuleId(const Aws::String& value) { m_ruleIdHasBeenSet = true; m_ruleId = value; }

    /**
     * <p>The identifier for the rule that generated the finding.</p>
     */
    inline void SetRuleId(Aws::String&& value) { m_ruleIdHasBeenSet = true; m_ruleId = std::move(value); }

    /**
     * <p>The identifier for the rule that generated the finding.</p>
     */
    inline void SetRuleId(const char* value) { m_ruleIdHasBeenSet = true; m_ruleId.assign(value); }

    /**
     * <p>The identifier for the rule that generated the finding.</p>
     */
    inline Finding& WithRuleId(const Aws::String& value) { SetRuleId(value); return *this;}

    /**
     * <p>The identifier for the rule that generated the finding.</p>
     */
    inline Finding& WithRuleId(Aws::String&& value) { SetRuleId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the rule that generated the finding.</p>
     */
    inline Finding& WithRuleId(const char* value) { SetRuleId(value); return *this;}


    /**
     * <p>The severity of the finding.</p>
     */
    inline const Severity& GetSeverity() const{ return m_severity; }

    /**
     * <p>The severity of the finding.</p>
     */
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }

    /**
     * <p>The severity of the finding.</p>
     */
    inline void SetSeverity(const Severity& value) { m_severityHasBeenSet = true; m_severity = value; }

    /**
     * <p>The severity of the finding.</p>
     */
    inline void SetSeverity(Severity&& value) { m_severityHasBeenSet = true; m_severity = std::move(value); }

    /**
     * <p>The severity of the finding.</p>
     */
    inline Finding& WithSeverity(const Severity& value) { SetSeverity(value); return *this;}

    /**
     * <p>The severity of the finding.</p>
     */
    inline Finding& WithSeverity(Severity&& value) { SetSeverity(std::move(value)); return *this;}


    /**
     * <p>The status of the finding. A finding status can be open or closed. </p>
     */
    inline const Status& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the finding. A finding status can be open or closed. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the finding. A finding status can be open or closed. </p>
     */
    inline void SetStatus(const Status& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the finding. A finding status can be open or closed. </p>
     */
    inline void SetStatus(Status&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the finding. A finding status can be open or closed. </p>
     */
    inline Finding& WithStatus(const Status& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the finding. A finding status can be open or closed. </p>
     */
    inline Finding& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The title of the finding.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * <p>The title of the finding.</p>
     */
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    /**
     * <p>The title of the finding.</p>
     */
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p>The title of the finding.</p>
     */
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * <p>The title of the finding.</p>
     */
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }

    /**
     * <p>The title of the finding.</p>
     */
    inline Finding& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * <p>The title of the finding.</p>
     */
    inline Finding& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * <p>The title of the finding.</p>
     */
    inline Finding& WithTitle(const char* value) { SetTitle(value); return *this;}


    /**
     * <p>The type of finding. </p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of finding. </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of finding. </p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of finding. </p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of finding. </p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of finding. </p>
     */
    inline Finding& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of finding. </p>
     */
    inline Finding& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of finding. </p>
     */
    inline Finding& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>The time when the finding was last updated. Findings are updated when you
     * remediate them or when the finding code location changes. </p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The time when the finding was last updated. Findings are updated when you
     * remediate them or when the finding code location changes. </p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The time when the finding was last updated. Findings are updated when you
     * remediate them or when the finding code location changes. </p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The time when the finding was last updated. Findings are updated when you
     * remediate them or when the finding code location changes. </p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The time when the finding was last updated. Findings are updated when you
     * remediate them or when the finding code location changes. </p>
     */
    inline Finding& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The time when the finding was last updated. Findings are updated when you
     * remediate them or when the finding code location changes. </p>
     */
    inline Finding& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>An object that describes the detected security vulnerability.</p>
     */
    inline const Vulnerability& GetVulnerability() const{ return m_vulnerability; }

    /**
     * <p>An object that describes the detected security vulnerability.</p>
     */
    inline bool VulnerabilityHasBeenSet() const { return m_vulnerabilityHasBeenSet; }

    /**
     * <p>An object that describes the detected security vulnerability.</p>
     */
    inline void SetVulnerability(const Vulnerability& value) { m_vulnerabilityHasBeenSet = true; m_vulnerability = value; }

    /**
     * <p>An object that describes the detected security vulnerability.</p>
     */
    inline void SetVulnerability(Vulnerability&& value) { m_vulnerabilityHasBeenSet = true; m_vulnerability = std::move(value); }

    /**
     * <p>An object that describes the detected security vulnerability.</p>
     */
    inline Finding& WithVulnerability(const Vulnerability& value) { SetVulnerability(value); return *this;}

    /**
     * <p>An object that describes the detected security vulnerability.</p>
     */
    inline Finding& WithVulnerability(Vulnerability&& value) { SetVulnerability(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet = false;

    Aws::String m_detectorName;
    bool m_detectorNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_detectorTags;
    bool m_detectorTagsHasBeenSet = false;

    Aws::String m_generatorId;
    bool m_generatorIdHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Remediation m_remediation;
    bool m_remediationHasBeenSet = false;

    Resource m_resource;
    bool m_resourceHasBeenSet = false;

    Aws::String m_ruleId;
    bool m_ruleIdHasBeenSet = false;

    Severity m_severity;
    bool m_severityHasBeenSet = false;

    Status m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Vulnerability m_vulnerability;
    bool m_vulnerabilityHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
