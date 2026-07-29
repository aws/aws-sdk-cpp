/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/FailedDataSegmentDisassociation.h>

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
class BatchDisassociateDataSegmentsFromDatasetResult {
 public:
  AWS_IOTSITEWISE_API BatchDisassociateDataSegmentsFromDatasetResult() = default;
  AWS_IOTSITEWISE_API BatchDisassociateDataSegmentsFromDatasetResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_IOTSITEWISE_API BatchDisassociateDataSegmentsFromDatasetResult& operator=(
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
  BatchDisassociateDataSegmentsFromDatasetResult& WithDatasetId(DatasetIdT&& value) {
    SetDatasetId(std::forward<DatasetIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the dataset after disassociation.</p>
   */
  inline const Aws::String& GetDatasetVersion() const { return m_datasetVersion; }
  template <typename DatasetVersionT = Aws::String>
  void SetDatasetVersion(DatasetVersionT&& value) {
    m_datasetVersionHasBeenSet = true;
    m_datasetVersion = std::forward<DatasetVersionT>(value);
  }
  template <typename DatasetVersionT = Aws::String>
  BatchDisassociateDataSegmentsFromDatasetResult& WithDatasetVersion(DatasetVersionT&& value) {
    SetDatasetVersion(std::forward<DatasetVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of data segment disassociations that failed.</p>
   */
  inline const Aws::Vector<FailedDataSegmentDisassociation>& GetFailedDisassociations() const { return m_failedDisassociations; }
  template <typename FailedDisassociationsT = Aws::Vector<FailedDataSegmentDisassociation>>
  void SetFailedDisassociations(FailedDisassociationsT&& value) {
    m_failedDisassociationsHasBeenSet = true;
    m_failedDisassociations = std::forward<FailedDisassociationsT>(value);
  }
  template <typename FailedDisassociationsT = Aws::Vector<FailedDataSegmentDisassociation>>
  BatchDisassociateDataSegmentsFromDatasetResult& WithFailedDisassociations(FailedDisassociationsT&& value) {
    SetFailedDisassociations(std::forward<FailedDisassociationsT>(value));
    return *this;
  }
  template <typename FailedDisassociationsT = FailedDataSegmentDisassociation>
  BatchDisassociateDataSegmentsFromDatasetResult& AddFailedDisassociations(FailedDisassociationsT&& value) {
    m_failedDisassociationsHasBeenSet = true;
    m_failedDisassociations.emplace_back(std::forward<FailedDisassociationsT>(value));
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
  BatchDisassociateDataSegmentsFromDatasetResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_datasetId;

  Aws::String m_datasetVersion;

  Aws::Vector<FailedDataSegmentDisassociation> m_failedDisassociations;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_datasetIdHasBeenSet = false;
  bool m_datasetVersionHasBeenSet = false;
  bool m_failedDisassociationsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
