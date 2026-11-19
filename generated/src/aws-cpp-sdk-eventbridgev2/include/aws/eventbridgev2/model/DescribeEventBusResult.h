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
#include <aws/eventbridgev2/model/BusState.h>
#include <aws/eventbridgev2/model/EncryptionConfiguration.h>
#include <aws/eventbridgev2/model/StorageConfigurationOutput.h>

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
class DescribeEventBusResult {
 public:
  AWS_EVENTBRIDGEV2_API DescribeEventBusResult() = default;
  AWS_EVENTBRIDGEV2_API DescribeEventBusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_EVENTBRIDGEV2_API DescribeEventBusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

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
  DescribeEventBusResult& WithEventBusArn(EventBusArnT&& value) {
    SetEventBusArn(std::forward<EventBusArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Name of an event bus. The first character must be alphanumeric; the remaining
   * characters may also include '.', '-', and '_'. The grammar matches the name
   * segment of EventBusArn (event-busv2/&lt;name&gt;/&lt;id&gt;), so every valid
   * name can be represented in the bus's ARN. The same type is used everywhere a bus
   * name appears.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  DescribeEventBusResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Free-text description. Used by every resource type that has one: event buses,
   * subscribers, and event sources.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  DescribeEventBusResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Encryption configuration for an event bus.</p>
   */
  inline const EncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
  template <typename EncryptionConfigurationT = EncryptionConfiguration>
  void SetEncryptionConfiguration(EncryptionConfigurationT&& value) {
    m_encryptionConfigurationHasBeenSet = true;
    m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value);
  }
  template <typename EncryptionConfigurationT = EncryptionConfiguration>
  DescribeEventBusResult& WithEncryptionConfiguration(EncryptionConfigurationT&& value) {
    SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Event storage configuration of an event bus, as returned on reads.</p>
   */
  inline const StorageConfigurationOutput& GetStorageConfiguration() const { return m_storageConfiguration; }
  template <typename StorageConfigurationT = StorageConfigurationOutput>
  void SetStorageConfiguration(StorageConfigurationT&& value) {
    m_storageConfigurationHasBeenSet = true;
    m_storageConfiguration = std::forward<StorageConfigurationT>(value);
  }
  template <typename StorageConfigurationT = StorageConfigurationOutput>
  DescribeEventBusResult& WithStorageConfiguration(StorageConfigurationT&& value) {
    SetStorageConfiguration(std::forward<StorageConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time the event bus was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  DescribeEventBusResult& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time the event bus was last modified.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  void SetLastModifiedTime(LastModifiedTimeT&& value) {
    m_lastModifiedTimeHasBeenSet = true;
    m_lastModifiedTime = std::forward<LastModifiedTimeT>(value);
  }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  DescribeEventBusResult& WithLastModifiedTime(LastModifiedTimeT&& value) {
    SetLastModifiedTime(std::forward<LastModifiedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Lifecycle state of an event bus.</p> <ul> <li> <p>CREATING: Bus creation is
   * in progress.</p> </li> <li> <p>CREATE_FAILED: Bus creation failed; see
   * StateReason. The bus cannot be recovered or recreated in place: delete it with
   * DeleteEventBus, then create a new bus.</p> </li> <li> <p>ACTIVE: Bus is fully
   * operational and can accept events.</p> </li> <li> <p>UPDATING: Bus update is in
   * progress.</p> </li> <li> <p>UPDATE_FAILED: Bus update failed; the bus remains
   * operational with its previous configuration.</p> </li> <li> <p>DELETING: Bus
   * deletion is actively in progress.</p> </li> <li> <p>DELETE_FAILED: Bus deletion
   * failed; see StateReason. Retry DeleteEventBus after removing subscribers and
   * event sources.</p> </li> </ul>
   */
  inline BusState GetState() const { return m_state; }
  inline void SetState(BusState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline DescribeEventBusResult& WithState(BusState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Human-readable explanation of why an event bus is in its current State.
   * Omitted when the bus is in a normal operational state (ACTIVE). It stands in for
   * the error response an asynchronous failure cannot return, so it applies only to
   * resources with an asynchronous lifecycle: event buses. EventSources and
   * subscribers are provisioned synchronously and report failures directly on the
   * request.</p>
   */
  inline const Aws::String& GetStateReason() const { return m_stateReason; }
  template <typename StateReasonT = Aws::String>
  void SetStateReason(StateReasonT&& value) {
    m_stateReasonHasBeenSet = true;
    m_stateReason = std::forward<StateReasonT>(value);
  }
  template <typename StateReasonT = Aws::String>
  DescribeEventBusResult& WithStateReason(StateReasonT&& value) {
    SetStateReason(std::forward<StateReasonT>(value));
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
  DescribeEventBusResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_eventBusArn;

  Aws::String m_name;

  Aws::String m_description;

  EncryptionConfiguration m_encryptionConfiguration;

  StorageConfigurationOutput m_storageConfiguration;

  Aws::Utils::DateTime m_creationTime{};

  Aws::Utils::DateTime m_lastModifiedTime{};

  BusState m_state{BusState::NOT_SET};

  Aws::String m_stateReason;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_eventBusArnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_encryptionConfigurationHasBeenSet = false;
  bool m_storageConfigurationHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
  bool m_lastModifiedTimeHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_stateReasonHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
