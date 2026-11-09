/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/DataQualityEvaluationConfigListDetails.h>

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
class ListDataQualityEvaluationConfigsResult {
 public:
  AWS_GLUE_API ListDataQualityEvaluationConfigsResult() = default;
  AWS_GLUE_API ListDataQualityEvaluationConfigsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_GLUE_API ListDataQualityEvaluationConfigsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of <code>DataQualityEvaluationConfigListDetails</code> objects.</p>
   */
  inline const Aws::Vector<DataQualityEvaluationConfigListDetails>& GetDataQualityEvaluationConfigs() const {
    return m_dataQualityEvaluationConfigs;
  }
  template <typename DataQualityEvaluationConfigsT = Aws::Vector<DataQualityEvaluationConfigListDetails>>
  void SetDataQualityEvaluationConfigs(DataQualityEvaluationConfigsT&& value) {
    m_dataQualityEvaluationConfigsHasBeenSet = true;
    m_dataQualityEvaluationConfigs = std::forward<DataQualityEvaluationConfigsT>(value);
  }
  template <typename DataQualityEvaluationConfigsT = Aws::Vector<DataQualityEvaluationConfigListDetails>>
  ListDataQualityEvaluationConfigsResult& WithDataQualityEvaluationConfigs(DataQualityEvaluationConfigsT&& value) {
    SetDataQualityEvaluationConfigs(std::forward<DataQualityEvaluationConfigsT>(value));
    return *this;
  }
  template <typename DataQualityEvaluationConfigsT = DataQualityEvaluationConfigListDetails>
  ListDataQualityEvaluationConfigsResult& AddDataQualityEvaluationConfigs(DataQualityEvaluationConfigsT&& value) {
    m_dataQualityEvaluationConfigsHasBeenSet = true;
    m_dataQualityEvaluationConfigs.emplace_back(std::forward<DataQualityEvaluationConfigsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A pagination token, if more results are available.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListDataQualityEvaluationConfigsResult& WithNextToken(NextTokenT&& value) {
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
  ListDataQualityEvaluationConfigsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<DataQualityEvaluationConfigListDetails> m_dataQualityEvaluationConfigs;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_dataQualityEvaluationConfigsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
