/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/continuum/model/AffectedPackage.h>
#include <aws/continuum/model/FindingDiscardReason.h>
#include <aws/continuum/model/FindingOcsfClass.h>
#include <aws/continuum/model/FindingPosture.h>
#include <aws/continuum/model/FindingResource.h>
#include <aws/continuum/model/FindingSeverityId.h>
#include <aws/continuum/model/FindingStatus.h>
#include <aws/continuum/model/FindingType.h>
#include <aws/continuum/model/FindingValidation.h>
#include <aws/continuum/model/FindingVulnerability.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Continuum {
namespace Model {
/**
 * <p>Contains the current state and details of the requested finding. Which
 * type-specific members are populated depends on <code>type</code>.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/GetCodeFindingOutput">AWS
 * API Reference</a></p>
 */
class GetCodeFindingResult {
 public:
  AWS_CONTINUUM_API GetCodeFindingResult() = default;
  AWS_CONTINUUM_API GetCodeFindingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONTINUUM_API GetCodeFindingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>What kind of finding this is. Determines which of the type-specific members
   * below are populated.</p>
   */
  inline FindingType GetType() const { return m_type; }
  inline void SetType(FindingType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline GetCodeFindingResult& WithType(FindingType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The producer's title for the finding.</p>
   */
  inline const Aws::String& GetTitle() const { return m_title; }
  template <typename TitleT = Aws::String>
  void SetTitle(TitleT&& value) {
    m_titleHasBeenSet = true;
    m_title = std::forward<TitleT>(value);
  }
  template <typename TitleT = Aws::String>
  GetCodeFindingResult& WithTitle(TitleT&& value) {
    SetTitle(std::forward<TitleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The finding's severity.</p>
   */
  inline FindingSeverityId GetSeverity() const { return m_severity; }
  inline void SetSeverity(FindingSeverityId value) {
    m_severityHasBeenSet = true;
    m_severity = value;
  }
  inline GetCodeFindingResult& WithSeverity(FindingSeverityId value) {
    SetSeverity(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A one-paragraph description.</p>
   */
  inline const Aws::String& GetSummary() const { return m_summary; }
  template <typename SummaryT = Aws::String>
  void SetSummary(SummaryT&& value) {
    m_summaryHasBeenSet = true;
    m_summary = std::forward<SummaryT>(value);
  }
  template <typename SummaryT = Aws::String>
  GetCodeFindingResult& WithSummary(SummaryT&& value) {
    SetSummary(std::forward<SummaryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The full analysis.</p>
   */
  inline const Aws::String& GetDetailedDescription() const { return m_detailedDescription; }
  template <typename DetailedDescriptionT = Aws::String>
  void SetDetailedDescription(DetailedDescriptionT&& value) {
    m_detailedDescriptionHasBeenSet = true;
    m_detailedDescription = std::forward<DetailedDescriptionT>(value);
  }
  template <typename DetailedDescriptionT = Aws::String>
  GetCodeFindingResult& WithDetailedDescription(DetailedDescriptionT&& value) {
    SetDetailedDescription(std::forward<DetailedDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The producer's vulnerability category. Not a stable filter key across finding
   * types -- see FindingCategory.</p>
   */
  inline const Aws::String& GetCategory() const { return m_category; }
  template <typename CategoryT = Aws::String>
  void SetCategory(CategoryT&& value) {
    m_categoryHasBeenSet = true;
    m_category = std::forward<CategoryT>(value);
  }
  template <typename CategoryT = Aws::String>
  GetCodeFindingResult& WithCategory(CategoryT&& value) {
    SetCategory(std::forward<CategoryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A more specific classification within <code>category</code>.</p>
   */
  inline const Aws::String& GetSubCategory() const { return m_subCategory; }
  template <typename SubCategoryT = Aws::String>
  void SetSubCategory(SubCategoryT&& value) {
    m_subCategoryHasBeenSet = true;
    m_subCategory = std::forward<SubCategoryT>(value);
  }
  template <typename SubCategoryT = Aws::String>
  GetCodeFindingResult& WithSubCategory(SubCategoryT&& value) {
    SetSubCategory(std::forward<SubCategoryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>CWE identifiers classifying the finding.</p>
   */
  inline const Aws::Vector<Aws::String>& GetCweIds() const { return m_cweIds; }
  template <typename CweIdsT = Aws::Vector<Aws::String>>
  void SetCweIds(CweIdsT&& value) {
    m_cweIdsHasBeenSet = true;
    m_cweIds = std::forward<CweIdsT>(value);
  }
  template <typename CweIdsT = Aws::Vector<Aws::String>>
  GetCodeFindingResult& WithCweIds(CweIdsT&& value) {
    SetCweIds(std::forward<CweIdsT>(value));
    return *this;
  }
  template <typename CweIdsT = Aws::String>
  GetCodeFindingResult& AddCweIds(CweIdsT&& value) {
    m_cweIdsHasBeenSet = true;
    m_cweIds.emplace_back(std::forward<CweIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The OWASP Top 10 category, when the producer supplies one.</p>
   */
  inline const Aws::String& GetOwaspCategory() const { return m_owaspCategory; }
  template <typename OwaspCategoryT = Aws::String>
  void SetOwaspCategory(OwaspCategoryT&& value) {
    m_owaspCategoryHasBeenSet = true;
    m_owaspCategory = std::forward<OwaspCategoryT>(value);
  }
  template <typename OwaspCategoryT = Aws::String>
  GetCodeFindingResult& WithOwaspCategory(OwaspCategoryT&& value) {
    SetOwaspCategory(std::forward<OwaspCategoryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How to fix the finding.</p>
   */
  inline const Aws::String& GetMitigation() const { return m_mitigation; }
  template <typename MitigationT = Aws::String>
  void SetMitigation(MitigationT&& value) {
    m_mitigationHasBeenSet = true;
    m_mitigation = std::forward<MitigationT>(value);
  }
  template <typename MitigationT = Aws::String>
  GetCodeFindingResult& WithMitigation(MitigationT&& value) {
    SetMitigation(std::forward<MitigationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The file the finding is about.</p>
   */
  inline const Aws::String& GetFilePath() const { return m_filePath; }
  template <typename FilePathT = Aws::String>
  void SetFilePath(FilePathT&& value) {
    m_filePathHasBeenSet = true;
    m_filePath = std::forward<FilePathT>(value);
  }
  template <typename FilePathT = Aws::String>
  GetCodeFindingResult& WithFilePath(FilePathT&& value) {
    SetFilePath(std::forward<FilePathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The 1-indexed line the finding is about. Bounds are enforced server-side
   * rather than by a constraint trait: a numeric constraint generates a distinct
   * newtype per enclosing structure, so the same concept would not share a type
   * across the create input and the read output.</p>
   */
  inline int GetLineNumber() const { return m_lineNumber; }
  inline void SetLineNumber(int value) {
    m_lineNumberHasBeenSet = true;
    m_lineNumber = value;
  }
  inline GetCodeFindingResult& WithLineNumber(int value) {
    SetLineNumber(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The CVE this finding reports, for software-composition findings. Both code
   * types can carry one: a customer document supplies it under
   * vulnerabilities[].cve, and Continuum's scanner reports CVEs for
   * dependency-manifest findings.</p>
   */
  inline const Aws::String& GetCveId() const { return m_cveId; }
  template <typename CveIdT = Aws::String>
  void SetCveId(CveIdT&& value) {
    m_cveIdHasBeenSet = true;
    m_cveId = std::forward<CveIdT>(value);
  }
  template <typename CveIdT = Aws::String>
  GetCodeFindingResult& WithCveId(CveIdT&& value) {
    SetCveId(std::forward<CveIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The CVSS base score accompanying <code>cveId</code>, when the producer
   * supplies one, from 0.0 to 10.0. Not computed by Continuum. The range is enforced
   * server-side, not by a @range trait -- the smithy-rs server SDK does not support
   * range constraints on double shapes (smithy-rs#2007).</p>
   */
  inline double GetCvssBaseScore() const { return m_cvssBaseScore; }
  inline void SetCvssBaseScore(double value) {
    m_cvssBaseScoreHasBeenSet = true;
    m_cvssBaseScore = value;
  }
  inline GetCodeFindingResult& WithCvssBaseScore(double value) {
    SetCvssBaseScore(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Packages implicated by the finding.</p>
   */
  inline const Aws::Vector<AffectedPackage>& GetAffectedPackages() const { return m_affectedPackages; }
  template <typename AffectedPackagesT = Aws::Vector<AffectedPackage>>
  void SetAffectedPackages(AffectedPackagesT&& value) {
    m_affectedPackagesHasBeenSet = true;
    m_affectedPackages = std::forward<AffectedPackagesT>(value);
  }
  template <typename AffectedPackagesT = Aws::Vector<AffectedPackage>>
  GetCodeFindingResult& WithAffectedPackages(AffectedPackagesT&& value) {
    SetAffectedPackages(std::forward<AffectedPackagesT>(value));
    return *this;
  }
  template <typename AffectedPackagesT = AffectedPackage>
  GetCodeFindingResult& AddAffectedPackages(AffectedPackagesT&& value) {
    m_affectedPackagesHasBeenSet = true;
    m_affectedPackages.emplace_back(std::forward<AffectedPackagesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The vulnerable code fragment.</p>
   */
  inline const Aws::String& GetVulnerableCode() const { return m_vulnerableCode; }
  template <typename VulnerableCodeT = Aws::String>
  void SetVulnerableCode(VulnerableCodeT&& value) {
    m_vulnerableCodeHasBeenSet = true;
    m_vulnerableCode = std::forward<VulnerableCodeT>(value);
  }
  template <typename VulnerableCodeT = Aws::String>
  GetCodeFindingResult& WithVulnerableCode(VulnerableCodeT&& value) {
    SetVulnerableCode(std::forward<VulnerableCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>User-controlled inputs that reach the vulnerability.</p>
   */
  inline const Aws::Vector<Aws::String>& GetRelevantInputs() const { return m_relevantInputs; }
  template <typename RelevantInputsT = Aws::Vector<Aws::String>>
  void SetRelevantInputs(RelevantInputsT&& value) {
    m_relevantInputsHasBeenSet = true;
    m_relevantInputs = std::forward<RelevantInputsT>(value);
  }
  template <typename RelevantInputsT = Aws::Vector<Aws::String>>
  GetCodeFindingResult& WithRelevantInputs(RelevantInputsT&& value) {
    SetRelevantInputs(std::forward<RelevantInputsT>(value));
    return *this;
  }
  template <typename RelevantInputsT = Aws::String>
  GetCodeFindingResult& AddRelevantInputs(RelevantInputsT&& value) {
    m_relevantInputsHasBeenSet = true;
    m_relevantInputs.emplace_back(std::forward<RelevantInputsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Steps to reproduce or exploit the finding.</p>
   */
  inline const Aws::Vector<Aws::String>& GetStepsToReproduce() const { return m_stepsToReproduce; }
  template <typename StepsToReproduceT = Aws::Vector<Aws::String>>
  void SetStepsToReproduce(StepsToReproduceT&& value) {
    m_stepsToReproduceHasBeenSet = true;
    m_stepsToReproduce = std::forward<StepsToReproduceT>(value);
  }
  template <typename StepsToReproduceT = Aws::Vector<Aws::String>>
  GetCodeFindingResult& WithStepsToReproduce(StepsToReproduceT&& value) {
    SetStepsToReproduce(std::forward<StepsToReproduceT>(value));
    return *this;
  }
  template <typename StepsToReproduceT = Aws::String>
  GetCodeFindingResult& AddStepsToReproduce(StepsToReproduceT&& value) {
    m_stepsToReproduceHasBeenSet = true;
    m_stepsToReproduce.emplace_back(std::forward<StepsToReproduceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The validator's assessment. Absent when no validation ran.</p>
   */
  inline const FindingValidation& GetValidation() const { return m_validation; }
  template <typename ValidationT = FindingValidation>
  void SetValidation(ValidationT&& value) {
    m_validationHasBeenSet = true;
    m_validation = std::forward<ValidationT>(value);
  }
  template <typename ValidationT = FindingValidation>
  GetCodeFindingResult& WithValidation(ValidationT&& value) {
    SetValidation(std::forward<ValidationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The last line of the affected range, from the document's
   * affected_code[].end_line.</p>
   */
  inline int GetEndLine() const { return m_endLine; }
  inline void SetEndLine(int value) {
    m_endLineHasBeenSet = true;
    m_endLine = value;
  }
  inline GetCodeFindingResult& WithEndLine(int value) {
    SetEndLine(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>MITRE ATT&amp;CK technique identifiers, from the document's
   * finding_info.attacks[].technique.uid.</p>
   */
  inline const Aws::Vector<Aws::String>& GetMitreTechniques() const { return m_mitreTechniques; }
  template <typename MitreTechniquesT = Aws::Vector<Aws::String>>
  void SetMitreTechniques(MitreTechniquesT&& value) {
    m_mitreTechniquesHasBeenSet = true;
    m_mitreTechniques = std::forward<MitreTechniquesT>(value);
  }
  template <typename MitreTechniquesT = Aws::Vector<Aws::String>>
  GetCodeFindingResult& WithMitreTechniques(MitreTechniquesT&& value) {
    SetMitreTechniques(std::forward<MitreTechniquesT>(value));
    return *this;
  }
  template <typename MitreTechniquesT = Aws::String>
  GetCodeFindingResult& AddMitreTechniques(MitreTechniquesT&& value) {
    m_mitreTechniquesHasBeenSet = true;
    m_mitreTechniques.emplace_back(std::forward<MitreTechniquesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Remediation references, from the document's
   * vulnerabilities[].remediation.references.</p>
   */
  inline const Aws::Vector<Aws::String>& GetRemediationReferences() const { return m_remediationReferences; }
  template <typename RemediationReferencesT = Aws::Vector<Aws::String>>
  void SetRemediationReferences(RemediationReferencesT&& value) {
    m_remediationReferencesHasBeenSet = true;
    m_remediationReferences = std::forward<RemediationReferencesT>(value);
  }
  template <typename RemediationReferencesT = Aws::Vector<Aws::String>>
  GetCodeFindingResult& WithRemediationReferences(RemediationReferencesT&& value) {
    SetRemediationReferences(std::forward<RemediationReferencesT>(value));
    return *this;
  }
  template <typename RemediationReferencesT = Aws::String>
  GetCodeFindingResult& AddRemediationReferences(RemediationReferencesT&& value) {
    m_remediationReferencesHasBeenSet = true;
    m_remediationReferences.emplace_back(std::forward<RemediationReferencesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The OCSF class the document declared. Determines whether <code>posture</code>
   * is populated.</p>
   */
  inline FindingOcsfClass GetOcsfClass() const { return m_ocsfClass; }
  inline void SetOcsfClass(FindingOcsfClass value) {
    m_ocsfClassHasBeenSet = true;
    m_ocsfClass = value;
  }
  inline GetCodeFindingResult& WithOcsfClass(FindingOcsfClass value) {
    SetOcsfClass(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The OCSF schema version the producer wrote against (metadata.version).</p>
   */
  inline const Aws::String& GetOcsfSchemaVersion() const { return m_ocsfSchemaVersion; }
  template <typename OcsfSchemaVersionT = Aws::String>
  void SetOcsfSchemaVersion(OcsfSchemaVersionT&& value) {
    m_ocsfSchemaVersionHasBeenSet = true;
    m_ocsfSchemaVersion = std::forward<OcsfSchemaVersionT>(value);
  }
  template <typename OcsfSchemaVersionT = Aws::String>
  GetCodeFindingResult& WithOcsfSchemaVersion(OcsfSchemaVersionT&& value) {
    SetOcsfSchemaVersion(std::forward<OcsfSchemaVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The producing product and vendor (metadata.product).</p>
   */
  inline const Aws::String& GetProductName() const { return m_productName; }
  template <typename ProductNameT = Aws::String>
  void SetProductName(ProductNameT&& value) {
    m_productNameHasBeenSet = true;
    m_productName = std::forward<ProductNameT>(value);
  }
  template <typename ProductNameT = Aws::String>
  GetCodeFindingResult& WithProductName(ProductNameT&& value) {
    SetProductName(std::forward<ProductNameT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetProductVendorName() const { return m_productVendorName; }
  template <typename ProductVendorNameT = Aws::String>
  void SetProductVendorName(ProductVendorNameT&& value) {
    m_productVendorNameHasBeenSet = true;
    m_productVendorName = std::forward<ProductVendorNameT>(value);
  }
  template <typename ProductVendorNameT = Aws::String>
  GetCodeFindingResult& WithProductVendorName(ProductVendorNameT&& value) {
    SetProductVendorName(std::forward<ProductVendorNameT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetProductVersion() const { return m_productVersion; }
  template <typename ProductVersionT = Aws::String>
  void SetProductVersion(ProductVersionT&& value) {
    m_productVersionHasBeenSet = true;
    m_productVersion = std::forward<ProductVersionT>(value);
  }
  template <typename ProductVersionT = Aws::String>
  GetCodeFindingResult& WithProductVersion(ProductVersionT&& value) {
    SetProductVersion(std::forward<ProductVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The producer's own status for the finding, and the enum value behind it.
   * Distinct from <code>status</code>, which is Continuum's lifecycle state -- a
   * producer may call a finding &quot;New&quot; while Continuum has it
   * SUBMITTED.</p>
   */
  inline const Aws::String& GetSourceStatus() const { return m_sourceStatus; }
  template <typename SourceStatusT = Aws::String>
  void SetSourceStatus(SourceStatusT&& value) {
    m_sourceStatusHasBeenSet = true;
    m_sourceStatus = std::forward<SourceStatusT>(value);
  }
  template <typename SourceStatusT = Aws::String>
  GetCodeFindingResult& WithSourceStatus(SourceStatusT&& value) {
    SetSourceStatus(std::forward<SourceStatusT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The producer's numeric enum value for <code>sourceStatus</code>.</p>
   */
  inline int GetSourceStatusId() const { return m_sourceStatusId; }
  inline void SetSourceStatusId(int value) {
    m_sourceStatusIdHasBeenSet = true;
    m_sourceStatusId = value;
  }
  inline GetCodeFindingResult& WithSourceStatusId(int value) {
    SetSourceStatusId(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When the producer first observed the finding (finding_info.first_seen_time).
   * The producer's own clock, not Continuum's.</p>
   */
  inline const Aws::Utils::DateTime& GetFirstSeenAt() const { return m_firstSeenAt; }
  template <typename FirstSeenAtT = Aws::Utils::DateTime>
  void SetFirstSeenAt(FirstSeenAtT&& value) {
    m_firstSeenAtHasBeenSet = true;
    m_firstSeenAt = std::forward<FirstSeenAtT>(value);
  }
  template <typename FirstSeenAtT = Aws::Utils::DateTime>
  GetCodeFindingResult& WithFirstSeenAt(FirstSeenAtT&& value) {
    SetFirstSeenAt(std::forward<FirstSeenAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The producer's own classification of the finding (finding_info.types).</p>
   */
  inline const Aws::Vector<Aws::String>& GetFindingTypes() const { return m_findingTypes; }
  template <typename FindingTypesT = Aws::Vector<Aws::String>>
  void SetFindingTypes(FindingTypesT&& value) {
    m_findingTypesHasBeenSet = true;
    m_findingTypes = std::forward<FindingTypesT>(value);
  }
  template <typename FindingTypesT = Aws::Vector<Aws::String>>
  GetCodeFindingResult& WithFindingTypes(FindingTypesT&& value) {
    SetFindingTypes(std::forward<FindingTypesT>(value));
    return *this;
  }
  template <typename FindingTypesT = Aws::String>
  GetCodeFindingResult& AddFindingTypes(FindingTypesT&& value) {
    m_findingTypesHasBeenSet = true;
    m_findingTypes.emplace_back(std::forward<FindingTypesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Every vulnerability the document reported. A document may report several; the
   * flat
   * <code>cveId</code>/<code>cvssBaseScore</code>/<code>filePath</code>/<code>lineNumber</code>
   * members above carry the first one's identity so a caller that only needs
   * &quot;what and where&quot; does not have to walk this list.</p>
   */
  inline const Aws::Vector<FindingVulnerability>& GetVulnerabilities() const { return m_vulnerabilities; }
  template <typename VulnerabilitiesT = Aws::Vector<FindingVulnerability>>
  void SetVulnerabilities(VulnerabilitiesT&& value) {
    m_vulnerabilitiesHasBeenSet = true;
    m_vulnerabilities = std::forward<VulnerabilitiesT>(value);
  }
  template <typename VulnerabilitiesT = Aws::Vector<FindingVulnerability>>
  GetCodeFindingResult& WithVulnerabilities(VulnerabilitiesT&& value) {
    SetVulnerabilities(std::forward<VulnerabilitiesT>(value));
    return *this;
  }
  template <typename VulnerabilitiesT = FindingVulnerability>
  GetCodeFindingResult& AddVulnerabilities(VulnerabilitiesT&& value) {
    m_vulnerabilitiesHasBeenSet = true;
    m_vulnerabilities.emplace_back(std::forward<VulnerabilitiesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Resources the document named (resources[]).</p>
   */
  inline const Aws::Vector<FindingResource>& GetResources() const { return m_resources; }
  template <typename ResourcesT = Aws::Vector<FindingResource>>
  void SetResources(ResourcesT&& value) {
    m_resourcesHasBeenSet = true;
    m_resources = std::forward<ResourcesT>(value);
  }
  template <typename ResourcesT = Aws::Vector<FindingResource>>
  GetCodeFindingResult& WithResources(ResourcesT&& value) {
    SetResources(std::forward<ResourcesT>(value));
    return *this;
  }
  template <typename ResourcesT = FindingResource>
  GetCodeFindingResult& AddResources(ResourcesT&& value) {
    m_resourcesHasBeenSet = true;
    m_resources.emplace_back(std::forward<ResourcesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The compliance posture, for an Application Security Posture Finding. Absent
   * for a vulnerability finding.</p>
   */
  inline const FindingPosture& GetPosture() const { return m_posture; }
  template <typename PostureT = FindingPosture>
  void SetPosture(PostureT&& value) {
    m_postureHasBeenSet = true;
    m_posture = std::forward<PostureT>(value);
  }
  template <typename PostureT = FindingPosture>
  GetCodeFindingResult& WithPosture(PostureT&& value) {
    SetPosture(std::forward<PostureT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the finding.</p>
   */
  inline const Aws::String& GetFindingId() const { return m_findingId; }
  template <typename FindingIdT = Aws::String>
  void SetFindingId(FindingIdT&& value) {
    m_findingIdHasBeenSet = true;
    m_findingId = std::forward<FindingIdT>(value);
  }
  template <typename FindingIdT = Aws::String>
  GetCodeFindingResult& WithFindingId(FindingIdT&& value) {
    SetFindingId(std::forward<FindingIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the finding.</p>
   */
  inline const Aws::String& GetFindingArn() const { return m_findingArn; }
  template <typename FindingArnT = Aws::String>
  void SetFindingArn(FindingArnT&& value) {
    m_findingArnHasBeenSet = true;
    m_findingArn = std::forward<FindingArnT>(value);
  }
  template <typename FindingArnT = Aws::String>
  GetCodeFindingResult& WithFindingArn(FindingArnT&& value) {
    SetFindingArn(std::forward<FindingArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The environment that owns the finding.</p>
   */
  inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
  template <typename EnvironmentIdT = Aws::String>
  void SetEnvironmentId(EnvironmentIdT&& value) {
    m_environmentIdHasBeenSet = true;
    m_environmentId = std::forward<EnvironmentIdT>(value);
  }
  template <typename EnvironmentIdT = Aws::String>
  GetCodeFindingResult& WithEnvironmentId(EnvironmentIdT&& value) {
    SetEnvironmentId(std::forward<EnvironmentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The system that produced the finding.</p>
   */
  inline const Aws::String& GetSource() const { return m_source; }
  template <typename SourceT = Aws::String>
  void SetSource(SourceT&& value) {
    m_sourceHasBeenSet = true;
    m_source = std::forward<SourceT>(value);
  }
  template <typename SourceT = Aws::String>
  GetCodeFindingResult& WithSource(SourceT&& value) {
    SetSource(std::forward<SourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The producer's own identifier for the finding.</p>
   */
  inline const Aws::String& GetSourceFindingId() const { return m_sourceFindingId; }
  template <typename SourceFindingIdT = Aws::String>
  void SetSourceFindingId(SourceFindingIdT&& value) {
    m_sourceFindingIdHasBeenSet = true;
    m_sourceFindingId = std::forward<SourceFindingIdT>(value);
  }
  template <typename SourceFindingIdT = Aws::String>
  GetCodeFindingResult& WithSourceFindingId(SourceFindingIdT&& value) {
    SetSourceFindingId(std::forward<SourceFindingIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When the producer reported the finding -- its own clock, which is not
   * Continuum's ingestion time. <code>createdAt</code> is when Continuum accepted
   * it; these are genuinely different instants and a reader usually wants this
   * one.</p> <p>For CreateCodeFinding, this is the submitted OCSF document's own
   * top-level <code>time</code>. For findings Continuum's scanner produces, it is
   * the finding's own creation time.</p> <p>Continuum does not validate it for
   * plausibility: a producer's value is echoed as given, so a <code>timestamp</code>
   * here asserts the unit and format, not that the instant is genuine.</p>
   */
  inline const Aws::Utils::DateTime& GetReportedAt() const { return m_reportedAt; }
  template <typename ReportedAtT = Aws::Utils::DateTime>
  void SetReportedAt(ReportedAtT&& value) {
    m_reportedAtHasBeenSet = true;
    m_reportedAt = std::forward<ReportedAtT>(value);
  }
  template <typename ReportedAtT = Aws::Utils::DateTime>
  GetCodeFindingResult& WithReportedAt(ReportedAtT&& value) {
    SetReportedAt(std::forward<ReportedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current lifecycle status of the finding.</p>
   */
  inline FindingStatus GetStatus() const { return m_status; }
  inline void SetStatus(FindingStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetCodeFindingResult& WithStatus(FindingStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the status last transitioned.</p>
   */
  inline const Aws::Utils::DateTime& GetStatusUpdatedAt() const { return m_statusUpdatedAt; }
  template <typename StatusUpdatedAtT = Aws::Utils::DateTime>
  void SetStatusUpdatedAt(StatusUpdatedAtT&& value) {
    m_statusUpdatedAtHasBeenSet = true;
    m_statusUpdatedAt = std::forward<StatusUpdatedAtT>(value);
  }
  template <typename StatusUpdatedAtT = Aws::Utils::DateTime>
  GetCodeFindingResult& WithStatusUpdatedAt(StatusUpdatedAtT&& value) {
    SetStatusUpdatedAt(std::forward<StatusUpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the finding was ingested.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetCodeFindingResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scan that produced the finding, when it came from one. For a finding
   * Continuum's scanner produced, this is the Continuum scan run (see GetCodeScan).
   * For a finding submitted with CreateCodeFinding, it is the OCSF document's
   * <code>metadata.correlation_uid</code>, when that value is a valid ScanRunId.
   * Absent when the finding did not come from a scan.</p>
   */
  inline const Aws::String& GetScanRunId() const { return m_scanRunId; }
  template <typename ScanRunIdT = Aws::String>
  void SetScanRunId(ScanRunIdT&& value) {
    m_scanRunIdHasBeenSet = true;
    m_scanRunId = std::forward<ScanRunIdT>(value);
  }
  template <typename ScanRunIdT = Aws::String>
  GetCodeFindingResult& WithScanRunId(ScanRunIdT&& value) {
    SetScanRunId(std::forward<ScanRunIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Human-readable context about the current status.</p>
   */
  inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
  template <typename StatusMessageT = Aws::String>
  void SetStatusMessage(StatusMessageT&& value) {
    m_statusMessageHasBeenSet = true;
    m_statusMessage = std::forward<StatusMessageT>(value);
  }
  template <typename StatusMessageT = Aws::String>
  GetCodeFindingResult& WithStatusMessage(StatusMessageT&& value) {
    SetStatusMessage(std::forward<StatusMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Why the finding was not escalated. Present only when status is DISCARDED.</p>
   */
  inline FindingDiscardReason GetDiscardReason() const { return m_discardReason; }
  inline void SetDiscardReason(FindingDiscardReason value) {
    m_discardReasonHasBeenSet = true;
    m_discardReason = value;
  }
  inline GetCodeFindingResult& WithDiscardReason(FindingDiscardReason value) {
    SetDiscardReason(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Customer-facing explanation accompanying <code>discardReason</code>.</p>
   */
  inline const Aws::String& GetDiscardReasoning() const { return m_discardReasoning; }
  template <typename DiscardReasoningT = Aws::String>
  void SetDiscardReasoning(DiscardReasoningT&& value) {
    m_discardReasoningHasBeenSet = true;
    m_discardReasoning = std::forward<DiscardReasoningT>(value);
  }
  template <typename DiscardReasoningT = Aws::String>
  GetCodeFindingResult& WithDiscardReasoning(DiscardReasoningT&& value) {
    SetDiscardReasoning(std::forward<DiscardReasoningT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The existing issue this finding duplicates. Present only for the
   * DUPLICATE_OF_* discard reasons.</p>
   */
  inline const Aws::String& GetDuplicateOfIssueId() const { return m_duplicateOfIssueId; }
  template <typename DuplicateOfIssueIdT = Aws::String>
  void SetDuplicateOfIssueId(DuplicateOfIssueIdT&& value) {
    m_duplicateOfIssueIdHasBeenSet = true;
    m_duplicateOfIssueId = std::forward<DuplicateOfIssueIdT>(value);
  }
  template <typename DuplicateOfIssueIdT = Aws::String>
  GetCodeFindingResult& WithDuplicateOfIssueId(DuplicateOfIssueIdT&& value) {
    SetDuplicateOfIssueId(std::forward<DuplicateOfIssueIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The issue Continuum created from this finding.</p>
   */
  inline const Aws::String& GetCreatedIssueId() const { return m_createdIssueId; }
  template <typename CreatedIssueIdT = Aws::String>
  void SetCreatedIssueId(CreatedIssueIdT&& value) {
    m_createdIssueIdHasBeenSet = true;
    m_createdIssueId = std::forward<CreatedIssueIdT>(value);
  }
  template <typename CreatedIssueIdT = Aws::String>
  GetCodeFindingResult& WithCreatedIssueId(CreatedIssueIdT&& value) {
    SetCreatedIssueId(std::forward<CreatedIssueIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When processing finished, whether by creating an issue or discarding. Absent
   * while the finding is still in flight.</p>
   */
  inline const Aws::Utils::DateTime& GetCompletedAt() const { return m_completedAt; }
  template <typename CompletedAtT = Aws::Utils::DateTime>
  void SetCompletedAt(CompletedAtT&& value) {
    m_completedAtHasBeenSet = true;
    m_completedAt = std::forward<CompletedAtT>(value);
  }
  template <typename CompletedAtT = Aws::Utils::DateTime>
  GetCodeFindingResult& WithCompletedAt(CompletedAtT&& value) {
    SetCompletedAt(std::forward<CompletedAtT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetCodeFindingResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  FindingType m_type{FindingType::NOT_SET};

  Aws::String m_title;

  FindingSeverityId m_severity{FindingSeverityId::NOT_SET};

  Aws::String m_summary;

  Aws::String m_detailedDescription;

  Aws::String m_category;

  Aws::String m_subCategory;

  Aws::Vector<Aws::String> m_cweIds;

  Aws::String m_owaspCategory;

  Aws::String m_mitigation;

  Aws::String m_filePath;

  int m_lineNumber{0};

  Aws::String m_cveId;

  double m_cvssBaseScore{0.0};

  Aws::Vector<AffectedPackage> m_affectedPackages;

  Aws::String m_vulnerableCode;

  Aws::Vector<Aws::String> m_relevantInputs;

  Aws::Vector<Aws::String> m_stepsToReproduce;

  FindingValidation m_validation;

  int m_endLine{0};

  Aws::Vector<Aws::String> m_mitreTechniques;

  Aws::Vector<Aws::String> m_remediationReferences;

  FindingOcsfClass m_ocsfClass{FindingOcsfClass::NOT_SET};

  Aws::String m_ocsfSchemaVersion;

  Aws::String m_productName;

  Aws::String m_productVendorName;

  Aws::String m_productVersion;

  Aws::String m_sourceStatus;

  int m_sourceStatusId{0};

  Aws::Utils::DateTime m_firstSeenAt{};

  Aws::Vector<Aws::String> m_findingTypes;

  Aws::Vector<FindingVulnerability> m_vulnerabilities;

  Aws::Vector<FindingResource> m_resources;

  FindingPosture m_posture;

  Aws::String m_findingId;

  Aws::String m_findingArn;

  Aws::String m_environmentId;

  Aws::String m_source;

  Aws::String m_sourceFindingId;

  Aws::Utils::DateTime m_reportedAt{};

  FindingStatus m_status{FindingStatus::NOT_SET};

  Aws::Utils::DateTime m_statusUpdatedAt{};

  Aws::Utils::DateTime m_createdAt{};

  Aws::String m_scanRunId;

  Aws::String m_statusMessage;

  FindingDiscardReason m_discardReason{FindingDiscardReason::NOT_SET};

  Aws::String m_discardReasoning;

  Aws::String m_duplicateOfIssueId;

  Aws::String m_createdIssueId;

  Aws::Utils::DateTime m_completedAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_typeHasBeenSet = false;
  bool m_titleHasBeenSet = false;
  bool m_severityHasBeenSet = false;
  bool m_summaryHasBeenSet = false;
  bool m_detailedDescriptionHasBeenSet = false;
  bool m_categoryHasBeenSet = false;
  bool m_subCategoryHasBeenSet = false;
  bool m_cweIdsHasBeenSet = false;
  bool m_owaspCategoryHasBeenSet = false;
  bool m_mitigationHasBeenSet = false;
  bool m_filePathHasBeenSet = false;
  bool m_lineNumberHasBeenSet = false;
  bool m_cveIdHasBeenSet = false;
  bool m_cvssBaseScoreHasBeenSet = false;
  bool m_affectedPackagesHasBeenSet = false;
  bool m_vulnerableCodeHasBeenSet = false;
  bool m_relevantInputsHasBeenSet = false;
  bool m_stepsToReproduceHasBeenSet = false;
  bool m_validationHasBeenSet = false;
  bool m_endLineHasBeenSet = false;
  bool m_mitreTechniquesHasBeenSet = false;
  bool m_remediationReferencesHasBeenSet = false;
  bool m_ocsfClassHasBeenSet = false;
  bool m_ocsfSchemaVersionHasBeenSet = false;
  bool m_productNameHasBeenSet = false;
  bool m_productVendorNameHasBeenSet = false;
  bool m_productVersionHasBeenSet = false;
  bool m_sourceStatusHasBeenSet = false;
  bool m_sourceStatusIdHasBeenSet = false;
  bool m_firstSeenAtHasBeenSet = false;
  bool m_findingTypesHasBeenSet = false;
  bool m_vulnerabilitiesHasBeenSet = false;
  bool m_resourcesHasBeenSet = false;
  bool m_postureHasBeenSet = false;
  bool m_findingIdHasBeenSet = false;
  bool m_findingArnHasBeenSet = false;
  bool m_environmentIdHasBeenSet = false;
  bool m_sourceHasBeenSet = false;
  bool m_sourceFindingIdHasBeenSet = false;
  bool m_reportedAtHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_statusUpdatedAtHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_scanRunIdHasBeenSet = false;
  bool m_statusMessageHasBeenSet = false;
  bool m_discardReasonHasBeenSet = false;
  bool m_discardReasoningHasBeenSet = false;
  bool m_duplicateOfIssueIdHasBeenSet = false;
  bool m_createdIssueIdHasBeenSet = false;
  bool m_completedAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
