/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/endusermessaging/EndUserMessaging_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace EndUserMessaging {
namespace Model {

/**
 * <p>Contains summary information about a registration that is associated with a
 * brand profile.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/endusermessaging-2026-09-21/RegistrationAssociationSummary">AWS
 * API Reference</a></p>
 */
class RegistrationAssociationSummary {
 public:
  AWS_ENDUSERMESSAGING_API RegistrationAssociationSummary() = default;
  AWS_ENDUSERMESSAGING_API RegistrationAssociationSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_ENDUSERMESSAGING_API RegistrationAssociationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ENDUSERMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the registration.</p>
   */
  inline const Aws::String& GetRegistrationId() const { return m_registrationId; }
  inline bool RegistrationIdHasBeenSet() const { return m_registrationIdHasBeenSet; }
  template <typename RegistrationIdT = Aws::String>
  void SetRegistrationId(RegistrationIdT&& value) {
    m_registrationIdHasBeenSet = true;
    m_registrationId = std::forward<RegistrationIdT>(value);
  }
  template <typename RegistrationIdT = Aws::String>
  RegistrationAssociationSummary& WithRegistrationId(RegistrationIdT&& value) {
    SetRegistrationId(std::forward<RegistrationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the registration, for example US_TOLL_FREE_REGISTRATION or
   * SENDER_ID.</p>
   */
  inline const Aws::String& GetRegistrationType() const { return m_registrationType; }
  inline bool RegistrationTypeHasBeenSet() const { return m_registrationTypeHasBeenSet; }
  template <typename RegistrationTypeT = Aws::String>
  void SetRegistrationType(RegistrationTypeT&& value) {
    m_registrationTypeHasBeenSet = true;
    m_registrationType = std::forward<RegistrationTypeT>(value);
  }
  template <typename RegistrationTypeT = Aws::String>
  RegistrationAssociationSummary& WithRegistrationType(RegistrationTypeT&& value) {
    SetRegistrationType(std::forward<RegistrationTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the resource was created, in Unix epoch time.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  RegistrationAssociationSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether smart matching was used to create the association.</p>
   */
  inline bool GetSmartMatchUsed() const { return m_smartMatchUsed; }
  inline bool SmartMatchUsedHasBeenSet() const { return m_smartMatchUsedHasBeenSet; }
  inline void SetSmartMatchUsed(bool value) {
    m_smartMatchUsedHasBeenSet = true;
    m_smartMatchUsed = value;
  }
  inline RegistrationAssociationSummary& WithSmartMatchUsed(bool value) {
    SetSmartMatchUsed(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_registrationId;

  Aws::String m_registrationType;

  Aws::Utils::DateTime m_createdAt{};

  bool m_smartMatchUsed{false};
  bool m_registrationIdHasBeenSet = false;
  bool m_registrationTypeHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_smartMatchUsedHasBeenSet = false;
};

}  // namespace Model
}  // namespace EndUserMessaging
}  // namespace Aws
