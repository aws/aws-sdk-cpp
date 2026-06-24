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
#include <aws/glue/model/AssetTypeFormReference.h>

#include <utility>

namespace Aws {
namespace Glue {
namespace Model {

/**
 */
class PutAssetTypeRequest : public GlueRequest {
 public:
  AWS_GLUE_API PutAssetTypeRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PutAssetType"; }

  AWS_GLUE_API Aws::String SerializePayload() const override;

  AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The name of the asset type.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  PutAssetTypeRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The forms that make up the asset type, keyed by form name. Each entry
   * references the form type that defines the form's schema.</p>
   */
  inline const Aws::Map<Aws::String, AssetTypeFormReference>& GetForms() const { return m_forms; }
  inline bool FormsHasBeenSet() const { return m_formsHasBeenSet; }
  template <typename FormsT = Aws::Map<Aws::String, AssetTypeFormReference>>
  void SetForms(FormsT&& value) {
    m_formsHasBeenSet = true;
    m_forms = std::forward<FormsT>(value);
  }
  template <typename FormsT = Aws::Map<Aws::String, AssetTypeFormReference>>
  PutAssetTypeRequest& WithForms(FormsT&& value) {
    SetForms(std::forward<FormsT>(value));
    return *this;
  }
  template <typename FormsKeyT = Aws::String, typename FormsValueT = AssetTypeFormReference>
  PutAssetTypeRequest& AddForms(FormsKeyT&& key, FormsValueT&& value) {
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
  PutAssetTypeRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::Map<Aws::String, AssetTypeFormReference> m_forms;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_nameHasBeenSet = false;
  bool m_formsHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
