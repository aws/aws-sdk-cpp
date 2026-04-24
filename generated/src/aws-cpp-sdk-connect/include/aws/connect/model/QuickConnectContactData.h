/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/QuickConnectType.h>
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
namespace Connect {
namespace Model {

/**
 * <p> Contact data associated with quick connect operations. </p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/QuickConnectContactData">AWS
 * API Reference</a></p>
 */
class QuickConnectContactData {
 public:
  AWS_CONNECT_API QuickConnectContactData() = default;
  AWS_CONNECT_API QuickConnectContactData(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API QuickConnectContactData& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The contact ID for quick connect contact data. </p>
   */
  inline const Aws::String& GetContactId() const { return m_contactId; }
  inline bool ContactIdHasBeenSet() const { return m_contactIdHasBeenSet; }
  template <typename ContactIdT = Aws::String>
  void SetContactId(ContactIdT&& value) {
    m_contactIdHasBeenSet = true;
    m_contactId = std::forward<ContactIdT>(value);
  }
  template <typename ContactIdT = Aws::String>
  QuickConnectContactData& WithContactId(ContactIdT&& value) {
    SetContactId(std::forward<ContactIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Timestamp when the quick connect contact was initiated. </p>
   */
  inline const Aws::Utils::DateTime& GetInitiationTimestamp() const { return m_initiationTimestamp; }
  inline bool InitiationTimestampHasBeenSet() const { return m_initiationTimestampHasBeenSet; }
  template <typename InitiationTimestampT = Aws::Utils::DateTime>
  void SetInitiationTimestamp(InitiationTimestampT&& value) {
    m_initiationTimestampHasBeenSet = true;
    m_initiationTimestamp = std::forward<InitiationTimestampT>(value);
  }
  template <typename InitiationTimestampT = Aws::Utils::DateTime>
  QuickConnectContactData& WithInitiationTimestamp(InitiationTimestampT&& value) {
    SetInitiationTimestamp(std::forward<InitiationTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The quick connect ID. </p>
   */
  inline const Aws::String& GetQuickConnectId() const { return m_quickConnectId; }
  inline bool QuickConnectIdHasBeenSet() const { return m_quickConnectIdHasBeenSet; }
  template <typename QuickConnectIdT = Aws::String>
  void SetQuickConnectId(QuickConnectIdT&& value) {
    m_quickConnectIdHasBeenSet = true;
    m_quickConnectId = std::forward<QuickConnectIdT>(value);
  }
  template <typename QuickConnectIdT = Aws::String>
  QuickConnectContactData& WithQuickConnectId(QuickConnectIdT&& value) {
    SetQuickConnectId(std::forward<QuickConnectIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The name of the quick connect. </p>
   */
  inline const Aws::String& GetQuickConnectName() const { return m_quickConnectName; }
  inline bool QuickConnectNameHasBeenSet() const { return m_quickConnectNameHasBeenSet; }
  template <typename QuickConnectNameT = Aws::String>
  void SetQuickConnectName(QuickConnectNameT&& value) {
    m_quickConnectNameHasBeenSet = true;
    m_quickConnectName = std::forward<QuickConnectNameT>(value);
  }
  template <typename QuickConnectNameT = Aws::String>
  QuickConnectContactData& WithQuickConnectName(QuickConnectNameT&& value) {
    SetQuickConnectName(std::forward<QuickConnectNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The type of the quick connect. </p>
   */
  inline QuickConnectType GetQuickConnectType() const { return m_quickConnectType; }
  inline bool QuickConnectTypeHasBeenSet() const { return m_quickConnectTypeHasBeenSet; }
  inline void SetQuickConnectType(QuickConnectType value) {
    m_quickConnectTypeHasBeenSet = true;
    m_quickConnectType = value;
  }
  inline QuickConnectContactData& WithQuickConnectType(QuickConnectType value) {
    SetQuickConnectType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_contactId;

  Aws::Utils::DateTime m_initiationTimestamp{};

  Aws::String m_quickConnectId;

  Aws::String m_quickConnectName;

  QuickConnectType m_quickConnectType{QuickConnectType::NOT_SET};
  bool m_contactIdHasBeenSet = false;
  bool m_initiationTimestampHasBeenSet = false;
  bool m_quickConnectIdHasBeenSet = false;
  bool m_quickConnectNameHasBeenSet = false;
  bool m_quickConnectTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
