/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/BulkOperationStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace DynamoDB {
namespace Model {
class CancelBulkOperationResult {
 public:
  AWS_DYNAMODB_API CancelBulkOperationResult() = default;
  AWS_DYNAMODB_API CancelBulkOperationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_DYNAMODB_API CancelBulkOperationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the bulk operation for which DynamoDB
   * accepted the cancellation request.</p>
   */
  inline const Aws::String& GetBulkOperationArn() const { return m_bulkOperationArn; }
  template <typename BulkOperationArnT = Aws::String>
  void SetBulkOperationArn(BulkOperationArnT&& value) {
    m_bulkOperationArnHasBeenSet = true;
    m_bulkOperationArn = std::forward<BulkOperationArnT>(value);
  }
  template <typename BulkOperationArnT = Aws::String>
  CancelBulkOperationResult& WithBulkOperationArn(BulkOperationArnT&& value) {
    SetBulkOperationArn(std::forward<BulkOperationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status returned after DynamoDB accepts the cancellation request. This
   * value is <code>CANCELLING</code>. Use <code>DescribeBulkOperation</code> to
   * determine when the operation reaches <code>CANCELLED</code>.</p>
   */
  inline BulkOperationStatus GetBulkOperationStatus() const { return m_bulkOperationStatus; }
  inline void SetBulkOperationStatus(BulkOperationStatus value) {
    m_bulkOperationStatusHasBeenSet = true;
    m_bulkOperationStatus = value;
  }
  inline CancelBulkOperationResult& WithBulkOperationStatus(BulkOperationStatus value) {
    SetBulkOperationStatus(value);
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
  CancelBulkOperationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_bulkOperationArn;

  BulkOperationStatus m_bulkOperationStatus{BulkOperationStatus::NOT_SET};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_bulkOperationArnHasBeenSet = false;
  bool m_bulkOperationStatusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws
