/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/application-signals/model/ChangeEventType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ApplicationSignals {
namespace Model {

/**
 * <p>A structure that contains information about a change event that occurred for
 * a service, such as a deployment or configuration change.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/ChangeEvent">AWS
 * API Reference</a></p>
 */
class ChangeEvent {
 public:
  AWS_APPLICATIONSIGNALS_API ChangeEvent() = default;
  AWS_APPLICATIONSIGNALS_API ChangeEvent(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API ChangeEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The timestamp when this change event occurred. When used in a raw HTTP Query
   * API, it is formatted as epoch time in seconds.</p>
   */
  inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
  inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
  template <typename TimestampT = Aws::Utils::DateTime>
  void SetTimestamp(TimestampT&& value) {
    m_timestampHasBeenSet = true;
    m_timestamp = std::forward<TimestampT>(value);
  }
  template <typename TimestampT = Aws::Utils::DateTime>
  ChangeEvent& WithTimestamp(TimestampT&& value) {
    SetTimestamp(std::forward<TimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services account ID where this change event occurred.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  ChangeEvent& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services region where this change event occurred.</p>
   */
  inline const Aws::String& GetRegion() const { return m_region; }
  inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
  template <typename RegionT = Aws::String>
  void SetRegion(RegionT&& value) {
    m_regionHasBeenSet = true;
    m_region = std::forward<RegionT>(value);
  }
  template <typename RegionT = Aws::String>
  ChangeEvent& WithRegion(RegionT&& value) {
    SetRegion(std::forward<RegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The entity (service or resource) that was affected by this change event,
   * including its key attributes.</p> <p>This is a string-to-string map. It can
   * include the following fields.</p> <ul> <li> <p> <code>Type</code> designates the
   * type of object this is.</p> </li> <li> <p> <code>ResourceType</code> specifies
   * the type of the resource. This field is used only when the value of the
   * <code>Type</code> field is <code>Resource</code> or
   * <code>AWS::Resource</code>.</p> </li> <li> <p> <code>Name</code> specifies the
   * name of the object. This is used only if the value of the <code>Type</code>
   * field is <code>Service</code>, <code>RemoteService</code>, or
   * <code>AWS::Service</code>.</p> </li> <li> <p> <code>Identifier</code> identifies
   * the resource objects of this resource. This is used only if the value of the
   * <code>Type</code> field is <code>Resource</code> or
   * <code>AWS::Resource</code>.</p> </li> <li> <p> <code>Environment</code>
   * specifies the location where this object is hosted, or what it belongs to.</p>
   * </li> <li> <p> <code>AwsAccountId</code> specifies the account where this object
   * is in.</p> </li> </ul> <p>Below is an example of a service.</p> <p> <code>{
   * "Type": "Service", "Name": "visits-service", "Environment": "petclinic-test"
   * }</code> </p> <p>Below is an example of a resource.</p> <p> <code>{ "Type":
   * "AWS::Resource", "ResourceType": "AWS::DynamoDB::Table", "Identifier":
   * "Customers" }</code> </p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetEntity() const { return m_entity; }
  inline bool EntityHasBeenSet() const { return m_entityHasBeenSet; }
  template <typename EntityT = Aws::Map<Aws::String, Aws::String>>
  void SetEntity(EntityT&& value) {
    m_entityHasBeenSet = true;
    m_entity = std::forward<EntityT>(value);
  }
  template <typename EntityT = Aws::Map<Aws::String, Aws::String>>
  ChangeEvent& WithEntity(EntityT&& value) {
    SetEntity(std::forward<EntityT>(value));
    return *this;
  }
  template <typename EntityKeyT = Aws::String, typename EntityValueT = Aws::String>
  ChangeEvent& AddEntity(EntityKeyT&& key, EntityValueT&& value) {
    m_entityHasBeenSet = true;
    m_entity.emplace(std::forward<EntityKeyT>(key), std::forward<EntityValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of change event that occurred, such as <code>DEPLOYMENT</code>.</p>
   */
  inline ChangeEventType GetChangeEventType() const { return m_changeEventType; }
  inline bool ChangeEventTypeHasBeenSet() const { return m_changeEventTypeHasBeenSet; }
  inline void SetChangeEventType(ChangeEventType value) {
    m_changeEventTypeHasBeenSet = true;
    m_changeEventType = value;
  }
  inline ChangeEvent& WithChangeEventType(ChangeEventType value) {
    SetChangeEventType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique identifier for this change event. For CloudTrail-based events, this
   * is the CloudTrail event id. For other events, this will be
   * <code>Unknown</code>.</p>
   */
  inline const Aws::String& GetEventId() const { return m_eventId; }
  inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }
  template <typename EventIdT = Aws::String>
  void SetEventId(EventIdT&& value) {
    m_eventIdHasBeenSet = true;
    m_eventId = std::forward<EventIdT>(value);
  }
  template <typename EventIdT = Aws::String>
  ChangeEvent& WithEventId(EventIdT&& value) {
    SetEventId(std::forward<EventIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the user who initiated this change event, if available.</p>
   */
  inline const Aws::String& GetUserName() const { return m_userName; }
  inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }
  template <typename UserNameT = Aws::String>
  void SetUserName(UserNameT&& value) {
    m_userNameHasBeenSet = true;
    m_userName = std::forward<UserNameT>(value);
  }
  template <typename UserNameT = Aws::String>
  ChangeEvent& WithUserName(UserNameT&& value) {
    SetUserName(std::forward<UserNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name or description of this change event.</p>
   */
  inline const Aws::String& GetEventName() const { return m_eventName; }
  inline bool EventNameHasBeenSet() const { return m_eventNameHasBeenSet; }
  template <typename EventNameT = Aws::String>
  void SetEventName(EventNameT&& value) {
    m_eventNameHasBeenSet = true;
    m_eventName = std::forward<EventNameT>(value);
  }
  template <typename EventNameT = Aws::String>
  ChangeEvent& WithEventName(EventNameT&& value) {
    SetEventName(std::forward<EventNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_timestamp{};
  bool m_timestampHasBeenSet = false;

  Aws::String m_accountId;
  bool m_accountIdHasBeenSet = false;

  Aws::String m_region;
  bool m_regionHasBeenSet = false;

  Aws::Map<Aws::String, Aws::String> m_entity;
  bool m_entityHasBeenSet = false;

  ChangeEventType m_changeEventType{ChangeEventType::NOT_SET};
  bool m_changeEventTypeHasBeenSet = false;

  Aws::String m_eventId;
  bool m_eventIdHasBeenSet = false;

  Aws::String m_userName;
  bool m_userNameHasBeenSet = false;

  Aws::String m_eventName;
  bool m_eventNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
