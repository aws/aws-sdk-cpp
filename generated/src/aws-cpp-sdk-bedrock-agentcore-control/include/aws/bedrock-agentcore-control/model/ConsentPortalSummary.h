/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/ConsentPortalSource.h>
#include <aws/bedrock-agentcore-control/model/ConsentPortalStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p>Summary information about a consent portal.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ConsentPortalSummary">AWS
 * API Reference</a></p>
 */
class ConsentPortalSummary {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API ConsentPortalSummary() = default;
  AWS_BEDROCKAGENTCORECONTROL_API ConsentPortalSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API ConsentPortalSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The resources served by the consent portal.</p>
   */
  inline const Aws::Vector<ConsentPortalSource>& GetSources() const { return m_sources; }
  inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }
  template <typename SourcesT = Aws::Vector<ConsentPortalSource>>
  void SetSources(SourcesT&& value) {
    m_sourcesHasBeenSet = true;
    m_sources = std::forward<SourcesT>(value);
  }
  template <typename SourcesT = Aws::Vector<ConsentPortalSource>>
  ConsentPortalSummary& WithSources(SourcesT&& value) {
    SetSources(std::forward<SourcesT>(value));
    return *this;
  }
  template <typename SourcesT = ConsentPortalSource>
  ConsentPortalSummary& AddSources(SourcesT&& value) {
    m_sourcesHasBeenSet = true;
    m_sources.emplace_back(std::forward<SourcesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the consent portal.</p>
   */
  inline const Aws::String& GetConsentPortalArn() const { return m_consentPortalArn; }
  inline bool ConsentPortalArnHasBeenSet() const { return m_consentPortalArnHasBeenSet; }
  template <typename ConsentPortalArnT = Aws::String>
  void SetConsentPortalArn(ConsentPortalArnT&& value) {
    m_consentPortalArnHasBeenSet = true;
    m_consentPortalArn = std::forward<ConsentPortalArnT>(value);
  }
  template <typename ConsentPortalArnT = Aws::String>
  ConsentPortalSummary& WithConsentPortalArn(ConsentPortalArnT&& value) {
    SetConsentPortalArn(std::forward<ConsentPortalArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the consent portal.</p>
   */
  inline const Aws::String& GetConsentPortalId() const { return m_consentPortalId; }
  inline bool ConsentPortalIdHasBeenSet() const { return m_consentPortalIdHasBeenSet; }
  template <typename ConsentPortalIdT = Aws::String>
  void SetConsentPortalId(ConsentPortalIdT&& value) {
    m_consentPortalIdHasBeenSet = true;
    m_consentPortalId = std::forward<ConsentPortalIdT>(value);
  }
  template <typename ConsentPortalIdT = Aws::String>
  ConsentPortalSummary& WithConsentPortalId(ConsentPortalIdT&& value) {
    SetConsentPortalId(std::forward<ConsentPortalIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp for when the consent portal was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  ConsentPortalSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the consent portal.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  ConsentPortalSummary& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the consent portal.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  ConsentPortalSummary& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL used to access the consent portal.</p>
   */
  inline const Aws::String& GetPortalUrl() const { return m_portalUrl; }
  inline bool PortalUrlHasBeenSet() const { return m_portalUrlHasBeenSet; }
  template <typename PortalUrlT = Aws::String>
  void SetPortalUrl(PortalUrlT&& value) {
    m_portalUrlHasBeenSet = true;
    m_portalUrl = std::forward<PortalUrlT>(value);
  }
  template <typename PortalUrlT = Aws::String>
  ConsentPortalSummary& WithPortalUrl(PortalUrlT&& value) {
    SetPortalUrl(std::forward<PortalUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the consent portal.</p>
   */
  inline ConsentPortalStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ConsentPortalStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ConsentPortalSummary& WithStatus(ConsentPortalStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp for when the consent portal was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  ConsentPortalSummary& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ConsentPortalSource> m_sources;

  Aws::String m_consentPortalArn;

  Aws::String m_consentPortalId;

  Aws::Utils::DateTime m_createdAt{};

  Aws::String m_description;

  Aws::String m_name;

  Aws::String m_portalUrl;

  ConsentPortalStatus m_status{ConsentPortalStatus::NOT_SET};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_sourcesHasBeenSet = false;
  bool m_consentPortalArnHasBeenSet = false;
  bool m_consentPortalIdHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_portalUrlHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
