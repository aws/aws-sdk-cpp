/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/model/JobStatusType.h>
#include <aws/iam/model/AccessAdvisorUsageGranularityType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam/model/ErrorDetails.h>
#include <aws/iam/model/ResponseMetadata.h>
#include <aws/iam/model/ServiceLastAccessed.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace IAM
{
namespace Model
{
  class GetServiceLastAccessedDetailsResult
  {
  public:
    AWS_IAM_API GetServiceLastAccessedDetailsResult() = default;
    AWS_IAM_API GetServiceLastAccessedDetailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_IAM_API GetServiceLastAccessedDetailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The status of the job.</p>
     */
    inline JobStatusType GetJobStatus() const { return m_jobStatus; }
    inline void SetJobStatus(JobStatusType value) { m_jobStatusHasBeenSet = true; m_jobStatus = value; }
    inline GetServiceLastAccessedDetailsResult& WithJobStatus(JobStatusType value) { SetJobStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of job. Service jobs return information about when each service was
     * last accessed. Action jobs also include information about when tracked actions
     * within the service were last accessed.</p>
     */
    inline AccessAdvisorUsageGranularityType GetJobType() const { return m_jobType; }
    inline void SetJobType(AccessAdvisorUsageGranularityType value) { m_jobTypeHasBeenSet = true; m_jobType = value; }
    inline GetServiceLastAccessedDetailsResult& WithJobType(AccessAdvisorUsageGranularityType value) { SetJobType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the report job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetJobCreationDate() const { return m_jobCreationDate; }
    template<typename JobCreationDateT = Aws::Utils::DateTime>
    void SetJobCreationDate(JobCreationDateT&& value) { m_jobCreationDateHasBeenSet = true; m_jobCreationDate = std::forward<JobCreationDateT>(value); }
    template<typename JobCreationDateT = Aws::Utils::DateTime>
    GetServiceLastAccessedDetailsResult& WithJobCreationDate(JobCreationDateT&& value) { SetJobCreationDate(std::forward<JobCreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A <code>ServiceLastAccessed</code> object that contains details about the
     * most recent attempt to access the service.</p>
     */
    inline const Aws::Vector<ServiceLastAccessed>& GetServicesLastAccessed() const { return m_servicesLastAccessed; }
    template<typename ServicesLastAccessedT = Aws::Vector<ServiceLastAccessed>>
    void SetServicesLastAccessed(ServicesLastAccessedT&& value) { m_servicesLastAccessedHasBeenSet = true; m_servicesLastAccessed = std::forward<ServicesLastAccessedT>(value); }
    template<typename ServicesLastAccessedT = Aws::Vector<ServiceLastAccessed>>
    GetServiceLastAccessedDetailsResult& WithServicesLastAccessed(ServicesLastAccessedT&& value) { SetServicesLastAccessed(std::forward<ServicesLastAccessedT>(value)); return *this;}
    template<typename ServicesLastAccessedT = ServiceLastAccessed>
    GetServiceLastAccessedDetailsResult& AddServicesLastAccessed(ServicesLastAccessedT&& value) { m_servicesLastAccessedHasBeenSet = true; m_servicesLastAccessed.emplace_back(std::forward<ServicesLastAccessedT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the generated report job was completed or failed.</p>
     * <p>This field is null if the job is still in progress, as indicated by a job
     * status value of <code>IN_PROGRESS</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetJobCompletionDate() const { return m_jobCompletionDate; }
    template<typename JobCompletionDateT = Aws::Utils::DateTime>
    void SetJobCompletionDate(JobCompletionDateT&& value) { m_jobCompletionDateHasBeenSet = true; m_jobCompletionDate = std::forward<JobCompletionDateT>(value); }
    template<typename JobCompletionDateT = Aws::Utils::DateTime>
    GetServiceLastAccessedDetailsResult& WithJobCompletionDate(JobCompletionDateT&& value) { SetJobCompletionDate(std::forward<JobCompletionDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag that indicates whether there are more items to return. If your results
     * were truncated, you can make a subsequent pagination request using the
     * <code>Marker</code> request parameter to retrieve more items. Note that IAM
     * might return fewer than the <code>MaxItems</code> number of results even when
     * there are more results available. We recommend that you check
     * <code>IsTruncated</code> after every call to ensure that you receive all your
     * results.</p>
     */
    inline bool GetIsTruncated() const { return m_isTruncated; }
    inline void SetIsTruncated(bool value) { m_isTruncatedHasBeenSet = true; m_isTruncated = value; }
    inline GetServiceLastAccessedDetailsResult& WithIsTruncated(bool value) { SetIsTruncated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When <code>IsTruncated</code> is <code>true</code>, this element is present
     * and contains the value to use for the <code>Marker</code> parameter in a
     * subsequent pagination request.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    GetServiceLastAccessedDetailsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains details about the reason the operation failed.</p>
     */
    inline const ErrorDetails& GetError() const { return m_error; }
    template<typename ErrorT = ErrorDetails>
    void SetError(ErrorT&& value) { m_errorHasBeenSet = true; m_error = std::forward<ErrorT>(value); }
    template<typename ErrorT = ErrorDetails>
    GetServiceLastAccessedDetailsResult& WithError(ErrorT&& value) { SetError(std::forward<ErrorT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetServiceLastAccessedDetailsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    JobStatusType m_jobStatus{JobStatusType::NOT_SET};
    bool m_jobStatusHasBeenSet = false;

    AccessAdvisorUsageGranularityType m_jobType{AccessAdvisorUsageGranularityType::NOT_SET};
    bool m_jobTypeHasBeenSet = false;

    Aws::Utils::DateTime m_jobCreationDate{};
    bool m_jobCreationDateHasBeenSet = false;

    Aws::Vector<ServiceLastAccessed> m_servicesLastAccessed;
    bool m_servicesLastAccessedHasBeenSet = false;

    Aws::Utils::DateTime m_jobCompletionDate{};
    bool m_jobCompletionDateHasBeenSet = false;

    bool m_isTruncated{false};
    bool m_isTruncatedHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    ErrorDetails m_error;
    bool m_errorHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
