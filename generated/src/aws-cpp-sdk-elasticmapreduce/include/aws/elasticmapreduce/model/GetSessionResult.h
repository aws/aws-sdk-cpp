/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/Session.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace EMR {
namespace Model {
/**
 * <p>Output of the <code>GetSession</code> operation.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/GetSessionOutput">AWS
 * API Reference</a></p>
 */
class GetSessionResult {
 public:
  AWS_EMR_API GetSessionResult() = default;
  AWS_EMR_API GetSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_EMR_API GetSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The output displays information about the session.</p>
   */
  inline const Session& GetSession() const { return m_session; }
  template <typename SessionT = Session>
  void SetSession(SessionT&& value) {
    m_sessionHasBeenSet = true;
    m_session = std::forward<SessionT>(value);
  }
  template <typename SessionT = Session>
  GetSessionResult& WithSession(SessionT&& value) {
    SetSession(std::forward<SessionT>(value));
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
  GetSessionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Session m_session;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_sessionHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace EMR
}  // namespace Aws
