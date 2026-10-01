/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/endusermessaging/EndUserMessaging_EXPORTS.h>
#include <aws/endusermessaging/model/JobResource.h>
#include <aws/endusermessaging/model/JobStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace EndUserMessaging {
namespace Model {
/**
 * <p>Information about an async job tracked by the service. GetJob returns the
 * full <code>Job</code>, which may grow detail-only fields that are not part of
 * the <code>JobSummary</code> list view.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/endusermessaging-2026-09-21/Job">AWS
 * API Reference</a></p>
 */
class GetJobResult {
 public:
  AWS_ENDUSERMESSAGING_API GetJobResult() = default;
  AWS_ENDUSERMESSAGING_API GetJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ENDUSERMESSAGING_API GetJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the asynchronous job. Use the GetJob operation to
   * check the status of the job and to retrieve its results.</p>
   */
  inline const Aws::String& GetJobId() const { return m_jobId; }
  template <typename JobIdT = Aws::String>
  void SetJobId(JobIdT&& value) {
    m_jobIdHasBeenSet = true;
    m_jobId = std::forward<JobIdT>(value);
  }
  template <typename JobIdT = Aws::String>
  GetJobResult& WithJobId(JobIdT&& value) {
    SetJobId(std::forward<JobIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current lifecycle status of the job.</p>
   */
  inline JobStatus GetStatus() const { return m_status; }
  inline void SetStatus(JobStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetJobResult& WithStatus(JobStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of mutating operation that created the job.</p>
   */
  inline const Aws::String& GetOperationType() const { return m_operationType; }
  template <typename OperationTypeT = Aws::String>
  void SetOperationType(OperationTypeT&& value) {
    m_operationTypeHasBeenSet = true;
    m_operationType = std::forward<OperationTypeT>(value);
  }
  template <typename OperationTypeT = Aws::String>
  GetJobResult& WithOperationType(OperationTypeT&& value) {
    SetOperationType(std::forward<OperationTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the resource was created, in Unix epoch time.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetJobResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the resource was last updated, in Unix epoch time.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  GetJobResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The brand profile that the job operates on. This value is absent for
   * operations that create a brand profile.</p>
   */
  inline const Aws::String& GetBrandProfileId() const { return m_brandProfileId; }
  template <typename BrandProfileIdT = Aws::String>
  void SetBrandProfileId(BrandProfileIdT&& value) {
    m_brandProfileIdHasBeenSet = true;
    m_brandProfileId = std::forward<BrandProfileIdT>(value);
  }
  template <typename BrandProfileIdT = Aws::String>
  GetJobResult& WithBrandProfileId(BrandProfileIdT&& value) {
    SetBrandProfileId(std::forward<BrandProfileIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A machine-readable code that identifies why the job failed. This value is
   * present only when the job status is FAILED.</p>
   */
  inline const Aws::String& GetErrorCode() const { return m_errorCode; }
  template <typename ErrorCodeT = Aws::String>
  void SetErrorCode(ErrorCodeT&& value) {
    m_errorCodeHasBeenSet = true;
    m_errorCode = std::forward<ErrorCodeT>(value);
  }
  template <typename ErrorCodeT = Aws::String>
  GetJobResult& WithErrorCode(ErrorCodeT&& value) {
    SetErrorCode(std::forward<ErrorCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A human-readable description of why the job failed. This value is present
   * only when the job status is FAILED.</p>
   */
  inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
  template <typename ErrorMessageT = Aws::String>
  void SetErrorMessage(ErrorMessageT&& value) {
    m_errorMessageHasBeenSet = true;
    m_errorMessage = std::forward<ErrorMessageT>(value);
  }
  template <typename ErrorMessageT = Aws::String>
  GetJobResult& WithErrorMessage(ErrorMessageT&& value) {
    SetErrorMessage(std::forward<ErrorMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resources that were created or updated by the job.</p>
   */
  inline const Aws::Vector<JobResource>& GetResources() const { return m_resources; }
  template <typename ResourcesT = Aws::Vector<JobResource>>
  void SetResources(ResourcesT&& value) {
    m_resourcesHasBeenSet = true;
    m_resources = std::forward<ResourcesT>(value);
  }
  template <typename ResourcesT = Aws::Vector<JobResource>>
  GetJobResult& WithResources(ResourcesT&& value) {
    SetResources(std::forward<ResourcesT>(value));
    return *this;
  }
  template <typename ResourcesT = JobResource>
  GetJobResult& AddResources(ResourcesT&& value) {
    m_resourcesHasBeenSet = true;
    m_resources.emplace_back(std::forward<ResourcesT>(value));
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
  GetJobResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_jobId;

  JobStatus m_status{JobStatus::NOT_SET};

  Aws::String m_operationType;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_brandProfileId;

  Aws::String m_errorCode;

  Aws::String m_errorMessage;

  Aws::Vector<JobResource> m_resources;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_jobIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_operationTypeHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_brandProfileIdHasBeenSet = false;
  bool m_errorCodeHasBeenSet = false;
  bool m_errorMessageHasBeenSet = false;
  bool m_resourcesHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace EndUserMessaging
}  // namespace Aws
