/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/QueryStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace IoTSiteWise {
namespace Model {
/**
 * <p>Contains the response for the CancelQuery operation.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/CancelQueryResponse">AWS
 * API Reference</a></p>
 */
class CancelQueryResult {
 public:
  AWS_IOTSITEWISE_API CancelQueryResult() = default;
  AWS_IOTSITEWISE_API CancelQueryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_IOTSITEWISE_API CancelQueryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier for the cancelled query.</p>
   */
  inline const Aws::String& GetQueryId() const { return m_queryId; }
  template <typename QueryIdT = Aws::String>
  void SetQueryId(QueryIdT&& value) {
    m_queryIdHasBeenSet = true;
    m_queryId = std::forward<QueryIdT>(value);
  }
  template <typename QueryIdT = Aws::String>
  CancelQueryResult& WithQueryId(QueryIdT&& value) {
    SetQueryId(std::forward<QueryIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current query status.</p>
   */
  inline QueryStatus GetStatus() const { return m_status; }
  inline void SetStatus(QueryStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CancelQueryResult& WithStatus(QueryStatus value) {
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
  CancelQueryResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_queryId;

  QueryStatus m_status{QueryStatus::NOT_SET};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_queryIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
