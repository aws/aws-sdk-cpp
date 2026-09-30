/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/eventbridgev2/EventBridgeV2_EXPORTS.h>
#include <aws/eventbridgev2/model/OrderingType.h>
#include <aws/eventbridgev2/model/PointInTimeConfiguration.h>
#include <aws/eventbridgev2/model/StartingPosition.h>
#include <aws/eventbridgev2/model/SubscriberState.h>

#include <utility>
namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace EventBridgeV2 {
namespace Model {
class UpdateSubscriberResult {
 public:
  AWS_EVENTBRIDGEV2_API UpdateSubscriberResult() = default;
  AWS_EVENTBRIDGEV2_API UpdateSubscriberResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_EVENTBRIDGEV2_API UpdateSubscriberResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{

  inline const Aws::String& GetSubscriberArn() const { return m_subscriberArn; }
  template <typename SubscriberArnT = Aws::String>
  void SetSubscriberArn(SubscriberArnT&& value) {
    m_subscriberArnHasBeenSet = true;
    m_subscriberArn = std::forward<SubscriberArnT>(value);
  }
  template <typename SubscriberArnT = Aws::String>
  UpdateSubscriberResult& WithSubscriberArn(SubscriberArnT&& value) {
    SetSubscriberArn(std::forward<SubscriberArnT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdateSubscriberResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetEventBusArn() const { return m_eventBusArn; }
  template <typename EventBusArnT = Aws::String>
  void SetEventBusArn(EventBusArnT&& value) {
    m_eventBusArnHasBeenSet = true;
    m_eventBusArn = std::forward<EventBusArnT>(value);
  }
  template <typename EventBusArnT = Aws::String>
  UpdateSubscriberResult& WithEventBusArn(EventBusArnT&& value) {
    SetEventBusArn(std::forward<EventBusArnT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline OrderingType GetType() const { return m_type; }
  inline void SetType(OrderingType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline UpdateSubscriberResult& WithType(OrderingType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{

  inline StartingPosition GetStartingPosition() const { return m_startingPosition; }
  inline void SetStartingPosition(StartingPosition value) {
    m_startingPositionHasBeenSet = true;
    m_startingPosition = value;
  }
  inline UpdateSubscriberResult& WithStartingPosition(StartingPosition value) {
    SetStartingPosition(value);
    return *this;
  }
  ///@}

  ///@{

  inline const PointInTimeConfiguration& GetPointInTimeConfiguration() const { return m_pointInTimeConfiguration; }
  template <typename PointInTimeConfigurationT = PointInTimeConfiguration>
  void SetPointInTimeConfiguration(PointInTimeConfigurationT&& value) {
    m_pointInTimeConfigurationHasBeenSet = true;
    m_pointInTimeConfiguration = std::forward<PointInTimeConfigurationT>(value);
  }
  template <typename PointInTimeConfigurationT = PointInTimeConfiguration>
  UpdateSubscriberResult& WithPointInTimeConfiguration(PointInTimeConfigurationT&& value) {
    SetPointInTimeConfiguration(std::forward<PointInTimeConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline SubscriberState GetState() const { return m_state; }
  inline void SetState(SubscriberState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline UpdateSubscriberResult& WithState(SubscriberState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time the subscriber was last modified.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  void SetLastModifiedTime(LastModifiedTimeT&& value) {
    m_lastModifiedTimeHasBeenSet = true;
    m_lastModifiedTime = std::forward<LastModifiedTimeT>(value);
  }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  UpdateSubscriberResult& WithLastModifiedTime(LastModifiedTimeT&& value) {
    SetLastModifiedTime(std::forward<LastModifiedTimeT>(value));
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
  UpdateSubscriberResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_subscriberArn;

  Aws::String m_name;

  Aws::String m_eventBusArn;

  OrderingType m_type{OrderingType::NOT_SET};

  StartingPosition m_startingPosition{StartingPosition::NOT_SET};

  PointInTimeConfiguration m_pointInTimeConfiguration;

  SubscriberState m_state{SubscriberState::NOT_SET};

  Aws::Utils::DateTime m_lastModifiedTime{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_subscriberArnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_eventBusArnHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_startingPositionHasBeenSet = false;
  bool m_pointInTimeConfigurationHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_lastModifiedTimeHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
