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
#include <aws/endusermessaging/model/BrandProfileAttributeInput.h>

#include <utility>

namespace Aws {
namespace EndUserMessaging {
namespace Model {

/**
 */
class CreateBrandProfileAttributesRequest : public EndUserMessagingRequest {
 public:
  AWS_ENDUSERMESSAGING_API CreateBrandProfileAttributesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateBrandProfileAttributes"; }

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
  CreateBrandProfileAttributesRequest& WithBrandProfileId(BrandProfileIdT&& value) {
    SetBrandProfileId(std::forward<BrandProfileIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The brand profile attributes.</p>
   */
  inline const Aws::Vector<BrandProfileAttributeInput>& GetAttributes() const { return m_attributes; }
  inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
  template <typename AttributesT = Aws::Vector<BrandProfileAttributeInput>>
  void SetAttributes(AttributesT&& value) {
    m_attributesHasBeenSet = true;
    m_attributes = std::forward<AttributesT>(value);
  }
  template <typename AttributesT = Aws::Vector<BrandProfileAttributeInput>>
  CreateBrandProfileAttributesRequest& WithAttributes(AttributesT&& value) {
    SetAttributes(std::forward<AttributesT>(value));
    return *this;
  }
  template <typename AttributesT = BrandProfileAttributeInput>
  CreateBrandProfileAttributesRequest& AddAttributes(AttributesT&& value) {
    m_attributesHasBeenSet = true;
    m_attributes.emplace_back(std::forward<AttributesT>(value));
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
  CreateBrandProfileAttributesRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_brandProfileId;

  Aws::Vector<BrandProfileAttributeInput> m_attributes;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_brandProfileIdHasBeenSet = false;
  bool m_attributesHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace EndUserMessaging
}  // namespace Aws
