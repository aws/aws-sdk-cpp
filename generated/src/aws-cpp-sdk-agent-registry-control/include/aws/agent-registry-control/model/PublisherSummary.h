/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/agent-registry-control/model/Identifier.h>
#include <aws/agent-registry-control/model/IdentifierType.h>
#include <aws/agent-registry-control/model/VerificationStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AgentRegistryControl {
namespace Model {

/**
 * <p>Lightweight projection for list results.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/PublisherSummary">AWS
 * API Reference</a></p>
 */
class PublisherSummary {
 public:
  AWS_AGENTREGISTRYCONTROL_API PublisherSummary() = default;
  AWS_AGENTREGISTRYCONTROL_API PublisherSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API PublisherSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Identifier& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = Identifier>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = Identifier>
  PublisherSummary& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier type. <code>DOMAIN</code> is the only supported value.</p>
   */
  inline IdentifierType GetIdentifierType() const { return m_identifierType; }
  inline bool IdentifierTypeHasBeenSet() const { return m_identifierTypeHasBeenSet; }
  inline void SetIdentifierType(IdentifierType value) {
    m_identifierTypeHasBeenSet = true;
    m_identifierType = value;
  }
  inline PublisherSummary& WithIdentifierType(IdentifierType value) {
    SetIdentifierType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The domain verification status of the publisher:
   * <code>ACTION_REQUIRED</code>, <code>ACTIVE</code>, <code>SUSPENDED</code>,
   * <code>FAILED</code>, or <code>DELETING</code>. Only an <code>ACTIVE</code>
   * publisher accepts new registry record associations.</p>
   */
  inline VerificationStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(VerificationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline PublisherSummary& WithStatus(VerificationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the publisher was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  PublisherSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetPublisherArn() const { return m_publisherArn; }
  inline bool PublisherArnHasBeenSet() const { return m_publisherArnHasBeenSet; }
  template <typename PublisherArnT = Aws::String>
  void SetPublisherArn(PublisherArnT&& value) {
    m_publisherArnHasBeenSet = true;
    m_publisherArn = std::forward<PublisherArnT>(value);
  }
  template <typename PublisherArnT = Aws::String>
  PublisherSummary& WithPublisherArn(PublisherArnT&& value) {
    SetPublisherArn(std::forward<PublisherArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of registry records associated with the publisher, in any
   * association status. Omitted when the count isn't available.</p>
   */
  inline int GetAssociationCount() const { return m_associationCount; }
  inline bool AssociationCountHasBeenSet() const { return m_associationCountHasBeenSet; }
  inline void SetAssociationCount(int value) {
    m_associationCountHasBeenSet = true;
    m_associationCount = value;
  }
  inline PublisherSummary& WithAssociationCount(int value) {
    SetAssociationCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of the publisher's associations that are in PENDING_APPROVAL.
   * Omitted when the count isn't available.</p>
   */
  inline int GetPendingAssociationApprovalCount() const { return m_pendingAssociationApprovalCount; }
  inline bool PendingAssociationApprovalCountHasBeenSet() const { return m_pendingAssociationApprovalCountHasBeenSet; }
  inline void SetPendingAssociationApprovalCount(int value) {
    m_pendingAssociationApprovalCountHasBeenSet = true;
    m_pendingAssociationApprovalCount = value;
  }
  inline PublisherSummary& WithPendingAssociationApprovalCount(int value) {
    SetPendingAssociationApprovalCount(value);
    return *this;
  }
  ///@}
 private:
  Identifier m_value;

  IdentifierType m_identifierType{IdentifierType::NOT_SET};

  VerificationStatus m_status{VerificationStatus::NOT_SET};

  Aws::Utils::DateTime m_createdAt{};

  Aws::String m_publisherArn;

  int m_associationCount{0};

  int m_pendingAssociationApprovalCount{0};
  bool m_valueHasBeenSet = false;
  bool m_identifierTypeHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_publisherArnHasBeenSet = false;
  bool m_associationCountHasBeenSet = false;
  bool m_pendingAssociationApprovalCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
