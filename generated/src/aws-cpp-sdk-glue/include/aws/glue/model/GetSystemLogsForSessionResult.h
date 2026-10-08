/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Glue {
namespace Model {
class GetSystemLogsForSessionResult {
 public:
  AWS_GLUE_API GetSystemLogsForSessionResult() = default;
  AWS_GLUE_API GetSystemLogsForSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_GLUE_API GetSystemLogsForSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The URL to download the system logs for the session.</p>
   */
  inline const Aws::String& GetSystemLogsUrl() const { return m_systemLogsUrl; }
  template <typename SystemLogsUrlT = Aws::String>
  void SetSystemLogsUrl(SystemLogsUrlT&& value) {
    m_systemLogsUrlHasBeenSet = true;
    m_systemLogsUrl = std::forward<SystemLogsUrlT>(value);
  }
  template <typename SystemLogsUrlT = Aws::String>
  GetSystemLogsForSessionResult& WithSystemLogsUrl(SystemLogsUrlT&& value) {
    SetSystemLogsUrl(std::forward<SystemLogsUrlT>(value));
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
  GetSystemLogsForSessionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_systemLogsUrl;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_systemLogsUrlHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
