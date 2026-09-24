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
#include <aws/eventbridgev2/model/EventSourceConfiguration.h>
#include <aws/eventbridgev2/model/EventSourceState.h>

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
class DescribeEventSourceResult {
 public:
  AWS_EVENTBRIDGEV2_API DescribeEventSourceResult() = default;
  AWS_EVENTBRIDGEV2_API DescribeEventSourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_EVENTBRIDGEV2_API DescribeEventSourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{

  inline const Aws::String& GetEventSourceArn() const { return m_eventSourceArn; }
  template <typename EventSourceArnT = Aws::String>
  void SetEventSourceArn(EventSourceArnT&& value) {
    m_eventSourceArnHasBeenSet = true;
    m_eventSourceArn = std::forward<EventSourceArnT>(value);
  }
  template <typename EventSourceArnT = Aws::String>
  DescribeEventSourceResult& WithEventSourceArn(EventSourceArnT&& value) {
    SetEventSourceArn(std::forward<EventSourceArnT>(value));
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
  DescribeEventSourceResult& WithName(NameT&& value) {
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
  DescribeEventSourceResult& WithEventBusArn(EventBusArnT&& value) {
    SetEventBusArn(std::forward<EventBusArnT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const EventSourceConfiguration& GetConfiguration() const { return m_configuration; }
  template <typename ConfigurationT = EventSourceConfiguration>
  void SetConfiguration(ConfigurationT&& value) {
    m_configurationHasBeenSet = true;
    m_configuration = std::forward<ConfigurationT>(value);
  }
  template <typename ConfigurationT = EventSourceConfiguration>
  DescribeEventSourceResult& WithConfiguration(ConfigurationT&& value) {
    SetConfiguration(std::forward<ConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  DescribeEventSourceResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline EventSourceState GetState() const { return m_state; }
  inline void SetState(EventSourceState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline DescribeEventSourceResult& WithState(EventSourceState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>True when the bus owner has withdrawn this EventSource. Present only when
   * true, so an absent member means the EventSource is not revoked. Revocation is
   * terminal: it never returns to false. Mutating operations on a revoked
   * EventSource fail with InvalidStateException, except DeleteEventSource, which
   * stays available so a revoked EventSource can still be cleaned up.</p>
   */
  inline bool GetRevoked() const { return m_revoked; }
  inline void SetRevoked(bool value) {
    m_revokedHasBeenSet = true;
    m_revoked = value;
  }
  inline DescribeEventSourceResult& WithRevoked(bool value) {
    SetRevoked(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time the EventSource was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  DescribeEventSourceResult& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time the EventSource was last modified.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  void SetLastModifiedTime(LastModifiedTimeT&& value) {
    m_lastModifiedTimeHasBeenSet = true;
    m_lastModifiedTime = std::forward<LastModifiedTimeT>(value);
  }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  DescribeEventSourceResult& WithLastModifiedTime(LastModifiedTimeT&& value) {
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
  DescribeEventSourceResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_eventSourceArn;

  Aws::String m_name;

  Aws::String m_eventBusArn;

  EventSourceConfiguration m_configuration;

  Aws::String m_description;

  EventSourceState m_state{EventSourceState::NOT_SET};

  bool m_revoked{false};

  Aws::Utils::DateTime m_creationTime{};

  Aws::Utils::DateTime m_lastModifiedTime{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_eventSourceArnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_eventBusArnHasBeenSet = false;
  bool m_configurationHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_revokedHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
  bool m_lastModifiedTimeHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
