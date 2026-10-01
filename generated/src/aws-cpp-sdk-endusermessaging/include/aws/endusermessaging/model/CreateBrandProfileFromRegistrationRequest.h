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
#include <aws/endusermessaging/model/Tag.h>

#include <utility>

namespace Aws {
namespace EndUserMessaging {
namespace Model {

/**
 */
class CreateBrandProfileFromRegistrationRequest : public EndUserMessagingRequest {
 public:
  AWS_ENDUSERMESSAGING_API CreateBrandProfileFromRegistrationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateBrandProfileFromRegistration"; }

  AWS_ENDUSERMESSAGING_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The identifier or Amazon Resource Name (ARN) of the registration to populate
   * the brand profile from.</p>
   */
  inline const Aws::String& GetRegistrationId() const { return m_registrationId; }
  inline bool RegistrationIdHasBeenSet() const { return m_registrationIdHasBeenSet; }
  template <typename RegistrationIdT = Aws::String>
  void SetRegistrationId(RegistrationIdT&& value) {
    m_registrationIdHasBeenSet = true;
    m_registrationId = std::forward<RegistrationIdT>(value);
  }
  template <typename RegistrationIdT = Aws::String>
  CreateBrandProfileFromRegistrationRequest& WithRegistrationId(RegistrationIdT&& value) {
    SetRegistrationId(std::forward<RegistrationIdT>(value));
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
  CreateBrandProfileFromRegistrationRequest& WithBrandProfileName(BrandProfileNameT&& value) {
    SetBrandProfileName(std::forward<BrandProfileNameT>(value));
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
  inline CreateBrandProfileFromRegistrationRequest& WithSmartMatch(bool value) {
    SetSmartMatch(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of key and value pair tags that are associated with the
   * resource.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  CreateBrandProfileFromRegistrationRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CreateBrandProfileFromRegistrationRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
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
  CreateBrandProfileFromRegistrationRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_registrationId;

  Aws::String m_brandProfileName;

  bool m_smartMatch{false};

  Aws::Vector<Tag> m_tags;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_registrationIdHasBeenSet = false;
  bool m_brandProfileNameHasBeenSet = false;
  bool m_smartMatchHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace EndUserMessaging
}  // namespace Aws
