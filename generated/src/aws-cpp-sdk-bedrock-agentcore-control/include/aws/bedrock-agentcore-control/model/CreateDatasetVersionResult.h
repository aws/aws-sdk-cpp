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
class CreateDatasetVersionResult {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API CreateDatasetVersionResult() = default;
  AWS_BEDROCKAGENTCORECONTROL_API CreateDatasetVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORECONTROL_API CreateDatasetVersionResult& operator=(
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
  CreateDatasetVersionResult& WithDatasetArn(DatasetArnT&& value) {
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
  CreateDatasetVersionResult& WithDatasetId(DatasetIdT&& value) {
    SetDatasetId(std::forward<DatasetIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Always UPDATING immediately after this call. Poll GetDataset until status ==
   * ACTIVE (draftStatus=UNMODIFIED) or UPDATE_FAILED.</p>
   */
  inline DatasetStatus GetStatus() const { return m_status; }
  inline void SetStatus(DatasetStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CreateDatasetVersionResult& WithStatus(DatasetStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version being created.</p>
   */
  inline const Aws::String& GetDatasetVersion() const { return m_datasetVersion; }
  template <typename DatasetVersionT = Aws::String>
  void SetDatasetVersion(DatasetVersionT&& value) {
    m_datasetVersionHasBeenSet = true;
    m_datasetVersion = std::forward<DatasetVersionT>(value);
  }
  template <typename DatasetVersionT = Aws::String>
  CreateDatasetVersionResult& WithDatasetVersion(DatasetVersionT&& value) {
    SetDatasetVersion(std::forward<DatasetVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The timestamp when the version creation was initiated. </p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  CreateDatasetVersionResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
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
  CreateDatasetVersionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_datasetArn;

  Aws::String m_datasetId;

  DatasetStatus m_status{DatasetStatus::NOT_SET};

  Aws::String m_datasetVersion;

  Aws::Utils::DateTime m_createdAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_datasetArnHasBeenSet = false;
  bool m_datasetIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_datasetVersionHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
