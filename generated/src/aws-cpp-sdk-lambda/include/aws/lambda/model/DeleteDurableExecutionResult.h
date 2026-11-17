/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/Lambda_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Lambda {
namespace Model {
class DeleteDurableExecutionResult {
 public:
  AWS_LAMBDA_API DeleteDurableExecutionResult() = default;
  AWS_LAMBDA_API DeleteDurableExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_LAMBDA_API DeleteDurableExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The timestamp when Lambda accepted the deletion request (ISO 8601
   * format).</p>
   */
  inline const Aws::Utils::DateTime& GetDeletionRequestTimestamp() const { return m_deletionRequestTimestamp; }
  template <typename DeletionRequestTimestampT = Aws::Utils::DateTime>
  void SetDeletionRequestTimestamp(DeletionRequestTimestampT&& value) {
    m_deletionRequestTimestampHasBeenSet = true;
    m_deletionRequestTimestamp = std::forward<DeletionRequestTimestampT>(value);
  }
  template <typename DeletionRequestTimestampT = Aws::Utils::DateTime>
  DeleteDurableExecutionResult& WithDeletionRequestTimestamp(DeletionRequestTimestampT&& value) {
    SetDeletionRequestTimestamp(std::forward<DeletionRequestTimestampT>(value));
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
  DeleteDurableExecutionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Utils::DateTime m_deletionRequestTimestamp{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_deletionRequestTimestampHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
