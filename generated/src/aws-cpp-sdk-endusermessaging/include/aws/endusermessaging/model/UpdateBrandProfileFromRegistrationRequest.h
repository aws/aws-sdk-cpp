/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/endusermessaging/EndUserMessagingRequest.h>
#include <aws/endusermessaging/EndUserMessaging_EXPORTS.h>
#include <aws/endusermessaging/model/OnAttributeConflict.h>

#include <utility>

namespace Aws {
namespace EndUserMessaging {
namespace Model {

/**
 */
class UpdateBrandProfileFromRegistrationRequest : public EndUserMessagingRequest {
 public:
  AWS_ENDUSERMESSAGING_API UpdateBrandProfileFromRegistrationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateBrandProfileFromRegistration"; }

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
  UpdateBrandProfileFromRegistrationRequest& WithBrandProfileId(BrandProfileIdT&& value) {
    SetBrandProfileId(std::forward<BrandProfileIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier or Amazon Resource Name (ARN) of the registration to import
   * attributes from.</p>
   */
  inline const Aws::String& GetRegistrationId() const { return m_registrationId; }
  inline bool RegistrationIdHasBeenSet() const { return m_registrationIdHasBeenSet; }
  template <typename RegistrationIdT = Aws::String>
  void SetRegistrationId(RegistrationIdT&& value) {
    m_registrationIdHasBeenSet = true;
    m_registrationId = std::forward<RegistrationIdT>(value);
  }
  template <typename RegistrationIdT = Aws::String>
  UpdateBrandProfileFromRegistrationRequest& WithRegistrationId(RegistrationIdT&& value) {
    SetRegistrationId(std::forward<RegistrationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to use semantic field mapping between brand profile
   * attributes and registration fields. The default is true. When false, the service
   * maps fields using a fixed set of standard field types.</p>
   */
  inline bool GetSmartMatch() const { return m_smartMatch; }
  inline bool SmartMatchHasBeenSet() const { return m_smartMatchHasBeenSet; }
  inline void SetSmartMatch(bool value) {
    m_smartMatchHasBeenSet = true;
    m_smartMatch = value;
  }
  inline UpdateBrandProfileFromRegistrationRequest& WithSmartMatch(bool value) {
    SetSmartMatch(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies how the service resolves an attribute that already exists. REPLACE
   * overwrites the existing value with the incoming value. PRESERVE keeps the
   * existing value.</p>
   */
  inline OnAttributeConflict GetOnAttributeConflict() const { return m_onAttributeConflict; }
  inline bool OnAttributeConflictHasBeenSet() const { return m_onAttributeConflictHasBeenSet; }
  inline void SetOnAttributeConflict(OnAttributeConflict value) {
    m_onAttributeConflictHasBeenSet = true;
    m_onAttributeConflict = value;
  }
  inline UpdateBrandProfileFromRegistrationRequest& WithOnAttributeConflict(OnAttributeConflict value) {
    SetOnAttributeConflict(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request. If you do not specify a client token, the AWS SDK
   * automatically generates one.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  UpdateBrandProfileFromRegistrationRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_brandProfileId;

  Aws::String m_registrationId;

  bool m_smartMatch{false};

  OnAttributeConflict m_onAttributeConflict{OnAttributeConflict::NOT_SET};

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_brandProfileIdHasBeenSet = false;
  bool m_registrationIdHasBeenSet = false;
  bool m_smartMatchHasBeenSet = false;
  bool m_onAttributeConflictHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace EndUserMessaging
}  // namespace Aws
