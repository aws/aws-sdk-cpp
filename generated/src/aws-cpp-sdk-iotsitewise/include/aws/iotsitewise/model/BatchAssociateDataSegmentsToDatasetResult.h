/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/FailedDataSegmentAssociation.h>

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
class BatchAssociateDataSegmentsToDatasetResult {
 public:
  AWS_IOTSITEWISE_API BatchAssociateDataSegmentsToDatasetResult() = default;
  AWS_IOTSITEWISE_API BatchAssociateDataSegmentsToDatasetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_IOTSITEWISE_API BatchAssociateDataSegmentsToDatasetResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ID of the dataset.</p>
   */
  inline const Aws::String& GetDatasetId() const { return m_datasetId; }
  template <typename DatasetIdT = Aws::String>
  void SetDatasetId(DatasetIdT&& value) {
    m_datasetIdHasBeenSet = true;
    m_datasetId = std::forward<DatasetIdT>(value);
  }
  template <typename DatasetIdT = Aws::String>
  BatchAssociateDataSegmentsToDatasetResult& WithDatasetId(DatasetIdT&& value) {
    SetDatasetId(std::forward<DatasetIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the dataset after association.</p>
   */
  inline const Aws::String& GetDatasetVersion() const { return m_datasetVersion; }
  template <typename DatasetVersionT = Aws::String>
  void SetDatasetVersion(DatasetVersionT&& value) {
    m_datasetVersionHasBeenSet = true;
    m_datasetVersion = std::forward<DatasetVersionT>(value);
  }
  template <typename DatasetVersionT = Aws::String>
  BatchAssociateDataSegmentsToDatasetResult& WithDatasetVersion(DatasetVersionT&& value) {
    SetDatasetVersion(std::forward<DatasetVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of data segment associations that failed.</p>
   */
  inline const Aws::Vector<FailedDataSegmentAssociation>& GetFailedAssociations() const { return m_failedAssociations; }
  template <typename FailedAssociationsT = Aws::Vector<FailedDataSegmentAssociation>>
  void SetFailedAssociations(FailedAssociationsT&& value) {
    m_failedAssociationsHasBeenSet = true;
    m_failedAssociations = std::forward<FailedAssociationsT>(value);
  }
  template <typename FailedAssociationsT = Aws::Vector<FailedDataSegmentAssociation>>
  BatchAssociateDataSegmentsToDatasetResult& WithFailedAssociations(FailedAssociationsT&& value) {
    SetFailedAssociations(std::forward<FailedAssociationsT>(value));
    return *this;
  }
  template <typename FailedAssociationsT = FailedDataSegmentAssociation>
  BatchAssociateDataSegmentsToDatasetResult& AddFailedAssociations(FailedAssociationsT&& value) {
    m_failedAssociationsHasBeenSet = true;
    m_failedAssociations.emplace_back(std::forward<FailedAssociationsT>(value));
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
  BatchAssociateDataSegmentsToDatasetResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_datasetId;

  Aws::String m_datasetVersion;

  Aws::Vector<FailedDataSegmentAssociation> m_failedAssociations;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_datasetIdHasBeenSet = false;
  bool m_datasetVersionHasBeenSet = false;
  bool m_failedAssociationsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
