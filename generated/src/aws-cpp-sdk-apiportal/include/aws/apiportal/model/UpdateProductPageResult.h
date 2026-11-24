/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/apiportal/model/DisplayContent.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
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
class UpdateProductPageResult {
 public:
  AWS_APIPORTAL_API UpdateProductPageResult() = default;
  AWS_APIPORTAL_API UpdateProductPageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_APIPORTAL_API UpdateProductPageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The identifier of the product page.</p>
   */
  inline const Aws::String& GetProductPageId() const { return m_productPageId; }
  template <typename ProductPageIdT = Aws::String>
  void SetProductPageId(ProductPageIdT&& value) {
    m_productPageIdHasBeenSet = true;
    m_productPageId = std::forward<ProductPageIdT>(value);
  }
  template <typename ProductPageIdT = Aws::String>
  UpdateProductPageResult& WithProductPageId(ProductPageIdT&& value) {
    SetProductPageId(std::forward<ProductPageIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the product page.</p>
   */
  inline const Aws::String& GetProductPageArn() const { return m_productPageArn; }
  template <typename ProductPageArnT = Aws::String>
  void SetProductPageArn(ProductPageArnT&& value) {
    m_productPageArnHasBeenSet = true;
    m_productPageArn = std::forward<ProductPageArnT>(value);
  }
  template <typename ProductPageArnT = Aws::String>
  UpdateProductPageResult& WithProductPageArn(ProductPageArnT&& value) {
    SetProductPageArn(std::forward<ProductPageArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The title and body of the page.</p>
   */
  inline const DisplayContent& GetDisplayContent() const { return m_displayContent; }
  template <typename DisplayContentT = DisplayContent>
  void SetDisplayContent(DisplayContentT&& value) {
    m_displayContentHasBeenSet = true;
    m_displayContent = std::forward<DisplayContentT>(value);
  }
  template <typename DisplayContentT = DisplayContent>
  UpdateProductPageResult& WithDisplayContent(DisplayContentT&& value) {
    SetDisplayContent(std::forward<DisplayContentT>(value));
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
  UpdateProductPageResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
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
  UpdateProductPageResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_productPageId;

  Aws::String m_productPageArn;

  DisplayContent m_displayContent;

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_productPageIdHasBeenSet = false;
  bool m_productPageArnHasBeenSet = false;
  bool m_displayContentHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
