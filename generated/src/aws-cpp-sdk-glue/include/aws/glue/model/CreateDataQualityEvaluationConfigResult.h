/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/DataQualityEvaluationRunMode.h>

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
class CreateDataQualityEvaluationConfigResult {
 public:
  AWS_GLUE_API CreateDataQualityEvaluationConfigResult() = default;
  AWS_GLUE_API CreateDataQualityEvaluationConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_GLUE_API CreateDataQualityEvaluationConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The name of the data quality evaluation configuration.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateDataQualityEvaluationConfigResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The evaluation run mode of the configuration's results, which is
   * <code>EVALUATION_CONFIG</code>.</p>
   */
  inline DataQualityEvaluationRunMode GetEvaluationRunMode() const { return m_evaluationRunMode; }
  inline void SetEvaluationRunMode(DataQualityEvaluationRunMode value) {
    m_evaluationRunModeHasBeenSet = true;
    m_evaluationRunMode = value;
  }
  inline CreateDataQualityEvaluationConfigResult& WithEvaluationRunMode(DataQualityEvaluationRunMode value) {
    SetEvaluationRunMode(value);
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
  CreateDataQualityEvaluationConfigResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_name;

  DataQualityEvaluationRunMode m_evaluationRunMode{DataQualityEvaluationRunMode::NOT_SET};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_nameHasBeenSet = false;
  bool m_evaluationRunModeHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
