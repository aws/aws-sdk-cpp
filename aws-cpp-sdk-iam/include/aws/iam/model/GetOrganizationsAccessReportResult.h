/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_IAM_API GetOrganizationsAccessReportResult
  {
  public:
    GetOrganizationsAccessReportResult();
    GetOrganizationsAccessReportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetOrganizationsAccessReportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The status of the job.</p>
     */
    inline const JobStatusType& GetJobStatus() const{ return m_jobStatus; }

    /**
     * <p>The status of the job.</p>
     */
    inline void SetJobStatus(const JobStatusType& value) { m_jobStatus = value; }

    /**
     * <p>The status of the job.</p>
     */
    inline void SetJobStatus(JobStatusType&& value) { m_jobStatus = std::move(value); }

    /**
     * <p>The status of the job.</p>
     */
    inline GetOrganizationsAccessReportResult& WithJobStatus(const JobStatusType& value) { SetJobStatus(value); return *this;}

    /**
     * <p>The status of the job.</p>
     */
    inline GetOrganizationsAccessReportResult& WithJobStatus(JobStatusType&& value) { SetJobStatus(std::move(value)); return *this;}


    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the report job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetJobCreationDate() const{ return m_jobCreationDate; }

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the report job was created.</p>
     */
    inline void SetJobCreationDate(const Aws::Utils::DateTime& value) { m_jobCreationDate = value; }

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the report job was created.</p>
     */
    inline void SetJobCreationDate(Aws::Utils::DateTime&& value) { m_jobCreationDate = std::move(value); }

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the report job was created.</p>
     */
    inline GetOrganizationsAccessReportResult& WithJobCreationDate(const Aws::Utils::DateTime& value) { SetJobCreationDate(value); return *this;}

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the report job was created.</p>
     */
    inline GetOrganizationsAccessReportResult& WithJobCreationDate(Aws::Utils::DateTime&& value) { SetJobCreationDate(std::move(value)); return *this;}


    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the generated report job was completed or failed.</p>
     * <p>This field is null if the job is still in progress, as indicated by a job
     * status value of <code>IN_PROGRESS</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetJobCompletionDate() const{ return m_jobCompletionDate; }

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the generated report job was completed or failed.</p>
     * <p>This field is null if the job is still in progress, as indicated by a job
     * status value of <code>IN_PROGRESS</code>.</p>
     */
    inline void SetJobCompletionDate(const Aws::Utils::DateTime& value) { m_jobCompletionDate = value; }

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the generated report job was completed or failed.</p>
     * <p>This field is null if the job is still in progress, as indicated by a job
     * status value of <code>IN_PROGRESS</code>.</p>
     */
    inline void SetJobCompletionDate(Aws::Utils::DateTime&& value) { m_jobCompletionDate = std::move(value); }

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the generated report job was completed or failed.</p>
     * <p>This field is null if the job is still in progress, as indicated by a job
     * status value of <code>IN_PROGRESS</code>.</p>
     */
    inline GetOrganizationsAccessReportResult& WithJobCompletionDate(const Aws::Utils::DateTime& value) { SetJobCompletionDate(value); return *this;}

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the generated report job was completed or failed.</p>
     * <p>This field is null if the job is still in progress, as indicated by a job
     * status value of <code>IN_PROGRESS</code>.</p>
     */
    inline GetOrganizationsAccessReportResult& WithJobCompletionDate(Aws::Utils::DateTime&& value) { SetJobCompletionDate(std::move(value)); return *this;}


    /**
     * <p>The number of services that the applicable SCPs allow account principals to
     * access.</p>
     */
    inline int GetNumberOfServicesAccessible() const{ return m_numberOfServicesAccessible; }

    /**
     * <p>The number of services that the applicable SCPs allow account principals to
     * access.</p>
     */
    inline void SetNumberOfServicesAccessible(int value) { m_numberOfServicesAccessible = value; }

    /**
     * <p>The number of services that the applicable SCPs allow account principals to
     * access.</p>
     */
    inline GetOrganizationsAccessReportResult& WithNumberOfServicesAccessible(int value) { SetNumberOfServicesAccessible(value); return *this;}


    /**
     * <p>The number of services that account principals are allowed but did not
     * attempt to access.</p>
     */
    inline int GetNumberOfServicesNotAccessed() const{ return m_numberOfServicesNotAccessed; }

    /**
     * <p>The number of services that account principals are allowed but did not
     * attempt to access.</p>
     */
    inline void SetNumberOfServicesNotAccessed(int value) { m_numberOfServicesNotAccessed = value; }

    /**
     * <p>The number of services that account principals are allowed but did not
     * attempt to access.</p>
     */
    inline GetOrganizationsAccessReportResult& WithNumberOfServicesNotAccessed(int value) { SetNumberOfServicesNotAccessed(value); return *this;}


    /**
     * <p>An object that contains details about the most recent attempt to access the
     * service.</p>
     */
    inline const Aws::Vector<AccessDetail>& GetAccessDetails() const{ return m_accessDetails; }

    /**
     * <p>An object that contains details about the most recent attempt to access the
     * service.</p>
     */
    inline void SetAccessDetails(const Aws::Vector<AccessDetail>& value) { m_accessDetails = value; }

    /**
     * <p>An object that contains details about the most recent attempt to access the
     * service.</p>
     */
    inline void SetAccessDetails(Aws::Vector<AccessDetail>&& value) { m_accessDetails = std::move(value); }

    /**
     * <p>An object that contains details about the most recent attempt to access the
     * service.</p>
     */
    inline GetOrganizationsAccessReportResult& WithAccessDetails(const Aws::Vector<AccessDetail>& value) { SetAccessDetails(value); return *this;}

    /**
     * <p>An object that contains details about the most recent attempt to access the
     * service.</p>
     */
    inline GetOrganizationsAccessReportResult& WithAccessDetails(Aws::Vector<AccessDetail>&& value) { SetAccessDetails(std::move(value)); return *this;}

    /**
     * <p>An object that contains details about the most recent attempt to access the
     * service.</p>
     */
    inline GetOrganizationsAccessReportResult& AddAccessDetails(const AccessDetail& value) { m_accessDetails.push_back(value); return *this; }

    /**
     * <p>An object that contains details about the most recent attempt to access the
     * service.</p>
     */
    inline GetOrganizationsAccessReportResult& AddAccessDetails(AccessDetail&& value) { m_accessDetails.push_back(std::move(value)); return *this; }


    /**
     * <p>A flag that indicates whether there are more items to return. If your results
     * were truncated, you can make a subsequent pagination request using the
     * <code>Marker</code> request parameter to retrieve more items. Note that IAM
     * might return fewer than the <code>MaxItems</code> number of results even when
     * there are more results available. We recommend that you check
     * <code>IsTruncated</code> after every call to ensure that you receive all your
     * results.</p>
     */
    inline bool GetIsTruncated() const{ return m_isTruncated; }

    /**
     * <p>A flag that indicates whether there are more items to return. If your results
     * were truncated, you can make a subsequent pagination request using the
     * <code>Marker</code> request parameter to retrieve more items. Note that IAM
     * might return fewer than the <code>MaxItems</code> number of results even when
     * there are more results available. We recommend that you check
     * <code>IsTruncated</code> after every call to ensure that you receive all your
     * results.</p>
     */
    inline void SetIsTruncated(bool value) { m_isTruncated = value; }

    /**
     * <p>A flag that indicates whether there are more items to return. If your results
     * were truncated, you can make a subsequent pagination request using the
     * <code>Marker</code> request parameter to retrieve more items. Note that IAM
     * might return fewer than the <code>MaxItems</code> number of results even when
     * there are more results available. We recommend that you check
     * <code>IsTruncated</code> after every call to ensure that you receive all your
     * results.</p>
     */
    inline GetOrganizationsAccessReportResult& WithIsTruncated(bool value) { SetIsTruncated(value); return *this;}


    /**
     * <p>When <code>IsTruncated</code> is <code>true</code>, this element is present
     * and contains the value to use for the <code>Marker</code> parameter in a
     * subsequent pagination request.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>When <code>IsTruncated</code> is <code>true</code>, this element is present
     * and contains the value to use for the <code>Marker</code> parameter in a
     * subsequent pagination request.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>When <code>IsTruncated</code> is <code>true</code>, this element is present
     * and contains the value to use for the <code>Marker</code> parameter in a
     * subsequent pagination request.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>When <code>IsTruncated</code> is <code>true</code>, this element is present
     * and contains the value to use for the <code>Marker</code> parameter in a
     * subsequent pagination request.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>When <code>IsTruncated</code> is <code>true</code>, this element is present
     * and contains the value to use for the <code>Marker</code> parameter in a
     * subsequent pagination request.</p>
     */
    inline GetOrganizationsAccessReportResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>When <code>IsTruncated</code> is <code>true</code>, this element is present
     * and contains the value to use for the <code>Marker</code> parameter in a
     * subsequent pagination request.</p>
     */
    inline GetOrganizationsAccessReportResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>When <code>IsTruncated</code> is <code>true</code>, this element is present
     * and contains the value to use for the <code>Marker</code> parameter in a
     * subsequent pagination request.</p>
     */
    inline GetOrganizationsAccessReportResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    
    inline const ErrorDetails& GetErrorDetails() const{ return m_errorDetails; }

    
    inline void SetErrorDetails(const ErrorDetails& value) { m_errorDetails = value; }

    
    inline void SetErrorDetails(ErrorDetails&& value) { m_errorDetails = std::move(value); }

    
    inline GetOrganizationsAccessReportResult& WithErrorDetails(const ErrorDetails& value) { SetErrorDetails(value); return *this;}

    
    inline GetOrganizationsAccessReportResult& WithErrorDetails(ErrorDetails&& value) { SetErrorDetails(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetOrganizationsAccessReportResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetOrganizationsAccessReportResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    JobStatusType m_jobStatus;

    Aws::Utils::DateTime m_jobCreationDate;

    Aws::Utils::DateTime m_jobCompletionDate;

    int m_numberOfServicesAccessible;

    int m_numberOfServicesNotAccessed;

    Aws::Vector<AccessDetail> m_accessDetails;

    bool m_isTruncated;

    Aws::String m_marker;

    ErrorDetails m_errorDetails;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
