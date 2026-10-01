/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/endusermessaging/EndUserMessaging_EXPORTS.h>
#include <aws/endusermessaging/model/Status.h>

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
 * <p>Contains information about a brand profile.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/endusermessaging-2026-09-21/BrandProfileInfo">AWS
 * API Reference</a></p>
 */
class BrandProfileInfo {
 public:
  AWS_ENDUSERMESSAGING_API BrandProfileInfo() = default;
  AWS_ENDUSERMESSAGING_API BrandProfileInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_ENDUSERMESSAGING_API BrandProfileInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ENDUSERMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the brand profile.</p>
   */
  inline const Aws::String& GetBrandProfileId() const { return m_brandProfileId; }
  inline bool BrandProfileIdHasBeenSet() const { return m_brandProfileIdHasBeenSet; }
  template <typename BrandProfileIdT = Aws::String>
  void SetBrandProfileId(BrandProfileIdT&& value) {
    m_brandProfileIdHasBeenSet = true;
    m_brandProfileId = std::forward<BrandProfileIdT>(value);
  }
  template <typename BrandProfileIdT = Aws::String>
  BrandProfileInfo& WithBrandProfileId(BrandProfileIdT&& value) {
    SetBrandProfileId(std::forward<BrandProfileIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the brand profile.</p>
   */
  inline const Aws::String& GetBrandProfileArn() const { return m_brandProfileArn; }
  inline bool BrandProfileArnHasBeenSet() const { return m_brandProfileArnHasBeenSet; }
  template <typename BrandProfileArnT = Aws::String>
  void SetBrandProfileArn(BrandProfileArnT&& value) {
    m_brandProfileArnHasBeenSet = true;
    m_brandProfileArn = std::forward<BrandProfileArnT>(value);
  }
  template <typename BrandProfileArnT = Aws::String>
  BrandProfileInfo& WithBrandProfileArn(BrandProfileArnT&& value) {
    SetBrandProfileArn(std::forward<BrandProfileArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the brand profile. The name can contain alphanumeric characters,
   * underscores, hyphens, and spaces.</p>
   */
  inline const Aws::String& GetBrandProfileName() const { return m_brandProfileName; }
  inline bool BrandProfileNameHasBeenSet() const { return m_brandProfileNameHasBeenSet; }
  template <typename BrandProfileNameT = Aws::String>
  void SetBrandProfileName(BrandProfileNameT&& value) {
    m_brandProfileNameHasBeenSet = true;
    m_brandProfileName = std::forward<BrandProfileNameT>(value);
  }
  template <typename BrandProfileNameT = Aws::String>
  BrandProfileInfo& WithBrandProfileName(BrandProfileNameT&& value) {
    SetBrandProfileName(std::forward<BrandProfileNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current lifecycle status of the brand profile.</p>
   */
  inline Status GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(Status value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline BrandProfileInfo& WithStatus(Status value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether deletion protection is enabled. When enabled, the resource
   * cannot be deleted until deletion protection is turned off.</p>
   */
  inline bool GetDeletionProtectionEnabled() const { return m_deletionProtectionEnabled; }
  inline bool DeletionProtectionEnabledHasBeenSet() const { return m_deletionProtectionEnabledHasBeenSet; }
  inline void SetDeletionProtectionEnabled(bool value) {
    m_deletionProtectionEnabledHasBeenSet = true;
    m_deletionProtectionEnabled = value;
  }
  inline BrandProfileInfo& WithDeletionProtectionEnabled(bool value) {
    SetDeletionProtectionEnabled(value);
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
  BrandProfileInfo& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the resource was last updated, in Unix epoch time.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  BrandProfileInfo& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_brandProfileId;

  Aws::String m_brandProfileArn;

  Aws::String m_brandProfileName;

  Status m_status{Status::NOT_SET};

  bool m_deletionProtectionEnabled{false};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_brandProfileIdHasBeenSet = false;
  bool m_brandProfileArnHasBeenSet = false;
  bool m_brandProfileNameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_deletionProtectionEnabledHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace EndUserMessaging
}  // namespace Aws
