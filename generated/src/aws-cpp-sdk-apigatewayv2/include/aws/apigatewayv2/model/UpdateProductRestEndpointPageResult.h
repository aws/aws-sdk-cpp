/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/apigatewayv2/model/EndpointDisplayContentResponse.h>
#include <aws/apigatewayv2/model/RestEndpointIdentifier.h>
#include <aws/apigatewayv2/model/Status.h>
#include <aws/apigatewayv2/model/StatusException.h>
#include <aws/apigatewayv2/model/TryItState.h>
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
class UpdateProductRestEndpointPageResult {
 public:
  AWS_APIGATEWAYV2_API UpdateProductRestEndpointPageResult() = default;
  AWS_APIGATEWAYV2_API UpdateProductRestEndpointPageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_APIGATEWAYV2_API UpdateProductRestEndpointPageResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The content of the product REST endpoint page.</p>
   */
  inline const EndpointDisplayContentResponse& GetDisplayContent() const { return m_displayContent; }
  template <typename DisplayContentT = EndpointDisplayContentResponse>
  void SetDisplayContent(DisplayContentT&& value) {
    m_displayContentHasBeenSet = true;
    m_displayContent = std::forward<DisplayContentT>(value);
  }
  template <typename DisplayContentT = EndpointDisplayContentResponse>
  UpdateProductRestEndpointPageResult& WithDisplayContent(DisplayContentT&& value) {
    SetDisplayContent(std::forward<DisplayContentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the product REST endpoint page was last modified.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModified() const { return m_lastModified; }
  template <typename LastModifiedT = Aws::Utils::DateTime>
  void SetLastModified(LastModifiedT&& value) {
    m_lastModifiedHasBeenSet = true;
    m_lastModified = std::forward<LastModifiedT>(value);
  }
  template <typename LastModifiedT = Aws::Utils::DateTime>
  UpdateProductRestEndpointPageResult& WithLastModified(LastModifiedT&& value) {
    SetLastModified(std::forward<LastModifiedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the product REST endpoint page.</p>
   */
  inline const Aws::String& GetProductRestEndpointPageArn() const { return m_productRestEndpointPageArn; }
  template <typename ProductRestEndpointPageArnT = Aws::String>
  void SetProductRestEndpointPageArn(ProductRestEndpointPageArnT&& value) {
    m_productRestEndpointPageArnHasBeenSet = true;
    m_productRestEndpointPageArn = std::forward<ProductRestEndpointPageArnT>(value);
  }
  template <typename ProductRestEndpointPageArnT = Aws::String>
  UpdateProductRestEndpointPageResult& WithProductRestEndpointPageArn(ProductRestEndpointPageArnT&& value) {
    SetProductRestEndpointPageArn(std::forward<ProductRestEndpointPageArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The product REST endpoint page identifier.</p>
   */
  inline const Aws::String& GetProductRestEndpointPageId() const { return m_productRestEndpointPageId; }
  template <typename ProductRestEndpointPageIdT = Aws::String>
  void SetProductRestEndpointPageId(ProductRestEndpointPageIdT&& value) {
    m_productRestEndpointPageIdHasBeenSet = true;
    m_productRestEndpointPageId = std::forward<ProductRestEndpointPageIdT>(value);
  }
  template <typename ProductRestEndpointPageIdT = Aws::String>
  UpdateProductRestEndpointPageResult& WithProductRestEndpointPageId(ProductRestEndpointPageIdT&& value) {
    SetProductRestEndpointPageId(std::forward<ProductRestEndpointPageIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The REST endpoint identifier.</p>
   */
  inline const RestEndpointIdentifier& GetRestEndpointIdentifier() const { return m_restEndpointIdentifier; }
  template <typename RestEndpointIdentifierT = RestEndpointIdentifier>
  void SetRestEndpointIdentifier(RestEndpointIdentifierT&& value) {
    m_restEndpointIdentifierHasBeenSet = true;
    m_restEndpointIdentifier = std::forward<RestEndpointIdentifierT>(value);
  }
  template <typename RestEndpointIdentifierT = RestEndpointIdentifier>
  UpdateProductRestEndpointPageResult& WithRestEndpointIdentifier(RestEndpointIdentifierT&& value) {
    SetRestEndpointIdentifier(std::forward<RestEndpointIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status.</p>
   */
  inline Status GetStatus() const { return m_status; }
  inline void SetStatus(Status value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline UpdateProductRestEndpointPageResult& WithStatus(Status value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status exception information.</p>
   */
  inline const StatusException& GetStatusException() const { return m_statusException; }
  template <typename StatusExceptionT = StatusException>
  void SetStatusException(StatusExceptionT&& value) {
    m_statusExceptionHasBeenSet = true;
    m_statusException = std::forward<StatusExceptionT>(value);
  }
  template <typename StatusExceptionT = StatusException>
  UpdateProductRestEndpointPageResult& WithStatusException(StatusExceptionT&& value) {
    SetStatusException(std::forward<StatusExceptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The try it state of a product REST endpoint page.</p>
   */
  inline TryItState GetTryItState() const { return m_tryItState; }
  inline void SetTryItState(TryItState value) {
    m_tryItStateHasBeenSet = true;
    m_tryItState = value;
  }
  inline UpdateProductRestEndpointPageResult& WithTryItState(TryItState value) {
    SetTryItState(value);
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
  UpdateProductRestEndpointPageResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  EndpointDisplayContentResponse m_displayContent;

  Aws::Utils::DateTime m_lastModified{};

  Aws::String m_productRestEndpointPageArn;

  Aws::String m_productRestEndpointPageId;

  RestEndpointIdentifier m_restEndpointIdentifier;

  Status m_status{Status::NOT_SET};

  StatusException m_statusException;

  TryItState m_tryItState{TryItState::NOT_SET};

  Aws::String m_requestId;
  bool m_displayContentHasBeenSet = false;
  bool m_lastModifiedHasBeenSet = false;
  bool m_productRestEndpointPageArnHasBeenSet = false;
  bool m_productRestEndpointPageIdHasBeenSet = false;
  bool m_restEndpointIdentifierHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_statusExceptionHasBeenSet = false;
  bool m_tryItStateHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApiGatewayV2
}  // namespace Aws
