/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/GlueRequest.h>
#include <aws/glue/Glue_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Glue {
namespace Model {

/**
 */
class BatchGetIterableFormsRequest : public GlueRequest {
 public:
  AWS_GLUE_API BatchGetIterableFormsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "BatchGetIterableForms"; }

  AWS_GLUE_API Aws::String SerializePayload() const override;

  AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The unique identifier of the asset.</p>
   */
  inline const Aws::String& GetAssetIdentifier() const { return m_assetIdentifier; }
  inline bool AssetIdentifierHasBeenSet() const { return m_assetIdentifierHasBeenSet; }
  template <typename AssetIdentifierT = Aws::String>
  void SetAssetIdentifier(AssetIdentifierT&& value) {
    m_assetIdentifierHasBeenSet = true;
    m_assetIdentifier = std::forward<AssetIdentifierT>(value);
  }
  template <typename AssetIdentifierT = Aws::String>
  BatchGetIterableFormsRequest& WithAssetIdentifier(AssetIdentifierT&& value) {
    SetAssetIdentifier(std::forward<AssetIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the iterable form to retrieve items from.</p>
   */
  inline const Aws::String& GetIterableFormName() const { return m_iterableFormName; }
  inline bool IterableFormNameHasBeenSet() const { return m_iterableFormNameHasBeenSet; }
  template <typename IterableFormNameT = Aws::String>
  void SetIterableFormName(IterableFormNameT&& value) {
    m_iterableFormNameHasBeenSet = true;
    m_iterableFormName = std::forward<IterableFormNameT>(value);
  }
  template <typename IterableFormNameT = Aws::String>
  BatchGetIterableFormsRequest& WithIterableFormName(IterableFormNameT&& value) {
    SetIterableFormName(std::forward<IterableFormNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of item identifiers to retrieve. Each identifier can be an item ID
   * or item name.</p>
   */
  inline const Aws::Vector<Aws::String>& GetItemIdentifiers() const { return m_itemIdentifiers; }
  inline bool ItemIdentifiersHasBeenSet() const { return m_itemIdentifiersHasBeenSet; }
  template <typename ItemIdentifiersT = Aws::Vector<Aws::String>>
  void SetItemIdentifiers(ItemIdentifiersT&& value) {
    m_itemIdentifiersHasBeenSet = true;
    m_itemIdentifiers = std::forward<ItemIdentifiersT>(value);
  }
  template <typename ItemIdentifiersT = Aws::Vector<Aws::String>>
  BatchGetIterableFormsRequest& WithItemIdentifiers(ItemIdentifiersT&& value) {
    SetItemIdentifiers(std::forward<ItemIdentifiersT>(value));
    return *this;
  }
  template <typename ItemIdentifiersT = Aws::String>
  BatchGetIterableFormsRequest& AddItemIdentifiers(ItemIdentifiersT&& value) {
    m_itemIdentifiersHasBeenSet = true;
    m_itemIdentifiers.emplace_back(std::forward<ItemIdentifiersT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_assetIdentifier;

  Aws::String m_iterableFormName;

  Aws::Vector<Aws::String> m_itemIdentifiers;
  bool m_assetIdentifierHasBeenSet = false;
  bool m_iterableFormNameHasBeenSet = false;
  bool m_itemIdentifiersHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
