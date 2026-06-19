/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/GlueRequest.h>
#include <aws/glue/Glue_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Glue {
namespace Model {

/**
 */
class DeleteAttachmentRequest : public GlueRequest {
 public:
  AWS_GLUE_API DeleteAttachmentRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteAttachment"; }

  AWS_GLUE_API Aws::String SerializePayload() const override;

  AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The unique identifier of the asset from which to delete the attachment.</p>
   */
  inline const Aws::String& GetAssetIdentifier() const { return m_assetIdentifier; }
  inline bool AssetIdentifierHasBeenSet() const { return m_assetIdentifierHasBeenSet; }
  template <typename AssetIdentifierT = Aws::String>
  void SetAssetIdentifier(AssetIdentifierT&& value) {
    m_assetIdentifierHasBeenSet = true;
    m_assetIdentifier = std::forward<AssetIdentifierT>(value);
  }
  template <typename AssetIdentifierT = Aws::String>
  DeleteAttachmentRequest& WithAssetIdentifier(AssetIdentifierT&& value) {
    SetAssetIdentifier(std::forward<AssetIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the iterable form. When specified along with
   * <code>itemIdentifier</code>, the attachment is deleted from an item within the
   * iterable form rather than from the asset itself.</p>
   */
  inline const Aws::String& GetIterableFormName() const { return m_iterableFormName; }
  inline bool IterableFormNameHasBeenSet() const { return m_iterableFormNameHasBeenSet; }
  template <typename IterableFormNameT = Aws::String>
  void SetIterableFormName(IterableFormNameT&& value) {
    m_iterableFormNameHasBeenSet = true;
    m_iterableFormName = std::forward<IterableFormNameT>(value);
  }
  template <typename IterableFormNameT = Aws::String>
  DeleteAttachmentRequest& WithIterableFormName(IterableFormNameT&& value) {
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
  DeleteAttachmentRequest& WithItemIdentifier(ItemIdentifierT&& value) {
    SetItemIdentifier(std::forward<ItemIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the attachment to delete.</p>
   */
  inline const Aws::String& GetAttachmentName() const { return m_attachmentName; }
  inline bool AttachmentNameHasBeenSet() const { return m_attachmentNameHasBeenSet; }
  template <typename AttachmentNameT = Aws::String>
  void SetAttachmentName(AttachmentNameT&& value) {
    m_attachmentNameHasBeenSet = true;
    m_attachmentName = std::forward<AttachmentNameT>(value);
  }
  template <typename AttachmentNameT = Aws::String>
  DeleteAttachmentRequest& WithAttachmentName(AttachmentNameT&& value) {
    SetAttachmentName(std::forward<AttachmentNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_assetIdentifier;

  Aws::String m_iterableFormName;

  Aws::String m_itemIdentifier;

  Aws::String m_attachmentName;
  bool m_assetIdentifierHasBeenSet = false;
  bool m_iterableFormNameHasBeenSet = false;
  bool m_itemIdentifierHasBeenSet = false;
  bool m_attachmentNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
