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
    AWS_IAM_API GetServiceLastAccessedDetailsResult();
    AWS_IAM_API GetServiceLastAccessedDetailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_IAM_API GetServiceLastAccessedDetailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
    inline GetServiceLastAccessedDetailsResult& WithJobStatus(const JobStatusType& value) { SetJobStatus(value); return *this;}

    /**
     * <p>The status of the job.</p>
     */
    inline GetServiceLastAccessedDetailsResult& WithJobStatus(JobStatusType&& value) { SetJobStatus(std::move(value)); return *this;}


    /**
     * <p>The type of job. Service jobs return information about when each service was
     * last accessed. Action jobs also include information about when tracked actions
     * within the service were last accessed.</p>
     */
    inline const AccessAdvisorUsageGranularityType& GetJobType() const{ return m_jobType; }

    /**
     * <p>The type of job. Service jobs return information about when each service was
     * last accessed. Action jobs also include information about when tracked actions
     * within the service were last accessed.</p>
     */
    inline void SetJobType(const AccessAdvisorUsageGranularityType& value) { m_jobType = value; }

    /**
     * <p>The type of job. Service jobs return information about when each service was
     * last accessed. Action jobs also include information about when tracked actions
     * within the service were last accessed.</p>
     */
    inline void SetJobType(AccessAdvisorUsageGranularityType&& value) { m_jobType = std::move(value); }

    /**
     * <p>The type of job. Service jobs return information about when each service was
     * last accessed. Action jobs also include information about when tracked actions
     * within the service were last accessed.</p>
     */
    inline GetServiceLastAccessedDetailsResult& WithJobType(const AccessAdvisorUsageGranularityType& value) { SetJobType(value); return *this;}

    /**
     * <p>The type of job. Service jobs return information about when each service was
     * last accessed. Action jobs also include information about when tracked actions
     * within the service were last accessed.</p>
     */
    inline GetServiceLastAccessedDetailsResult& WithJobType(AccessAdvisorUsageGranularityType&& value) { SetJobType(std::move(value)); return *this;}


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
    inline GetServiceLastAccessedDetailsResult& WithJobCreationDate(const Aws::Utils::DateTime& value) { SetJobCreationDate(value); return *this;}

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the report job was created.</p>
     */
    inline GetServiceLastAccessedDetailsResult& WithJobCreationDate(Aws::Utils::DateTime&& value) { SetJobCreationDate(std::move(value)); return *this;}


    /**
     * <p> A <code>ServiceLastAccessed</code> object that contains details about the
     * most recent attempt to access the service.</p>
     */
    inline const Aws::Vector<ServiceLastAccessed>& GetServicesLastAccessed() const{ return m_servicesLastAccessed; }

    /**
     * <p> A <code>ServiceLastAccessed</code> object that contains details about the
     * most recent attempt to access the service.</p>
     */
    inline void SetServicesLastAccessed(const Aws::Vector<ServiceLastAccessed>& value) { m_servicesLastAccessed = value; }

    /**
     * <p> A <code>ServiceLastAccessed</code> object that contains details about the
     * most recent attempt to access the service.</p>
     */
    inline void SetServicesLastAccessed(Aws::Vector<ServiceLastAccessed>&& value) { m_servicesLastAccessed = std::move(value); }

    /**
     * <p> A <code>ServiceLastAccessed</code> object that contains details about the
     * most recent attempt to access the service.</p>
     */
    inline GetServiceLastAccessedDetailsResult& WithServicesLastAccessed(const Aws::Vector<ServiceLastAccessed>& value) { SetServicesLastAccessed(value); return *this;}

    /**
     * <p> A <code>ServiceLastAccessed</code> object that contains details about the
     * most recent attempt to access the service.</p>
     */
    inline GetServiceLastAccessedDetailsResult& WithServicesLastAccessed(Aws::Vector<ServiceLastAccessed>&& value) { SetServicesLastAccessed(std::move(value)); return *this;}

    /**
     * <p> A <code>ServiceLastAccessed</code> object that contains details about the
     * most recent attempt to access the service.</p>
     */
    inline GetServiceLastAccessedDetailsResult& AddServicesLastAccessed(const ServiceLastAccessed& value) { m_servicesLastAccessed.push_back(value); return *this; }

    /**
     * <p> A <code>ServiceLastAccessed</code> object that contains details about the
     * most recent attempt to access the service.</p>
     */
    inline GetServiceLastAccessedDetailsResult& AddServicesLastAccessed(ServiceLastAccessed&& value) { m_servicesLastAccessed.push_back(std::move(value)); return *this; }


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
    inline GetServiceLastAccessedDetailsResult& WithJobCompletionDate(const Aws::Utils::DateTime& value) { SetJobCompletionDate(value); return *this;}

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the generated report job was completed or failed.</p>
     * <p>This field is null if the job is still in progress, as indicated by a job
     * status value of <code>IN_PROGRESS</code>.</p>
     */
    inline GetServiceLastAccessedDetailsResult& WithJobCompletionDate(Aws::Utils::DateTime&& value) { SetJobCompletionDate(std::move(value)); return *this;}


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
    inline GetServiceLastAccessedDetailsResult& WithIsTruncated(bool value) { SetIsTruncated(value); return *this;}


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
    inline GetServiceLastAccessedDetailsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>When <code>IsTruncated</code> is <code>true</code>, this element is present
     * and contains the value to use for the <code>Marker</code> parameter in a
     * subsequent pagination request.</p>
     */
    inline GetServiceLastAccessedDetailsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>When <code>IsTruncated</code> is <code>true</code>, this element is present
     * and contains the value to use for the <code>Marker</code> parameter in a
     * subsequent pagination request.</p>
     */
    inline GetServiceLastAccessedDetailsResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>An object that contains details about the reason the operation failed.</p>
     */
    inline const ErrorDetails& GetError() const{ return m_error; }

    /**
     * <p>An object that contains details about the reason the operation failed.</p>
     */
    inline void SetError(const ErrorDetails& value) { m_error = value; }

    /**
     * <p>An object that contains details about the reason the operation failed.</p>
     */
    inline void SetError(ErrorDetails&& value) { m_error = std::move(value); }

    /**
     * <p>An object that contains details about the reason the operation failed.</p>
     */
    inline GetServiceLastAccessedDetailsResult& WithError(const ErrorDetails& value) { SetError(value); return *this;}

    /**
     * <p>An object that contains details about the reason the operation failed.</p>
     */
    inline GetServiceLastAccessedDetailsResult& WithError(ErrorDetails&& value) { SetError(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetServiceLastAccessedDetailsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetServiceLastAccessedDetailsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    JobStatusType m_jobStatus;

    AccessAdvisorUsageGranularityType m_jobType;

    Aws::Utils::DateTime m_jobCreationDate;

    Aws::Vector<ServiceLastAccessed> m_servicesLastAccessed;

    Aws::Utils::DateTime m_jobCompletionDate;

    bool m_isTruncated;

    Aws::String m_marker;

    ErrorDetails m_error;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
