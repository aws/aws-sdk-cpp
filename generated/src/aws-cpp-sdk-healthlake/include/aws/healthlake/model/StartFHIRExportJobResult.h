/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/healthlake/model/JobStatus.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace HealthLake
{
namespace Model
{
  class StartFHIRExportJobResult
  {
  public:
    AWS_HEALTHLAKE_API StartFHIRExportJobResult();
    AWS_HEALTHLAKE_API StartFHIRExportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_HEALTHLAKE_API StartFHIRExportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The AWS generated ID for an export job.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The AWS generated ID for an export job.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }

    /**
     * <p>The AWS generated ID for an export job.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }

    /**
     * <p>The AWS generated ID for an export job.</p>
     */
    inline void SetJobId(const char* value) { m_jobId.assign(value); }

    /**
     * <p>The AWS generated ID for an export job.</p>
     */
    inline StartFHIRExportJobResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The AWS generated ID for an export job.</p>
     */
    inline StartFHIRExportJobResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The AWS generated ID for an export job.</p>
     */
    inline StartFHIRExportJobResult& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The status of a FHIR export job. Possible statuses are SUBMITTED,
     * IN_PROGRESS, COMPLETED, or FAILED.</p>
     */
    inline const JobStatus& GetJobStatus() const{ return m_jobStatus; }

    /**
     * <p>The status of a FHIR export job. Possible statuses are SUBMITTED,
     * IN_PROGRESS, COMPLETED, or FAILED.</p>
     */
    inline void SetJobStatus(const JobStatus& value) { m_jobStatus = value; }

    /**
     * <p>The status of a FHIR export job. Possible statuses are SUBMITTED,
     * IN_PROGRESS, COMPLETED, or FAILED.</p>
     */
    inline void SetJobStatus(JobStatus&& value) { m_jobStatus = std::move(value); }

    /**
     * <p>The status of a FHIR export job. Possible statuses are SUBMITTED,
     * IN_PROGRESS, COMPLETED, or FAILED.</p>
     */
    inline StartFHIRExportJobResult& WithJobStatus(const JobStatus& value) { SetJobStatus(value); return *this;}

    /**
     * <p>The status of a FHIR export job. Possible statuses are SUBMITTED,
     * IN_PROGRESS, COMPLETED, or FAILED.</p>
     */
    inline StartFHIRExportJobResult& WithJobStatus(JobStatus&& value) { SetJobStatus(std::move(value)); return *this;}


    /**
     * <p>The AWS generated ID for the Data Store from which files are being exported
     * for an export job.</p>
     */
    inline const Aws::String& GetDatastoreId() const{ return m_datastoreId; }

    /**
     * <p>The AWS generated ID for the Data Store from which files are being exported
     * for an export job.</p>
     */
    inline void SetDatastoreId(const Aws::String& value) { m_datastoreId = value; }

    /**
     * <p>The AWS generated ID for the Data Store from which files are being exported
     * for an export job.</p>
     */
    inline void SetDatastoreId(Aws::String&& value) { m_datastoreId = std::move(value); }

    /**
     * <p>The AWS generated ID for the Data Store from which files are being exported
     * for an export job.</p>
     */
    inline void SetDatastoreId(const char* value) { m_datastoreId.assign(value); }

    /**
     * <p>The AWS generated ID for the Data Store from which files are being exported
     * for an export job.</p>
     */
    inline StartFHIRExportJobResult& WithDatastoreId(const Aws::String& value) { SetDatastoreId(value); return *this;}

    /**
     * <p>The AWS generated ID for the Data Store from which files are being exported
     * for an export job.</p>
     */
    inline StartFHIRExportJobResult& WithDatastoreId(Aws::String&& value) { SetDatastoreId(std::move(value)); return *this;}

    /**
     * <p>The AWS generated ID for the Data Store from which files are being exported
     * for an export job.</p>
     */
    inline StartFHIRExportJobResult& WithDatastoreId(const char* value) { SetDatastoreId(value); return *this;}

  private:

    Aws::String m_jobId;

    JobStatus m_jobStatus;

    Aws::String m_datastoreId;
  };

} // namespace Model
} // namespace HealthLake
} // namespace Aws
