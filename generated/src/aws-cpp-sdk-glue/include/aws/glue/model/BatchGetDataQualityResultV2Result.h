/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/DataQualityResultV2Item.h>

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
class BatchGetDataQualityResultV2Result {
 public:
  AWS_GLUE_API BatchGetDataQualityResultV2Result() = default;
  AWS_GLUE_API BatchGetDataQualityResultV2Result(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_GLUE_API BatchGetDataQualityResultV2Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of <code>DataQualityResultV2Item</code> objects representing the data
   * quality results.</p>
   */
  inline const Aws::Vector<DataQualityResultV2Item>& GetResults() const { return m_results; }
  template <typename ResultsT = Aws::Vector<DataQualityResultV2Item>>
  void SetResults(ResultsT&& value) {
    m_resultsHasBeenSet = true;
    m_results = std::forward<ResultsT>(value);
  }
  template <typename ResultsT = Aws::Vector<DataQualityResultV2Item>>
  BatchGetDataQualityResultV2Result& WithResults(ResultsT&& value) {
    SetResults(std::forward<ResultsT>(value));
    return *this;
  }
  template <typename ResultsT = DataQualityResultV2Item>
  BatchGetDataQualityResultV2Result& AddResults(ResultsT&& value) {
    m_resultsHasBeenSet = true;
    m_results.emplace_back(std::forward<ResultsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of result IDs for which results were not found.</p>
   */
  inline const Aws::Vector<Aws::String>& GetResultsNotFound() const { return m_resultsNotFound; }
  template <typename ResultsNotFoundT = Aws::Vector<Aws::String>>
  void SetResultsNotFound(ResultsNotFoundT&& value) {
    m_resultsNotFoundHasBeenSet = true;
    m_resultsNotFound = std::forward<ResultsNotFoundT>(value);
  }
  template <typename ResultsNotFoundT = Aws::Vector<Aws::String>>
  BatchGetDataQualityResultV2Result& WithResultsNotFound(ResultsNotFoundT&& value) {
    SetResultsNotFound(std::forward<ResultsNotFoundT>(value));
    return *this;
  }
  template <typename ResultsNotFoundT = Aws::String>
  BatchGetDataQualityResultV2Result& AddResultsNotFound(ResultsNotFoundT&& value) {
    m_resultsNotFoundHasBeenSet = true;
    m_resultsNotFound.emplace_back(std::forward<ResultsNotFoundT>(value));
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
  BatchGetDataQualityResultV2Result& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<DataQualityResultV2Item> m_results;

  Aws::Vector<Aws::String> m_resultsNotFound;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_resultsHasBeenSet = false;
  bool m_resultsNotFoundHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
