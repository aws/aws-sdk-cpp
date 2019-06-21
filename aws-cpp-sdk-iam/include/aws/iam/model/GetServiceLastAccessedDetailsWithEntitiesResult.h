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
#include <aws/iam/model/EntityDetails.h>
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
  class AWS_IAM_API GetServiceLastAccessedDetailsWithEntitiesResult
  {
  public:
    GetServiceLastAccessedDetailsWithEntitiesResult();
    GetServiceLastAccessedDetailsWithEntitiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetServiceLastAccessedDetailsWithEntitiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
    inline GetServiceLastAccessedDetailsWithEntitiesResult& WithJobStatus(const JobStatusType& value) { SetJobStatus(value); return *this;}

    /**
     * <p>The status of the job.</p>
     */
    inline GetServiceLastAccessedDetailsWithEntitiesResult& WithJobStatus(JobStatusType&& value) { SetJobStatus(std::move(value)); return *this;}


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
    inline GetServiceLastAccessedDetailsWithEntitiesResult& WithJobCreationDate(const Aws::Utils::DateTime& value) { SetJobCreationDate(value); return *this;}

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the report job was created.</p>
     */
    inline GetServiceLastAccessedDetailsWithEntitiesResult& WithJobCreationDate(Aws::Utils::DateTime&& value) { SetJobCreationDate(std::move(value)); return *this;}


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
    inline GetServiceLastAccessedDetailsWithEntitiesResult& WithJobCompletionDate(const Aws::Utils::DateTime& value) { SetJobCompletionDate(value); return *this;}

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the generated report job was completed or failed.</p>
     * <p>This field is null if the job is still in progress, as indicated by a job
     * status value of <code>IN_PROGRESS</code>.</p>
     */
    inline GetServiceLastAccessedDetailsWithEntitiesResult& WithJobCompletionDate(Aws::Utils::DateTime&& value) { SetJobCompletionDate(std::move(value)); return *this;}


    /**
     * <p>An <code>EntityDetailsList</code> object that contains details about when an
     * IAM entity (user or role) used group or policy permissions in an attempt to
     * access the specified AWS service.</p>
     */
    inline const Aws::Vector<EntityDetails>& GetEntityDetailsList() const{ return m_entityDetailsList; }

    /**
     * <p>An <code>EntityDetailsList</code> object that contains details about when an
     * IAM entity (user or role) used group or policy permissions in an attempt to
     * access the specified AWS service.</p>
     */
    inline void SetEntityDetailsList(const Aws::Vector<EntityDetails>& value) { m_entityDetailsList = value; }

    /**
     * <p>An <code>EntityDetailsList</code> object that contains details about when an
     * IAM entity (user or role) used group or policy permissions in an attempt to
     * access the specified AWS service.</p>
     */
    inline void SetEntityDetailsList(Aws::Vector<EntityDetails>&& value) { m_entityDetailsList = std::move(value); }

    /**
     * <p>An <code>EntityDetailsList</code> object that contains details about when an
     * IAM entity (user or role) used group or policy permissions in an attempt to
     * access the specified AWS service.</p>
     */
    inline GetServiceLastAccessedDetailsWithEntitiesResult& WithEntityDetailsList(const Aws::Vector<EntityDetails>& value) { SetEntityDetailsList(value); return *this;}

    /**
     * <p>An <code>EntityDetailsList</code> object that contains details about when an
     * IAM entity (user or role) used group or policy permissions in an attempt to
     * access the specified AWS service.</p>
     */
    inline GetServiceLastAccessedDetailsWithEntitiesResult& WithEntityDetailsList(Aws::Vector<EntityDetails>&& value) { SetEntityDetailsList(std::move(value)); return *this;}

    /**
     * <p>An <code>EntityDetailsList</code> object that contains details about when an
     * IAM entity (user or role) used group or policy permissions in an attempt to
     * access the specified AWS service.</p>
     */
    inline GetServiceLastAccessedDetailsWithEntitiesResult& AddEntityDetailsList(const EntityDetails& value) { m_entityDetailsList.push_back(value); return *this; }

    /**
     * <p>An <code>EntityDetailsList</code> object that contains details about when an
     * IAM entity (user or role) used group or policy permissions in an attempt to
     * access the specified AWS service.</p>
     */
    inline GetServiceLastAccessedDetailsWithEntitiesResult& AddEntityDetailsList(EntityDetails&& value) { m_entityDetailsList.push_back(std::move(value)); return *this; }


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
    inline GetServiceLastAccessedDetailsWithEntitiesResult& WithIsTruncated(bool value) { SetIsTruncated(value); return *this;}


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
    inline GetServiceLastAccessedDetailsWithEntitiesResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>When <code>IsTruncated</code> is <code>true</code>, this element is present
     * and contains the value to use for the <code>Marker</code> parameter in a
     * subsequent pagination request.</p>
     */
    inline GetServiceLastAccessedDetailsWithEntitiesResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>When <code>IsTruncated</code> is <code>true</code>, this element is present
     * and contains the value to use for the <code>Marker</code> parameter in a
     * subsequent pagination request.</p>
     */
    inline GetServiceLastAccessedDetailsWithEntitiesResult& WithMarker(const char* value) { SetMarker(value); return *this;}


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
    inline GetServiceLastAccessedDetailsWithEntitiesResult& WithError(const ErrorDetails& value) { SetError(value); return *this;}

    /**
     * <p>An object that contains details about the reason the operation failed.</p>
     */
    inline GetServiceLastAccessedDetailsWithEntitiesResult& WithError(ErrorDetails&& value) { SetError(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetServiceLastAccessedDetailsWithEntitiesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetServiceLastAccessedDetailsWithEntitiesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    JobStatusType m_jobStatus;

    Aws::Utils::DateTime m_jobCreationDate;

    Aws::Utils::DateTime m_jobCompletionDate;

    Aws::Vector<EntityDetails> m_entityDetailsList;

    bool m_isTruncated;

    Aws::String m_marker;

    ErrorDetails m_error;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
