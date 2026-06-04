/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/SessionEndpoint.h>

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
class GetSessionEndpointResult {
 public:
  AWS_GLUE_API GetSessionEndpointResult() = default;
  AWS_GLUE_API GetSessionEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_GLUE_API GetSessionEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Spark Connect endpoint details for the session.</p>
   */
  inline const SessionEndpoint& GetSparkConnect() const { return m_sparkConnect; }
  template <typename SparkConnectT = SessionEndpoint>
  void SetSparkConnect(SparkConnectT&& value) {
    m_sparkConnectHasBeenSet = true;
    m_sparkConnect = std::forward<SparkConnectT>(value);
  }
  template <typename SparkConnectT = SessionEndpoint>
  GetSessionEndpointResult& WithSparkConnect(SparkConnectT&& value) {
    SetSparkConnect(std::forward<SparkConnectT>(value));
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
  GetSessionEndpointResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  SessionEndpoint m_sparkConnect;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_sparkConnectHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
