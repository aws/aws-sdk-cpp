/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/model/LookupTable.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace CloudWatchLogs {
namespace Model {
class DescribeLookupTablesResult {
 public:
  AWS_CLOUDWATCHLOGS_API DescribeLookupTablesResult() = default;
  AWS_CLOUDWATCHLOGS_API DescribeLookupTablesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CLOUDWATCHLOGS_API DescribeLookupTablesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>An array of structures, where each structure contains metadata about one
   * lookup table.</p>
   */
  inline const Aws::Vector<LookupTable>& GetLookupTables() const { return m_lookupTables; }
  template <typename LookupTablesT = Aws::Vector<LookupTable>>
  void SetLookupTables(LookupTablesT&& value) {
    m_lookupTablesHasBeenSet = true;
    m_lookupTables = std::forward<LookupTablesT>(value);
  }
  template <typename LookupTablesT = Aws::Vector<LookupTable>>
  DescribeLookupTablesResult& WithLookupTables(LookupTablesT&& value) {
    SetLookupTables(std::forward<LookupTablesT>(value));
    return *this;
  }
  template <typename LookupTablesT = LookupTable>
  DescribeLookupTablesResult& AddLookupTables(LookupTablesT&& value) {
    m_lookupTablesHasBeenSet = true;
    m_lookupTables.emplace_back(std::forward<LookupTablesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token to use when requesting the next set of items.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  DescribeLookupTablesResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
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
  DescribeLookupTablesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<LookupTable> m_lookupTables;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_lookupTablesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
