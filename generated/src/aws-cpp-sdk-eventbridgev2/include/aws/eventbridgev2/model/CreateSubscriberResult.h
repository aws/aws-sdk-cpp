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
#include <aws/eventbridgev2/model/SubscriberDetails.h>
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
class CreateSubscriberResult {
 public:
  AWS_EVENTBRIDGEV2_API CreateSubscriberResult() = default;
  AWS_EVENTBRIDGEV2_API CreateSubscriberResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_EVENTBRIDGEV2_API CreateSubscriberResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) that uniquely identifies a subscriber.</p>
   */
  inline const Aws::String& GetSubscriberArn() const { return m_subscriberArn; }
  template <typename SubscriberArnT = Aws::String>
  void SetSubscriberArn(SubscriberArnT&& value) {
    m_subscriberArnHasBeenSet = true;
    m_subscriberArn = std::forward<SubscriberArnT>(value);
  }
  template <typename SubscriberArnT = Aws::String>
  CreateSubscriberResult& WithSubscriberArn(SubscriberArnT&& value) {
    SetSubscriberArn(std::forward<SubscriberArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Name of a subscriber. The first character must be alphanumeric; the remaining
   * characters may also include '.', '-', and '_'.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateSubscriberResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) that uniquely identifies an event bus.</p>
   */
  inline const Aws::String& GetEventBusArn() const { return m_eventBusArn; }
  template <typename EventBusArnT = Aws::String>
  void SetEventBusArn(EventBusArnT&& value) {
    m_eventBusArnHasBeenSet = true;
    m_eventBusArn = std::forward<EventBusArnT>(value);
  }
  template <typename EventBusArnT = Aws::String>
  CreateSubscriberResult& WithEventBusArn(EventBusArnT&& value) {
    SetEventBusArn(std::forward<EventBusArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Delivery ordering mode of a subscriber: FIFO delivers events in order within
   * an event group; UNORDERED delivers without an ordering guarantee.</p>
   */
  inline OrderingType GetType() const { return m_type; }
  inline void SetType(OrderingType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline CreateSubscriberResult& WithType(OrderingType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Starting position for a subscriber.</p>
   */
  inline StartingPosition GetStartingPosition() const { return m_startingPosition; }
  inline void SetStartingPosition(StartingPosition value) {
    m_startingPositionHasBeenSet = true;
    m_startingPosition = value;
  }
  inline CreateSubscriberResult& WithStartingPosition(StartingPosition value) {
    SetStartingPosition(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Point-in-time configuration for a subscriber. Only applicable when
   * StartingPosition is POINT_IN_TIME.</p>
   */
  inline const PointInTimeConfiguration& GetPointInTimeConfiguration() const { return m_pointInTimeConfiguration; }
  template <typename PointInTimeConfigurationT = PointInTimeConfiguration>
  void SetPointInTimeConfiguration(PointInTimeConfigurationT&& value) {
    m_pointInTimeConfigurationHasBeenSet = true;
    m_pointInTimeConfiguration = std::forward<PointInTimeConfigurationT>(value);
  }
  template <typename PointInTimeConfigurationT = PointInTimeConfiguration>
  CreateSubscriberResult& WithPointInTimeConfiguration(PointInTimeConfigurationT&& value) {
    SetPointInTimeConfiguration(std::forward<PointInTimeConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Customer-controlled run state of a subscriber, set on create or update.
   * Distinct from the bus lifecycle vocabulary, where ACTIVE means "provisioned and
   * healthy". Delivery requires State RUNNING on a subscriber that is not
   * revoked.</p>
   */
  inline SubscriberState GetState() const { return m_state; }
  inline void SetState(SubscriberState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline CreateSubscriberResult& WithState(SubscriberState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time the subscriber was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  CreateSubscriberResult& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const SubscriberDetails& GetSubscriberDetails() const { return m_subscriberDetails; }
  template <typename SubscriberDetailsT = SubscriberDetails>
  void SetSubscriberDetails(SubscriberDetailsT&& value) {
    m_subscriberDetailsHasBeenSet = true;
    m_subscriberDetails = std::forward<SubscriberDetailsT>(value);
  }
  template <typename SubscriberDetailsT = SubscriberDetails>
  CreateSubscriberResult& WithSubscriberDetails(SubscriberDetailsT&& value) {
    SetSubscriberDetails(std::forward<SubscriberDetailsT>(value));
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
  CreateSubscriberResult& WithRequestId(RequestIdT&& value) {
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

  Aws::Utils::DateTime m_creationTime{};

  SubscriberDetails m_subscriberDetails;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_subscriberArnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_eventBusArnHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_startingPositionHasBeenSet = false;
  bool m_pointInTimeConfigurationHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
  bool m_subscriberDetailsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
