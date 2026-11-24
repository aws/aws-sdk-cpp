/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/apiportal/model/ApiId.h>
#include <aws/apiportal/model/ProductApiPageStatusException.h>
#include <aws/apiportal/model/Status.h>
#include <aws/apiportal/model/TryItState.h>
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
namespace APIPortal {
namespace Model {

/**
 * <p>A summary of an API page, without its body.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/ProductApiPageSummaryNoBody">AWS
 * API Reference</a></p>
 */
class ProductApiPageSummaryNoBody {
 public:
  AWS_APIPORTAL_API ProductApiPageSummaryNoBody() = default;
  AWS_APIPORTAL_API ProductApiPageSummaryNoBody(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIPORTAL_API ProductApiPageSummaryNoBody& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIPORTAL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the API page.</p>
   */
  inline const Aws::String& GetProductApiPageId() const { return m_productApiPageId; }
  inline bool ProductApiPageIdHasBeenSet() const { return m_productApiPageIdHasBeenSet; }
  template <typename ProductApiPageIdT = Aws::String>
  void SetProductApiPageId(ProductApiPageIdT&& value) {
    m_productApiPageIdHasBeenSet = true;
    m_productApiPageId = std::forward<ProductApiPageIdT>(value);
  }
  template <typename ProductApiPageIdT = Aws::String>
  ProductApiPageSummaryNoBody& WithProductApiPageId(ProductApiPageIdT&& value) {
    SetProductApiPageId(std::forward<ProductApiPageIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the API page.</p>
   */
  inline const Aws::String& GetProductApiPageArn() const { return m_productApiPageArn; }
  inline bool ProductApiPageArnHasBeenSet() const { return m_productApiPageArnHasBeenSet; }
  template <typename ProductApiPageArnT = Aws::String>
  void SetProductApiPageArn(ProductApiPageArnT&& value) {
    m_productApiPageArnHasBeenSet = true;
    m_productApiPageArn = std::forward<ProductApiPageArnT>(value);
  }
  template <typename ProductApiPageArnT = Aws::String>
  ProductApiPageSummaryNoBody& WithProductApiPageArn(ProductApiPageArnT&& value) {
    SetProductApiPageArn(std::forward<ProductApiPageArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The API the page documents.</p>
   */
  inline const ApiId& GetApiId() const { return m_apiId; }
  inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }
  template <typename ApiIdT = ApiId>
  void SetApiId(ApiIdT&& value) {
    m_apiIdHasBeenSet = true;
    m_apiId = std::forward<ApiIdT>(value);
  }
  template <typename ApiIdT = ApiId>
  ProductApiPageSummaryNoBody& WithApiId(ApiIdT&& value) {
    SetApiId(std::forward<ApiIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The operation name shown as the page title.</p>
   */
  inline const Aws::String& GetOperationName() const { return m_operationName; }
  inline bool OperationNameHasBeenSet() const { return m_operationNameHasBeenSet; }
  template <typename OperationNameT = Aws::String>
  void SetOperationName(OperationNameT&& value) {
    m_operationNameHasBeenSet = true;
    m_operationName = std::forward<OperationNameT>(value);
  }
  template <typename OperationNameT = Aws::String>
  ProductApiPageSummaryNoBody& WithOperationName(OperationNameT&& value) {
    SetOperationName(std::forward<OperationNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The invoke URL shown on the page and used by Try-It.</p>
   */
  inline const Aws::String& GetApiUrl() const { return m_apiUrl; }
  inline bool ApiUrlHasBeenSet() const { return m_apiUrlHasBeenSet; }
  template <typename ApiUrlT = Aws::String>
  void SetApiUrl(ApiUrlT&& value) {
    m_apiUrlHasBeenSet = true;
    m_apiUrl = std::forward<ApiUrlT>(value);
  }
  template <typename ApiUrlT = Aws::String>
  ProductApiPageSummaryNoBody& WithApiUrl(ApiUrlT&& value) {
    SetApiUrl(std::forward<ApiUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether Try-It is enabled on the page.</p>
   */
  inline TryItState GetTryItState() const { return m_tryItState; }
  inline bool TryItStateHasBeenSet() const { return m_tryItStateHasBeenSet; }
  inline void SetTryItState(TryItState value) {
    m_tryItStateHasBeenSet = true;
    m_tryItState = value;
  }
  inline ProductApiPageSummaryNoBody& WithTryItState(TryItState value) {
    SetTryItState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When the resource was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  ProductApiPageSummaryNoBody& WithUpdatedAt(UpdatedAtT&& value) {
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
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(Status value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ProductApiPageSummaryNoBody& WithStatus(Status value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{

  inline const ProductApiPageStatusException& GetStatusException() const { return m_statusException; }
  inline bool StatusExceptionHasBeenSet() const { return m_statusExceptionHasBeenSet; }
  template <typename StatusExceptionT = ProductApiPageStatusException>
  void SetStatusException(StatusExceptionT&& value) {
    m_statusExceptionHasBeenSet = true;
    m_statusException = std::forward<StatusExceptionT>(value);
  }
  template <typename StatusExceptionT = ProductApiPageStatusException>
  ProductApiPageSummaryNoBody& WithStatusException(StatusExceptionT&& value) {
    SetStatusException(std::forward<StatusExceptionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_productApiPageId;

  Aws::String m_productApiPageArn;

  ApiId m_apiId;

  Aws::String m_operationName;

  Aws::String m_apiUrl;

  TryItState m_tryItState{TryItState::NOT_SET};

  Aws::Utils::DateTime m_updatedAt{};

  Status m_status{Status::NOT_SET};

  ProductApiPageStatusException m_statusException;
  bool m_productApiPageIdHasBeenSet = false;
  bool m_productApiPageArnHasBeenSet = false;
  bool m_apiIdHasBeenSet = false;
  bool m_operationNameHasBeenSet = false;
  bool m_apiUrlHasBeenSet = false;
  bool m_tryItStateHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_statusExceptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
