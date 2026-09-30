/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/eventbridgev2/EventBridgeV2_EXPORTS.h>
#include <aws/eventbridgev2/model/OrderingType.h>
#include <aws/eventbridgev2/model/SubscriberState.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace EventBridgeV2 {
namespace Model {

/**
 * <p>Summary of a subscriber, as returned by ListSubscribers.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/SubscriberSummary">AWS
 * API Reference</a></p>
 */
class SubscriberSummary {
 public:
  AWS_EVENTBRIDGEV2_API SubscriberSummary() = default;
  AWS_EVENTBRIDGEV2_API SubscriberSummary(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API SubscriberSummary& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{

  inline const Aws::String& GetSubscriberArn() const { return m_subscriberArn; }
  inline bool SubscriberArnHasBeenSet() const { return m_subscriberArnHasBeenSet; }
  template <typename SubscriberArnT = Aws::String>
  void SetSubscriberArn(SubscriberArnT&& value) {
    m_subscriberArnHasBeenSet = true;
    m_subscriberArn = std::forward<SubscriberArnT>(value);
  }
  template <typename SubscriberArnT = Aws::String>
  SubscriberSummary& WithSubscriberArn(SubscriberArnT&& value) {
    SetSubscriberArn(std::forward<SubscriberArnT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  SubscriberSummary& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetEventBusArn() const { return m_eventBusArn; }
  inline bool EventBusArnHasBeenSet() const { return m_eventBusArnHasBeenSet; }
  template <typename EventBusArnT = Aws::String>
  void SetEventBusArn(EventBusArnT&& value) {
    m_eventBusArnHasBeenSet = true;
    m_eventBusArn = std::forward<EventBusArnT>(value);
  }
  template <typename EventBusArnT = Aws::String>
  SubscriberSummary& WithEventBusArn(EventBusArnT&& value) {
    SetEventBusArn(std::forward<EventBusArnT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetTargetArn() const { return m_targetArn; }
  inline bool TargetArnHasBeenSet() const { return m_targetArnHasBeenSet; }
  template <typename TargetArnT = Aws::String>
  void SetTargetArn(TargetArnT&& value) {
    m_targetArnHasBeenSet = true;
    m_targetArn = std::forward<TargetArnT>(value);
  }
  template <typename TargetArnT = Aws::String>
  SubscriberSummary& WithTargetArn(TargetArnT&& value) {
    SetTargetArn(std::forward<TargetArnT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline OrderingType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(OrderingType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline SubscriberSummary& WithType(OrderingType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>True when the bus owner has revoked this subscriber. Present only when true,
   * so a bus owner listing subscribers sees at a glance which ones they revoked. See
   * DescribeSubscriberResponse$Revoked.</p>
   */
  inline bool GetRevoked() const { return m_revoked; }
  inline bool RevokedHasBeenSet() const { return m_revokedHasBeenSet; }
  inline void SetRevoked(bool value) {
    m_revokedHasBeenSet = true;
    m_revoked = value;
  }
  inline SubscriberSummary& WithRevoked(bool value) {
    SetRevoked(value);
    return *this;
  }
  ///@}

  ///@{

  inline SubscriberState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(SubscriberState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline SubscriberSummary& WithState(SubscriberState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time the subscriber was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  SubscriberSummary& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time the subscriber was last modified.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
  inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  void SetLastModifiedTime(LastModifiedTimeT&& value) {
    m_lastModifiedTimeHasBeenSet = true;
    m_lastModifiedTime = std::forward<LastModifiedTimeT>(value);
  }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  SubscriberSummary& WithLastModifiedTime(LastModifiedTimeT&& value) {
    SetLastModifiedTime(std::forward<LastModifiedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetSubscriberAccountId() const { return m_subscriberAccountId; }
  inline bool SubscriberAccountIdHasBeenSet() const { return m_subscriberAccountIdHasBeenSet; }
  template <typename SubscriberAccountIdT = Aws::String>
  void SetSubscriberAccountId(SubscriberAccountIdT&& value) {
    m_subscriberAccountIdHasBeenSet = true;
    m_subscriberAccountId = std::forward<SubscriberAccountIdT>(value);
  }
  template <typename SubscriberAccountIdT = Aws::String>
  SubscriberSummary& WithSubscriberAccountId(SubscriberAccountIdT&& value) {
    SetSubscriberAccountId(std::forward<SubscriberAccountIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_subscriberArn;

  Aws::String m_name;

  Aws::String m_eventBusArn;

  Aws::String m_targetArn;

  OrderingType m_type{OrderingType::NOT_SET};

  bool m_revoked{false};

  SubscriberState m_state{SubscriberState::NOT_SET};

  Aws::Utils::DateTime m_creationTime{};

  Aws::Utils::DateTime m_lastModifiedTime{};

  Aws::String m_subscriberAccountId;
  bool m_subscriberArnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_eventBusArnHasBeenSet = false;
  bool m_targetArnHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_revokedHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
  bool m_lastModifiedTimeHasBeenSet = false;
  bool m_subscriberAccountIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
