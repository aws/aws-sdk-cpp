/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/apigatewayv2/model/RestEndpointIdentifier.h>
#include <aws/apigatewayv2/model/Status.h>
#include <aws/apigatewayv2/model/StatusException.h>
#include <aws/apigatewayv2/model/TryItState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ApiGatewayV2 {
namespace Model {

/**
 * <p>A summary of a product REST endpoint page, without providing the page
 * content.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/ProductRestEndpointPageSummaryNoBody">AWS
 * API Reference</a></p>
 */
class ProductRestEndpointPageSummaryNoBody {
 public:
  AWS_APIGATEWAYV2_API ProductRestEndpointPageSummaryNoBody() = default;
  AWS_APIGATEWAYV2_API ProductRestEndpointPageSummaryNoBody(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIGATEWAYV2_API ProductRestEndpointPageSummaryNoBody& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIGATEWAYV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The endpoint of the product REST endpoint page.</p>
   */
  inline const Aws::String& GetEndpoint() const { return m_endpoint; }
  inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
  template <typename EndpointT = Aws::String>
  void SetEndpoint(EndpointT&& value) {
    m_endpointHasBeenSet = true;
    m_endpoint = std::forward<EndpointT>(value);
  }
  template <typename EndpointT = Aws::String>
  ProductRestEndpointPageSummaryNoBody& WithEndpoint(EndpointT&& value) {
    SetEndpoint(std::forward<EndpointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the product REST endpoint page was last modified.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModified() const { return m_lastModified; }
  inline bool LastModifiedHasBeenSet() const { return m_lastModifiedHasBeenSet; }
  template <typename LastModifiedT = Aws::Utils::DateTime>
  void SetLastModified(LastModifiedT&& value) {
    m_lastModifiedHasBeenSet = true;
    m_lastModified = std::forward<LastModifiedT>(value);
  }
  template <typename LastModifiedT = Aws::Utils::DateTime>
  ProductRestEndpointPageSummaryNoBody& WithLastModified(LastModifiedT&& value) {
    SetLastModified(std::forward<LastModifiedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The operation name of the product REST endpoint.</p>
   */
  inline const Aws::String& GetOperationName() const { return m_operationName; }
  inline bool OperationNameHasBeenSet() const { return m_operationNameHasBeenSet; }
  template <typename OperationNameT = Aws::String>
  void SetOperationName(OperationNameT&& value) {
    m_operationNameHasBeenSet = true;
    m_operationName = std::forward<OperationNameT>(value);
  }
  template <typename OperationNameT = Aws::String>
  ProductRestEndpointPageSummaryNoBody& WithOperationName(OperationNameT&& value) {
    SetOperationName(std::forward<OperationNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the product REST endpoint page.</p>
   */
  inline const Aws::String& GetProductRestEndpointPageArn() const { return m_productRestEndpointPageArn; }
  inline bool ProductRestEndpointPageArnHasBeenSet() const { return m_productRestEndpointPageArnHasBeenSet; }
  template <typename ProductRestEndpointPageArnT = Aws::String>
  void SetProductRestEndpointPageArn(ProductRestEndpointPageArnT&& value) {
    m_productRestEndpointPageArnHasBeenSet = true;
    m_productRestEndpointPageArn = std::forward<ProductRestEndpointPageArnT>(value);
  }
  template <typename ProductRestEndpointPageArnT = Aws::String>
  ProductRestEndpointPageSummaryNoBody& WithProductRestEndpointPageArn(ProductRestEndpointPageArnT&& value) {
    SetProductRestEndpointPageArn(std::forward<ProductRestEndpointPageArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The product REST endpoint page identifier.</p>
   */
  inline const Aws::String& GetProductRestEndpointPageId() const { return m_productRestEndpointPageId; }
  inline bool ProductRestEndpointPageIdHasBeenSet() const { return m_productRestEndpointPageIdHasBeenSet; }
  template <typename ProductRestEndpointPageIdT = Aws::String>
  void SetProductRestEndpointPageId(ProductRestEndpointPageIdT&& value) {
    m_productRestEndpointPageIdHasBeenSet = true;
    m_productRestEndpointPageId = std::forward<ProductRestEndpointPageIdT>(value);
  }
  template <typename ProductRestEndpointPageIdT = Aws::String>
  ProductRestEndpointPageSummaryNoBody& WithProductRestEndpointPageId(ProductRestEndpointPageIdT&& value) {
    SetProductRestEndpointPageId(std::forward<ProductRestEndpointPageIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The REST endpoint identifier.</p>
   */
  inline const RestEndpointIdentifier& GetRestEndpointIdentifier() const { return m_restEndpointIdentifier; }
  inline bool RestEndpointIdentifierHasBeenSet() const { return m_restEndpointIdentifierHasBeenSet; }
  template <typename RestEndpointIdentifierT = RestEndpointIdentifier>
  void SetRestEndpointIdentifier(RestEndpointIdentifierT&& value) {
    m_restEndpointIdentifierHasBeenSet = true;
    m_restEndpointIdentifier = std::forward<RestEndpointIdentifierT>(value);
  }
  template <typename RestEndpointIdentifierT = RestEndpointIdentifier>
  ProductRestEndpointPageSummaryNoBody& WithRestEndpointIdentifier(RestEndpointIdentifierT&& value) {
    SetRestEndpointIdentifier(std::forward<RestEndpointIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status.</p>
   */
  inline Status GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(Status value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ProductRestEndpointPageSummaryNoBody& WithStatus(Status value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status exception information.</p>
   */
  inline const StatusException& GetStatusException() const { return m_statusException; }
  inline bool StatusExceptionHasBeenSet() const { return m_statusExceptionHasBeenSet; }
  template <typename StatusExceptionT = StatusException>
  void SetStatusException(StatusExceptionT&& value) {
    m_statusExceptionHasBeenSet = true;
    m_statusException = std::forward<StatusExceptionT>(value);
  }
  template <typename StatusExceptionT = StatusException>
  ProductRestEndpointPageSummaryNoBody& WithStatusException(StatusExceptionT&& value) {
    SetStatusException(std::forward<StatusExceptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The try it state of a product REST endpoint page.</p>
   */
  inline TryItState GetTryItState() const { return m_tryItState; }
  inline bool TryItStateHasBeenSet() const { return m_tryItStateHasBeenSet; }
  inline void SetTryItState(TryItState value) {
    m_tryItStateHasBeenSet = true;
    m_tryItState = value;
  }
  inline ProductRestEndpointPageSummaryNoBody& WithTryItState(TryItState value) {
    SetTryItState(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_endpoint;
  bool m_endpointHasBeenSet = false;

  Aws::Utils::DateTime m_lastModified{};
  bool m_lastModifiedHasBeenSet = false;

  Aws::String m_operationName;
  bool m_operationNameHasBeenSet = false;

  Aws::String m_productRestEndpointPageArn;
  bool m_productRestEndpointPageArnHasBeenSet = false;

  Aws::String m_productRestEndpointPageId;
  bool m_productRestEndpointPageIdHasBeenSet = false;

  RestEndpointIdentifier m_restEndpointIdentifier;
  bool m_restEndpointIdentifierHasBeenSet = false;

  Status m_status{Status::NOT_SET};
  bool m_statusHasBeenSet = false;

  StatusException m_statusException;
  bool m_statusExceptionHasBeenSet = false;

  TryItState m_tryItState{TryItState::NOT_SET};
  bool m_tryItStateHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApiGatewayV2
}  // namespace Aws
