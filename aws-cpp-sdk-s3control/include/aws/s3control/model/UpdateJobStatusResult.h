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
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3control/model/JobStatus.h>
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
namespace S3Control
{
namespace Model
{
  class AWS_S3CONTROL_API UpdateJobStatusResult
  {
  public:
    UpdateJobStatusResult();
    UpdateJobStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    UpdateJobStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The ID for the job whose status was updated.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The ID for the job whose status was updated.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }

    /**
     * <p>The ID for the job whose status was updated.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }

    /**
     * <p>The ID for the job whose status was updated.</p>
     */
    inline void SetJobId(const char* value) { m_jobId.assign(value); }

    /**
     * <p>The ID for the job whose status was updated.</p>
     */
    inline UpdateJobStatusResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The ID for the job whose status was updated.</p>
     */
    inline UpdateJobStatusResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The ID for the job whose status was updated.</p>
     */
    inline UpdateJobStatusResult& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The current status for the specified job.</p>
     */
    inline const JobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status for the specified job.</p>
     */
    inline void SetStatus(const JobStatus& value) { m_status = value; }

    /**
     * <p>The current status for the specified job.</p>
     */
    inline void SetStatus(JobStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The current status for the specified job.</p>
     */
    inline UpdateJobStatusResult& WithStatus(const JobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status for the specified job.</p>
     */
    inline UpdateJobStatusResult& WithStatus(JobStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The reason that the specified job's status was updated.</p>
     */
    inline const Aws::String& GetStatusUpdateReason() const{ return m_statusUpdateReason; }

    /**
     * <p>The reason that the specified job's status was updated.</p>
     */
    inline void SetStatusUpdateReason(const Aws::String& value) { m_statusUpdateReason = value; }

    /**
     * <p>The reason that the specified job's status was updated.</p>
     */
    inline void SetStatusUpdateReason(Aws::String&& value) { m_statusUpdateReason = std::move(value); }

    /**
     * <p>The reason that the specified job's status was updated.</p>
     */
    inline void SetStatusUpdateReason(const char* value) { m_statusUpdateReason.assign(value); }

    /**
     * <p>The reason that the specified job's status was updated.</p>
     */
    inline UpdateJobStatusResult& WithStatusUpdateReason(const Aws::String& value) { SetStatusUpdateReason(value); return *this;}

    /**
     * <p>The reason that the specified job's status was updated.</p>
     */
    inline UpdateJobStatusResult& WithStatusUpdateReason(Aws::String&& value) { SetStatusUpdateReason(std::move(value)); return *this;}

    /**
     * <p>The reason that the specified job's status was updated.</p>
     */
    inline UpdateJobStatusResult& WithStatusUpdateReason(const char* value) { SetStatusUpdateReason(value); return *this;}

  private:

    Aws::String m_jobId;

    JobStatus m_status;

    Aws::String m_statusUpdateReason;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
