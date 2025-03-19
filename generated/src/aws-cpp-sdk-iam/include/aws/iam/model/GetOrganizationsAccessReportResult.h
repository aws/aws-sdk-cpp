/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/model/JobStatusType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam/model/ErrorDetails.h>
#include <aws/iam/model/ResponseMetadata.h>
#include <aws/iam/model/AccessDetail.h>
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
  class GetOrganizationsAccessReportResult
  {
  public:
    AWS_IAM_API GetOrganizationsAccessReportResult() = default;
    AWS_IAM_API GetOrganizationsAccessReportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_IAM_API GetOrganizationsAccessReportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The status of the job.</p>
     */
    inline JobStatusType GetJobStatus() const { return m_jobStatus; }
    inline void SetJobStatus(JobStatusType value) { m_jobStatusHasBeenSet = true; m_jobStatus = value; }
    inline GetOrganizationsAccessReportResult& WithJobStatus(JobStatusType value) { SetJobStatus(value); return *this;}
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
    GetOrganizationsAccessReportResult& WithJobCreationDate(JobCreationDateT&& value) { SetJobCreationDate(std::forward<JobCreationDateT>(value)); return *this;}
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
    GetOrganizationsAccessReportResult& WithJobCompletionDate(JobCompletionDateT&& value) { SetJobCompletionDate(std::forward<JobCompletionDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of services that the applicable SCPs allow account principals to
     * access.</p>
     */
    inline int GetNumberOfServicesAccessible() const { return m_numberOfServicesAccessible; }
    inline void SetNumberOfServicesAccessible(int value) { m_numberOfServicesAccessibleHasBeenSet = true; m_numberOfServicesAccessible = value; }
    inline GetOrganizationsAccessReportResult& WithNumberOfServicesAccessible(int value) { SetNumberOfServicesAccessible(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of services that account principals are allowed but did not
     * attempt to access.</p>
     */
    inline int GetNumberOfServicesNotAccessed() const { return m_numberOfServicesNotAccessed; }
    inline void SetNumberOfServicesNotAccessed(int value) { m_numberOfServicesNotAccessedHasBeenSet = true; m_numberOfServicesNotAccessed = value; }
    inline GetOrganizationsAccessReportResult& WithNumberOfServicesNotAccessed(int value) { SetNumberOfServicesNotAccessed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains details about the most recent attempt to access the
     * service.</p>
     */
    inline const Aws::Vector<AccessDetail>& GetAccessDetails() const { return m_accessDetails; }
    template<typename AccessDetailsT = Aws::Vector<AccessDetail>>
    void SetAccessDetails(AccessDetailsT&& value) { m_accessDetailsHasBeenSet = true; m_accessDetails = std::forward<AccessDetailsT>(value); }
    template<typename AccessDetailsT = Aws::Vector<AccessDetail>>
    GetOrganizationsAccessReportResult& WithAccessDetails(AccessDetailsT&& value) { SetAccessDetails(std::forward<AccessDetailsT>(value)); return *this;}
    template<typename AccessDetailsT = AccessDetail>
    GetOrganizationsAccessReportResult& AddAccessDetails(AccessDetailsT&& value) { m_accessDetailsHasBeenSet = true; m_accessDetails.emplace_back(std::forward<AccessDetailsT>(value)); return *this; }
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
    inline GetOrganizationsAccessReportResult& WithIsTruncated(bool value) { SetIsTruncated(value); return *this;}
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
    GetOrganizationsAccessReportResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ErrorDetails& GetErrorDetails() const { return m_errorDetails; }
    template<typename ErrorDetailsT = ErrorDetails>
    void SetErrorDetails(ErrorDetailsT&& value) { m_errorDetailsHasBeenSet = true; m_errorDetails = std::forward<ErrorDetailsT>(value); }
    template<typename ErrorDetailsT = ErrorDetails>
    GetOrganizationsAccessReportResult& WithErrorDetails(ErrorDetailsT&& value) { SetErrorDetails(std::forward<ErrorDetailsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetOrganizationsAccessReportResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    JobStatusType m_jobStatus{JobStatusType::NOT_SET};
    bool m_jobStatusHasBeenSet = false;

    Aws::Utils::DateTime m_jobCreationDate{};
    bool m_jobCreationDateHasBeenSet = false;

    Aws::Utils::DateTime m_jobCompletionDate{};
    bool m_jobCompletionDateHasBeenSet = false;

    int m_numberOfServicesAccessible{0};
    bool m_numberOfServicesAccessibleHasBeenSet = false;

    int m_numberOfServicesNotAccessed{0};
    bool m_numberOfServicesNotAccessedHasBeenSet = false;

    Aws::Vector<AccessDetail> m_accessDetails;
    bool m_accessDetailsHasBeenSet = false;

    bool m_isTruncated{false};
    bool m_isTruncatedHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    ErrorDetails m_errorDetails;
    bool m_errorDetailsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
