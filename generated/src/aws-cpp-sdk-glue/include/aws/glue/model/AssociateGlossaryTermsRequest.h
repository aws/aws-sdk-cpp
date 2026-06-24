/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
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
class AssociateGlossaryTermsRequest : public GlueRequest {
 public:
  AWS_GLUE_API AssociateGlossaryTermsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "AssociateGlossaryTerms"; }

  AWS_GLUE_API Aws::String SerializePayload() const override;

  AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The unique identifier of the asset to associate glossary terms with.</p>
   */
  inline const Aws::String& GetAssetIdentifier() const { return m_assetIdentifier; }
  inline bool AssetIdentifierHasBeenSet() const { return m_assetIdentifierHasBeenSet; }
  template <typename AssetIdentifierT = Aws::String>
  void SetAssetIdentifier(AssetIdentifierT&& value) {
    m_assetIdentifierHasBeenSet = true;
    m_assetIdentifier = std::forward<AssetIdentifierT>(value);
  }
  template <typename AssetIdentifierT = Aws::String>
  AssociateGlossaryTermsRequest& WithAssetIdentifier(AssetIdentifierT&& value) {
    SetAssetIdentifier(std::forward<AssetIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of glossary term identifiers to associate with the asset.</p>
   */
  inline const Aws::Vector<Aws::String>& GetGlossaryTermIdentifiers() const { return m_glossaryTermIdentifiers; }
  inline bool GlossaryTermIdentifiersHasBeenSet() const { return m_glossaryTermIdentifiersHasBeenSet; }
  template <typename GlossaryTermIdentifiersT = Aws::Vector<Aws::String>>
  void SetGlossaryTermIdentifiers(GlossaryTermIdentifiersT&& value) {
    m_glossaryTermIdentifiersHasBeenSet = true;
    m_glossaryTermIdentifiers = std::forward<GlossaryTermIdentifiersT>(value);
  }
  template <typename GlossaryTermIdentifiersT = Aws::Vector<Aws::String>>
  AssociateGlossaryTermsRequest& WithGlossaryTermIdentifiers(GlossaryTermIdentifiersT&& value) {
    SetGlossaryTermIdentifiers(std::forward<GlossaryTermIdentifiersT>(value));
    return *this;
  }
  template <typename GlossaryTermIdentifiersT = Aws::String>
  AssociateGlossaryTermsRequest& AddGlossaryTermIdentifiers(GlossaryTermIdentifiersT&& value) {
    m_glossaryTermIdentifiersHasBeenSet = true;
    m_glossaryTermIdentifiers.emplace_back(std::forward<GlossaryTermIdentifiersT>(value));
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
  AssociateGlossaryTermsRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_assetIdentifier;

  Aws::Vector<Aws::String> m_glossaryTermIdentifiers;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_assetIdentifierHasBeenSet = false;
  bool m_glossaryTermIdentifiersHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
