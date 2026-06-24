/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/AssetTypeFormReference.h>

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
class PutAssetTypeResult {
 public:
  AWS_GLUE_API PutAssetTypeResult() = default;
  AWS_GLUE_API PutAssetTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_GLUE_API PutAssetTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The identifier of the asset type.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  PutAssetTypeResult& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the asset type.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  PutAssetTypeResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The forms that make up the asset type, keyed by form name.</p>
   */
  inline const Aws::Map<Aws::String, AssetTypeFormReference>& GetForms() const { return m_forms; }
  template <typename FormsT = Aws::Map<Aws::String, AssetTypeFormReference>>
  void SetForms(FormsT&& value) {
    m_formsHasBeenSet = true;
    m_forms = std::forward<FormsT>(value);
  }
  template <typename FormsT = Aws::Map<Aws::String, AssetTypeFormReference>>
  PutAssetTypeResult& WithForms(FormsT&& value) {
    SetForms(std::forward<FormsT>(value));
    return *this;
  }
  template <typename FormsKeyT = Aws::String, typename FormsValueT = AssetTypeFormReference>
  PutAssetTypeResult& AddForms(FormsKeyT&& key, FormsValueT&& value) {
    m_formsHasBeenSet = true;
    m_forms.emplace(std::forward<FormsKeyT>(key), std::forward<FormsValueT>(value));
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
  PutAssetTypeResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_id;

  Aws::String m_name;

  Aws::Map<Aws::String, AssetTypeFormReference> m_forms;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_idHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_formsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
