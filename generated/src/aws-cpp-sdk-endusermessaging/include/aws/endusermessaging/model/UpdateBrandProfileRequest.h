/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/endusermessaging/EndUserMessagingRequest.h>
#include <aws/endusermessaging/EndUserMessaging_EXPORTS.h>

#include <utility>

namespace Aws {
namespace EndUserMessaging {
namespace Model {

/**
 */
class UpdateBrandProfileRequest : public EndUserMessagingRequest {
 public:
  AWS_ENDUSERMESSAGING_API UpdateBrandProfileRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateBrandProfile"; }

  AWS_ENDUSERMESSAGING_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the brand profile. You can specify either the bare
   * ID or the full Amazon Resource Name (ARN).</p>
   */
  inline const Aws::String& GetBrandProfileId() const { return m_brandProfileId; }
  inline bool BrandProfileIdHasBeenSet() const { return m_brandProfileIdHasBeenSet; }
  template <typename BrandProfileIdT = Aws::String>
  void SetBrandProfileId(BrandProfileIdT&& value) {
    m_brandProfileIdHasBeenSet = true;
    m_brandProfileId = std::forward<BrandProfileIdT>(value);
  }
  template <typename BrandProfileIdT = Aws::String>
  UpdateBrandProfileRequest& WithBrandProfileId(BrandProfileIdT&& value) {
    SetBrandProfileId(std::forward<BrandProfileIdT>(value));
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
  UpdateBrandProfileRequest& WithBrandProfileName(BrandProfileNameT&& value) {
    SetBrandProfileName(std::forward<BrandProfileNameT>(value));
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
  inline UpdateBrandProfileRequest& WithDeletionProtectionEnabled(bool value) {
    SetDeletionProtectionEnabled(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_brandProfileId;

  Aws::String m_brandProfileName;

  bool m_deletionProtectionEnabled{false};
  bool m_brandProfileIdHasBeenSet = false;
  bool m_brandProfileNameHasBeenSet = false;
  bool m_deletionProtectionEnabledHasBeenSet = false;
};

}  // namespace Model
}  // namespace EndUserMessaging
}  // namespace Aws
