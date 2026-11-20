/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/agent-registry-control/model/AssociationStatus.h>
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
 * <p>An association between a registry record and a publisher, including the
 * record's public identifier.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/PublisherAssociation">AWS
 * API Reference</a></p>
 */
class PublisherAssociation {
 public:
  AWS_AGENTREGISTRYCONTROL_API PublisherAssociation() = default;
  AWS_AGENTREGISTRYCONTROL_API PublisherAssociation(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API PublisherAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::String& GetRecordArn() const { return m_recordArn; }
  inline bool RecordArnHasBeenSet() const { return m_recordArnHasBeenSet; }
  template <typename RecordArnT = Aws::String>
  void SetRecordArn(RecordArnT&& value) {
    m_recordArnHasBeenSet = true;
    m_recordArn = std::forward<RecordArnT>(value);
  }
  template <typename RecordArnT = Aws::String>
  PublisherAssociation& WithRecordArn(RecordArnT&& value) {
    SetRecordArn(std::forward<RecordArnT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetPublicIdentifier() const { return m_publicIdentifier; }
  inline bool PublicIdentifierHasBeenSet() const { return m_publicIdentifierHasBeenSet; }
  template <typename PublicIdentifierT = Aws::String>
  void SetPublicIdentifier(PublicIdentifierT&& value) {
    m_publicIdentifierHasBeenSet = true;
    m_publicIdentifier = std::forward<PublicIdentifierT>(value);
  }
  template <typename PublicIdentifierT = Aws::String>
  PublisherAssociation& WithPublicIdentifier(PublicIdentifierT&& value) {
    SetPublicIdentifier(std::forward<PublicIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetPublisher() const { return m_publisher; }
  inline bool PublisherHasBeenSet() const { return m_publisherHasBeenSet; }
  template <typename PublisherT = Aws::String>
  void SetPublisher(PublisherT&& value) {
    m_publisherHasBeenSet = true;
    m_publisher = std::forward<PublisherT>(value);
  }
  template <typename PublisherT = Aws::String>
  PublisherAssociation& WithPublisher(PublisherT&& value) {
    SetPublisher(std::forward<PublisherT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline AssociationStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(AssociationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline PublisherAssociation& WithStatus(AssociationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason for the association's current status, such as why it is suspended.
   * Present only when a reason is available.</p>
   */
  inline const Aws::String& GetStatusReason() const { return m_statusReason; }
  inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
  template <typename StatusReasonT = Aws::String>
  void SetStatusReason(StatusReasonT&& value) {
    m_statusReasonHasBeenSet = true;
    m_statusReason = std::forward<StatusReasonT>(value);
  }
  template <typename StatusReasonT = Aws::String>
  PublisherAssociation& WithStatusReason(StatusReasonT&& value) {
    SetStatusReason(std::forward<StatusReasonT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_recordArn;

  Aws::String m_publicIdentifier;

  Aws::String m_publisher;

  AssociationStatus m_status{AssociationStatus::NOT_SET};

  Aws::String m_statusReason;
  bool m_recordArnHasBeenSet = false;
  bool m_publicIdentifierHasBeenSet = false;
  bool m_publisherHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_statusReasonHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
