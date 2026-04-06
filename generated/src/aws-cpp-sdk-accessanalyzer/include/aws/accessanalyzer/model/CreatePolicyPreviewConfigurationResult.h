/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/model/PolicyPreviewStatus.h>
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
namespace AccessAnalyzer {
namespace Model {
class CreatePolicyPreviewConfigurationResult {
 public:
  AWS_ACCESSANALYZER_API CreatePolicyPreviewConfigurationResult() = default;
  AWS_ACCESSANALYZER_API CreatePolicyPreviewConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ACCESSANALYZER_API CreatePolicyPreviewConfigurationResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The status of the policy preview configuration after creation. The status is
   * <code>PENDING_CREATION</code> until the configuration is fully provisioned and
   * becomes <code>ACTIVE</code>. If provisioning fails, the status is
   * <code>FAILED</code>.</p>
   */
  inline PolicyPreviewStatus GetStatus() const { return m_status; }
  inline void SetStatus(PolicyPreviewStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CreatePolicyPreviewConfigurationResult& WithStatus(PolicyPreviewStatus value) {
    SetStatus(value);
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
  CreatePolicyPreviewConfigurationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  PolicyPreviewStatus m_status{PolicyPreviewStatus::NOT_SET};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_statusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace AccessAnalyzer
}  // namespace Aws
