/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/PopulateIntermediateTableAnalysisType.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace CleanRooms {
namespace Model {
class PopulateIntermediateTableResult {
 public:
  AWS_CLEANROOMS_API PopulateIntermediateTableResult() = default;
  AWS_CLEANROOMS_API PopulateIntermediateTableResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CLEANROOMS_API PopulateIntermediateTableResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The identifier for the protected query execution. Use this value with
   * <code>GetProtectedQuery</code> to track the population progress.</p>
   */
  inline const Aws::String& GetAnalysisId() const { return m_analysisId; }
  template <typename AnalysisIdT = Aws::String>
  void SetAnalysisId(AnalysisIdT&& value) {
    m_analysisIdHasBeenSet = true;
    m_analysisId = std::forward<AnalysisIdT>(value);
  }
  template <typename AnalysisIdT = Aws::String>
  PopulateIntermediateTableResult& WithAnalysisId(AnalysisIdT&& value) {
    SetAnalysisId(std::forward<AnalysisIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of analysis performed to populate the intermediate table.</p>
   */
  inline PopulateIntermediateTableAnalysisType GetAnalysisType() const { return m_analysisType; }
  inline void SetAnalysisType(PopulateIntermediateTableAnalysisType value) {
    m_analysisTypeHasBeenSet = true;
    m_analysisType = value;
  }
  inline PopulateIntermediateTableResult& WithAnalysisType(PopulateIntermediateTableAnalysisType value) {
    SetAnalysisType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the version created by this population
   * operation.</p>
   */
  inline const Aws::String& GetVersionId() const { return m_versionId; }
  template <typename VersionIdT = Aws::String>
  void SetVersionId(VersionIdT&& value) {
    m_versionIdHasBeenSet = true;
    m_versionId = std::forward<VersionIdT>(value);
  }
  template <typename VersionIdT = Aws::String>
  PopulateIntermediateTableResult& WithVersionId(VersionIdT&& value) {
    SetVersionId(std::forward<VersionIdT>(value));
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
  PopulateIntermediateTableResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_analysisId;

  PopulateIntermediateTableAnalysisType m_analysisType{PopulateIntermediateTableAnalysisType::NOT_SET};

  Aws::String m_versionId;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_analysisIdHasBeenSet = false;
  bool m_analysisTypeHasBeenSet = false;
  bool m_versionIdHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
