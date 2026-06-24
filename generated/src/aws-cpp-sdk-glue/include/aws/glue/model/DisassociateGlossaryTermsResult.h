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
class DisassociateGlossaryTermsResult {
 public:
  AWS_GLUE_API DisassociateGlossaryTermsResult() = default;
  AWS_GLUE_API DisassociateGlossaryTermsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_GLUE_API DisassociateGlossaryTermsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the asset.</p>
   */
  inline const Aws::String& GetAssetIdentifier() const { return m_assetIdentifier; }
  template <typename AssetIdentifierT = Aws::String>
  void SetAssetIdentifier(AssetIdentifierT&& value) {
    m_assetIdentifierHasBeenSet = true;
    m_assetIdentifier = std::forward<AssetIdentifierT>(value);
  }
  template <typename AssetIdentifierT = Aws::String>
  DisassociateGlossaryTermsResult& WithAssetIdentifier(AssetIdentifierT&& value) {
    SetAssetIdentifier(std::forward<AssetIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The remaining glossary terms associated with the asset.</p>
   */
  inline const Aws::Vector<Aws::String>& GetGlossaryTerms() const { return m_glossaryTerms; }
  template <typename GlossaryTermsT = Aws::Vector<Aws::String>>
  void SetGlossaryTerms(GlossaryTermsT&& value) {
    m_glossaryTermsHasBeenSet = true;
    m_glossaryTerms = std::forward<GlossaryTermsT>(value);
  }
  template <typename GlossaryTermsT = Aws::Vector<Aws::String>>
  DisassociateGlossaryTermsResult& WithGlossaryTerms(GlossaryTermsT&& value) {
    SetGlossaryTerms(std::forward<GlossaryTermsT>(value));
    return *this;
  }
  template <typename GlossaryTermsT = Aws::String>
  DisassociateGlossaryTermsResult& AddGlossaryTerms(GlossaryTermsT&& value) {
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
  DisassociateGlossaryTermsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_assetIdentifier;

  Aws::Vector<Aws::String> m_glossaryTerms;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_assetIdentifierHasBeenSet = false;
  bool m_glossaryTermsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
