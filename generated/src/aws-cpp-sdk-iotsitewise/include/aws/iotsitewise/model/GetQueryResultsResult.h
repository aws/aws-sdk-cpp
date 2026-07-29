/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/Optional.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/ColumnInformation.h>

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
 * <p>Contains the response for the GetQueryResults operation.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/GetQueryResultsResponse">AWS
 * API Reference</a></p>
 */
class GetQueryResultsResult {
 public:
  AWS_IOTSITEWISE_API GetQueryResultsResult() = default;
  AWS_IOTSITEWISE_API GetQueryResultsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_IOTSITEWISE_API GetQueryResultsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of column metadata for the query results. Each entry contains the
   * column name and data type. Present when the query status is COMPLETED.</p>
   */
  inline const Aws::Vector<ColumnInformation>& GetColumnInfo() const { return m_columnInfo; }
  template <typename ColumnInfoT = Aws::Vector<ColumnInformation>>
  void SetColumnInfo(ColumnInfoT&& value) {
    m_columnInfoHasBeenSet = true;
    m_columnInfo = std::forward<ColumnInfoT>(value);
  }
  template <typename ColumnInfoT = Aws::Vector<ColumnInformation>>
  GetQueryResultsResult& WithColumnInfo(ColumnInfoT&& value) {
    SetColumnInfo(std::forward<ColumnInfoT>(value));
    return *this;
  }
  template <typename ColumnInfoT = ColumnInformation>
  GetQueryResultsResult& AddColumnInfo(ColumnInfoT&& value) {
    m_columnInfoHasBeenSet = true;
    m_columnInfo.emplace_back(std::forward<ColumnInfoT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The result rows. Each row is a list of string column values, positional to
   * match the columnInfo order. Present when the query status is COMPLETED.</p>
   */
  inline const Aws::Vector<Aws::Vector<Aws::Crt::Optional<Aws::String>>>& GetRows() const { return m_rows; }
  template <typename RowsT = Aws::Vector<Aws::Vector<Aws::Crt::Optional<Aws::String>>>>
  void SetRows(RowsT&& value) {
    m_rowsHasBeenSet = true;
    m_rows = std::forward<RowsT>(value);
  }
  template <typename RowsT = Aws::Vector<Aws::Vector<Aws::Crt::Optional<Aws::String>>>>
  GetQueryResultsResult& WithRows(RowsT&& value) {
    SetRows(std::forward<RowsT>(value));
    return *this;
  }
  template <typename RowsT = Aws::Vector<Aws::Crt::Optional<Aws::String>>>
  GetQueryResultsResult& AddRows(RowsT&& value) {
    m_rowsHasBeenSet = true;
    m_rows.emplace_back(std::forward<RowsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token for the next set of results, or null if there are no additional
   * results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  GetQueryResultsResult& WithNextToken(NextTokenT&& value) {
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
  GetQueryResultsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<ColumnInformation> m_columnInfo;

  Aws::Vector<Aws::Vector<Aws::Crt::Optional<Aws::String>>> m_rows;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_columnInfoHasBeenSet = false;
  bool m_rowsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
