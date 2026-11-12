/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GuardDuty {
namespace Model {

/**
 * <p>Contains information about a finding type from the GuardDuty
 * documentation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/FindingTypeDocumentation">AWS
 * API Reference</a></p>
 */
class FindingTypeDocumentation {
 public:
  AWS_GUARDDUTY_API FindingTypeDocumentation() = default;
  AWS_GUARDDUTY_API FindingTypeDocumentation(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API FindingTypeDocumentation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A short description of the finding type.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  FindingTypeDocumentation& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The severity of the finding type, as stated in the documentation.</p>
   */
  inline const Aws::String& GetSeverity() const { return m_severity; }
  inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
  template <typename SeverityT = Aws::String>
  void SetSeverity(SeverityT&& value) {
    m_severityHasBeenSet = true;
    m_severity = std::forward<SeverityT>(value);
  }
  template <typename SeverityT = Aws::String>
  FindingTypeDocumentation& WithSeverity(SeverityT&& value) {
    SetSeverity(std::forward<SeverityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The label that the documentation uses for the GuardDuty capability associated
   * with the finding type. This value isn't a detector feature name.</p>
   */
  inline const Aws::String& GetFeature() const { return m_feature; }
  inline bool FeatureHasBeenSet() const { return m_featureHasBeenSet; }
  template <typename FeatureT = Aws::String>
  void SetFeature(FeatureT&& value) {
    m_featureHasBeenSet = true;
    m_feature = std::forward<FeatureT>(value);
  }
  template <typename FeatureT = Aws::String>
  FindingTypeDocumentation& WithFeature(FeatureT&& value) {
    SetFeature(std::forward<FeatureT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The full description of the finding type.</p>
   */
  inline const Aws::String& GetFullDescription() const { return m_fullDescription; }
  inline bool FullDescriptionHasBeenSet() const { return m_fullDescriptionHasBeenSet; }
  template <typename FullDescriptionT = Aws::String>
  void SetFullDescription(FullDescriptionT&& value) {
    m_fullDescriptionHasBeenSet = true;
    m_fullDescription = std::forward<FullDescriptionT>(value);
  }
  template <typename FullDescriptionT = Aws::String>
  FindingTypeDocumentation& WithFullDescription(FullDescriptionT&& value) {
    SetFullDescription(std::forward<FullDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The recommended steps to remediate the finding type.</p>
   */
  inline const Aws::String& GetRemediation() const { return m_remediation; }
  inline bool RemediationHasBeenSet() const { return m_remediationHasBeenSet; }
  template <typename RemediationT = Aws::String>
  void SetRemediation(RemediationT&& value) {
    m_remediationHasBeenSet = true;
    m_remediation = std::forward<RemediationT>(value);
  }
  template <typename RemediationT = Aws::String>
  FindingTypeDocumentation& WithRemediation(RemediationT&& value) {
    SetRemediation(std::forward<RemediationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Links to more information about the finding type.</p>
   */
  inline const Aws::Vector<Aws::String>& GetLearnMoreLinks() const { return m_learnMoreLinks; }
  inline bool LearnMoreLinksHasBeenSet() const { return m_learnMoreLinksHasBeenSet; }
  template <typename LearnMoreLinksT = Aws::Vector<Aws::String>>
  void SetLearnMoreLinks(LearnMoreLinksT&& value) {
    m_learnMoreLinksHasBeenSet = true;
    m_learnMoreLinks = std::forward<LearnMoreLinksT>(value);
  }
  template <typename LearnMoreLinksT = Aws::Vector<Aws::String>>
  FindingTypeDocumentation& WithLearnMoreLinks(LearnMoreLinksT&& value) {
    SetLearnMoreLinks(std::forward<LearnMoreLinksT>(value));
    return *this;
  }
  template <typename LearnMoreLinksT = Aws::String>
  FindingTypeDocumentation& AddLearnMoreLinks(LearnMoreLinksT&& value) {
    m_learnMoreLinksHasBeenSet = true;
    m_learnMoreLinks.emplace_back(std::forward<LearnMoreLinksT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_description;

  Aws::String m_severity;

  Aws::String m_feature;

  Aws::String m_fullDescription;

  Aws::String m_remediation;

  Aws::Vector<Aws::String> m_learnMoreLinks;
  bool m_descriptionHasBeenSet = false;
  bool m_severityHasBeenSet = false;
  bool m_featureHasBeenSet = false;
  bool m_fullDescriptionHasBeenSet = false;
  bool m_remediationHasBeenSet = false;
  bool m_learnMoreLinksHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
