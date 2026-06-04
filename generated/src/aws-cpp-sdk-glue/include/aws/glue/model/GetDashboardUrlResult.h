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
class GetDashboardUrlResult {
 public:
  AWS_GLUE_API GetDashboardUrlResult() = default;
  AWS_GLUE_API GetDashboardUrlResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_GLUE_API GetDashboardUrlResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The URL for the Spark monitoring dashboard.</p>
   */
  inline const Aws::String& GetUrl() const { return m_url; }
  template <typename UrlT = Aws::String>
  void SetUrl(UrlT&& value) {
    m_urlHasBeenSet = true;
    m_url = std::forward<UrlT>(value);
  }
  template <typename UrlT = Aws::String>
  GetDashboardUrlResult& WithUrl(UrlT&& value) {
    SetUrl(std::forward<UrlT>(value));
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
  GetDashboardUrlResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_url;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_urlHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
