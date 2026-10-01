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

#include <utility>

namespace Aws {
namespace EndUserMessaging {
namespace Model {

/**
 */
class CreateRegistrationsFromBrandProfileRequest : public EndUserMessagingRequest {
 public:
  AWS_ENDUSERMESSAGING_API CreateRegistrationsFromBrandProfileRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateRegistrationsFromBrandProfile"; }

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
  CreateRegistrationsFromBrandProfileRequest& WithBrandProfileId(BrandProfileIdT&& value) {
    SetBrandProfileId(std::forward<BrandProfileIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The registration types to create, for example US_TOLL_FREE_REGISTRATION or
   * SENDER_ID.</p>
   */
  inline const Aws::Vector<Aws::String>& GetRegistrationTypes() const { return m_registrationTypes; }
  inline bool RegistrationTypesHasBeenSet() const { return m_registrationTypesHasBeenSet; }
  template <typename RegistrationTypesT = Aws::Vector<Aws::String>>
  void SetRegistrationTypes(RegistrationTypesT&& value) {
    m_registrationTypesHasBeenSet = true;
    m_registrationTypes = std::forward<RegistrationTypesT>(value);
  }
  template <typename RegistrationTypesT = Aws::Vector<Aws::String>>
  CreateRegistrationsFromBrandProfileRequest& WithRegistrationTypes(RegistrationTypesT&& value) {
    SetRegistrationTypes(std::forward<RegistrationTypesT>(value));
    return *this;
  }
  template <typename RegistrationTypesT = Aws::String>
  CreateRegistrationsFromBrandProfileRequest& AddRegistrationTypes(RegistrationTypesT&& value) {
    m_registrationTypesHasBeenSet = true;
    m_registrationTypes.emplace_back(std::forward<RegistrationTypesT>(value));
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
  inline CreateRegistrationsFromBrandProfileRequest& WithSmartMatch(bool value) {
    SetSmartMatch(value);
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
  CreateRegistrationsFromBrandProfileRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_brandProfileId;

  Aws::Vector<Aws::String> m_registrationTypes;

  bool m_smartMatch{false};

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_brandProfileIdHasBeenSet = false;
  bool m_registrationTypesHasBeenSet = false;
  bool m_smartMatchHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace EndUserMessaging
}  // namespace Aws
