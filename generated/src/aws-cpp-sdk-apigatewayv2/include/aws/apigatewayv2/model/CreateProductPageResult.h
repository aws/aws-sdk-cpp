/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/apigatewayv2/model/DisplayContent.h>
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
namespace ApiGatewayV2 {
namespace Model {
class CreateProductPageResult {
 public:
  AWS_APIGATEWAYV2_API CreateProductPageResult() = default;
  AWS_APIGATEWAYV2_API CreateProductPageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_APIGATEWAYV2_API CreateProductPageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The content of the product page.</p>
   */
  inline const DisplayContent& GetDisplayContent() const { return m_displayContent; }
  template <typename DisplayContentT = DisplayContent>
  void SetDisplayContent(DisplayContentT&& value) {
    m_displayContentHasBeenSet = true;
    m_displayContent = std::forward<DisplayContentT>(value);
  }
  template <typename DisplayContentT = DisplayContent>
  CreateProductPageResult& WithDisplayContent(DisplayContentT&& value) {
    SetDisplayContent(std::forward<DisplayContentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the product page was last modified.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModified() const { return m_lastModified; }
  template <typename LastModifiedT = Aws::Utils::DateTime>
  void SetLastModified(LastModifiedT&& value) {
    m_lastModifiedHasBeenSet = true;
    m_lastModified = std::forward<LastModifiedT>(value);
  }
  template <typename LastModifiedT = Aws::Utils::DateTime>
  CreateProductPageResult& WithLastModified(LastModifiedT&& value) {
    SetLastModified(std::forward<LastModifiedT>(value));
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
  CreateProductPageResult& WithProductPageArn(ProductPageArnT&& value) {
    SetProductPageArn(std::forward<ProductPageArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The product page identifier.</p>
   */
  inline const Aws::String& GetProductPageId() const { return m_productPageId; }
  template <typename ProductPageIdT = Aws::String>
  void SetProductPageId(ProductPageIdT&& value) {
    m_productPageIdHasBeenSet = true;
    m_productPageId = std::forward<ProductPageIdT>(value);
  }
  template <typename ProductPageIdT = Aws::String>
  CreateProductPageResult& WithProductPageId(ProductPageIdT&& value) {
    SetProductPageId(std::forward<ProductPageIdT>(value));
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
  CreateProductPageResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  DisplayContent m_displayContent;

  Aws::Utils::DateTime m_lastModified{};

  Aws::String m_productPageArn;

  Aws::String m_productPageId;

  Aws::String m_requestId;
  bool m_displayContentHasBeenSet = false;
  bool m_lastModifiedHasBeenSet = false;
  bool m_productPageArnHasBeenSet = false;
  bool m_productPageIdHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApiGatewayV2
}  // namespace Aws
