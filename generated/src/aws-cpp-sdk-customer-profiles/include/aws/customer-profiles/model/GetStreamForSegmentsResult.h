/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/AssociatedSegment.h>
#include <aws/customer-profiles/model/EventSubscriptionState.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace CustomerProfiles {
namespace Model {
class GetStreamForSegmentsResult {
 public:
  AWS_CUSTOMERPROFILES_API GetStreamForSegmentsResult() = default;
  AWS_CUSTOMERPROFILES_API GetStreamForSegmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CUSTOMERPROFILES_API GetStreamForSegmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The timestamp of when the stream was associated. </p>
   */
  inline const Aws::Utils::DateTime& GetAssociatedAt() const { return m_associatedAt; }
  template <typename AssociatedAtT = Aws::Utils::DateTime>
  void SetAssociatedAt(AssociatedAtT&& value) {
    m_associatedAtHasBeenSet = true;
    m_associatedAt = std::forward<AssociatedAtT>(value);
  }
  template <typename AssociatedAtT = Aws::Utils::DateTime>
  GetStreamForSegmentsResult& WithAssociatedAt(AssociatedAtT&& value) {
    SetAssociatedAt(std::forward<AssociatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of segments currently associated with the stream and their
   * subscription status. </p>
   */
  inline const Aws::Vector<AssociatedSegment>& GetAssociatedSegments() const { return m_associatedSegments; }
  template <typename AssociatedSegmentsT = Aws::Vector<AssociatedSegment>>
  void SetAssociatedSegments(AssociatedSegmentsT&& value) {
    m_associatedSegmentsHasBeenSet = true;
    m_associatedSegments = std::forward<AssociatedSegmentsT>(value);
  }
  template <typename AssociatedSegmentsT = Aws::Vector<AssociatedSegment>>
  GetStreamForSegmentsResult& WithAssociatedSegments(AssociatedSegmentsT&& value) {
    SetAssociatedSegments(std::forward<AssociatedSegmentsT>(value));
    return *this;
  }
  template <typename AssociatedSegmentsT = AssociatedSegment>
  GetStreamForSegmentsResult& AddAssociatedSegments(AssociatedSegmentsT&& value) {
    m_associatedSegmentsHasBeenSet = true;
    m_associatedSegments.emplace_back(std::forward<AssociatedSegmentsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique name of the domain.</p>
   */
  inline const Aws::String& GetDomainName() const { return m_domainName; }
  template <typename DomainNameT = Aws::String>
  void SetDomainName(DomainNameT&& value) {
    m_domainNameHasBeenSet = true;
    m_domainName = std::forward<DomainNameT>(value);
  }
  template <typename DomainNameT = Aws::String>
  GetStreamForSegmentsResult& WithDomainName(DomainNameT&& value) {
    SetDomainName(std::forward<DomainNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Amazon Kinesis data stream receiving
   * segment membership events. </p>
   */
  inline const Aws::String& GetDestinationArn() const { return m_destinationArn; }
  template <typename DestinationArnT = Aws::String>
  void SetDestinationArn(DestinationArnT&& value) {
    m_destinationArnHasBeenSet = true;
    m_destinationArn = std::forward<DestinationArnT>(value);
  }
  template <typename DestinationArnT = Aws::String>
  GetStreamForSegmentsResult& WithDestinationArn(DestinationArnT&& value) {
    SetDestinationArn(std::forward<DestinationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM role used for Amazon Kinesis and
   * AWS Key Management Service (KMS) operations. </p>
   */
  inline const Aws::String& GetDestinationRoleArn() const { return m_destinationRoleArn; }
  template <typename DestinationRoleArnT = Aws::String>
  void SetDestinationRoleArn(DestinationRoleArnT&& value) {
    m_destinationRoleArnHasBeenSet = true;
    m_destinationRoleArn = std::forward<DestinationRoleArnT>(value);
  }
  template <typename DestinationRoleArnT = Aws::String>
  GetStreamForSegmentsResult& WithDestinationRoleArn(DestinationRoleArnT&& value) {
    SetDestinationRoleArn(std::forward<DestinationRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The operational state of the destination stream. The following are valid
   * values: </p> <ul> <li> <p> <b>RUNNING</b>: The stream is associated and healthy.
   * Segment membership events are being published. </p> </li> <li> <p>
   * <b>UNHEALTHY</b>: The stream is associated but events cannot currently be
   * published. See <code>FailureReason</code> for details. </p> </li> <li> <p>
   * <b>STOPPED</b>: The stream is no longer publishing segment membership events.
   * </p> </li> </ul>
   */
  inline EventSubscriptionState GetState() const { return m_state; }
  inline void SetState(EventSubscriptionState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline GetStreamForSegmentsResult& WithState(EventSubscriptionState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of when the stream was disassociated. </p>
   */
  inline const Aws::Utils::DateTime& GetDisassociatedAt() const { return m_disassociatedAt; }
  template <typename DisassociatedAtT = Aws::Utils::DateTime>
  void SetDisassociatedAt(DisassociatedAtT&& value) {
    m_disassociatedAtHasBeenSet = true;
    m_disassociatedAt = std::forward<DisassociatedAtT>(value);
  }
  template <typename DisassociatedAtT = Aws::Utils::DateTime>
  GetStreamForSegmentsResult& WithDisassociatedAt(DisassociatedAtT&& value) {
    SetDisassociatedAt(std::forward<DisassociatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason why the stream is in an unhealthy state, if applicable. </p>
   */
  inline const Aws::String& GetFailureReason() const { return m_failureReason; }
  template <typename FailureReasonT = Aws::String>
  void SetFailureReason(FailureReasonT&& value) {
    m_failureReasonHasBeenSet = true;
    m_failureReason = std::forward<FailureReasonT>(value);
  }
  template <typename FailureReasonT = Aws::String>
  GetStreamForSegmentsResult& WithFailureReason(FailureReasonT&& value) {
    SetFailureReason(std::forward<FailureReasonT>(value));
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
  GetStreamForSegmentsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Utils::DateTime m_associatedAt{};

  Aws::Vector<AssociatedSegment> m_associatedSegments;

  Aws::String m_domainName;

  Aws::String m_destinationArn;

  Aws::String m_destinationRoleArn;

  EventSubscriptionState m_state{EventSubscriptionState::NOT_SET};

  Aws::Utils::DateTime m_disassociatedAt{};

  Aws::String m_failureReason;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_associatedAtHasBeenSet = false;
  bool m_associatedSegmentsHasBeenSet = false;
  bool m_domainNameHasBeenSet = false;
  bool m_destinationArnHasBeenSet = false;
  bool m_destinationRoleArnHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_disassociatedAtHasBeenSet = false;
  bool m_failureReasonHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
