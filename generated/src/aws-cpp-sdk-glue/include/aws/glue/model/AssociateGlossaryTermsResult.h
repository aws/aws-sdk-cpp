/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/Glue_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Glue {
namespace Model {
class AssociateGlossaryTermsResult {
 public:
  AWS_GLUE_API AssociateGlossaryTermsResult() = default;
  AWS_GLUE_API AssociateGlossaryTermsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_GLUE_API AssociateGlossaryTermsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the asset.</p>
   */
  inline const Aws::String& GetAssetId() const { return m_assetId; }
  template <typename AssetIdT = Aws::String>
  void SetAssetId(AssetIdT&& value) {
    m_assetIdHasBeenSet = true;
    m_assetId = std::forward<AssetIdT>(value);
  }
  template <typename AssetIdT = Aws::String>
  AssociateGlossaryTermsResult& WithAssetId(AssetIdT&& value) {
    SetAssetId(std::forward<AssetIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the iterable form, if the association targets an item.</p>
   */
  inline const Aws::String& GetIterableFormName() const { return m_iterableFormName; }
  template <typename IterableFormNameT = Aws::String>
  void SetIterableFormName(IterableFormNameT&& value) {
    m_iterableFormNameHasBeenSet = true;
    m_iterableFormName = std::forward<IterableFormNameT>(value);
  }
  template <typename IterableFormNameT = Aws::String>
  AssociateGlossaryTermsResult& WithIterableFormName(IterableFormNameT&& value) {
    SetIterableFormName(std::forward<IterableFormNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the item within the iterable form, if applicable.</p>
   */
  inline const Aws::String& GetItemId() const { return m_itemId; }
  template <typename ItemIdT = Aws::String>
  void SetItemId(ItemIdT&& value) {
    m_itemIdHasBeenSet = true;
    m_itemId = std::forward<ItemIdT>(value);
  }
  template <typename ItemIdT = Aws::String>
  AssociateGlossaryTermsResult& WithItemId(ItemIdT&& value) {
    SetItemId(std::forward<ItemIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The glossary terms now associated with the asset.</p>
   */
  inline const Aws::Vector<Aws::String>& GetGlossaryTerms() const { return m_glossaryTerms; }
  template <typename GlossaryTermsT = Aws::Vector<Aws::String>>
  void SetGlossaryTerms(GlossaryTermsT&& value) {
    m_glossaryTermsHasBeenSet = true;
    m_glossaryTerms = std::forward<GlossaryTermsT>(value);
  }
  template <typename GlossaryTermsT = Aws::Vector<Aws::String>>
  AssociateGlossaryTermsResult& WithGlossaryTerms(GlossaryTermsT&& value) {
    SetGlossaryTerms(std::forward<GlossaryTermsT>(value));
    return *this;
  }
  template <typename GlossaryTermsT = Aws::String>
  AssociateGlossaryTermsResult& AddGlossaryTerms(GlossaryTermsT&& value) {
    m_glossaryTermsHasBeenSet = true;
    m_glossaryTerms.emplace_back(std::forward<GlossaryTermsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  AssociateGlossaryTermsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_assetId;

  Aws::String m_iterableFormName;

  Aws::String m_itemId;

  Aws::Vector<Aws::String> m_glossaryTerms;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_assetIdHasBeenSet = false;
  bool m_iterableFormNameHasBeenSet = false;
  bool m_itemIdHasBeenSet = false;
  bool m_glossaryTermsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
