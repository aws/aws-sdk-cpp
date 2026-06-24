/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/DatasetStatus.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
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
class AddDatasetExamplesResult {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API AddDatasetExamplesResult() = default;
  AWS_BEDROCKAGENTCORECONTROL_API AddDatasetExamplesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORECONTROL_API AddDatasetExamplesResult& operator=(
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
  AddDatasetExamplesResult& WithDatasetArn(DatasetArnT&& value) {
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
  AddDatasetExamplesResult& WithDatasetId(DatasetIdT&& value) {
    SetDatasetId(std::forward<DatasetIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The current status of the dataset. </p>
   */
  inline DatasetStatus GetStatus() const { return m_status; }
  inline void SetStatus(DatasetStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline AddDatasetExamplesResult& WithStatus(DatasetStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The number of examples added. </p>
   */
  inline long long GetAddedCount() const { return m_addedCount; }
  inline void SetAddedCount(long long value) {
    m_addedCountHasBeenSet = true;
    m_addedCount = value;
  }
  inline AddDatasetExamplesResult& WithAddedCount(long long value) {
    SetAddedCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The timestamp when the examples were added. </p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  AddDatasetExamplesResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> IDs of all added examples (auto-generated UUIDs). </p>
   */
  inline const Aws::Vector<Aws::String>& GetExampleIds() const { return m_exampleIds; }
  template <typename ExampleIdsT = Aws::Vector<Aws::String>>
  void SetExampleIds(ExampleIdsT&& value) {
    m_exampleIdsHasBeenSet = true;
    m_exampleIds = std::forward<ExampleIdsT>(value);
  }
  template <typename ExampleIdsT = Aws::Vector<Aws::String>>
  AddDatasetExamplesResult& WithExampleIds(ExampleIdsT&& value) {
    SetExampleIds(std::forward<ExampleIdsT>(value));
    return *this;
  }
  template <typename ExampleIdsT = Aws::String>
  AddDatasetExamplesResult& AddExampleIds(ExampleIdsT&& value) {
    m_exampleIdsHasBeenSet = true;
    m_exampleIds.emplace_back(std::forward<ExampleIdsT>(value));
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
  AddDatasetExamplesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_datasetArn;

  Aws::String m_datasetId;

  DatasetStatus m_status{DatasetStatus::NOT_SET};

  long long m_addedCount{0};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::Vector<Aws::String> m_exampleIds;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_datasetArnHasBeenSet = false;
  bool m_datasetIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_addedCountHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_exampleIdsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
