/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/GlueRequest.h>
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/AssetFormEntry.h>

#include <utility>

namespace Aws {
namespace Glue {
namespace Model {

/**
 */
class PutAssetRequest : public GlueRequest {
 public:
  AWS_GLUE_API PutAssetRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PutAsset"; }

  AWS_GLUE_API Aws::String SerializePayload() const override;

  AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The identifier of the asset type for the asset.</p>
   */
  inline const Aws::String& GetAssetTypeId() const { return m_assetTypeId; }
  inline bool AssetTypeIdHasBeenSet() const { return m_assetTypeIdHasBeenSet; }
  template <typename AssetTypeIdT = Aws::String>
  void SetAssetTypeId(AssetTypeIdT&& value) {
    m_assetTypeIdHasBeenSet = true;
    m_assetTypeId = std::forward<AssetTypeIdT>(value);
  }
  template <typename AssetTypeIdT = Aws::String>
  PutAssetRequest& WithAssetTypeId(AssetTypeIdT&& value) {
    SetAssetTypeId(std::forward<AssetTypeIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the asset. If an asset with this identifier already
   * exists, it is updated.</p>
   */
  inline const Aws::String& GetIdentifier() const { return m_identifier; }
  inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
  template <typename IdentifierT = Aws::String>
  void SetIdentifier(IdentifierT&& value) {
    m_identifierHasBeenSet = true;
    m_identifier = std::forward<IdentifierT>(value);
  }
  template <typename IdentifierT = Aws::String>
  PutAssetRequest& WithIdentifier(IdentifierT&& value) {
    SetIdentifier(std::forward<IdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the asset.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  PutAssetRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the asset.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  PutAssetRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The forms to set on the asset, keyed by form name. Each entry specifies the
   * form type and its JSON content.</p>
   */
  inline const Aws::Map<Aws::String, AssetFormEntry>& GetForms() const { return m_forms; }
  inline bool FormsHasBeenSet() const { return m_formsHasBeenSet; }
  template <typename FormsT = Aws::Map<Aws::String, AssetFormEntry>>
  void SetForms(FormsT&& value) {
    m_formsHasBeenSet = true;
    m_forms = std::forward<FormsT>(value);
  }
  template <typename FormsT = Aws::Map<Aws::String, AssetFormEntry>>
  PutAssetRequest& WithForms(FormsT&& value) {
    SetForms(std::forward<FormsT>(value));
    return *this;
  }
  template <typename FormsKeyT = Aws::String, typename FormsValueT = AssetFormEntry>
  PutAssetRequest& AddForms(FormsKeyT&& key, FormsValueT&& value) {
    m_formsHasBeenSet = true;
    m_forms.emplace(std::forward<FormsKeyT>(key), std::forward<FormsValueT>(value));
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
  PutAssetRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_assetTypeId;

  Aws::String m_identifier;

  Aws::String m_name;

  Aws::String m_description;

  Aws::Map<Aws::String, AssetFormEntry> m_forms;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_assetTypeIdHasBeenSet = false;
  bool m_identifierHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_formsHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
