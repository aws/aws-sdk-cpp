/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/Document.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {
class ListDatasetExamplesResult {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API ListDatasetExamplesResult() = default;
  AWS_BEDROCKAGENTCORECONTROL_API ListDatasetExamplesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORECONTROL_API ListDatasetExamplesResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p> The Amazon Resource Name (ARN) of the dataset. </p>
   */
  inline const Aws::String& GetDatasetArn() const { return m_datasetArn; }
  template <typename DatasetArnT = Aws::String>
  void SetDatasetArn(DatasetArnT&& value) {
    m_datasetArnHasBeenSet = true;
    m_datasetArn = std::forward<DatasetArnT>(value);
  }
  template <typename DatasetArnT = Aws::String>
  ListDatasetExamplesResult& WithDatasetArn(DatasetArnT&& value) {
    SetDatasetArn(std::forward<DatasetArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The unique identifier of the dataset. </p>
   */
  inline const Aws::String& GetDatasetId() const { return m_datasetId; }
  template <typename DatasetIdT = Aws::String>
  void SetDatasetId(DatasetIdT&& value) {
    m_datasetIdHasBeenSet = true;
    m_datasetId = std::forward<DatasetIdT>(value);
  }
  template <typename DatasetIdT = Aws::String>
  ListDatasetExamplesResult& WithDatasetId(DatasetIdT&& value) {
    SetDatasetId(std::forward<DatasetIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The version returned. </p>
   */
  inline const Aws::String& GetDatasetVersion() const { return m_datasetVersion; }
  template <typename DatasetVersionT = Aws::String>
  void SetDatasetVersion(DatasetVersionT&& value) {
    m_datasetVersionHasBeenSet = true;
    m_datasetVersion = std::forward<DatasetVersionT>(value);
  }
  template <typename DatasetVersionT = Aws::String>
  ListDatasetExamplesResult& WithDatasetVersion(DatasetVersionT&& value) {
    SetDatasetVersion(std::forward<DatasetVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Paginated example content. Each element is a JSON object containing at least
   * an <code>exampleId</code> field plus the schema-specific content fields. </p>
   */
  inline const Aws::Vector<Aws::Utils::Document>& GetExamples() const { return m_examples; }
  template <typename ExamplesT = Aws::Vector<Aws::Utils::Document>>
  void SetExamples(ExamplesT&& value) {
    m_examplesHasBeenSet = true;
    m_examples = std::forward<ExamplesT>(value);
  }
  template <typename ExamplesT = Aws::Vector<Aws::Utils::Document>>
  ListDatasetExamplesResult& WithExamples(ExamplesT&& value) {
    SetExamples(std::forward<ExamplesT>(value));
    return *this;
  }
  template <typename ExamplesT = Aws::Utils::Document>
  ListDatasetExamplesResult& AddExamples(ExamplesT&& value) {
    m_examplesHasBeenSet = true;
    m_examples.emplace_back(std::forward<ExamplesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The token for the next page of results, or null if there are no more
   * results. </p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListDatasetExamplesResult& WithNextToken(NextTokenT&& value) {
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
  ListDatasetExamplesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_datasetArn;

  Aws::String m_datasetId;

  Aws::String m_datasetVersion;

  Aws::Vector<Aws::Utils::Document> m_examples;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_datasetArnHasBeenSet = false;
  bool m_datasetIdHasBeenSet = false;
  bool m_datasetVersionHasBeenSet = false;
  bool m_examplesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
