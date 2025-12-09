/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/cleanroomsml/model/PrivacyConfiguration.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace CleanRoomsML {
namespace Model {
class GetCollaborationConfiguredModelAlgorithmAssociationResult {
 public:
  AWS_CLEANROOMSML_API GetCollaborationConfiguredModelAlgorithmAssociationResult() = default;
  AWS_CLEANROOMSML_API GetCollaborationConfiguredModelAlgorithmAssociationResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CLEANROOMSML_API GetCollaborationConfiguredModelAlgorithmAssociationResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The time at which the configured model algorithm association was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
  template <typename CreateTimeT = Aws::Utils::DateTime>
  void SetCreateTime(CreateTimeT&& value) {
    m_createTimeHasBeenSet = true;
    m_createTime = std::forward<CreateTimeT>(value);
  }
  template <typename CreateTimeT = Aws::Utils::DateTime>
  GetCollaborationConfiguredModelAlgorithmAssociationResult& WithCreateTime(CreateTimeT&& value) {
    SetCreateTime(std::forward<CreateTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The most recent time at which the configured model algorithm association was
   * updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdateTime() const { return m_updateTime; }
  template <typename UpdateTimeT = Aws::Utils::DateTime>
  void SetUpdateTime(UpdateTimeT&& value) {
    m_updateTimeHasBeenSet = true;
    m_updateTime = std::forward<UpdateTimeT>(value);
  }
  template <typename UpdateTimeT = Aws::Utils::DateTime>
  GetCollaborationConfiguredModelAlgorithmAssociationResult& WithUpdateTime(UpdateTimeT&& value) {
    SetUpdateTime(std::forward<UpdateTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the configured model algorithm
   * association.</p>
   */
  inline const Aws::String& GetConfiguredModelAlgorithmAssociationArn() const { return m_configuredModelAlgorithmAssociationArn; }
  template <typename ConfiguredModelAlgorithmAssociationArnT = Aws::String>
  void SetConfiguredModelAlgorithmAssociationArn(ConfiguredModelAlgorithmAssociationArnT&& value) {
    m_configuredModelAlgorithmAssociationArnHasBeenSet = true;
    m_configuredModelAlgorithmAssociationArn = std::forward<ConfiguredModelAlgorithmAssociationArnT>(value);
  }
  template <typename ConfiguredModelAlgorithmAssociationArnT = Aws::String>
  GetCollaborationConfiguredModelAlgorithmAssociationResult& WithConfiguredModelAlgorithmAssociationArn(
      ConfiguredModelAlgorithmAssociationArnT&& value) {
    SetConfiguredModelAlgorithmAssociationArn(std::forward<ConfiguredModelAlgorithmAssociationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The membership ID of the member that created the configured model algorithm
   * association.</p>
   */
  inline const Aws::String& GetMembershipIdentifier() const { return m_membershipIdentifier; }
  template <typename MembershipIdentifierT = Aws::String>
  void SetMembershipIdentifier(MembershipIdentifierT&& value) {
    m_membershipIdentifierHasBeenSet = true;
    m_membershipIdentifier = std::forward<MembershipIdentifierT>(value);
  }
  template <typename MembershipIdentifierT = Aws::String>
  GetCollaborationConfiguredModelAlgorithmAssociationResult& WithMembershipIdentifier(MembershipIdentifierT&& value) {
    SetMembershipIdentifier(std::forward<MembershipIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The collaboration ID of the collaboration that contains the configured model
   * algorithm association.</p>
   */
  inline const Aws::String& GetCollaborationIdentifier() const { return m_collaborationIdentifier; }
  template <typename CollaborationIdentifierT = Aws::String>
  void SetCollaborationIdentifier(CollaborationIdentifierT&& value) {
    m_collaborationIdentifierHasBeenSet = true;
    m_collaborationIdentifier = std::forward<CollaborationIdentifierT>(value);
  }
  template <typename CollaborationIdentifierT = Aws::String>
  GetCollaborationConfiguredModelAlgorithmAssociationResult& WithCollaborationIdentifier(CollaborationIdentifierT&& value) {
    SetCollaborationIdentifier(std::forward<CollaborationIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the configured model algorithm
   * association.</p>
   */
  inline const Aws::String& GetConfiguredModelAlgorithmArn() const { return m_configuredModelAlgorithmArn; }
  template <typename ConfiguredModelAlgorithmArnT = Aws::String>
  void SetConfiguredModelAlgorithmArn(ConfiguredModelAlgorithmArnT&& value) {
    m_configuredModelAlgorithmArnHasBeenSet = true;
    m_configuredModelAlgorithmArn = std::forward<ConfiguredModelAlgorithmArnT>(value);
  }
  template <typename ConfiguredModelAlgorithmArnT = Aws::String>
  GetCollaborationConfiguredModelAlgorithmAssociationResult& WithConfiguredModelAlgorithmArn(ConfiguredModelAlgorithmArnT&& value) {
    SetConfiguredModelAlgorithmArn(std::forward<ConfiguredModelAlgorithmArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the configured model algorithm association.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  GetCollaborationConfiguredModelAlgorithmAssociationResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the configured model algorithm association.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  GetCollaborationConfiguredModelAlgorithmAssociationResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The account ID of the member that created the configured model algorithm
   * association.</p>
   */
  inline const Aws::String& GetCreatorAccountId() const { return m_creatorAccountId; }
  template <typename CreatorAccountIdT = Aws::String>
  void SetCreatorAccountId(CreatorAccountIdT&& value) {
    m_creatorAccountIdHasBeenSet = true;
    m_creatorAccountId = std::forward<CreatorAccountIdT>(value);
  }
  template <typename CreatorAccountIdT = Aws::String>
  GetCollaborationConfiguredModelAlgorithmAssociationResult& WithCreatorAccountId(CreatorAccountIdT&& value) {
    SetCreatorAccountId(std::forward<CreatorAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const PrivacyConfiguration& GetPrivacyConfiguration() const { return m_privacyConfiguration; }
  template <typename PrivacyConfigurationT = PrivacyConfiguration>
  void SetPrivacyConfiguration(PrivacyConfigurationT&& value) {
    m_privacyConfigurationHasBeenSet = true;
    m_privacyConfiguration = std::forward<PrivacyConfigurationT>(value);
  }
  template <typename PrivacyConfigurationT = PrivacyConfiguration>
  GetCollaborationConfiguredModelAlgorithmAssociationResult& WithPrivacyConfiguration(PrivacyConfigurationT&& value) {
    SetPrivacyConfiguration(std::forward<PrivacyConfigurationT>(value));
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
  GetCollaborationConfiguredModelAlgorithmAssociationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_createTime{};

  Aws::Utils::DateTime m_updateTime{};

  Aws::String m_configuredModelAlgorithmAssociationArn;

  Aws::String m_membershipIdentifier;

  Aws::String m_collaborationIdentifier;

  Aws::String m_configuredModelAlgorithmArn;

  Aws::String m_name;

  Aws::String m_description;

  Aws::String m_creatorAccountId;

  PrivacyConfiguration m_privacyConfiguration;

  Aws::String m_requestId;
  bool m_createTimeHasBeenSet = false;
  bool m_updateTimeHasBeenSet = false;
  bool m_configuredModelAlgorithmAssociationArnHasBeenSet = false;
  bool m_membershipIdentifierHasBeenSet = false;
  bool m_collaborationIdentifierHasBeenSet = false;
  bool m_configuredModelAlgorithmArnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_creatorAccountIdHasBeenSet = false;
  bool m_privacyConfigurationHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRoomsML
}  // namespace Aws
