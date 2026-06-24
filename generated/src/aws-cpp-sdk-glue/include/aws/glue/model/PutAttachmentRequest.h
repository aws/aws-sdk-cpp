/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/GlueRequest.h>
#include <aws/glue/Glue_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Glue {
namespace Model {

/**
 */
class PutAttachmentRequest : public GlueRequest {
 public:
  AWS_GLUE_API PutAttachmentRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PutAttachment"; }

  AWS_GLUE_API Aws::String SerializePayload() const override;

  AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The unique identifier of the asset to attach the form to.</p>
   */
  inline const Aws::String& GetAssetIdentifier() const { return m_assetIdentifier; }
  inline bool AssetIdentifierHasBeenSet() const { return m_assetIdentifierHasBeenSet; }
  template <typename AssetIdentifierT = Aws::String>
  void SetAssetIdentifier(AssetIdentifierT&& value) {
    m_assetIdentifierHasBeenSet = true;
    m_assetIdentifier = std::forward<AssetIdentifierT>(value);
  }
  template <typename AssetIdentifierT = Aws::String>
  PutAttachmentRequest& WithAssetIdentifier(AssetIdentifierT&& value) {
    SetAssetIdentifier(std::forward<AssetIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the iterable form. When specified along with
   * <code>itemIdentifier</code>, the attachment targets an item within the iterable
   * form rather than the asset itself.</p>
   */
  inline const Aws::String& GetIterableFormName() const { return m_iterableFormName; }
  inline bool IterableFormNameHasBeenSet() const { return m_iterableFormNameHasBeenSet; }
  template <typename IterableFormNameT = Aws::String>
  void SetIterableFormName(IterableFormNameT&& value) {
    m_iterableFormNameHasBeenSet = true;
    m_iterableFormName = std::forward<IterableFormNameT>(value);
  }
  template <typename IterableFormNameT = Aws::String>
  PutAttachmentRequest& WithIterableFormName(IterableFormNameT&& value) {
    SetIterableFormName(std::forward<IterableFormNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the item within the iterable form. Required when
   * <code>iterableFormName</code> is specified.</p>
   */
  inline const Aws::String& GetItemIdentifier() const { return m_itemIdentifier; }
  inline bool ItemIdentifierHasBeenSet() const { return m_itemIdentifierHasBeenSet; }
  template <typename ItemIdentifierT = Aws::String>
  void SetItemIdentifier(ItemIdentifierT&& value) {
    m_itemIdentifierHasBeenSet = true;
    m_itemIdentifier = std::forward<ItemIdentifierT>(value);
  }
  template <typename ItemIdentifierT = Aws::String>
  PutAttachmentRequest& WithItemIdentifier(ItemIdentifierT&& value) {
    SetItemIdentifier(std::forward<ItemIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the attachment.</p>
   */
  inline const Aws::String& GetAttachmentName() const { return m_attachmentName; }
  inline bool AttachmentNameHasBeenSet() const { return m_attachmentNameHasBeenSet; }
  template <typename AttachmentNameT = Aws::String>
  void SetAttachmentName(AttachmentNameT&& value) {
    m_attachmentNameHasBeenSet = true;
    m_attachmentName = std::forward<AttachmentNameT>(value);
  }
  template <typename AttachmentNameT = Aws::String>
  PutAttachmentRequest& WithAttachmentName(AttachmentNameT&& value) {
    SetAttachmentName(std::forward<AttachmentNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The JSON content of the form, conforming to the schema of the specified form
   * type.</p>
   */
  inline const Aws::String& GetContent() const { return m_content; }
  inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
  template <typename ContentT = Aws::String>
  void SetContent(ContentT&& value) {
    m_contentHasBeenSet = true;
    m_content = std::forward<ContentT>(value);
  }
  template <typename ContentT = Aws::String>
  PutAttachmentRequest& WithContent(ContentT&& value) {
    SetContent(std::forward<ContentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the form type for this attachment.</p>
   */
  inline const Aws::String& GetFormTypeId() const { return m_formTypeId; }
  inline bool FormTypeIdHasBeenSet() const { return m_formTypeIdHasBeenSet; }
  template <typename FormTypeIdT = Aws::String>
  void SetFormTypeId(FormTypeIdT&& value) {
    m_formTypeIdHasBeenSet = true;
    m_formTypeId = std::forward<FormTypeIdT>(value);
  }
  template <typename FormTypeIdT = Aws::String>
  PutAttachmentRequest& WithFormTypeId(FormTypeIdT&& value) {
    SetFormTypeId(std::forward<FormTypeIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  PutAttachmentRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_assetIdentifier;

  Aws::String m_iterableFormName;

  Aws::String m_itemIdentifier;

  Aws::String m_attachmentName;

  Aws::String m_content;

  Aws::String m_formTypeId;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_assetIdentifierHasBeenSet = false;
  bool m_iterableFormNameHasBeenSet = false;
  bool m_itemIdentifierHasBeenSet = false;
  bool m_attachmentNameHasBeenSet = false;
  bool m_contentHasBeenSet = false;
  bool m_formTypeIdHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
