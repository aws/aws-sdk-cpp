/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-security/CodeGuruSecurity_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeguru-security/model/Status.h>
#include <aws/codeguru-security/model/Resource.h>
#include <aws/codeguru-security/model/Vulnerability.h>
#include <aws/codeguru-security/model/Severity.h>
#include <aws/codeguru-security/model/Remediation.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_CODEGURUSECURITY_API Finding() = default;
    AWS_CODEGURUSECURITY_API Finding(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUSECURITY_API Finding& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUSECURITY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time when the finding was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    Finding& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the finding.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Finding& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the component that generated a finding such as
     * AmazonCodeGuruSecurity.</p>
     */
    inline const Aws::String& GetGeneratorId() const { return m_generatorId; }
    inline bool GeneratorIdHasBeenSet() const { return m_generatorIdHasBeenSet; }
    template<typename GeneratorIdT = Aws::String>
    void SetGeneratorId(GeneratorIdT&& value) { m_generatorIdHasBeenSet = true; m_generatorId = std::forward<GeneratorIdT>(value); }
    template<typename GeneratorIdT = Aws::String>
    Finding& WithGeneratorId(GeneratorIdT&& value) { SetGeneratorId(std::forward<GeneratorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for a finding.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Finding& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the finding was last updated. Findings are updated when you
     * remediate them or when the finding code location changes. </p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    Finding& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of finding. </p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    Finding& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the finding. A finding status can be open or closed. </p>
     */
    inline Status GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(Status value) { m_statusHasBeenSet = true; m_status = value; }
    inline Finding& WithStatus(Status value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource where Amazon CodeGuru Security detected a finding.</p>
     */
    inline const Resource& GetResource() const { return m_resource; }
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
    template<typename ResourceT = Resource>
    void SetResource(ResourceT&& value) { m_resourceHasBeenSet = true; m_resource = std::forward<ResourceT>(value); }
    template<typename ResourceT = Resource>
    Finding& WithResource(ResourceT&& value) { SetResource(std::forward<ResourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that describes the detected security vulnerability.</p>
     */
    inline const Vulnerability& GetVulnerability() const { return m_vulnerability; }
    inline bool VulnerabilityHasBeenSet() const { return m_vulnerabilityHasBeenSet; }
    template<typename VulnerabilityT = Vulnerability>
    void SetVulnerability(VulnerabilityT&& value) { m_vulnerabilityHasBeenSet = true; m_vulnerability = std::forward<VulnerabilityT>(value); }
    template<typename VulnerabilityT = Vulnerability>
    Finding& WithVulnerability(VulnerabilityT&& value) { SetVulnerability(std::forward<VulnerabilityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The severity of the finding. Severity can be critical, high, medium, low, or
     * informational. For information on severity levels, see <a
     * href="https://docs.aws.amazon.com/codeguru/latest/security-ug/findings-overview.html#severity-distribution">Finding
     * severity</a> in the <i>Amazon CodeGuru Security User Guide</i>.</p>
     */
    inline Severity GetSeverity() const { return m_severity; }
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
    inline void SetSeverity(Severity value) { m_severityHasBeenSet = true; m_severity = value; }
    inline Finding& WithSeverity(Severity value) { SetSeverity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains the details about how to remediate a finding.</p>
     */
    inline const Remediation& GetRemediation() const { return m_remediation; }
    inline bool RemediationHasBeenSet() const { return m_remediationHasBeenSet; }
    template<typename RemediationT = Remediation>
    void SetRemediation(RemediationT&& value) { m_remediationHasBeenSet = true; m_remediation = std::forward<RemediationT>(value); }
    template<typename RemediationT = Remediation>
    Finding& WithRemediation(RemediationT&& value) { SetRemediation(std::forward<RemediationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the finding.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    Finding& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more tags or categorizations that are associated with a detector.
     * These tags are defined by type, programming language, or other classification
     * such as maintainability or consistency.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDetectorTags() const { return m_detectorTags; }
    inline bool DetectorTagsHasBeenSet() const { return m_detectorTagsHasBeenSet; }
    template<typename DetectorTagsT = Aws::Vector<Aws::String>>
    void SetDetectorTags(DetectorTagsT&& value) { m_detectorTagsHasBeenSet = true; m_detectorTags = std::forward<DetectorTagsT>(value); }
    template<typename DetectorTagsT = Aws::Vector<Aws::String>>
    Finding& WithDetectorTags(DetectorTagsT&& value) { SetDetectorTags(std::forward<DetectorTagsT>(value)); return *this;}
    template<typename DetectorTagsT = Aws::String>
    Finding& AddDetectorTags(DetectorTagsT&& value) { m_detectorTagsHasBeenSet = true; m_detectorTags.emplace_back(std::forward<DetectorTagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier for the detector that detected the finding in your code. A
     * detector is a defined rule based on industry standards and AWS best practices.
     * </p>
     */
    inline const Aws::String& GetDetectorId() const { return m_detectorId; }
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }
    template<typename DetectorIdT = Aws::String>
    void SetDetectorId(DetectorIdT&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::forward<DetectorIdT>(value); }
    template<typename DetectorIdT = Aws::String>
    Finding& WithDetectorId(DetectorIdT&& value) { SetDetectorId(std::forward<DetectorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the detector that identified the security vulnerability in your
     * code. </p>
     */
    inline const Aws::String& GetDetectorName() const { return m_detectorName; }
    inline bool DetectorNameHasBeenSet() const { return m_detectorNameHasBeenSet; }
    template<typename DetectorNameT = Aws::String>
    void SetDetectorName(DetectorNameT&& value) { m_detectorNameHasBeenSet = true; m_detectorName = std::forward<DetectorNameT>(value); }
    template<typename DetectorNameT = Aws::String>
    Finding& WithDetectorName(DetectorNameT&& value) { SetDetectorName(std::forward<DetectorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the rule that generated the finding.</p>
     */
    inline const Aws::String& GetRuleId() const { return m_ruleId; }
    inline bool RuleIdHasBeenSet() const { return m_ruleIdHasBeenSet; }
    template<typename RuleIdT = Aws::String>
    void SetRuleId(RuleIdT&& value) { m_ruleIdHasBeenSet = true; m_ruleId = std::forward<RuleIdT>(value); }
    template<typename RuleIdT = Aws::String>
    Finding& WithRuleId(RuleIdT&& value) { SetRuleId(std::forward<RuleIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_generatorId;
    bool m_generatorIdHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Status m_status{Status::NOT_SET};
    bool m_statusHasBeenSet = false;

    Resource m_resource;
    bool m_resourceHasBeenSet = false;

    Vulnerability m_vulnerability;
    bool m_vulnerabilityHasBeenSet = false;

    Severity m_severity{Severity::NOT_SET};
    bool m_severityHasBeenSet = false;

    Remediation m_remediation;
    bool m_remediationHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::Vector<Aws::String> m_detectorTags;
    bool m_detectorTagsHasBeenSet = false;

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet = false;

    Aws::String m_detectorName;
    bool m_detectorNameHasBeenSet = false;

    Aws::String m_ruleId;
    bool m_ruleIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
