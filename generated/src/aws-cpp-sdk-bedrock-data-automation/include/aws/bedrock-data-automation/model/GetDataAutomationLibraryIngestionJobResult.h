/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/bedrock-data-automation/model/DataAutomationLibraryIngestionJob.h>
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
namespace BedrockDataAutomation {
namespace Model {
/**
 * <p>Get DataAutomationLibraryIngestionJob Response</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/GetDataAutomationLibraryIngestionJobResponse">AWS
 * API Reference</a></p>
 */
class GetDataAutomationLibraryIngestionJobResult {
 public:
  AWS_BEDROCKDATAAUTOMATION_API GetDataAutomationLibraryIngestionJobResult() = default;
  AWS_BEDROCKDATAAUTOMATION_API GetDataAutomationLibraryIngestionJobResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKDATAAUTOMATION_API GetDataAutomationLibraryIngestionJobResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Contains the information of a library ingestion job</p>
   */
  inline const DataAutomationLibraryIngestionJob& GetJob() const { return m_job; }
  template <typename JobT = DataAutomationLibraryIngestionJob>
  void SetJob(JobT&& value) {
    m_jobHasBeenSet = true;
    m_job = std::forward<JobT>(value);
  }
  template <typename JobT = DataAutomationLibraryIngestionJob>
  GetDataAutomationLibraryIngestionJobResult& WithJob(JobT&& value) {
    SetJob(std::forward<JobT>(value));
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
  GetDataAutomationLibraryIngestionJobResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  DataAutomationLibraryIngestionJob m_job;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_jobHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
