/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/endusermessaging/EndUserMessagingRequest.h>
#include <aws/endusermessaging/EndUserMessaging_EXPORTS.h>
#include <aws/endusermessaging/model/OnAttributeConflict.h>

#include <utility>

namespace Aws {
namespace EndUserMessaging {
namespace Model {

/**
 */
class UpdateRegistrationsFromBrandProfileRequest : public EndUserMessagingRequest {
 public:
  AWS_ENDUSERMESSAGING_API UpdateRegistrationsFromBrandProfileRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateRegistrationsFromBrandProfile"; }

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
  UpdateRegistrationsFromBrandProfileRequest& WithBrandProfileId(BrandProfileIdT&& value) {
    SetBrandProfileId(std::forward<BrandProfileIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifiers of the registrations.</p>
   */
  inline const Aws::Vector<Aws::String>& GetRegistrationIds() const { return m_registrationIds; }
  inline bool RegistrationIdsHasBeenSet() const { return m_registrationIdsHasBeenSet; }
  template <typename RegistrationIdsT = Aws::Vector<Aws::String>>
  void SetRegistrationIds(RegistrationIdsT&& value) {
    m_registrationIdsHasBeenSet = true;
    m_registrationIds = std::forward<RegistrationIdsT>(value);
  }
  template <typename RegistrationIdsT = Aws::Vector<Aws::String>>
  UpdateRegistrationsFromBrandProfileRequest& WithRegistrationIds(RegistrationIdsT&& value) {
    SetRegistrationIds(std::forward<RegistrationIdsT>(value));
    return *this;
  }
  template <typename RegistrationIdsT = Aws::String>
  UpdateRegistrationsFromBrandProfileRequest& AddRegistrationIds(RegistrationIdsT&& value) {
    m_registrationIdsHasBeenSet = true;
    m_registrationIds.emplace_back(std::forward<RegistrationIdsT>(value));
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
  inline UpdateRegistrationsFromBrandProfileRequest& WithSmartMatch(bool value) {
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
  inline UpdateRegistrationsFromBrandProfileRequest& WithOnAttributeConflict(OnAttributeConflict value) {
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
  UpdateRegistrationsFromBrandProfileRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_brandProfileId;

  Aws::Vector<Aws::String> m_registrationIds;

  bool m_smartMatch{false};

  OnAttributeConflict m_onAttributeConflict{OnAttributeConflict::NOT_SET};

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_brandProfileIdHasBeenSet = false;
  bool m_registrationIdsHasBeenSet = false;
  bool m_smartMatchHasBeenSet = false;
  bool m_onAttributeConflictHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace EndUserMessaging
}  // namespace Aws
