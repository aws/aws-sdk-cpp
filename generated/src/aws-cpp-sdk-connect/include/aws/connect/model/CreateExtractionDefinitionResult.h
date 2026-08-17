/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
namespace Connect {
namespace Model {
class CreateExtractionDefinitionResult {
 public:
  AWS_CONNECT_API CreateExtractionDefinitionResult() = default;
  AWS_CONNECT_API CreateExtractionDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONNECT_API CreateExtractionDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the extraction definition.</p>
   */
  inline const Aws::String& GetExtractionDefinitionArn() const { return m_extractionDefinitionArn; }
  template <typename ExtractionDefinitionArnT = Aws::String>
  void SetExtractionDefinitionArn(ExtractionDefinitionArnT&& value) {
    m_extractionDefinitionArnHasBeenSet = true;
    m_extractionDefinitionArn = std::forward<ExtractionDefinitionArnT>(value);
  }
  template <typename ExtractionDefinitionArnT = Aws::String>
  CreateExtractionDefinitionResult& WithExtractionDefinitionArn(ExtractionDefinitionArnT&& value) {
    SetExtractionDefinitionArn(std::forward<ExtractionDefinitionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the extraction definition.</p>
   */
  inline const Aws::String& GetExtractionDefinitionId() const { return m_extractionDefinitionId; }
  template <typename ExtractionDefinitionIdT = Aws::String>
  void SetExtractionDefinitionId(ExtractionDefinitionIdT&& value) {
    m_extractionDefinitionIdHasBeenSet = true;
    m_extractionDefinitionId = std::forward<ExtractionDefinitionIdT>(value);
  }
  template <typename ExtractionDefinitionIdT = Aws::String>
  CreateExtractionDefinitionResult& WithExtractionDefinitionId(ExtractionDefinitionIdT&& value) {
    SetExtractionDefinitionId(std::forward<ExtractionDefinitionIdT>(value));
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
  CreateExtractionDefinitionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_extractionDefinitionArn;

  Aws::String m_extractionDefinitionId;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_extractionDefinitionArnHasBeenSet = false;
  bool m_extractionDefinitionIdHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
