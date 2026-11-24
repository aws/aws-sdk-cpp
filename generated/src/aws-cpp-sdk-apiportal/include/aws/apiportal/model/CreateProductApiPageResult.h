/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/apiportal/model/ApiId.h>
#include <aws/apiportal/model/ApiPageDisplayContentResponse.h>
#include <aws/apiportal/model/ProductApiPageStatusException.h>
#include <aws/apiportal/model/Status.h>
#include <aws/apiportal/model/TryItState.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace APIPortal {
namespace Model {
class CreateProductApiPageResult {
 public:
  AWS_APIPORTAL_API CreateProductApiPageResult() = default;
  AWS_APIPORTAL_API CreateProductApiPageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_APIPORTAL_API CreateProductApiPageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The identifier of the API page.</p>
   */
  inline const Aws::String& GetProductApiPageId() const { return m_productApiPageId; }
  template <typename ProductApiPageIdT = Aws::String>
  void SetProductApiPageId(ProductApiPageIdT&& value) {
    m_productApiPageIdHasBeenSet = true;
    m_productApiPageId = std::forward<ProductApiPageIdT>(value);
  }
  template <typename ProductApiPageIdT = Aws::String>
  CreateProductApiPageResult& WithProductApiPageId(ProductApiPageIdT&& value) {
    SetProductApiPageId(std::forward<ProductApiPageIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the API page.</p>
   */
  inline const Aws::String& GetProductApiPageArn() const { return m_productApiPageArn; }
  template <typename ProductApiPageArnT = Aws::String>
  void SetProductApiPageArn(ProductApiPageArnT&& value) {
    m_productApiPageArnHasBeenSet = true;
    m_productApiPageArn = std::forward<ProductApiPageArnT>(value);
  }
  template <typename ProductApiPageArnT = Aws::String>
  CreateProductApiPageResult& WithProductApiPageArn(ProductApiPageArnT&& value) {
    SetProductApiPageArn(std::forward<ProductApiPageArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The API the page documents.</p>
   */
  inline const ApiId& GetApiId() const { return m_apiId; }
  template <typename ApiIdT = ApiId>
  void SetApiId(ApiIdT&& value) {
    m_apiIdHasBeenSet = true;
    m_apiId = std::forward<ApiIdT>(value);
  }
  template <typename ApiIdT = ApiId>
  CreateProductApiPageResult& WithApiId(ApiIdT&& value) {
    SetApiId(std::forward<ApiIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The content shown on the page.</p>
   */
  inline const ApiPageDisplayContentResponse& GetDisplayContent() const { return m_displayContent; }
  template <typename DisplayContentT = ApiPageDisplayContentResponse>
  void SetDisplayContent(DisplayContentT&& value) {
    m_displayContentHasBeenSet = true;
    m_displayContent = std::forward<DisplayContentT>(value);
  }
  template <typename DisplayContentT = ApiPageDisplayContentResponse>
  CreateProductApiPageResult& WithDisplayContent(DisplayContentT&& value) {
    SetDisplayContent(std::forward<DisplayContentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether Try-It is enabled on the page.</p>
   */
  inline TryItState GetTryItState() const { return m_tryItState; }
  inline void SetTryItState(TryItState value) {
    m_tryItStateHasBeenSet = true;
    m_tryItState = value;
  }
  inline CreateProductApiPageResult& WithTryItState(TryItState value) {
    SetTryItState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When the resource was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  CreateProductApiPageResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the page content: <code>IN_PROGRESS</code> while it is
   * generated, then <code>AVAILABLE</code> or <code>FAILED</code>.</p>
   */
  inline Status GetStatus() const { return m_status; }
  inline void SetStatus(Status value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CreateProductApiPageResult& WithStatus(Status value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{

  inline const ProductApiPageStatusException& GetStatusException() const { return m_statusException; }
  template <typename StatusExceptionT = ProductApiPageStatusException>
  void SetStatusException(StatusExceptionT&& value) {
    m_statusExceptionHasBeenSet = true;
    m_statusException = std::forward<StatusExceptionT>(value);
  }
  template <typename StatusExceptionT = ProductApiPageStatusException>
  CreateProductApiPageResult& WithStatusException(StatusExceptionT&& value) {
    SetStatusException(std::forward<StatusExceptionT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateProductApiPageResult& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateProductApiPageResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
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
  CreateProductApiPageResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_productApiPageId;

  Aws::String m_productApiPageArn;

  ApiId m_apiId;

  ApiPageDisplayContentResponse m_displayContent;

  TryItState m_tryItState{TryItState::NOT_SET};

  Aws::Utils::DateTime m_updatedAt{};

  Status m_status{Status::NOT_SET};

  ProductApiPageStatusException m_statusException;

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_productApiPageIdHasBeenSet = false;
  bool m_productApiPageArnHasBeenSet = false;
  bool m_apiIdHasBeenSet = false;
  bool m_displayContentHasBeenSet = false;
  bool m_tryItStateHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_statusExceptionHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
