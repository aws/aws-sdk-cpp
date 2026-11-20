/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/agent-registry-control/model/AssociationStatus.h>
#include <aws/core/http/HttpResponse.h>
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
namespace AgentRegistryControl {
namespace Model {
/**
 * <p>The new association between the registry record and the publisher, including
 * the record's public identifier. A retry with the original clientToken returns
 * the original association.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/AssociatePublisherResponse">AWS
 * API Reference</a></p>
 */
class AssociatePublisherResult {
 public:
  AWS_AGENTREGISTRYCONTROL_API AssociatePublisherResult() = default;
  AWS_AGENTREGISTRYCONTROL_API AssociatePublisherResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_AGENTREGISTRYCONTROL_API AssociatePublisherResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{

  inline const Aws::String& GetRecordArn() const { return m_recordArn; }
  template <typename RecordArnT = Aws::String>
  void SetRecordArn(RecordArnT&& value) {
    m_recordArnHasBeenSet = true;
    m_recordArn = std::forward<RecordArnT>(value);
  }
  template <typename RecordArnT = Aws::String>
  AssociatePublisherResult& WithRecordArn(RecordArnT&& value) {
    SetRecordArn(std::forward<RecordArnT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetPublicIdentifier() const { return m_publicIdentifier; }
  template <typename PublicIdentifierT = Aws::String>
  void SetPublicIdentifier(PublicIdentifierT&& value) {
    m_publicIdentifierHasBeenSet = true;
    m_publicIdentifier = std::forward<PublicIdentifierT>(value);
  }
  template <typename PublicIdentifierT = Aws::String>
  AssociatePublisherResult& WithPublicIdentifier(PublicIdentifierT&& value) {
    SetPublicIdentifier(std::forward<PublicIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetPublisher() const { return m_publisher; }
  template <typename PublisherT = Aws::String>
  void SetPublisher(PublisherT&& value) {
    m_publisherHasBeenSet = true;
    m_publisher = std::forward<PublisherT>(value);
  }
  template <typename PublisherT = Aws::String>
  AssociatePublisherResult& WithPublisher(PublisherT&& value) {
    SetPublisher(std::forward<PublisherT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline AssociationStatus GetStatus() const { return m_status; }
  inline void SetStatus(AssociationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline AssociatePublisherResult& WithStatus(AssociationStatus value) {
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
  template <typename StatusReasonT = Aws::String>
  void SetStatusReason(StatusReasonT&& value) {
    m_statusReasonHasBeenSet = true;
    m_statusReason = std::forward<StatusReasonT>(value);
  }
  template <typename StatusReasonT = Aws::String>
  AssociatePublisherResult& WithStatusReason(StatusReasonT&& value) {
    SetStatusReason(std::forward<StatusReasonT>(value));
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
  AssociatePublisherResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_recordArn;

  Aws::String m_publicIdentifier;

  Aws::String m_publisher;

  AssociationStatus m_status{AssociationStatus::NOT_SET};

  Aws::String m_statusReason;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_recordArnHasBeenSet = false;
  bool m_publicIdentifierHasBeenSet = false;
  bool m_publisherHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_statusReasonHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
