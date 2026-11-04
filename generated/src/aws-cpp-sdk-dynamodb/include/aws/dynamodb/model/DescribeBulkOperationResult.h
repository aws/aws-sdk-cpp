/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/BulkOperationDescription.h>

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
class DescribeBulkOperationResult {
 public:
  AWS_DYNAMODB_API DescribeBulkOperationResult() = default;
  AWS_DYNAMODB_API DescribeBulkOperationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_DYNAMODB_API DescribeBulkOperationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Contains detailed information about the bulk operation.</p>
   */
  inline const BulkOperationDescription& GetBulkOperationDescription() const { return m_bulkOperationDescription; }
  template <typename BulkOperationDescriptionT = BulkOperationDescription>
  void SetBulkOperationDescription(BulkOperationDescriptionT&& value) {
    m_bulkOperationDescriptionHasBeenSet = true;
    m_bulkOperationDescription = std::forward<BulkOperationDescriptionT>(value);
  }
  template <typename BulkOperationDescriptionT = BulkOperationDescription>
  DescribeBulkOperationResult& WithBulkOperationDescription(BulkOperationDescriptionT&& value) {
    SetBulkOperationDescription(std::forward<BulkOperationDescriptionT>(value));
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
  DescribeBulkOperationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  BulkOperationDescription m_bulkOperationDescription;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_bulkOperationDescriptionHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws
