/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Glue {
namespace Model {

/**
 * <p>A single search result item representing a matched asset.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/SearchResultItem">AWS
 * API Reference</a></p>
 */
class SearchResultItem {
 public:
  AWS_GLUE_API SearchResultItem() = default;
  AWS_GLUE_API SearchResultItem(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API SearchResultItem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the matched asset.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  SearchResultItem& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the matched asset.</p>
   */
  inline const Aws::String& GetAssetName() const { return m_assetName; }
  inline bool AssetNameHasBeenSet() const { return m_assetNameHasBeenSet; }
  template <typename AssetNameT = Aws::String>
  void SetAssetName(AssetNameT&& value) {
    m_assetNameHasBeenSet = true;
    m_assetName = std::forward<AssetNameT>(value);
  }
  template <typename AssetNameT = Aws::String>
  SearchResultItem& WithAssetName(AssetNameT&& value) {
    SetAssetName(std::forward<AssetNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the matched asset.</p>
   */
  inline const Aws::String& GetAssetDescription() const { return m_assetDescription; }
  inline bool AssetDescriptionHasBeenSet() const { return m_assetDescriptionHasBeenSet; }
  template <typename AssetDescriptionT = Aws::String>
  void SetAssetDescription(AssetDescriptionT&& value) {
    m_assetDescriptionHasBeenSet = true;
    m_assetDescription = std::forward<AssetDescriptionT>(value);
  }
  template <typename AssetDescriptionT = Aws::String>
  SearchResultItem& WithAssetDescription(AssetDescriptionT&& value) {
    SetAssetDescription(std::forward<AssetDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp at which the matched asset was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  SearchResultItem& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the asset type for the matched asset.</p>
   */
  inline const Aws::String& GetAssetTypeId() const { return m_assetTypeId; }
  inline bool AssetTypeIdHasBeenSet() const { return m_assetTypeIdHasBeenSet; }
  template <typename AssetTypeIdT = Aws::String>
  void SetAssetTypeId(AssetTypeIdT&& value) {
    m_assetTypeIdHasBeenSet = true;
    m_assetTypeId = std::forward<AssetTypeIdT>(value);
  }
  template <typename AssetTypeIdT = Aws::String>
  SearchResultItem& WithAssetTypeId(AssetTypeIdT&& value) {
    SetAssetTypeId(std::forward<AssetTypeIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  Aws::String m_assetName;

  Aws::String m_assetDescription;

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_assetTypeId;
  bool m_idHasBeenSet = false;
  bool m_assetNameHasBeenSet = false;
  bool m_assetDescriptionHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_assetTypeIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
