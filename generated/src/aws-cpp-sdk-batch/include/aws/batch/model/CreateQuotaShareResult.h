/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/http/HttpResponse.h>
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
namespace Batch {
namespace Model {
class CreateQuotaShareResult {
 public:
  AWS_BATCH_API CreateQuotaShareResult() = default;
  AWS_BATCH_API CreateQuotaShareResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BATCH_API CreateQuotaShareResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The name of the quota share.</p>
   */
  inline const Aws::String& GetQuotaShareName() const { return m_quotaShareName; }
  template <typename QuotaShareNameT = Aws::String>
  void SetQuotaShareName(QuotaShareNameT&& value) {
    m_quotaShareNameHasBeenSet = true;
    m_quotaShareName = std::forward<QuotaShareNameT>(value);
  }
  template <typename QuotaShareNameT = Aws::String>
  CreateQuotaShareResult& WithQuotaShareName(QuotaShareNameT&& value) {
    SetQuotaShareName(std::forward<QuotaShareNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the quota share.</p>
   */
  inline const Aws::String& GetQuotaShareArn() const { return m_quotaShareArn; }
  template <typename QuotaShareArnT = Aws::String>
  void SetQuotaShareArn(QuotaShareArnT&& value) {
    m_quotaShareArnHasBeenSet = true;
    m_quotaShareArn = std::forward<QuotaShareArnT>(value);
  }
  template <typename QuotaShareArnT = Aws::String>
  CreateQuotaShareResult& WithQuotaShareArn(QuotaShareArnT&& value) {
    SetQuotaShareArn(std::forward<QuotaShareArnT>(value));
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
  CreateQuotaShareResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_quotaShareName;

  Aws::String m_quotaShareArn;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_quotaShareNameHasBeenSet = false;
  bool m_quotaShareArnHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Batch
}  // namespace Aws
